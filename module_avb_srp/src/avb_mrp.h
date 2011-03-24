
#ifndef _avb_mrp_h_
#define _avb_mrp_h_
#include "avb_control_types.h"
#ifdef __mrp_conf_h_exist__
#include "mrp_conf.h"
#endif

#ifndef MRP_MAX_ATTRS
#define MRP_MAX_ATTRS 20
#endif

#define MRP_FULL_PARTICIPANT 1


typedef enum {
  MRP_UNUSED,
  MRP_DISABLED,  
  MRP_VO, // Very anxious Observer
  MRP_VP, // Very anxious Passive
  MRP_VN, // Very anxious New
  MRP_AN, // Anxious New
  MRP_AA, // Anxious Active
  MRP_QA, // Quiet Active
  MRP_LA, // Leaving Active
  MRP_AO, // Anxious Observer
  MRP_QO, // Quiet Observer
  MRP_AP, // Anxious Passive
  MRP_QP, // Quiet Passive
#ifdef MRP_FULL_PARTICIPANT
  MRP_LO, // Leaving Observer
#endif
} mrp_applicant_state;

typedef enum {
  MRP_IN,
  MRP_LV,
  MRP_MT
} mrp_registrar_state;

typedef enum {
  MRP_EVENT_BEGIN,
  MRP_EVENT_NEW,
  MRP_EVENT_FLUSH,
  MRP_EVENT_JOIN,
  MRP_EVENT_LV,
  MRP_EVENT_RECEIVE_NEW,
  MRP_EVENT_RECEIVE_JOININ,
  MRP_EVENT_RECEIVE_IN,
  MRP_EVENT_RECEIVE_JOINMT,
  MRP_EVENT_RECEIVE_MT,
  MRP_EVENT_RECEIVE_LEAVE,
  MRP_EVENT_RECEIVE_LEAVE_ALL,
  MRP_EVENT_REDECLARE,
  MRP_EVENT_PERIODIC,
  MRP_EVENT_TX,
#ifdef MRP_FULL_PARTICIPANT
  MRP_EVENT_TX_LEAVE_ALL,
  MRP_EVENT_TX_LEAVE_ALL_FULL,
  MRP_EVENT_LEAVETIMER
#endif
} mrp_event;


typedef enum {
  MSRP_TALKER_ADVERTISE,
  MSRP_TALKER_FAILED,
  MSRP_LISTENER,
  MSRP_DOMAIN_VECTOR,
  MMRP_MAC_VECTOR,
  MVRP_VID_VECTOR,
  MRP_NUM_ATTRIBUTE_TYPES
} mrp_attribute_type;

#define FIRST_VALUE_LENGTHS \
  { sizeof(srp_talker_first_value),             \
    sizeof(srp_talker_failed_first_value),\
    sizeof(srp_listener_first_value),\
    sizeof(srp_domain_first_value),\
    sizeof(mmrp_first_value),\
    sizeof(mvrp_first_value)\
  }






typedef enum {
  MRP_ATTRIBUTE_EVENT_NEW = 0,
  MRP_ATTRIBUTE_EVENT_JOININ = 1,
  MRP_ATTRIBUTE_EVENT_IN = 2,
  MRP_ATTRIBUTE_EVENT_JOINMT = 3,
  MRP_ATTRIBUTE_EVENT_MT = 4,
  MRP_ATTRIBUTE_EVENT_LV = 5
} mrp_attribute_event;


#ifndef __XC__

typedef struct mrp_timer {
  unsigned int timeout;
  unsigned int period;
  int active;
  int timeout_multiplier;
} mrp_timer;

typedef struct mrp_attribute_state {
  unsigned char attribute_type;
  unsigned char applicant_state;

#ifdef MRP_FULL_PARTICIPANT
  unsigned char registrar_state;
  mrp_timer leaveTimer;
#endif

  struct mrp_attribute_state *next;
  void *attribute_info;
} mrp_attribute_state;



#define MRP_JOINTIMER_PERIOD_CENTISECONDS 20

#define MRP_LEAVETIMER_PERIOD_CENTISECONDS 80

#define MRP_LEAVEALL_TIMER_PERIOD_CENTISECONDS 1000
#define MRP_LEAVEALL_TIMER_MULTIPLIER 100

#define MRP_PERIODIC_TIMER_PERIOD_CENTISECONDS 100
#define MRP_PERIODIC_TIMER_MULTIPLIER 10

/* Function: mrp_init

   This function initializes the MRP state machines. It just 
   needs to be called once at the start of the program.
*/      
void mrp_init(char macaddr[]);

/* Function: mrp_attribute_init

   This function initializes the state of an MRP attribute. Currently
   only MSRP attributes are supported.

   Parameters:

         st   - the attribute state structure to intialize
         t    - the type of the attribute
         info - a void * pointer that will be associated with the attribute.
                This pointer is passed on to attribute specific functions 
                (e.g. functions to send particulars PDUs)

   See also:

         mrp_update_state
*/
void mrp_attribute_init(mrp_attribute_state *st,
                        mrp_attribute_type t,
                        void *info);



void mrp_mad_init(mrp_attribute_state *st);
void mrp_mad_new(mrp_attribute_state *st);

/* Function: mrp_mad_join

   This function registers a MAD_Join request for a particular attribute

   Parameters:
   
         st - the attribute to join
   
*/

void mrp_mad_new(mrp_attribute_state *st);

void mrp_mad_join(mrp_attribute_state *st);

/* Function: mrp_mad_leave

   This function registers a MAD_Leave request for a particular attribute

   Parameters:
   
         st - The attribute to leave
   
*/
void mrp_mad_leave(mrp_attribute_state *st);

/* Function: mrp_periodic

   This function performs periodic MRP processing. It must be called 
   approximately 4 times a second.

   See also:
   
       mrp_init
       mrp_attribute_periodic
 */
void mrp_periodic();

int mrp_is_observer(mrp_attribute_state *st);


void mrp_encode_three_packed_event(char *buf,
                                   int event,
                                   mrp_attribute_type attr);

void mrp_encode_four_packed_event(char *buf,
                                  int event,
                                  mrp_attribute_type attr);

mrp_attribute_state *mrp_get_attr(void);
#endif

avb_status_t avb_mrp_process_packet(unsigned int buf[], int len);

void avb_mrp_set_legacy_mode(int mode);
#endif  //_avb_mrp_h_
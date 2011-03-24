// Autogenerated OSC data
#include "osc_types.h"
#define __OSC_IMPL
#include "osc_tree.h"
#include <stdlib.h>
char osc_name_media[6] = "media";
char osc_name_outs[5] = "outs";
char osc_name_state[6] = "state";
char osc_name_ptp[4] = "ptp";
char osc_name_serial[7] = "serial";
char osc_name_hash[2] = "#";
char osc_name_rateratio[10] = "rateratio";
char osc_name_rate[5] = "rate";
char osc_name_identity[9] = "identity";
char osc_name_out[4] = "out";
char osc_name_vlan[5] = "vlan";
char osc_name_reports[8] = "reports";
char osc_name_presentation[13] = "presentation";
char osc_name_vendor_id[10] = "vendor_id";
char osc_name_sync[5] = "sync";
char osc_name_dest[5] = "dest";
char osc_name_system[7] = "system";
char osc_name_id[3] = "id";
char osc_name_gm[3] = "gm";
char osc_name_media_clock[12] = "media_clock";
char osc_name_in[3] = "in";
char osc_name_format[7] = "format";
char osc_name_accepts[8] = "accepts";
char osc_name_device[7] = "device";
char osc_name_ports[6] = "ports";
char osc_name_name[5] = "name";
char osc_name_sink[5] = "sink";
char osc_name_pdelay[7] = "pdelay";
char osc_name_vendor[7] = "vendor";
char osc_name_version[8] = "version";
char osc_name_source[7] = "source";
char osc_name_osc[4] = "osc";
char osc_name_addr[5] = "addr";
char osc_name_media_clocks[13] = "media_clocks";
char osc_name_channels[9] = "channels";
char osc_name_sinks[6] = "sinks";
char osc_name_sources[8] = "sources";
char osc_name_map[4] = "map";
char osc_name_product[8] = "product";
char osc_name_port[5] = "port";
char osc_name_ins[4] = "ins";
char osc_name_avb[4] = "avb";
char osc_name_type[5] = "type";


osc_node osc_node_osc = {
   OSC_NODE_OSC,
   osc_name_osc,
   NULL,
   &osc_node_osc_type,
   NULL,
   {}
};

osc_node osc_node_osc_version = {
   OSC_NODE_OSC_VERSION,
   osc_name_version,
   &osc_node_osc,
   NULL,
   NULL,
   {OSC_STRING}
};

osc_node osc_node_osc_type = {
   OSC_NODE_OSC_TYPE,
   osc_name_type,
   &osc_node_osc,
   &osc_node_osc_type_accepts,
   &osc_node_osc_version,
   {}
};

osc_node osc_node_osc_type_reports = {
   OSC_NODE_OSC_TYPE_REPORTS,
   osc_name_reports,
   &osc_node_osc_type,
   NULL,
   NULL,
   {OSC_STRING}
};

osc_node osc_node_osc_type_accepts = {
   OSC_NODE_OSC_TYPE_ACCEPTS,
   osc_name_accepts,
   &osc_node_osc_type,
   NULL,
   &osc_node_osc_type_reports,
   {OSC_STRING}
};

osc_node osc_node_avb = {
   OSC_NODE_AVB,
   osc_name_avb,
   NULL,
   &osc_node_avb_sink,
   &osc_node_osc,
   {}
};

osc_node osc_node_avb_source = {
   OSC_NODE_AVB_SOURCE,
   osc_name_source,
   &osc_node_avb,
   &osc_node_avb_source_hash,
   NULL,
   {}
};

osc_node osc_node_avb_source_hash = {
   OSC_NODE_AVB_SOURCE_HASH,
   osc_name_hash,
   &osc_node_avb_source,
   &osc_node_avb_source_hash_state,
   NULL,
   {}
};

osc_node osc_node_avb_source_hash_presentation = {
   OSC_NODE_AVB_SOURCE_HASH_PRESENTATION,
   osc_name_presentation,
   &osc_node_avb_source_hash,
   NULL,
   NULL,
   {OSC_WORD}
};

osc_node osc_node_avb_source_hash_map = {
   OSC_NODE_AVB_SOURCE_HASH_MAP,
   osc_name_map,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_presentation,
   {OSC_WORD_ARRAY}
};

osc_node osc_node_avb_source_hash_dest = {
   OSC_NODE_AVB_SOURCE_HASH_DEST,
   osc_name_dest,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_map,
   {OSC_BYTE_ARRAY}
};

osc_node osc_node_avb_source_hash_format = {
   OSC_NODE_AVB_SOURCE_HASH_FORMAT,
   osc_name_format,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_dest,
   {OSC_WORD,OSC_WORD}
};

osc_node osc_node_avb_source_hash_channels = {
   OSC_NODE_AVB_SOURCE_HASH_CHANNELS,
   osc_name_channels,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_format,
   {OSC_WORD}
};

osc_node osc_node_avb_source_hash_sync = {
   OSC_NODE_AVB_SOURCE_HASH_SYNC,
   osc_name_sync,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_channels,
   {OSC_WORD}
};

osc_node osc_node_avb_source_hash_name = {
   OSC_NODE_AVB_SOURCE_HASH_NAME,
   osc_name_name,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_sync,
   {OSC_STRING}
};

osc_node osc_node_avb_source_hash_id = {
   OSC_NODE_AVB_SOURCE_HASH_ID,
   osc_name_id,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_name,
   {OSC_LONGWORD}
};

osc_node osc_node_avb_source_hash_vlan = {
   OSC_NODE_AVB_SOURCE_HASH_VLAN,
   osc_name_vlan,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_id,
   {OSC_WORD}
};

osc_node osc_node_avb_source_hash_state = {
   OSC_NODE_AVB_SOURCE_HASH_STATE,
   osc_name_state,
   &osc_node_avb_source_hash,
   NULL,
   &osc_node_avb_source_hash_vlan,
   {OSC_WORD}
};

osc_node osc_node_avb_sources = {
   OSC_NODE_AVB_SOURCES,
   osc_name_sources,
   &osc_node_avb,
   NULL,
   &osc_node_avb_source,
   {OSC_WORD}
};

osc_node osc_node_avb_sinks = {
   OSC_NODE_AVB_SINKS,
   osc_name_sinks,
   &osc_node_avb,
   NULL,
   &osc_node_avb_sources,
   {OSC_WORD}
};

osc_node osc_node_avb_ptp = {
   OSC_NODE_AVB_PTP,
   osc_name_ptp,
   &osc_node_avb,
   &osc_node_avb_ptp_port,
   &osc_node_avb_sinks,
   {}
};

osc_node osc_node_avb_ptp_gm = {
   OSC_NODE_AVB_PTP_GM,
   osc_name_gm,
   &osc_node_avb_ptp,
   NULL,
   NULL,
   {OSC_BYTE_ARRAY}
};

osc_node osc_node_avb_ptp_ports = {
   OSC_NODE_AVB_PTP_PORTS,
   osc_name_ports,
   &osc_node_avb_ptp,
   NULL,
   &osc_node_avb_ptp_gm,
   {OSC_WORD}
};

osc_node osc_node_avb_ptp_rateratio = {
   OSC_NODE_AVB_PTP_RATERATIO,
   osc_name_rateratio,
   &osc_node_avb_ptp,
   NULL,
   &osc_node_avb_ptp_ports,
   {OSC_WORD}
};

osc_node osc_node_avb_ptp_port = {
   OSC_NODE_AVB_PTP_PORT,
   osc_name_port,
   &osc_node_avb_ptp,
   &osc_node_avb_ptp_port_hash,
   &osc_node_avb_ptp_rateratio,
   {}
};

osc_node osc_node_avb_ptp_port_hash = {
   OSC_NODE_AVB_PTP_PORT_HASH,
   osc_name_hash,
   &osc_node_avb_ptp_port,
   &osc_node_avb_ptp_port_hash_pdelay,
   NULL,
   {}
};

osc_node osc_node_avb_ptp_port_hash_pdelay = {
   OSC_NODE_AVB_PTP_PORT_HASH_PDELAY,
   osc_name_pdelay,
   &osc_node_avb_ptp_port_hash,
   NULL,
   NULL,
   {OSC_WORD}
};

osc_node osc_node_avb_sink = {
   OSC_NODE_AVB_SINK,
   osc_name_sink,
   &osc_node_avb,
   &osc_node_avb_sink_hash,
   &osc_node_avb_ptp,
   {}
};

osc_node osc_node_avb_sink_hash = {
   OSC_NODE_AVB_SINK_HASH,
   osc_name_hash,
   &osc_node_avb_sink,
   &osc_node_avb_sink_hash_addr,
   NULL,
   {}
};

osc_node osc_node_avb_sink_hash_channels = {
   OSC_NODE_AVB_SINK_HASH_CHANNELS,
   osc_name_channels,
   &osc_node_avb_sink_hash,
   NULL,
   NULL,
   {OSC_WORD}
};

osc_node osc_node_avb_sink_hash_sync = {
   OSC_NODE_AVB_SINK_HASH_SYNC,
   osc_name_sync,
   &osc_node_avb_sink_hash,
   NULL,
   &osc_node_avb_sink_hash_channels,
   {OSC_WORD}
};

osc_node osc_node_avb_sink_hash_name = {
   OSC_NODE_AVB_SINK_HASH_NAME,
   osc_name_name,
   &osc_node_avb_sink_hash,
   NULL,
   &osc_node_avb_sink_hash_sync,
   {OSC_STRING}
};

osc_node osc_node_avb_sink_hash_vlan = {
   OSC_NODE_AVB_SINK_HASH_VLAN,
   osc_name_vlan,
   &osc_node_avb_sink_hash,
   NULL,
   &osc_node_avb_sink_hash_name,
   {OSC_WORD}
};

osc_node osc_node_avb_sink_hash_state = {
   OSC_NODE_AVB_SINK_HASH_STATE,
   osc_name_state,
   &osc_node_avb_sink_hash,
   NULL,
   &osc_node_avb_sink_hash_vlan,
   {OSC_WORD}
};

osc_node osc_node_avb_sink_hash_map = {
   OSC_NODE_AVB_SINK_HASH_MAP,
   osc_name_map,
   &osc_node_avb_sink_hash,
   NULL,
   &osc_node_avb_sink_hash_state,
   {OSC_WORD_ARRAY}
};

osc_node osc_node_avb_sink_hash_id = {
   OSC_NODE_AVB_SINK_HASH_ID,
   osc_name_id,
   &osc_node_avb_sink_hash,
   NULL,
   &osc_node_avb_sink_hash_map,
   {OSC_LONGWORD}
};

osc_node osc_node_avb_sink_hash_addr = {
   OSC_NODE_AVB_SINK_HASH_ADDR,
   osc_name_addr,
   &osc_node_avb_sink_hash,
   NULL,
   &osc_node_avb_sink_hash_id,
   {OSC_BYTE_ARRAY}
};

osc_node osc_node_media = {
   OSC_NODE_MEDIA,
   osc_name_media,
   NULL,
   &osc_node_media_in,
   &osc_node_avb,
   {}
};

osc_node osc_node_media_out = {
   OSC_NODE_MEDIA_OUT,
   osc_name_out,
   &osc_node_media,
   &osc_node_media_out_hash,
   NULL,
   {}
};

osc_node osc_node_media_out_hash = {
   OSC_NODE_MEDIA_OUT_HASH,
   osc_name_hash,
   &osc_node_media_out,
   &osc_node_media_out_hash_type,
   NULL,
   {}
};

osc_node osc_node_media_out_hash_name = {
   OSC_NODE_MEDIA_OUT_HASH_NAME,
   osc_name_name,
   &osc_node_media_out_hash,
   NULL,
   NULL,
   {OSC_STRING}
};

osc_node osc_node_media_out_hash_type = {
   OSC_NODE_MEDIA_OUT_HASH_TYPE,
   osc_name_type,
   &osc_node_media_out_hash,
   NULL,
   &osc_node_media_out_hash_name,
   {OSC_STRING}
};

osc_node osc_node_media_outs = {
   OSC_NODE_MEDIA_OUTS,
   osc_name_outs,
   &osc_node_media,
   NULL,
   &osc_node_media_out,
   {OSC_WORD}
};

osc_node osc_node_media_ins = {
   OSC_NODE_MEDIA_INS,
   osc_name_ins,
   &osc_node_media,
   NULL,
   &osc_node_media_outs,
   {OSC_WORD}
};

osc_node osc_node_media_in = {
   OSC_NODE_MEDIA_IN,
   osc_name_in,
   &osc_node_media,
   &osc_node_media_in_hash,
   &osc_node_media_ins,
   {}
};

osc_node osc_node_media_in_hash = {
   OSC_NODE_MEDIA_IN_HASH,
   osc_name_hash,
   &osc_node_media_in,
   &osc_node_media_in_hash_type,
   NULL,
   {}
};

osc_node osc_node_media_in_hash_name = {
   OSC_NODE_MEDIA_IN_HASH_NAME,
   osc_name_name,
   &osc_node_media_in_hash,
   NULL,
   NULL,
   {OSC_STRING}
};

osc_node osc_node_media_in_hash_type = {
   OSC_NODE_MEDIA_IN_HASH_TYPE,
   osc_name_type,
   &osc_node_media_in_hash,
   NULL,
   &osc_node_media_in_hash_name,
   {OSC_STRING}
};

osc_node osc_node_device = {
   OSC_NODE_DEVICE,
   osc_name_device,
   NULL,
   &osc_node_device_media_clocks,
   &osc_node_media,
   {}
};

osc_node osc_node_device_media_clock = {
   OSC_NODE_DEVICE_MEDIA_CLOCK,
   osc_name_media_clock,
   &osc_node_device,
   &osc_node_device_media_clock_hash,
   NULL,
   {}
};

osc_node osc_node_device_media_clock_hash = {
   OSC_NODE_DEVICE_MEDIA_CLOCK_HASH,
   osc_name_hash,
   &osc_node_device_media_clock,
   &osc_node_device_media_clock_hash_state,
   NULL,
   {}
};

osc_node osc_node_device_media_clock_hash_source = {
   OSC_NODE_DEVICE_MEDIA_CLOCK_HASH_SOURCE,
   osc_name_source,
   &osc_node_device_media_clock_hash,
   NULL,
   NULL,
   {OSC_WORD}
};

osc_node osc_node_device_media_clock_hash_rate = {
   OSC_NODE_DEVICE_MEDIA_CLOCK_HASH_RATE,
   osc_name_rate,
   &osc_node_device_media_clock_hash,
   NULL,
   &osc_node_device_media_clock_hash_source,
   {OSC_WORD}
};

osc_node osc_node_device_media_clock_hash_type = {
   OSC_NODE_DEVICE_MEDIA_CLOCK_HASH_TYPE,
   osc_name_type,
   &osc_node_device_media_clock_hash,
   NULL,
   &osc_node_device_media_clock_hash_rate,
   {OSC_WORD}
};

osc_node osc_node_device_media_clock_hash_state = {
   OSC_NODE_DEVICE_MEDIA_CLOCK_HASH_STATE,
   osc_name_state,
   &osc_node_device_media_clock_hash,
   NULL,
   &osc_node_device_media_clock_hash_type,
   {OSC_WORD}
};

osc_node osc_node_device_system = {
   OSC_NODE_DEVICE_SYSTEM,
   osc_name_system,
   &osc_node_device,
   NULL,
   &osc_node_device_media_clock,
   {OSC_STRING}
};

osc_node osc_node_device_identity = {
   OSC_NODE_DEVICE_IDENTITY,
   osc_name_identity,
   &osc_node_device,
   &osc_node_device_identity_vendor,
   &osc_node_device_system,
   {}
};

osc_node osc_node_device_identity_serial = {
   OSC_NODE_DEVICE_IDENTITY_SERIAL,
   osc_name_serial,
   &osc_node_device_identity,
   NULL,
   NULL,
   {OSC_STRING}
};

osc_node osc_node_device_identity_version = {
   OSC_NODE_DEVICE_IDENTITY_VERSION,
   osc_name_version,
   &osc_node_device_identity,
   NULL,
   &osc_node_device_identity_serial,
   {OSC_STRING}
};

osc_node osc_node_device_identity_vendor_id = {
   OSC_NODE_DEVICE_IDENTITY_VENDOR_ID,
   osc_name_vendor_id,
   &osc_node_device_identity,
   NULL,
   &osc_node_device_identity_version,
   {OSC_STRING}
};

osc_node osc_node_device_identity_product = {
   OSC_NODE_DEVICE_IDENTITY_PRODUCT,
   osc_name_product,
   &osc_node_device_identity,
   NULL,
   &osc_node_device_identity_vendor_id,
   {OSC_STRING}
};

osc_node osc_node_device_identity_vendor = {
   OSC_NODE_DEVICE_IDENTITY_VENDOR,
   osc_name_vendor,
   &osc_node_device_identity,
   NULL,
   &osc_node_device_identity_product,
   {OSC_STRING}
};

osc_node osc_node_device_name = {
   OSC_NODE_DEVICE_NAME,
   osc_name_name,
   &osc_node_device,
   NULL,
   &osc_node_device_identity,
   {OSC_STRING}
};

osc_node osc_node_device_media_clocks = {
   OSC_NODE_DEVICE_MEDIA_CLOCKS,
   osc_name_media_clocks,
   &osc_node_device,
   NULL,
   &osc_node_device_name,
   {OSC_WORD}
};



int get_osc_version(char a0[]);
int get_osc_type_reports(char a0[]);
int get_osc_type_accepts(char a0[]);
int getset_avb_source_presentation(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_avb_source_presentation(int h0,int a0)
{return getset_avb_source_presentation(1, h0,REFERENCE_TO a0);}

 int get_avb_source_presentation(int h0,REFERENCE_PARAM(int, a0))
 {return getset_avb_source_presentation(0, h0,a0);}

int getset_avb_source_map(int set, int h0,int a0[], REFERENCE_PARAM(int, a0_len));

 int set_avb_source_map(int h0,int a0[], int a0_len)
{return getset_avb_source_map(1, h0,a0, REFERENCE_TO a0_len);}

 int get_avb_source_map(int h0,int a0[], REFERENCE_PARAM(int, a0_len))
 {return getset_avb_source_map(0, h0,a0, a0_len);}

int getset_avb_source_dest(int set, int h0,unsigned char a0[], REFERENCE_PARAM(int, a0_len));

 int set_avb_source_dest(int h0,unsigned char a0[], int a0_len)
{return getset_avb_source_dest(1, h0,a0, REFERENCE_TO a0_len);}

 int get_avb_source_dest(int h0,unsigned char a0[], REFERENCE_PARAM(int, a0_len))
 {return getset_avb_source_dest(0, h0,a0, a0_len);}

int getset_avb_source_format(int set, int h0,REFERENCE_PARAM(enum avb_source_format_t, a0),REFERENCE_PARAM(int, a1));

 int set_avb_source_format(int h0,enum avb_source_format_t a0,int a1)
{return getset_avb_source_format(1, h0,REFERENCE_TO a0,REFERENCE_TO a1);}

 int get_avb_source_format(int h0,REFERENCE_PARAM(enum avb_source_format_t, a0),REFERENCE_PARAM(int, a1))
 {return getset_avb_source_format(0, h0,a0,a1);}

int getset_avb_source_channels(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_avb_source_channels(int h0,int a0)
{return getset_avb_source_channels(1, h0,REFERENCE_TO a0);}

 int get_avb_source_channels(int h0,REFERENCE_PARAM(int, a0))
 {return getset_avb_source_channels(0, h0,a0);}

int getset_avb_source_sync(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_avb_source_sync(int h0,int a0)
{return getset_avb_source_sync(1, h0,REFERENCE_TO a0);}

 int get_avb_source_sync(int h0,REFERENCE_PARAM(int, a0))
 {return getset_avb_source_sync(0, h0,a0);}

int getset_avb_source_name(int set, int h0,char a0[]);

 int set_avb_source_name(int h0,char a0[])
{return getset_avb_source_name(1, h0,a0);}

 int get_avb_source_name(int h0,char a0[])
 {return getset_avb_source_name(0, h0,a0);}

int get_avb_source_id(int h0,unsigned int a0[2]);
int getset_avb_source_vlan(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_avb_source_vlan(int h0,int a0)
{return getset_avb_source_vlan(1, h0,REFERENCE_TO a0);}

 int get_avb_source_vlan(int h0,REFERENCE_PARAM(int, a0))
 {return getset_avb_source_vlan(0, h0,a0);}

int getset_avb_source_state(int set, int h0,REFERENCE_PARAM(enum avb_source_state_t, a0));

 int set_avb_source_state(int h0,enum avb_source_state_t a0)
{return getset_avb_source_state(1, h0,REFERENCE_TO a0);}

 int get_avb_source_state(int h0,REFERENCE_PARAM(enum avb_source_state_t, a0))
 {return getset_avb_source_state(0, h0,a0);}

int get_avb_sources(REFERENCE_PARAM(int, a0));
int get_avb_sinks(REFERENCE_PARAM(int, a0));
int get_avb_ptp_gm(unsigned char a0[], REFERENCE_PARAM(int, a0_len));
int get_avb_ptp_ports(REFERENCE_PARAM(int, a0));
int get_avb_ptp_rateratio(REFERENCE_PARAM(int, a0));
int get_avb_ptp_port_pdelay(int h0,REFERENCE_PARAM(int, a0));
int getset_avb_sink_channels(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_avb_sink_channels(int h0,int a0)
{return getset_avb_sink_channels(1, h0,REFERENCE_TO a0);}

 int get_avb_sink_channels(int h0,REFERENCE_PARAM(int, a0))
 {return getset_avb_sink_channels(0, h0,a0);}

int getset_avb_sink_sync(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_avb_sink_sync(int h0,int a0)
{return getset_avb_sink_sync(1, h0,REFERENCE_TO a0);}

 int get_avb_sink_sync(int h0,REFERENCE_PARAM(int, a0))
 {return getset_avb_sink_sync(0, h0,a0);}

int getset_avb_sink_name(int set, int h0,char a0[]);

 int set_avb_sink_name(int h0,char a0[])
{return getset_avb_sink_name(1, h0,a0);}

 int get_avb_sink_name(int h0,char a0[])
 {return getset_avb_sink_name(0, h0,a0);}

int getset_avb_sink_vlan(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_avb_sink_vlan(int h0,int a0)
{return getset_avb_sink_vlan(1, h0,REFERENCE_TO a0);}

 int get_avb_sink_vlan(int h0,REFERENCE_PARAM(int, a0))
 {return getset_avb_sink_vlan(0, h0,a0);}

int getset_avb_sink_state(int set, int h0,REFERENCE_PARAM(enum avb_sink_state_t, a0));

 int set_avb_sink_state(int h0,enum avb_sink_state_t a0)
{return getset_avb_sink_state(1, h0,REFERENCE_TO a0);}

 int get_avb_sink_state(int h0,REFERENCE_PARAM(enum avb_sink_state_t, a0))
 {return getset_avb_sink_state(0, h0,a0);}

int getset_avb_sink_map(int set, int h0,int a0[], REFERENCE_PARAM(int, a0_len));

 int set_avb_sink_map(int h0,int a0[], int a0_len)
{return getset_avb_sink_map(1, h0,a0, REFERENCE_TO a0_len);}

 int get_avb_sink_map(int h0,int a0[], REFERENCE_PARAM(int, a0_len))
 {return getset_avb_sink_map(0, h0,a0, a0_len);}

int get_avb_sink_id(int h0,unsigned int a0[2]);
int getset_avb_sink_addr(int set, int h0,unsigned char a0[], REFERENCE_PARAM(int, a0_len));

 int set_avb_sink_addr(int h0,unsigned char a0[], int a0_len)
{return getset_avb_sink_addr(1, h0,a0, REFERENCE_TO a0_len);}

 int get_avb_sink_addr(int h0,unsigned char a0[], REFERENCE_PARAM(int, a0_len))
 {return getset_avb_sink_addr(0, h0,a0, a0_len);}

int getset_media_out_name(int set, int h0,char a0[]);

 int set_media_out_name(int h0,char a0[])
{return getset_media_out_name(1, h0,a0);}

 int get_media_out_name(int h0,char a0[])
 {return getset_media_out_name(0, h0,a0);}

int get_media_out_type(int h0,char a0[]);
int get_media_outs(REFERENCE_PARAM(int, a0));
int get_media_ins(REFERENCE_PARAM(int, a0));
int getset_media_in_name(int set, int h0,char a0[]);

 int set_media_in_name(int h0,char a0[])
{return getset_media_in_name(1, h0,a0);}

 int get_media_in_name(int h0,char a0[])
 {return getset_media_in_name(0, h0,a0);}

int get_media_in_type(int h0,char a0[]);
int getset_device_media_clock_source(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_device_media_clock_source(int h0,int a0)
{return getset_device_media_clock_source(1, h0,REFERENCE_TO a0);}

 int get_device_media_clock_source(int h0,REFERENCE_PARAM(int, a0))
 {return getset_device_media_clock_source(0, h0,a0);}

int getset_device_media_clock_rate(int set, int h0,REFERENCE_PARAM(int, a0));

 int set_device_media_clock_rate(int h0,int a0)
{return getset_device_media_clock_rate(1, h0,REFERENCE_TO a0);}

 int get_device_media_clock_rate(int h0,REFERENCE_PARAM(int, a0))
 {return getset_device_media_clock_rate(0, h0,a0);}

int getset_device_media_clock_type(int set, int h0,REFERENCE_PARAM(enum device_media_clock_type_t, a0));

 int set_device_media_clock_type(int h0,enum device_media_clock_type_t a0)
{return getset_device_media_clock_type(1, h0,REFERENCE_TO a0);}

 int get_device_media_clock_type(int h0,REFERENCE_PARAM(enum device_media_clock_type_t, a0))
 {return getset_device_media_clock_type(0, h0,a0);}

int getset_device_media_clock_state(int set, int h0,REFERENCE_PARAM(enum device_media_clock_state_t, a0));

 int set_device_media_clock_state(int h0,enum device_media_clock_state_t a0)
{return getset_device_media_clock_state(1, h0,REFERENCE_TO a0);}

 int get_device_media_clock_state(int h0,REFERENCE_PARAM(enum device_media_clock_state_t, a0))
 {return getset_device_media_clock_state(0, h0,a0);}

int get_device_system(char a0[]);
int get_device_identity_serial(char a0[]);
int get_device_identity_version(char a0[]);
int get_device_identity_vendor_id(char a0[]);
int get_device_identity_product(char a0[]);
int get_device_identity_vendor(char a0[]);
int get_device_name(char a0[]);
int get_device_media_clocks(REFERENCE_PARAM(int, a0));




void osc_get(osc_node *n, int h[], osc_val a[]) {
  switch (n->id) {
    case OSC_NODE_OSC_VERSION:
       get_osc_version(a[0].val.str);break;
    case OSC_NODE_OSC_TYPE_REPORTS:
       get_osc_type_reports(a[0].val.str);break;
    case OSC_NODE_OSC_TYPE_ACCEPTS:
       get_osc_type_accepts(a[0].val.str);break;
    case OSC_NODE_AVB_SOURCE_HASH_PRESENTATION:
       get_avb_source_presentation(h[0],&a[0].val.word);break;
    case OSC_NODE_AVB_SOURCE_HASH_MAP:
       get_avb_source_map(h[0],a[0].val.word_array, &a[0].len);break;
    case OSC_NODE_AVB_SOURCE_HASH_DEST:
       get_avb_source_dest(h[0],a[0].val.byte_array, &a[0].len);break;
    case OSC_NODE_AVB_SOURCE_HASH_FORMAT:
       get_avb_source_format(h[0],(enum avb_source_format_t *) &a[0].val.word,&a[1].val.word);break;
    case OSC_NODE_AVB_SOURCE_HASH_CHANNELS:
       get_avb_source_channels(h[0],&a[0].val.word);break;
    case OSC_NODE_AVB_SOURCE_HASH_SYNC:
       get_avb_source_sync(h[0],&a[0].val.word);break;
    case OSC_NODE_AVB_SOURCE_HASH_NAME:
       get_avb_source_name(h[0],a[0].val.str);break;
    case OSC_NODE_AVB_SOURCE_HASH_ID:
       get_avb_source_id(h[0],(unsigned int *) a[0].val.word_array);break;
    case OSC_NODE_AVB_SOURCE_HASH_VLAN:
       get_avb_source_vlan(h[0],&a[0].val.word);break;
    case OSC_NODE_AVB_SOURCE_HASH_STATE:
       get_avb_source_state(h[0],(enum avb_source_state_t *) &a[0].val.word);break;
    case OSC_NODE_AVB_SOURCES:
       get_avb_sources(&a[0].val.word);break;
    case OSC_NODE_AVB_SINKS:
       get_avb_sinks(&a[0].val.word);break;
    case OSC_NODE_AVB_PTP_GM:
       get_avb_ptp_gm(a[0].val.byte_array, &a[0].len);break;
    case OSC_NODE_AVB_PTP_PORTS:
       get_avb_ptp_ports(&a[0].val.word);break;
    case OSC_NODE_AVB_PTP_RATERATIO:
       get_avb_ptp_rateratio(&a[0].val.word);break;
    case OSC_NODE_AVB_PTP_PORT_HASH_PDELAY:
       get_avb_ptp_port_pdelay(h[0],&a[0].val.word);break;
    case OSC_NODE_AVB_SINK_HASH_CHANNELS:
       get_avb_sink_channels(h[0],&a[0].val.word);break;
    case OSC_NODE_AVB_SINK_HASH_SYNC:
       get_avb_sink_sync(h[0],&a[0].val.word);break;
    case OSC_NODE_AVB_SINK_HASH_NAME:
       get_avb_sink_name(h[0],a[0].val.str);break;
    case OSC_NODE_AVB_SINK_HASH_VLAN:
       get_avb_sink_vlan(h[0],&a[0].val.word);break;
    case OSC_NODE_AVB_SINK_HASH_STATE:
       get_avb_sink_state(h[0],(enum avb_sink_state_t *) &a[0].val.word);break;
    case OSC_NODE_AVB_SINK_HASH_MAP:
       get_avb_sink_map(h[0],a[0].val.word_array, &a[0].len);break;
    case OSC_NODE_AVB_SINK_HASH_ID:
       get_avb_sink_id(h[0],(unsigned int *) a[0].val.word_array);break;
    case OSC_NODE_AVB_SINK_HASH_ADDR:
       get_avb_sink_addr(h[0],a[0].val.byte_array, &a[0].len);break;
    case OSC_NODE_MEDIA_OUT_HASH_NAME:
       get_media_out_name(h[0],a[0].val.str);break;
    case OSC_NODE_MEDIA_OUT_HASH_TYPE:
       get_media_out_type(h[0],a[0].val.str);break;
    case OSC_NODE_MEDIA_OUTS:
       get_media_outs(&a[0].val.word);break;
    case OSC_NODE_MEDIA_INS:
       get_media_ins(&a[0].val.word);break;
    case OSC_NODE_MEDIA_IN_HASH_NAME:
       get_media_in_name(h[0],a[0].val.str);break;
    case OSC_NODE_MEDIA_IN_HASH_TYPE:
       get_media_in_type(h[0],a[0].val.str);break;
    case OSC_NODE_DEVICE_MEDIA_CLOCK_HASH_SOURCE:
       get_device_media_clock_source(h[0],&a[0].val.word);break;
    case OSC_NODE_DEVICE_MEDIA_CLOCK_HASH_RATE:
       get_device_media_clock_rate(h[0],&a[0].val.word);break;
    case OSC_NODE_DEVICE_MEDIA_CLOCK_HASH_TYPE:
       get_device_media_clock_type(h[0],(enum device_media_clock_type_t *) &a[0].val.word);break;
    case OSC_NODE_DEVICE_MEDIA_CLOCK_HASH_STATE:
       get_device_media_clock_state(h[0],(enum device_media_clock_state_t *) &a[0].val.word);break;
    case OSC_NODE_DEVICE_SYSTEM:
       get_device_system(a[0].val.str);break;
    case OSC_NODE_DEVICE_IDENTITY_SERIAL:
       get_device_identity_serial(a[0].val.str);break;
    case OSC_NODE_DEVICE_IDENTITY_VERSION:
       get_device_identity_version(a[0].val.str);break;
    case OSC_NODE_DEVICE_IDENTITY_VENDOR_ID:
       get_device_identity_vendor_id(a[0].val.str);break;
    case OSC_NODE_DEVICE_IDENTITY_PRODUCT:
       get_device_identity_product(a[0].val.str);break;
    case OSC_NODE_DEVICE_IDENTITY_VENDOR:
       get_device_identity_vendor(a[0].val.str);break;
    case OSC_NODE_DEVICE_NAME:
       get_device_name(a[0].val.str);break;
    case OSC_NODE_DEVICE_MEDIA_CLOCKS:
       get_device_media_clocks(&a[0].val.word);break;

  }
}

osc_node *osc_root = &osc_node_device;



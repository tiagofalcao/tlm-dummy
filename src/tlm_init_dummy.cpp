#include "tlm_init_dummy.h"

#include <expio.h>

using tlm_dummy::init_dummy;
typedef init_dummy SC_CURRENT_USER_MODULE;

init_dummy::init_dummy(sc_module_name module_name)
    : sc_module(module_name), socket("socket") {
  socket.register_nb_transport_bw(this, &init_dummy::nb_transport_bw);
}

init_dummy::~init_dummy() {}

tlm_sync_enum init_dummy::nb_transport_bw(tlm_generic_payload &payload,
                                          tlm_phase &phase,
                                          sc_time &delay_time) {
  EXPIO_LOG_CRIT("Dummy socket reached");
}

#include "tlm_target_dummy.h"

#include <expio.h>

using tlm_dummy::target_dummy;
typedef target_dummy SC_CURRENT_USER_MODULE;

target_dummy::target_dummy(sc_module_name module_name)
    : sc_module(module_name), socket("socket") {
  socket.register_nb_transport_fw(this, &target_dummy::nb_transport_fw);
}

target_dummy::~target_dummy() {}

tlm_sync_enum target_dummy::nb_transport_fw(tlm_generic_payload &payload,
                                            tlm_phase &phase,
                                            sc_time &delay_time) {
  EXPIO_LOG_CRIT("Dummy socket reached");
}

#ifndef TLM_TARGET_DUMMY_H_
#define TLM_TARGET_DUMMY_H_

#define SC_INCLUDE_DYNAMIC_PROCESSES
#include <systemc>
using namespace sc_core;
#include <tlm.h>
using namespace tlm;
#include <tlm_utils/simple_target_socket.h>
using namespace tlm_utils;

namespace tlm_dummy {
class target_dummy : sc_core::sc_module {
public:
  target_dummy(sc_core::sc_module_name);
  virtual ~target_dummy();

  tlm_utils::simple_target_socket<target_dummy> socket;
  tlm_sync_enum nb_transport_fw(tlm_generic_payload &payload, tlm_phase &phase,
                                sc_time &delay_time);
};
};

#endif // TLM_TARGET_DUMMY_H_

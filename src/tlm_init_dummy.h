#ifndef TLM_INIT_DUMMY_H_
#define TLM_INIT_DUMMY_H_

#define SC_INCLUDE_DYNAMIC_PROCESSES
#include <systemc>
using namespace sc_core;
#include <tlm.h>
using namespace tlm;
#include <tlm_utils/simple_initiator_socket.h>
using namespace tlm_utils;

namespace tlm_dummy {
class init_dummy : sc_core::sc_module {
public:
  init_dummy(sc_core::sc_module_name);
  virtual ~init_dummy();

  tlm_utils::simple_initiator_socket<init_dummy> socket;
  tlm_sync_enum nb_transport_bw(tlm_generic_payload &payload, tlm_phase &phase,
                                sc_time &delay_time);
};
};

#endif // TLM_INIT_DUMMY_H_

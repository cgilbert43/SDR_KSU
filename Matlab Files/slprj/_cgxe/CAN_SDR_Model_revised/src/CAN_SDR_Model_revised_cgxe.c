/* Include files */

#include "CAN_SDR_Model_revised_cgxe.h"
#include "m_Z2okmc3YRaEjDA3wjS346G.h"

unsigned int cgxe_CAN_SDR_Model_revised_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 2722181621 &&
      ssGetChecksum1(S) == 1943592093 &&
      ssGetChecksum2(S) == 4024870029 &&
      ssGetChecksum3(S) == 2225333053) {
    method_dispatcher_Z2okmc3YRaEjDA3wjS346G(S, method, data);
    return 1;
  }

  return 0;
}

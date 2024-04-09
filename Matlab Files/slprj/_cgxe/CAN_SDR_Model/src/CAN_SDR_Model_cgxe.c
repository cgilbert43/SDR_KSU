/* Include files */

#include "CAN_SDR_Model_cgxe.h"
#include "m_7Eiu5IwF1V5mjYy6qKHngD.h"

unsigned int cgxe_CAN_SDR_Model_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 819127573 &&
      ssGetChecksum1(S) == 1186210267 &&
      ssGetChecksum2(S) == 1796205102 &&
      ssGetChecksum3(S) == 3461687948) {
    method_dispatcher_7Eiu5IwF1V5mjYy6qKHngD(S, method, data);
    return 1;
  }

  return 0;
}

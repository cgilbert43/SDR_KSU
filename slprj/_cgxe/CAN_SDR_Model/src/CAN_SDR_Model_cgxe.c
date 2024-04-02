/* Include files */

#include "CAN_SDR_Model_cgxe.h"
#include "m_RYJJYzCHWak9uzULp4keoE.h"

unsigned int cgxe_CAN_SDR_Model_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 3480284251 &&
      ssGetChecksum1(S) == 2893830111 &&
      ssGetChecksum2(S) == 1184501711 &&
      ssGetChecksum3(S) == 3460970550) {
    method_dispatcher_RYJJYzCHWak9uzULp4keoE(S, method, data);
    return 1;
  }

  return 0;
}

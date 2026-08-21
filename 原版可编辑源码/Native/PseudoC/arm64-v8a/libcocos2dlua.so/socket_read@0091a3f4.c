
void socket_read(int *param_1,undefined8 param_2,undefined8 param_3,long *param_4,double *param_5)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  pollfd local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 0091a37c with catch @ 0091a414 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0091a394 with catch @ 0091a418 */
  local_68 = *(long *)(lVar1 + 0x28);
  *param_4 = 0;
  iVar4 = *param_1;
  if (iVar4 == -1) {
LAB_0091a4f8:
    iVar4 = -2;
  }
  else {
    while (lVar2 = __read_chk(iVar4,param_2,param_3,0xffffffffffffffff), lVar2 < 1) {
      piVar3 = (int *)__errno();
      if (lVar2 == 0) goto LAB_0091a4f8;
      iVar4 = *piVar3;
      if (iVar4 != 4) {
        if (iVar4 != 0xb) goto LAB_0091a4fc;
        local_70.fd = *param_1;
        local_70.events = 1;
        local_70.revents = 0;
        if (*param_5 == 0.0) {
LAB_0091a4f0:
          iVar4 = -1;
          goto LAB_0091a4fc;
        }
        do {
          dVar5 = (double)timeout_getretry(param_5);
          iVar4 = (int)(dVar5 * 1000.0);
          if (iVar4 < 0) {
            iVar4 = -1;
          }
          iVar4 = poll(&local_70,1,iVar4);
          if (iVar4 != -1) {
            if (iVar4 == 0) goto LAB_0091a4f0;
            goto LAB_0091a454;
          }
          iVar4 = *piVar3;
                    /* try { // try from 0091a4dc to 00a1a527 has its CatchHandler @ 0091a4dc
                       catch() { ... } // from try @ 0091a4dc with catch @ 0091a4dc
                       catch() { ... } // from try @ 0091a52c with catch @ 0091a4dc */
        } while (iVar4 == 4);
        if (iVar4 != 0) goto LAB_0091a4fc;
      }
LAB_0091a454:
      iVar4 = *param_1;
    }
                    /* try { // try from 0091a52c to 00a1a573 has its CatchHandler @ 0091a4dc */
    iVar4 = 0;
    *param_4 = lVar2;
  }
LAB_0091a4fc:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0091a528 to 00a1a52b has its CatchHandler @ 0091a560 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}



void socket_recvfrom(int *param_1,void *param_2,size_t param_3,ssize_t *param_4,sockaddr *param_5,
                    socklen_t *param_6,double *param_7)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  pollfd local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_4 = 0;
  if (*param_1 == -1) {
LAB_0091a268:
    iVar4 = -2;
  }
  else {
    lVar2 = recvfrom(*param_1,param_2,param_3,0,param_5,param_6);
    if (lVar2 < 1) {
      piVar3 = (int *)__errno();
      do {
        if (lVar2 == 0) goto LAB_0091a268;
        iVar4 = *piVar3;
        if (iVar4 != 4) {
          if (iVar4 != 0xb) goto LAB_0091a26c;
          local_70.fd = *param_1;
          local_70.events = 1;
          local_70.revents = 0;
                    /* try { // try from 0091a214 to 00a1a217 has its CatchHandler @ 0091a24c */
          if (*param_7 == 0.0) {
LAB_0091a260:
                    /* try { // try from 0091a260 to 00a1a347 has its CatchHandler @ 0091a260
                       catch() { ... } // from try @ 0091a260 with catch @ 0091a260
                       catch() { ... } // from try @ 0091a3c8 with catch @ 0091a260 */
            iVar4 = -1;
            goto LAB_0091a26c;
          }
          do {
                    /* try { // try from 0091a218 to 00a1a25f has its CatchHandler @ 0091a1c8 */
            dVar5 = (double)timeout_getretry(param_7);
            iVar4 = (int)(dVar5 * 1000.0);
            if (iVar4 < 0) {
              iVar4 = -1;
            }
            iVar4 = poll(&local_70,1,iVar4);
            if (iVar4 != -1) {
              if (iVar4 != 0) goto LAB_0091a1c0;
              goto LAB_0091a260;
            }
            iVar4 = *piVar3;
                    /* catch() { ... } // from try @ 0091a214 with catch @ 0091a24c */
          } while (iVar4 == 4);
          if (iVar4 != 0) goto LAB_0091a26c;
        }
LAB_0091a1c0:
                    /* try { // try from 0091a1c8 to 00a1a213 has its CatchHandler @ 0091a1c8
                       catch() { ... } // from try @ 0091a1c8 with catch @ 0091a1c8
                       catch() { ... } // from try @ 0091a218 with catch @ 0091a1c8 */
        lVar2 = recvfrom(*param_1,param_2,param_3,0,param_5,param_6);
      } while (lVar2 < 1);
    }
    iVar4 = 0;
    *param_4 = lVar2;
  }
LAB_0091a26c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


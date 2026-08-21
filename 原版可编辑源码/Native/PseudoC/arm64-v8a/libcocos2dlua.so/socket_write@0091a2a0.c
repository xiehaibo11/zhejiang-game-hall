
void socket_write(int *param_1,void *param_2,size_t param_3,ssize_t *param_4,double *param_5)

{
  long lVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  pollfd local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_4 = 0;
  if (*param_1 == -1) {
LAB_0091a3b4:
    iVar4 = -2;
  }
  else {
    sVar2 = write(*param_1,param_2,param_3);
    if (sVar2 < 0) {
      piVar3 = (int *)__errno();
      do {
        iVar4 = *piVar3;
        if (iVar4 != 4) {
          if (iVar4 != 0xb) {
            if (iVar4 == 0x20) goto LAB_0091a3b4;
            goto LAB_0091a3b8;
          }
                    /* try { // try from 0091a348 to 00a1a37b has its CatchHandler @ 0091a448 */
          local_70.fd = *param_1;
          local_70.events = 4;
          local_70.revents = 0;
          if (*param_5 == 0.0) {
LAB_0091a3a4:
            iVar4 = -1;
            goto LAB_0091a3b8;
          }
          do {
            dVar5 = (double)timeout_getretry(param_5);
            iVar4 = (int)(dVar5 * 1000.0);
            if (iVar4 < 0) {
              iVar4 = -1;
            }
                    /* try { // try from 0091a37c to 00a1a38f has its CatchHandler @ 0091a414 */
            iVar4 = poll(&local_70,1,iVar4);
            if (iVar4 != -1) {
              if (iVar4 == 0) goto LAB_0091a3a4;
              goto LAB_0091a320;
            }
            iVar4 = *piVar3;
                    /* try { // try from 0091a394 to 00a1a3c7 has its CatchHandler @ 0091a418 */
          } while (iVar4 == 4);
          if (iVar4 != 0) goto LAB_0091a3b8;
        }
LAB_0091a320:
        sVar2 = write(*param_1,param_2,param_3);
      } while (sVar2 < 0);
    }
    iVar4 = 0;
    *param_4 = sVar2;
  }
LAB_0091a3b8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0091a3c8 to 00a1a463 has its CatchHandler @ 0091a260 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


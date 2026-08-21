
void socket_sendto(int *param_1,void *param_2,size_t param_3,ssize_t *param_4,sockaddr *param_5,
                  socklen_t param_6,double *param_7)

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
LAB_00919f7c:
    iVar4 = -2;
  }
  else {
    sVar2 = sendto(*param_1,param_2,param_3,0,param_5,param_6);
    if (sVar2 < 0) {
      piVar3 = (int *)__errno();
                    /* try { // try from 00919ed4 to 00a19f07 has its CatchHandler @ 00919fd4 */
      do {
        iVar4 = *piVar3;
        if (iVar4 != 4) {
                    /* try { // try from 00919f08 to 00a19f1b has its CatchHandler @ 00919fa0 */
          if (iVar4 != 0xb) {
            if (iVar4 == 0x20) goto LAB_00919f7c;
            goto LAB_00919f80;
          }
          local_70.fd = *param_1;
          local_70.events = 4;
          local_70.revents = 0;
                    /* try { // try from 00919f20 to 00a19f53 has its CatchHandler @ 00919fa4 */
          if (*param_7 == 0.0) {
LAB_00919f6c:
            iVar4 = -1;
            goto LAB_00919f80;
          }
          do {
            dVar5 = (double)timeout_getretry(param_7);
            iVar4 = (int)(dVar5 * 1000.0);
            if (iVar4 < 0) {
              iVar4 = -1;
            }
            iVar4 = poll(&local_70,1,iVar4);
            if (iVar4 != -1) {
              if (iVar4 == 0) goto LAB_00919f6c;
              goto LAB_00919ed8;
            }
                    /* try { // try from 00919f54 to 00a19fef has its CatchHandler @ 00919e4c */
            iVar4 = *piVar3;
          } while (iVar4 == 4);
          if (iVar4 != 0) goto LAB_00919f80;
        }
LAB_00919ed8:
        sVar2 = sendto(*param_1,param_2,param_3,0,param_5,param_6);
      } while (sVar2 < 0);
    }
    iVar4 = 0;
    *param_4 = sVar2;
  }
LAB_00919f80:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00919f08 with catch @ 00919fa0 */
                    /* catch() { ... } // from try @ 00919f20 with catch @ 00919fa4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


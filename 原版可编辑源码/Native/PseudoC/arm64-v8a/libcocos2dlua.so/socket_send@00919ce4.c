
void socket_send(int *param_1,void *param_2,size_t param_3,ssize_t *param_4,double *param_5)

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
LAB_00919e10:
    iVar4 = -2;
  }
  else {
                    /* try { // try from 00919d30 to 00a19d63 has its CatchHandler @ 00919e30 */
    sVar2 = sendto(*param_1,param_2,param_3,0,(sockaddr *)0x0,0);
    if (sVar2 < 0) {
      piVar3 = (int *)__errno();
                    /* try { // try from 00919d64 to 00a19d77 has its CatchHandler @ 00919dfc */
      do {
        iVar4 = *piVar3;
        if (iVar4 != 4) {
          if (iVar4 != 0xb) {
            if (iVar4 == 0x20) goto LAB_00919e10;
            goto LAB_00919e14;
          }
          local_70.fd = *param_1;
          local_70.events = 4;
          local_70.revents = 0;
                    /* try { // try from 00919db0 to 00a19e4b has its CatchHandler @ 00919c78 */
          if (*param_5 == 0.0) {
LAB_00919e00:
                    /* catch() { ... } // from try @ 00919d7c with catch @ 00919e00 */
            iVar4 = -1;
            goto LAB_00919e14;
          }
          do {
            dVar5 = (double)timeout_getretry(param_5);
            iVar4 = (int)(dVar5 * 1000.0);
            if (iVar4 < 0) {
              iVar4 = -1;
            }
            iVar4 = poll(&local_70,1,iVar4);
            if (iVar4 != -1) {
                    /* catch() { ... } // from try @ 00919d64 with catch @ 00919dfc */
              if (iVar4 == 0) goto LAB_00919e00;
              goto LAB_00919d70;
            }
            iVar4 = *piVar3;
          } while (iVar4 == 4);
          if (iVar4 != 0) goto LAB_00919e14;
        }
LAB_00919d70:
                    /* try { // try from 00919d7c to 00a19daf has its CatchHandler @ 00919e00 */
        sVar2 = sendto(*param_1,param_2,param_3,0,(sockaddr *)0x0,0);
      } while (sVar2 < 0);
    }
    iVar4 = 0;
    *param_4 = sVar2;
  }
LAB_00919e14:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00919d30 with catch @ 00919e30 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00919e4c to 00a19ed3 has its CatchHandler @ 00919e4c
                       catch() { ... } // from try @ 00919e4c with catch @ 00919e4c
                       catch() { ... } // from try @ 00919f54 with catch @ 00919e4c */
  __stack_chk_fail(iVar4);
}


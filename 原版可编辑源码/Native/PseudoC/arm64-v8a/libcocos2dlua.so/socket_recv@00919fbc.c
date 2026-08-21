
void socket_recv(int *param_1,void *param_2,size_t param_3,ssize_t *param_4,double *param_5)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  pollfd local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00919ed4 with catch @ 00919fd4 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_4 = 0;
  if (*param_1 == -1) {
LAB_0091a0f4:
    iVar4 = -2;
  }
  else {
    lVar2 = recvfrom(*param_1,param_2,param_3,0,(sockaddr *)0x0,(socklen_t *)0x0);
    if (lVar2 < 1) {
      piVar3 = (int *)__errno();
      do {
        if (lVar2 == 0) goto LAB_0091a0f4;
        iVar4 = *piVar3;
        if (iVar4 != 4) {
          if (iVar4 != 0xb) goto LAB_0091a0f8;
          local_70.fd = *param_1;
          local_70.events = 1;
          local_70.revents = 0;
          if (*param_5 == 0.0) {
LAB_0091a0ec:
            iVar4 = -1;
            goto LAB_0091a0f8;
          }
          do {
            dVar5 = (double)timeout_getretry(param_5);
            iVar4 = (int)(dVar5 * 1000.0);
            if (iVar4 < 0) {
              iVar4 = -1;
            }
            iVar4 = poll(&local_70,1,iVar4);
            if (iVar4 != -1) {
              if (iVar4 != 0) goto LAB_0091a050;
              goto LAB_0091a0ec;
            }
            iVar4 = *piVar3;
          } while (iVar4 == 4);
          if (iVar4 != 0) goto LAB_0091a0f8;
        }
LAB_0091a050:
        lVar2 = recvfrom(*param_1,param_2,param_3,0,(sockaddr *)0x0,(socklen_t *)0x0);
      } while (lVar2 < 1);
    }
    iVar4 = 0;
    *param_4 = lVar2;
  }
LAB_0091a0f8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}



void socket_waitfd(int *param_1,int param_2,double *param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  pollfd local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40.fd = *param_1;
  local_40.events = (short)param_2;
  local_40.revents = 0;
  if (*param_3 == 0.0) {
LAB_009195b0:
    iVar3 = -1;
  }
  else {
    do {
      dVar4 = (double)timeout_getretry(param_3);
      iVar3 = (int)(dVar4 * 1000.0);
      if (iVar3 < 0) {
        iVar3 = -1;
      }
      iVar3 = poll(&local_40,1,iVar3);
      if (iVar3 != -1) {
        if (iVar3 == 0) goto LAB_009195b0;
        if ((param_2 == 5) && ((local_40.revents & 9U) != 0)) {
          iVar3 = -2;
        }
        else {
          iVar3 = 0;
        }
        break;
      }
      piVar2 = (int *)__errno();
      iVar3 = *piVar2;
    } while (iVar3 == 4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


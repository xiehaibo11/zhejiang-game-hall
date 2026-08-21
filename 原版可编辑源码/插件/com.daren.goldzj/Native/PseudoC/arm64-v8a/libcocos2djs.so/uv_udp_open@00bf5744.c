
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_udp_open(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0xb0) == -1) {
    uVar2 = uv__nonblock_ioctl(param_2,1);
    if ((int)uVar2 == 0) {
      local_c = 1;
      iVar1 = setsockopt(param_2,1,2,&local_c,4);
      if (iVar1 != 0) {
        piVar3 = (int *)__errno();
        uVar2 = (ulong)(uint)-*piVar3;
        if (*piVar3 != 0) goto LAB_00bf5784;
      }
      *(int *)(param_1 + 0xb0) = param_2;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffff0;
  }
LAB_00bf5784:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


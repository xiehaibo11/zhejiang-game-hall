
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__socket_sockopt(long param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  socklen_t local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == 0) || (param_3 == (int *)0x0)) {
    iVar1 = -0x16;
    goto LAB_00bed410;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 == 7) || (iVar1 == 0xc)) {
    iVar1 = *(int *)(param_1 + 0xb8);
    if (*param_3 == 0) goto LAB_00bed3e8;
LAB_00bed444:
    local_c = 4;
    iVar2 = setsockopt(iVar1,1,param_2,param_3,4);
  }
  else {
    if (iVar1 != 0xf) {
      iVar1 = -0x5f;
      goto LAB_00bed410;
    }
    iVar1 = *(int *)(param_1 + 0xb0);
    if (*param_3 != 0) goto LAB_00bed444;
LAB_00bed3e8:
    local_c = 4;
    iVar2 = getsockopt(iVar1,1,param_2,param_3,&local_c);
  }
  iVar1 = 0;
  if (iVar2 < 0) {
    piVar3 = (int *)__errno(0);
    iVar1 = -*piVar3;
  }
LAB_00bed410:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


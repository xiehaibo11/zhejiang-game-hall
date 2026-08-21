
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_udp_getsockname(long param_1,sockaddr *param_2,socklen_t *param_3)

{
  int iVar1;
  int *piVar2;
  socklen_t local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0xb0) == -1) {
    iVar1 = -0x16;
  }
  else {
    local_c = *param_3;
    iVar1 = getsockname(*(int *)(param_1 + 0xb0),param_2,&local_c);
    if (iVar1 == 0) {
      *param_3 = local_c;
      iVar1 = 0;
    }
    else {
      piVar2 = (int *)__errno();
      iVar1 = -*piVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


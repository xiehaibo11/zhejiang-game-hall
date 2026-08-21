
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_uptime(double *param_1)

{
  int iVar1;
  int *piVar2;
  timespec local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_01d3bca8 == 0) {
    iVar1 = clock_gettime(7,&local_18);
    if (iVar1 != 0) {
      piVar2 = (int *)__errno();
      if (*piVar2 == 0x16) {
        DAT_01d3bca8 = 1;
        goto LAB_00bf6c90;
      }
      goto LAB_00bf6ca4;
    }
  }
  else {
LAB_00bf6c90:
    iVar1 = clock_gettime(1,&local_18);
    if (iVar1 != 0) {
      piVar2 = (int *)__errno();
LAB_00bf6ca4:
      iVar1 = -*piVar2;
      goto LAB_00bf6c50;
    }
  }
  iVar1 = 0;
  *param_1 = (double)local_18.tv_sec;
LAB_00bf6c50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


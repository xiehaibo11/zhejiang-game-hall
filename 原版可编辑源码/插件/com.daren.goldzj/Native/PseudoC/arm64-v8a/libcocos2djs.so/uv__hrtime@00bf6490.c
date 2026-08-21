
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__hrtime(int param_1)

{
  int iVar1;
  long lVar2;
  timespec local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    lVar2 = DAT_01d289c8;
    if (DAT_01d289c8 == -1) {
      iVar1 = clock_getres(6,&local_18);
      if ((iVar1 == 0) && (local_18.tv_nsec < 0xf4241)) {
        lVar2 = 6;
        DAT_01d289c8 = 6;
      }
      else {
        lVar2 = 1;
        DAT_01d289c8 = 1;
      }
    }
  }
  else {
    lVar2 = 1;
  }
  iVar1 = clock_gettime((clockid_t)lVar2,&local_18);
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = local_18.tv_nsec + local_18.tv_sec * 1000000000;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


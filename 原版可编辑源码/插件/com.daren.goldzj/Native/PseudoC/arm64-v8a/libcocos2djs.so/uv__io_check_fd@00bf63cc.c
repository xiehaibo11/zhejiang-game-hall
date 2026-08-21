
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__io_check_fd(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18 [2];
  undefined8 local_10;
  long local_8;
  
  local_18[0] = 1;
  local_8 = ___stack_chk_guard;
  local_10 = 0xffffffffffffffff;
  iVar1 = uv__epoll_ctl(*(undefined4 *)(param_1 + 0x40),1,param_2,local_18);
  if (((iVar1 == 0) || (piVar3 = (int *)__errno(), *piVar3 == 0x11)) ||
     (iVar1 = -*piVar3, *piVar3 == 0)) {
    iVar2 = uv__epoll_ctl(*(undefined4 *)(param_1 + 0x40),2,param_2,local_18);
    iVar1 = 0;
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}


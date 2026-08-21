
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__platform_invalidate_fd(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 8);
  local_8 = ___stack_chk_guard;
  lVar2 = *(long *)(*(long *)(param_1 + 0x68) + (ulong)(*(uint *)(param_1 + 0x70) + 1) * 8);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar2 = lVar1 + lVar2 * 0x10;
    do {
      while (param_2 == (int)*(undefined8 *)(lVar1 + 8)) {
        *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
        lVar1 = lVar1 + 0x10;
        if (lVar1 == lVar2) goto LAB_00bf638c;
      }
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != lVar2);
  }
LAB_00bf638c:
  if (-1 < *(int *)(param_1 + 0x40)) {
    local_18 = 0;
    uStack_10 = 0;
    uv__epoll_ctl(*(int *)(param_1 + 0x40),2,param_2,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


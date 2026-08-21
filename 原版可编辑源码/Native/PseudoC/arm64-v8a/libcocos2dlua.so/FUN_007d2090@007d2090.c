
undefined8 FUN_007d2090(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_40[1] = 0;
  local_30 = (void *)0x0;
  local_40[0] = 0;
  FUN_007d40b8(param_1,local_40);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  cocos2d::log("[LUA-print] %s",pvVar1);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


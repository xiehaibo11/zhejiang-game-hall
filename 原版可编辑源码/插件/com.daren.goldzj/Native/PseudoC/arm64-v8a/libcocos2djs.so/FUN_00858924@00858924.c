
void FUN_00858924(long param_1)

{
  long lVar1;
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *(undefined4 *)(param_1 + 8);
  local_38 = param_1 + 0x11;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    local_38 = *(long *)(param_1 + 0x20);
  }
  if (DAT_01d35a20 != (long *)0x0) {
    (**(code **)(*DAT_01d35a20 + 0x30))(DAT_01d35a20,&local_2c,&local_38);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}


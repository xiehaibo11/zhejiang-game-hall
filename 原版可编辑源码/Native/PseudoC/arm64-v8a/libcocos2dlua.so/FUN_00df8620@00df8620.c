
void FUN_00df8620(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x30);
  local_2c = param_2;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


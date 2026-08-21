
void FUN_00135ebc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_90 [104];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00135c90(param_1,auStack_90,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


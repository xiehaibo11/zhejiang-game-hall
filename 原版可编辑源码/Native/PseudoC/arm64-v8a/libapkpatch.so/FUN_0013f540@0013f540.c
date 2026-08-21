
uint FUN_0013f540(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  uVar2 = FUN_0013e3d8(param_1,&local_2c,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


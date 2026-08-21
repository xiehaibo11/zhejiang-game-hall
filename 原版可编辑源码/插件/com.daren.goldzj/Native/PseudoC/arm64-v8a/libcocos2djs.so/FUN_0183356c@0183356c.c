
void FUN_0183356c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  local_38 = param_2;
  uStack_30 = param_3;
  if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
    puVar1[1] = param_3;
    *puVar1 = param_2;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0x10;
  }
  else {
    FUN_018337f0(param_1 + 0x18,&local_38);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FUN_017da05c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = operator_new(8);
  *local_70 = 0;
  local_68 = operator_new(8);
  *local_68 = 0;
  local_58 = 0;
  local_60 = param_3;
  uStack_5c = param_2;
  local_50 = param_4;
  FUN_017d64b0(param_1 + 0x378,&local_70);
  puVar2 = local_68;
  local_68 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  puVar2 = local_70;
  local_70 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(*(long *)(param_1 + 0x380) + -0x28));
}


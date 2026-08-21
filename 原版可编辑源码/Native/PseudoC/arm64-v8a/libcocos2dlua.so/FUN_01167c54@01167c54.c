
long FUN_01167c54(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    plVar2 = (long *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x10) != param_2) {
      plVar2 = (long *)(param_1 + 0x28);
    }
    param_1 = *plVar2;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x10) != param_2) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
    }
    uVar3 = FUN_01167c54(*puVar1);
    *puVar1 = uVar3;
  }
  return param_1;
}


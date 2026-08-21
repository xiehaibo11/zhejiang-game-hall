
void FUN_00d57ed0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_01c91c30;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


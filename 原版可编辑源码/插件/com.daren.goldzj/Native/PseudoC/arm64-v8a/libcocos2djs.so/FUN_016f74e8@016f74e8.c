
void FUN_016f74e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = operator_new(0x30);
  *puVar1 = &PTR_FUN_01ccd450;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  puVar1[5] = uVar2;
  return;
}


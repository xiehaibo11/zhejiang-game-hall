
void FUN_00fa4610(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_01722ee8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[7] = *(undefined8 *)(param_1 + 0x38);
  param_2[6] = uVar2;
  param_2[5] = uVar1;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar6;
  param_2[1] = uVar5;
  return;
}


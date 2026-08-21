
void FUN_016f73bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_01ccd408;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[9] = *(undefined8 *)(param_1 + 0x48);
  param_2[8] = uVar2;
  param_2[7] = uVar1;
  param_2[6] = uVar4;
  param_2[5] = uVar3;
  param_2[4] = uVar6;
  param_2[3] = uVar5;
  return;
}


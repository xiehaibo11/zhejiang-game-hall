
void FUN_016f7244(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = &PTR_FUN_01ccd3c0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  param_2[8] = *(undefined8 *)(param_1 + 0x40);
  param_2[7] = uVar1;
  param_2[6] = uVar3;
  param_2[5] = uVar2;
  param_2[4] = uVar5;
  param_2[3] = uVar4;
  param_2[2] = uVar7;
  param_2[1] = uVar6;
  return;
}


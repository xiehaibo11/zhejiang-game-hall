
undefined8 FUN_00e37abc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  uVar6 = *(undefined8 *)(param_1 + 0x110);
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  param_2[1] = *(undefined8 *)(param_1 + 0x100);
  *param_2 = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  param_2[5] = uVar4;
  param_2[4] = uVar3;
  return 0;
}


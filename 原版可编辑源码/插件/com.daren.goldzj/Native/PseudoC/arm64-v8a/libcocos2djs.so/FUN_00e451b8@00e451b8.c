
undefined8 FUN_00e451b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  uVar4 = *(undefined8 *)(param_1 + 0x140);
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  param_2[6] = *(undefined8 *)(param_1 + 0x168);
  param_2[1] = uVar4;
  *param_2 = uVar3;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  param_2[5] = uVar2;
  param_2[4] = uVar1;
  return 0;
}


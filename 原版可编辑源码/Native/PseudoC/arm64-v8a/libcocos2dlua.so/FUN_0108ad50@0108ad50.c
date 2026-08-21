
undefined8 FUN_0108ad50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[6] = *(undefined8 *)(param_1 + 0x168);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  param_2[5] = *(undefined8 *)(param_1 + 0x160);
  param_2[4] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  param_2[3] = *(undefined8 *)(param_1 + 0x150);
  param_2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  param_2[1] = *(undefined8 *)(param_1 + 0x140);
  *param_2 = uVar1;
  return 0;
}


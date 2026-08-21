
void cpArbiterInit(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[3] = param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[4] = param_3;
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[6] = uVar1;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}


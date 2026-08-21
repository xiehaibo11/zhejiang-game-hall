
void cpShapeInit(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 2);
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[1] = 0;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}


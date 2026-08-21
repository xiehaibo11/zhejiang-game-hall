
void cpConstraintInit(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x3aeb89907f800000;
  *(undefined4 *)(param_1 + 7) = 0x7f800000;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


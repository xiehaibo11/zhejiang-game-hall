
void uv__io_init(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



void speex_bits_init_buffer(undefined8 *param_1,undefined1 *param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *param_2 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


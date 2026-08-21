
void speex_bits_set_bit_buffer(undefined8 *param_1,undefined8 param_2,int param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)((long)param_1 + 0x1c) = param_3;
  *(int *)(param_1 + 1) = param_3 << 3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  return;
}


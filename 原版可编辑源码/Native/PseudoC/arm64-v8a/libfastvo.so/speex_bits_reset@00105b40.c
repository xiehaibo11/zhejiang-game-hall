
void speex_bits_reset(undefined8 *param_1)

{
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


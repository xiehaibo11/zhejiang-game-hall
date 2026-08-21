
void speex_stereo_state_reset(undefined8 *param_1)

{
  param_1[2] = 0xdeadbeef;
  param_1[1] = 0x400000004000;
  *param_1 = 0x400000010000;
  return;
}


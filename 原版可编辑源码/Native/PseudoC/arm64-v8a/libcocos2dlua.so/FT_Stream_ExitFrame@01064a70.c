
void FT_Stream_ExitFrame(long *param_1)

{
  if (param_1[5] != 0) {
    if (*param_1 != 0) {
      (**(code **)(param_1[7] + 0x10))();
    }
    *param_1 = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


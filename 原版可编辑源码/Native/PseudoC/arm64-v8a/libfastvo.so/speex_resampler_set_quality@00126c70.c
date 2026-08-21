
undefined8 speex_resampler_set_quality(long param_1,uint param_2)

{
  if (10 < param_2) {
    return 3;
  }
  if (*(uint *)(param_1 + 0x10) == param_2) {
    return 0;
  }
  *(uint *)(param_1 + 0x10) = param_2;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00126de0();
    return 0;
  }
  return 0;
}


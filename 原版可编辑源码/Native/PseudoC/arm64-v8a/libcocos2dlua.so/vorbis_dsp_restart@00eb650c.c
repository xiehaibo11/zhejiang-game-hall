
undefined8 vorbis_dsp_restart(long *param_1)

{
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x30) != 0)) {
    param_1[9] = -1;
    param_1[0xc] = -1;
    param_1[0xd] = -1;
    param_1[0xe] = -1;
    return 0;
  }
  return 0xffffffff;
}


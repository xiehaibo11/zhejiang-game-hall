
uint FUN_015b18f4(float param_1,float param_2)

{
  if (param_2 <= param_1) {
    if (param_2 < param_1) {
      return 0;
    }
    if ((param_1 == 0.0) && (param_1 == param_2)) {
      if (-1 < (long)(double)param_1) {
        return 0;
      }
      return (uint)((ulong)(double)param_2 >> 0x3f) ^ 1;
    }
    if (NAN(param_1)) {
      return 0;
    }
    if (!NAN(param_2)) {
      return 0;
    }
  }
  return 1;
}


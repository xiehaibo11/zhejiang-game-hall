
uint gain_from_float(float param_1)

{
  int iVar1;
  float fVar2;
  int local_14;
  
  if (param_1 <= 0.0) {
    return 0;
  }
  if (param_1 < 2.0) {
    fVar2 = frexpf(param_1,&local_14);
    iVar1 = local_14 + 6;
    if (iVar1 < 8) {
      if (0xc < -6 - local_14) {
        return 0;
      }
      if (iVar1 < 1) {
        return (int)(fVar2 * 16384.0) >> (-local_14 - 5U & 0x1f) & 0x1fff;
      }
      return (int)(fVar2 * 16384.0) & 0xffffdfffU | iVar1 * 0x2000;
    }
  }
  return 0xffff;
}


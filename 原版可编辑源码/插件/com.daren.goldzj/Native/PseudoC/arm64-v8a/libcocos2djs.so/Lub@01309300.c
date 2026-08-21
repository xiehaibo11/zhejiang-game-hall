
/* v8::internal::compiler::BitsetType::Lub(double) */

undefined4 v8::internal::compiler::BitsetType::Lub(double param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  if (param_1 == -0.0) {
    return 0x800;
  }
  if (NAN(param_1)) {
    return 0x1000;
  }
  if ((param_1 <= 4294967295.0) && (0.0 <= param_1)) {
    dVar2 = (double)((ulong)(param_1 + 4503599627370496.0) & 0xffffffff);
    if (4503599627370496.0 <= param_1) {
      dVar2 = 2147483648.0;
    }
    if (dVar2 == param_1) {
      if (param_1 < -2147483648.0) {
        return 0x10;
      }
      goto LAB_013093d8;
    }
  }
  if (2147483647.0 < param_1) {
    return 0x10;
  }
  if (param_1 < -2147483648.0) {
    return 0x10;
  }
  if (param_1 < -2147483648.0) {
    return 0x10;
  }
  if ((double)(int)param_1 != param_1) {
    return 0x10;
  }
LAB_013093d8:
  if (param_1 < -1073741824.0) {
    return 8;
  }
  if (param_1 < 0.0) {
    return 0x40;
  }
  if (param_1 < 1073741824.0) {
    return 0x400;
  }
  if (2147483648.0 <= param_1) {
    uVar1 = 4;
    if (4294967296.0 <= param_1) {
      uVar1 = 0x10;
    }
    return uVar1;
  }
  return 2;
}


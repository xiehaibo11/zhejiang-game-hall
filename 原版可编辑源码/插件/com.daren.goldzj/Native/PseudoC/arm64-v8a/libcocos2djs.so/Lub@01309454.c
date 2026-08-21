
/* v8::internal::compiler::BitsetType::Lub(double, double) */

uint v8::internal::compiler::BitsetType::Lub(double param_1,double param_2)

{
  uint uVar1;
  
  if (-2147483648.0 <= param_1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
    if (param_2 < -2147483648.0) {
      return 0x10;
    }
  }
  if ((((((-1073741824.0 <= param_1) || (uVar1 = uVar1 | 8, -1073741824.0 <= param_2)) &&
        ((0.0 <= param_1 || (uVar1 = uVar1 | 0x40, 0.0 <= param_2)))) &&
       ((1073741824.0 <= param_1 || (uVar1 = uVar1 | 0x400, 1073741824.0 <= param_2)))) &&
      ((2147483648.0 <= param_1 || (uVar1 = uVar1 | 2, 2147483648.0 <= param_2)))) &&
     ((4294967296.0 <= param_1 || (uVar1 = uVar1 | 4, 4294967296.0 <= param_2)))) {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}


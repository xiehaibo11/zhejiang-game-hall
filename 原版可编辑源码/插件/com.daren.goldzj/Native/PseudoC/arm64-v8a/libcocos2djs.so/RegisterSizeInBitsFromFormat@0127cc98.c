
/* v8::internal::RegisterSizeInBitsFromFormat(v8::internal::VectorFormat) */

undefined8 v8::internal::RegisterSizeInBitsFromFormat(int param_1)

{
  if (param_1 < 0x10000000) {
    if (param_1 < 0x800000) {
      if ((param_1 == 0) || (param_1 == 0x400000)) {
        return 0x40;
      }
    }
    else {
      if (param_1 == 0x800000) {
        return 0x40;
      }
      if (param_1 == 0xc00000) {
        return 0x40;
      }
    }
  }
  else if (param_1 < 0x10800000) {
    if (param_1 == 0x10000000) {
      return 8;
    }
    if (param_1 == 0x10400000) {
      return 0x10;
    }
  }
  else {
    if (param_1 == 0x10800000) {
      return 0x20;
    }
    if (param_1 == 0x10c00000) {
      return 0x40;
    }
  }
  return 0x80;
}


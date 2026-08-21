
/* v8::internal::RegisterSizeInBytesFromFormat(v8::internal::VectorFormat) */

undefined8 v8::internal::RegisterSizeInBytesFromFormat(int param_1)

{
  if (param_1 < 0x10000000) {
    if (param_1 < 0x800000) {
      if ((param_1 == 0) || (param_1 == 0x400000)) {
        return 8;
      }
    }
    else {
      if (param_1 == 0x800000) {
        return 8;
      }
      if (param_1 == 0xc00000) {
        return 8;
      }
    }
  }
  else if (param_1 < 0x10800000) {
    if (param_1 == 0x10000000) {
      return 1;
    }
    if (param_1 == 0x10400000) {
      return 2;
    }
  }
  else {
    if (param_1 == 0x10800000) {
      return 4;
    }
    if (param_1 == 0x10c00000) {
      return 8;
    }
  }
  return 0x10;
}


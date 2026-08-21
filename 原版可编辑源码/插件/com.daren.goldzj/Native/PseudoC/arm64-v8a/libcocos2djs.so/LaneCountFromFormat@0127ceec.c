
/* v8::internal::LaneCountFromFormat(v8::internal::VectorFormat) */

undefined8 v8::internal::LaneCountFromFormat(int param_1)

{
  if (param_1 < 0x10800000) {
    if (param_1 < 0xc00000) {
      if (param_1 == 0) {
        return 8;
      }
      if (param_1 == 0x400000) {
        return 4;
      }
      if (param_1 == 0x800000) {
        return 2;
      }
    }
    else if (((param_1 == 0xc00000) || (param_1 == 0x10000000)) || (param_1 == 0x10400000)) {
      return 1;
    }
  }
  else if (param_1 < 0x40400000) {
    if (param_1 == 0x10800000) {
      return 1;
    }
    if (param_1 == 0x10c00000) {
      return 1;
    }
    if (param_1 == 0x40000000) {
      return 0x10;
    }
  }
  else {
    if (param_1 == 0x40c00000) {
      return 2;
    }
    if (param_1 == 0x40800000) {
      return 4;
    }
    if (param_1 == 0x40400000) {
      return 8;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


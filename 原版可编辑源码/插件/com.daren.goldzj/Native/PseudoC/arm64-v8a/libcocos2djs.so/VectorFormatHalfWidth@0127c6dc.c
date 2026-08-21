
/* v8::internal::VectorFormatHalfWidth(v8::internal::VectorFormat) */

undefined8 v8::internal::VectorFormatHalfWidth(int param_1)

{
  if (param_1 < 0x40400000) {
    if (param_1 == 0x10400000) {
      return 0x10000000;
    }
    if (param_1 == 0x10800000) {
      return 0x10400000;
    }
    if (param_1 == 0x10c00000) {
      return 0x10800000;
    }
  }
  else {
    if (param_1 == 0x40400000) {
      return 0;
    }
    if (param_1 == 0x40c00000) {
      return 0x800000;
    }
    if (param_1 == 0x40800000) {
      return 0x400000;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


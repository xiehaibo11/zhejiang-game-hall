
/* v8::internal::VectorFormatHalfWidthDoubleLanes(v8::internal::VectorFormat) */

undefined8 v8::internal::VectorFormatHalfWidthDoubleLanes(int param_1)

{
  if (param_1 < 0x40400000) {
    if (param_1 == 0x400000) {
      return 0;
    }
    if (param_1 == 0x800000) {
      return 0x400000;
    }
    if (param_1 == 0xc00000) {
      return 0x800000;
    }
  }
  else {
    if (param_1 == 0x40c00000) {
      return 0x40800000;
    }
    if (param_1 == 0x40800000) {
      return 0x40400000;
    }
    if (param_1 == 0x40400000) {
      return 0x40000000;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


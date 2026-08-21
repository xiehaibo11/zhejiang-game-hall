
/* v8::internal::VectorFormatDoubleWidth(v8::internal::VectorFormat) */

undefined8 v8::internal::VectorFormatDoubleWidth(int param_1)

{
  if (param_1 < 0x10000000) {
    if (param_1 == 0) {
      return 0x40400000;
    }
    if (param_1 == 0x400000) {
      return 0x40800000;
    }
    if (param_1 == 0x800000) {
      return 0x40c00000;
    }
  }
  else {
    if (param_1 == 0x10000000) {
      return 0x10400000;
    }
    if (param_1 == 0x10400000) {
      return 0x10800000;
    }
    if (param_1 == 0x10800000) {
      return 0x10c00000;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


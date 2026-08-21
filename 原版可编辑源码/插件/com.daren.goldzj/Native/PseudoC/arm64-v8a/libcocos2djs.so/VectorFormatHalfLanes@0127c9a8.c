
/* v8::internal::VectorFormatHalfLanes(v8::internal::VectorFormat) */

undefined8 v8::internal::VectorFormatHalfLanes(int param_1)

{
  if (param_1 == 0x40000000) {
    return 0;
  }
  if (param_1 != 0x40800000) {
    if (param_1 == 0x40400000) {
      return 0x400000;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return 0x800000;
}


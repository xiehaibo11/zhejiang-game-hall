
/* v8::internal::VectorFormatDoubleLanes(v8::internal::VectorFormat) */

undefined8 v8::internal::VectorFormatDoubleLanes(int param_1)

{
  if (param_1 == 0) {
    return 0x40000000;
  }
  if (param_1 != 0x800000) {
    if (param_1 == 0x400000) {
      return 0x40400000;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return 0x40800000;
}


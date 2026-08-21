
/* v8::internal::compiler::SimdScalarLowering::NumLanes(v8::internal::compiler::SimdScalarLowering::SimdType)
    */

undefined8 __thiscall
v8::internal::compiler::SimdScalarLowering::NumLanes(undefined8 param_1,byte param_2)

{
  if ((param_2 & 0xfd) == 0) {
    return 2;
  }
  if ((param_2 | 2) == 3) {
    return 4;
  }
  if (param_2 == 4) {
    return 8;
  }
  if (param_2 == 5) {
    return 0x10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


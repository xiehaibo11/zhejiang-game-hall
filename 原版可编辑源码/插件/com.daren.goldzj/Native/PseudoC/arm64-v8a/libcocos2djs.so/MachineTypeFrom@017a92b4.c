
/* v8::internal::compiler::SimdScalarLowering::MachineTypeFrom(v8::internal::compiler::SimdScalarLowering::SimdType)
    */

undefined8 __thiscall
v8::internal::compiler::SimdScalarLowering::MachineTypeFrom(undefined8 param_1,byte param_2)

{
  if (param_2 < 6) {
    return *(undefined8 *)(&DAT_01a63248 + (long)(char)param_2 * 8);
  }
  return 0;
}



/* v8::internal::compiler::DoubleMapParameterOf(v8::internal::compiler::Operator const*) */

undefined8 v8::internal::compiler::DoubleMapParameterOf(Operator *param_1)

{
  if ((*(ushort *)(param_1 + 0x10) & 0xfffe) == 0xf8) {
    return *(undefined8 *)(param_1 + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


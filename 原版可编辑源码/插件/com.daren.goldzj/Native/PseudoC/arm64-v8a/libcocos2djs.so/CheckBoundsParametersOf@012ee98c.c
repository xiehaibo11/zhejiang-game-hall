
/* v8::internal::compiler::CheckBoundsParametersOf(v8::internal::compiler::Operator const*) */

Operator * v8::internal::compiler::CheckBoundsParametersOf(Operator *param_1)

{
  if (*(short *)(param_1 + 0x10) == 0x5f) {
    return param_1 + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","op->opcode() == IrOpcode::kCheckedUint32Bounds");
}


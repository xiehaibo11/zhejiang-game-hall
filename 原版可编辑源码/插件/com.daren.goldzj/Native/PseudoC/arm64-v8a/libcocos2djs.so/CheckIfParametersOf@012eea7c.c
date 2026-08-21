
/* v8::internal::compiler::CheckIfParametersOf(v8::internal::compiler::Operator const*) */

Operator * v8::internal::compiler::CheckIfParametersOf(Operator *param_1)

{
  if (*(short *)(param_1 + 0x10) == 0xd5) {
    return param_1 + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","op->opcode() == IrOpcode::kCheckIf");
}


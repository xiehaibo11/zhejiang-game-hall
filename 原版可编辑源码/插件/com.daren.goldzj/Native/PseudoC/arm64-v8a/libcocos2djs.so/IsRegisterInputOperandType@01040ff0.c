
/* v8::internal::interpreter::Bytecodes::IsRegisterInputOperandType(v8::internal::interpreter::OperandType)
    */

bool v8::internal::interpreter::Bytecodes::IsRegisterInputOperandType(char param_1)

{
  return (byte)(param_1 - 9U) < 3;
}


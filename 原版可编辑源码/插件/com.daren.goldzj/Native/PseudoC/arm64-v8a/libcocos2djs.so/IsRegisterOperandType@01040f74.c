
/* v8::internal::interpreter::Bytecodes::IsRegisterOperandType(v8::internal::interpreter::OperandType)
    */

bool v8::internal::interpreter::Bytecodes::IsRegisterOperandType(char param_1)

{
  return (byte)(param_1 - 9U) < 7;
}



/* v8::internal::interpreter::Bytecodes::IsRegisterOutputOperandType(v8::internal::interpreter::OperandType)
    */

bool v8::internal::interpreter::Bytecodes::IsRegisterOutputOperandType(uint param_1)

{
  return (param_1 & 0xfc) == 0xc;
}



/* v8::internal::interpreter::Bytecodes::IsRegisterListOperandType(v8::internal::interpreter::OperandType)
    */

undefined8 v8::internal::interpreter::Bytecodes::IsRegisterListOperandType(char param_1)

{
  if ((param_1 != '\n') && (param_1 != '\r')) {
    return 0;
  }
  return 1;
}


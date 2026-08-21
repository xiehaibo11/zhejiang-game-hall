
/* v8::internal::interpreter::Bytecodes::IsDebugBreak(v8::internal::interpreter::Bytecode) */

bool v8::internal::interpreter::Bytecodes::IsDebugBreak(char param_1)

{
  return (byte)(param_1 - 2U) < 9;
}



/* v8::internal::interpreter::Interpreter::GetDispatchTableIndex(v8::internal::interpreter::Bytecode,
   v8::internal::interpreter::OperandScale) */

ulong v8::internal::interpreter::Interpreter::GetDispatchTableIndex(ulong param_1,uint param_2)

{
  return param_1 & 0xff | (ulong)(param_2 >> 1 & 0x7f) << 8;
}


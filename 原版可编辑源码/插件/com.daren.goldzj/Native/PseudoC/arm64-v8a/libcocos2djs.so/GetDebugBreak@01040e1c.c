
/* v8::internal::interpreter::Bytecodes::GetDebugBreak(v8::internal::interpreter::Bytecode) */

ulong v8::internal::interpreter::Bytecodes::GetDebugBreak(byte param_1)

{
  if (param_1 == 0) {
    return 2;
  }
  if (param_1 == 1) {
    return 3;
  }
  if (*(int *)(kBytecodeSizes + (ulong)param_1 * 4) - 1U < 6) {
    return 0xa0807060504 >> (((ulong)(*(int *)(kBytecodeSizes + (ulong)param_1 * 4) - 1U) & 7) << 3)
    ;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


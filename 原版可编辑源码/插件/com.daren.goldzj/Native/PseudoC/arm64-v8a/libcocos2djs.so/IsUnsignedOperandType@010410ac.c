
/* v8::internal::interpreter::Bytecodes::IsUnsignedOperandType(v8::internal::interpreter::OperandType)
    */

uint v8::internal::interpreter::Bytecodes::IsUnsignedOperandType(uint param_1)

{
  if ((param_1 & 0xff) < 0x10) {
    return 0xfeU >> (ulong)(param_1 & 0x1f) & 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


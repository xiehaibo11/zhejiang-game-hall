
/* v8::internal::interpreter::Bytecodes::GetJumpWithoutToBoolean(v8::internal::interpreter::Bytecode)
    */

uint v8::internal::interpreter::Bytecodes::GetJumpWithoutToBoolean(char param_1)

{
  if ((byte)(param_1 + 0x6bU) < 4) {
    return 0x9a999392 >> (ulong)(((byte)(param_1 + 0x6bU) & 3) << 3);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


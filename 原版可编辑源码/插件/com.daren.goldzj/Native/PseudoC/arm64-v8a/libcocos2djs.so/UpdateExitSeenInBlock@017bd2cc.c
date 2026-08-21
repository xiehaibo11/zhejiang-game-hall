
/* v8::internal::interpreter::BytecodeArrayWriter::UpdateExitSeenInBlock(v8::internal::interpreter::Bytecode)
    */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::UpdateExitSeenInBlock
          (BytecodeArrayWriter *this,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff) - 0x8b;
  if ((uVar1 < 0x2b) && ((1L << ((ulong)uVar1 & 0x3f) & 0x421c0000003U) != 0)) {
    this[0x8a] = (BytecodeArrayWriter)0x1;
  }
  return;
}


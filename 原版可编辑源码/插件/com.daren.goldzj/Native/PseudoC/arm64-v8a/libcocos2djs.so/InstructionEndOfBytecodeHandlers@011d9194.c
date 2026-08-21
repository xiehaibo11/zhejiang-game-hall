
/* v8::internal::EmbeddedData::InstructionEndOfBytecodeHandlers() const */

long __thiscall v8::internal::EmbeddedData::InstructionEndOfBytecodeHandlers(EmbeddedData *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  return lVar1 + (ulong)*(uint *)(lVar1 + 0x2de8) + (ulong)*(uint *)(lVar1 + 0x2dec) + 0x2e00;
}


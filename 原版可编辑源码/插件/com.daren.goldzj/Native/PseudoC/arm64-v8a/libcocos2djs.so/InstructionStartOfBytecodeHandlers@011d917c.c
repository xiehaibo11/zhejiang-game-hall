
/* v8::internal::EmbeddedData::InstructionStartOfBytecodeHandlers() const */

long __thiscall v8::internal::EmbeddedData::InstructionStartOfBytecodeHandlers(EmbeddedData *this)

{
  return *(long *)this + (ulong)*(uint *)(*(long *)this + 0x1ed8) + 0x2e00;
}


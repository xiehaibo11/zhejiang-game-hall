
/* v8::internal::EmbeddedData::InstructionStartOfBuiltin(int) const */

long __thiscall
v8::internal::EmbeddedData::InstructionStartOfBuiltin(EmbeddedData *this,int param_1)

{
  return *(long *)this + (ulong)*(uint *)(*(long *)this + (long)param_1 * 8 + 0x10) + 0x2e00;
}



/* v8::internal::EmbeddedData::InstructionSizeOfBuiltin(int) const */

undefined4 __thiscall
v8::internal::EmbeddedData::InstructionSizeOfBuiltin(EmbeddedData *this,int param_1)

{
  return *(undefined4 *)(*(long *)this + (long)param_1 * 8 + 0x14);
}


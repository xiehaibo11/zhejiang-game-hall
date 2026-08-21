
/* v8::internal::compiler::InstructionSelector::CanUseRootsRegister() const */

byte __thiscall
v8::internal::compiler::InstructionSelector::CanUseRootsRegister(InstructionSelector *this)

{
  return *(byte *)(**(long **)(this + 8) + 0x48) >> 2 & 1;
}


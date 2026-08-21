
/* v8::internal::compiler::InstructionSelector::IsDefined(v8::internal::compiler::Node*) const */

uint __thiscall
v8::internal::compiler::InstructionSelector::IsDefined(InstructionSelector *this,Node *param_1)

{
  return (uint)(*(ulong *)(*(long *)(this + 0xb8) +
                          (((ulong)*(uint *)(param_1 + 0x14) & 0xffffc0) >> 3)) >>
               ((ulong)*(uint *)(param_1 + 0x14) & 0x3f)) & 1;
}


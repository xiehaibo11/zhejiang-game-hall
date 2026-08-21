
/* v8::internal::compiler::InstructionSelector::IsUsed(v8::internal::compiler::Node*) const */

uint __thiscall
v8::internal::compiler::InstructionSelector::IsUsed(InstructionSelector *this,Node *param_1)

{
  if ((*(short *)(*(long *)param_1 + 0x10) != 0x38) &&
     ((~*(byte *)(*(long *)param_1 + 0x12) & 0x70) == 0)) {
    return (uint)(*(ulong *)(*(long *)(this + 0xd8) +
                            (((ulong)*(uint *)(param_1 + 0x14) & 0xffffc0) >> 3)) >>
                 ((ulong)*(uint *)(param_1 + 0x14) & 0x3f)) & 1;
  }
  return 1;
}


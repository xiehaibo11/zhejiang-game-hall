
/* v8::internal::compiler::InstructionSelector::MarkAsWord32(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::MarkAsWord32(InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  int iVar2;
  InstructionSequence *this_00;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  this_00 = *(InstructionSequence **)(this + 0x10);
  iVar2 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4);
  if (iVar2 == -1) {
    iVar2 = InstructionSequence::NextVirtualRegister(this_00);
    *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = iVar2;
  }
  InstructionSequence::MarkAsRepresentation(this_00,4,iVar2);
  return;
}



/* v8::internal::compiler::InstructionSelector::MarkAsRepresentation(v8::internal::MachineRepresentation,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::MarkAsRepresentation
          (InstructionSelector *this,undefined4 param_2,long param_3)

{
  int iVar1;
  InstructionSequence *this_00;
  ulong uVar2;
  
  this_00 = *(InstructionSequence **)(this + 0x10);
  uVar2 = (ulong)*(uint *)(param_3 + 0x14) & 0xffffff;
  iVar1 = *(int *)(*(long *)(this + 0x118) + uVar2 * 4);
  if (iVar1 == -1) {
    iVar1 = InstructionSequence::NextVirtualRegister(this_00);
    *(int *)(*(long *)(this + 0x118) + uVar2 * 4) = iVar1;
  }
  InstructionSequence::MarkAsRepresentation(this_00,param_2,iVar1);
  return;
}


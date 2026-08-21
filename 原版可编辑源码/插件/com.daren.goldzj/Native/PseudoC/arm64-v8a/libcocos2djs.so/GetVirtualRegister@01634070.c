
/* v8::internal::compiler::InstructionSelector::GetVirtualRegister(v8::internal::compiler::Node
   const*) */

void __thiscall
v8::internal::compiler::InstructionSelector::GetVirtualRegister
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (*(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) == -1) {
    uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(undefined4 *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = uVar2;
  }
  return;
}


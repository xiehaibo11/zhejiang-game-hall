
/* v8::internal::compiler::InstructionSelector::SetRename(v8::internal::compiler::Node const*,
   v8::internal::compiler::Node const*) */

void __thiscall
v8::internal::compiler::InstructionSelector::SetRename
          (InstructionSelector *this,Node *param_1,Node *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int local_34;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar2 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4);
  if (iVar2 == -1) {
    iVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = iVar2;
  }
  uVar4 = *(long *)(this + 0x140) - *(long *)(this + 0x138) >> 2;
  if (uVar4 <= (ulong)(long)iVar2) {
    uVar5 = (ulong)(iVar2 + 1);
    local_34 = -1;
    if (uVar4 < uVar5) {
      std::__ndk1::vector<int,v8::internal::ZoneAllocator<int>>::__append
                ((vector<int,v8::internal::ZoneAllocator<int>> *)(this + 0x138),uVar5 - uVar4,
                 &local_34);
    }
    else if (uVar4 != uVar5) {
      *(ulong *)(this + 0x140) = *(long *)(this + 0x138) + uVar5 * 4;
    }
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  iVar3 = *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4);
  if (iVar3 == -1) {
    iVar3 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(int *)(*(long *)(this + 0x118) + ((ulong)uVar1 & 0xffffff) * 4) = iVar3;
  }
  *(int *)(*(long *)(this + 0x138) + (long)iVar2 * 4) = iVar3;
  return;
}


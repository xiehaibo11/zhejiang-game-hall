
/* v8::internal::compiler::InstructionSelector::MarkPairProjectionsAsWord32(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::MarkPairProjectionsAsWord32
          (InstructionSelector *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  InstructionSequence *pIVar3;
  ulong uVar4;
  
  lVar2 = NodeProperties::FindProjection(param_1,0);
  if (lVar2 != 0) {
    pIVar3 = *(InstructionSequence **)(this + 0x10);
    uVar4 = (ulong)*(uint *)(lVar2 + 0x14) & 0xffffff;
    iVar1 = *(int *)(*(long *)(this + 0x118) + uVar4 * 4);
    if (iVar1 == -1) {
      iVar1 = InstructionSequence::NextVirtualRegister(pIVar3);
      *(int *)(*(long *)(this + 0x118) + uVar4 * 4) = iVar1;
    }
    InstructionSequence::MarkAsRepresentation(pIVar3,4,iVar1);
  }
  lVar2 = NodeProperties::FindProjection(param_1,1);
  if (lVar2 != 0) {
    pIVar3 = *(InstructionSequence **)(this + 0x10);
    uVar4 = (ulong)*(uint *)(lVar2 + 0x14) & 0xffffff;
    iVar1 = *(int *)(*(long *)(this + 0x118) + uVar4 * 4);
    if (iVar1 == -1) {
      iVar1 = InstructionSequence::NextVirtualRegister(pIVar3);
      *(int *)(*(long *)(this + 0x118) + uVar4 * 4) = iVar1;
    }
    InstructionSequence::MarkAsRepresentation(pIVar3,4,iVar1);
    return;
  }
  return;
}


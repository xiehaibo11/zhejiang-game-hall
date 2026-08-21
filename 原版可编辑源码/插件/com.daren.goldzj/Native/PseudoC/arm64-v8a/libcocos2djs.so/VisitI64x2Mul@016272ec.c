
/* v8::internal::compiler::InstructionSelector::VisitI64x2Mul(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitI64x2Mul(InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  Node *pNVar4;
  Node *pNVar5;
  ulong local_38;
  
  uVar1 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
  InstructionSequence::MarkAsRepresentation(*(InstructionSequence **)(this + 0x10),0xd);
  local_38 = (uVar1 & 0xffffffff) << 3 | 0x5800000001;
  uVar1 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  pNVar4 = param_1 + 0x20;
  pNVar5 = pNVar4;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  uVar2 = GetVirtualRegister(this,pNVar5);
  MarkAsUsed(this,pNVar5);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar4 + 8);
  uVar3 = GetVirtualRegister(this,pNVar4);
  MarkAsUsed(this,pNVar4);
  Emit(this,0x12d,(uVar1 & 0xffffffff) << 3 | 0xd800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
       (uVar3 & 0xffffffff) << 3 | 0x5800000001,1,&local_38);
  return;
}


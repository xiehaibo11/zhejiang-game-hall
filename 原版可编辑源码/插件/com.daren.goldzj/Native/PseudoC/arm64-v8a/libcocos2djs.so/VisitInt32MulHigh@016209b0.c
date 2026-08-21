
/* v8::internal::compiler::InstructionSelector::VisitInt32MulHigh(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitInt32MulHigh
          (InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  InstructionSequence *this_00;
  Node *pNVar5;
  Node *pNVar6;
  Constant aCStack_60 [16];
  
  uVar1 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
  pNVar6 = param_1 + 0x20;
  uVar1 = (uVar1 & 0xffffffff) << 3 | 0x5800000001;
  pNVar5 = pNVar6;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  uVar2 = GetVirtualRegister(this,pNVar5);
  MarkAsUsed(this,pNVar5);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)(pNVar6 + 8);
  uVar3 = GetVirtualRegister(this,pNVar6);
  MarkAsUsed(this,pNVar6);
  Emit(this,0x7a,uVar1,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
       (uVar3 & 0xffffffff) << 3 | 0x5800000001,0,0);
  uVar2 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  this_00 = *(InstructionSequence **)(this + 0x10);
  Constant::Constant(aCStack_60,0x20);
  uVar4 = InstructionSequence::AddImmediate(this_00,aCStack_60);
  Emit(this,0x90,(uVar2 & 0xffffffff) << 3 | 0xd800000001,uVar1,uVar4,0,0);
  return;
}


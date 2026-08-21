
/* v8::internal::compiler::InstructionSelector::VisitFloat64InsertLowWord32(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat64InsertLowWord32
          (InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  InstructionSequence *pIVar9;
  Constant aCStack_70 [16];
  
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar8 = *(Node **)pNVar6;
  pNVar6 = *(Node **)(pNVar6 + 8);
  if ((*(short *)(*(long *)pNVar8 + 0x10) == 0x1e0) &&
     (uVar1 = CanCover(this,param_1,pNVar8), (uVar1 & 1) != 0)) {
    pNVar7 = pNVar8 + 0x20;
    if ((~*(uint *)(pNVar8 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    pNVar8 = *(Node **)(pNVar7 + 8);
    uVar1 = GetVirtualRegister(this,pNVar6);
    MarkAsDefined(this,pNVar6);
    uVar2 = GetVirtualRegister(this,pNVar6);
    MarkAsUsed(this,pNVar6);
    uVar3 = GetVirtualRegister(this,pNVar8);
    MarkAsUsed(this,pNVar8);
    pIVar9 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant(aCStack_70,0x20);
    uVar4 = InstructionSequence::AddImmediate(pIVar9,aCStack_70);
    pIVar9 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant(aCStack_70,0x20);
    uVar5 = InstructionSequence::AddImmediate(pIVar9,aCStack_70);
    Emit(this,0x9f,(uVar1 & 0xffffffff) << 3 | 0xf800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001
         ,(uVar3 & 0xffffffff) << 3 | 0x5800000001,uVar4,uVar5,0,0);
    uVar1 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar2 = GetVirtualRegister(this,pNVar6);
    MarkAsUsed(this,pNVar6);
    Emit(this,0xe3,(uVar1 & 0xffffffff) << 3 | 0xd800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001
         ,0,0);
    return;
  }
  uVar1 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  uVar2 = GetVirtualRegister(this,pNVar8);
  MarkAsUsed(this,pNVar8);
  uVar3 = GetVirtualRegister(this,pNVar6);
  MarkAsUsed(this,pNVar6);
  Emit(this,0xe1,(uVar1 & 0xffffffff) << 3 | 0xf800000001,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
       (uVar3 & 0xffffffff) << 3 | 0x5800000001,0,0);
  return;
}


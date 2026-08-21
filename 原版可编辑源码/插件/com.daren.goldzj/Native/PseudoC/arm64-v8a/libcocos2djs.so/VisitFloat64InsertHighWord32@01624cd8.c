
/* v8::internal::compiler::InstructionSelector::VisitFloat64InsertHighWord32(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat64InsertHighWord32
          (InstructionSelector *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  InstructionSequence *pIVar8;
  Node *pNVar9;
  Constant aCStack_70 [16];
  
  pNVar7 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  pNVar1 = *(Node **)pNVar7;
  pNVar7 = *(Node **)(pNVar7 + 8);
  if ((*(short *)(*(long *)pNVar1 + 0x10) == 0x1df) &&
     (uVar2 = CanCover(this,param_1,pNVar1), (uVar2 & 1) != 0)) {
    pNVar9 = pNVar1 + 0x20;
    if ((~*(uint *)(pNVar1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    pNVar9 = *(Node **)(pNVar9 + 8);
    uVar2 = GetVirtualRegister(this,pNVar1);
    MarkAsDefined(this,pNVar1);
    uVar3 = GetVirtualRegister(this,pNVar9);
    MarkAsUsed(this,pNVar9);
    uVar4 = GetVirtualRegister(this,pNVar7);
    MarkAsUsed(this,pNVar7);
    pIVar8 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant(aCStack_70,0x20);
    uVar5 = InstructionSequence::AddImmediate(pIVar8,aCStack_70);
    pIVar8 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant(aCStack_70,0x20);
    uVar6 = InstructionSequence::AddImmediate(pIVar8,aCStack_70);
    Emit(this,0x9f,(uVar2 & 0xffffffff) << 3 | 0xf800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001
         ,(uVar4 & 0xffffffff) << 3 | 0x5800000001,uVar5,uVar6,0,0);
    uVar2 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar3 = GetVirtualRegister(this,pNVar1);
    MarkAsUsed(this,pNVar1);
    Emit(this,0xe3,(uVar2 & 0xffffffff) << 3 | 0xd800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001
         ,0,0);
    return;
  }
  uVar2 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  uVar3 = GetVirtualRegister(this,pNVar1);
  MarkAsUsed(this,pNVar1);
  uVar4 = GetVirtualRegister(this,pNVar7);
  MarkAsUsed(this,pNVar7);
  Emit(this,0xe2,(uVar2 & 0xffffffff) << 3 | 0xf800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001,
       (uVar4 & 0xffffffff) << 3 | 0x5800000001,0,0);
  return;
}


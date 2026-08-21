
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStaInArrayLiteral() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStaInArrayLiteral(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  int iVar1;
  undefined4 uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  ulong uVar7;
  undefined8 uVar8;
  Environment *pEVar9;
  long lVar10;
  int local_88 [2];
  Node *local_80;
  undefined8 uStack_78;
  Node *local_70;
  FeedbackSource local_68 [8];
  Node *local_60;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  PrepareEagerCheckpoint(this);
  pEVar9 = *(Environment **)(this + 0xa8);
  if ((ulong)(*(long *)(pEVar9 + 0x30) - *(long *)(pEVar9 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(pEVar9 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = *(undefined8 *)(*(long *)(pEVar9 + 0x28) + (long)*(int *)(pEVar9 + 0x5c) * 8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar9,uVar2);
  pEVar9 = *(Environment **)(this + 0xa8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar4 = Environment::LookupRegister(pEVar9,uVar2);
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_88,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar2);
  local_60 = local_80;
  pOVar5 = (Operator *)
           JSOperatorBuilder::StoreInArrayLiteral
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),local_68);
  JSTypeHintLowering::ReduceStoreKeyedOperation
            (local_88,this + 0x50,pOVar5,pNVar3,uVar4,uVar8,
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),(ulong)local_60 & 0xffffffff);
  if (local_88[0] == 2) {
    MergeControlToLeaveFunction(this,local_70);
    if (local_88[0] == 2) {
      return;
    }
    pNVar6 = local_80;
    if (local_88[0] == 1) goto LAB_01674970;
  }
  else if (local_88[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_78;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_70;
    pNVar6 = local_80;
    goto LAB_01674970;
  }
  local_58 = pNVar3;
  uStack_50 = uVar4;
  local_48 = uVar8;
  pNVar6 = (Node *)MakeNode(this,pOVar5,3,&local_58,false);
LAB_01674970:
  lVar10 = **(long **)(this + 0xa8);
  uVar7 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar6);
  if ((uVar7 & 1) != 0) {
    iVar1 = *(int *)(lVar10 + 0x90);
    uVar4 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar1);
    pNVar3 = (Node *)Environment::Checkpoint
                               (*(Environment **)(lVar10 + 0xa8),iVar1,0xffffffffffffffff,uVar4);
    NodeProperties::ReplaceFrameStateInput(pNVar6,pNVar3);
  }
  return;
}


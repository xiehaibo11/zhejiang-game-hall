
/* v8::internal::compiler::BytecodeGraphBuilder::VisitStaDataPropertyInLiteral() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitStaDataPropertyInLiteral
          (BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  int iVar2;
  Node *pNVar3;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  long lVar7;
  Environment *pEVar8;
  undefined8 uVar9;
  int local_90 [2];
  Node *local_88;
  undefined8 uStack_80;
  Node *local_78;
  Node *local_70;
  ulong local_68;
  Node *local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  PrepareEagerCheckpoint(this);
  pEVar8 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar8,uVar1);
  pEVar8 = *(Environment **)(this + 0xa8);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar4 = Environment::LookupRegister(pEVar8,uVar1);
  lVar7 = *(long *)(this + 0xa8);
  if ((ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(lVar7 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + (long)*(int *)(lVar7 + 0x5c) * 8);
  iVar2 = interpreter::BytecodeArrayAccessor::GetFlagOperand(this_00,2);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,3);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)&local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar1);
  local_70 = local_60;
  local_68 = uStack_58;
  pOVar5 = (Operator *)
           JSOperatorBuilder::StoreDataPropertyInLiteral
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                      (FeedbackSource *)&local_70);
  JSTypeHintLowering::ReduceStoreKeyedOperation
            (local_90,this + 0x50,pOVar5,pNVar3,uVar4,uVar9,
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),local_68 & 0xffffffff);
  if (local_90[0] == 2) {
    MergeControlToLeaveFunction(this,local_78);
    if (local_90[0] == 2) {
      return;
    }
    pNVar6 = local_88;
    if (local_90[0] == 1) goto LAB_01674b48;
  }
  else if (local_90[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_80;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_78;
    pNVar6 = local_88;
    goto LAB_01674b48;
  }
  uStack_48 = JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)iVar2);
  local_60 = pNVar3;
  uStack_58 = uVar4;
  local_50 = uVar9;
  pNVar6 = (Node *)MakeNode(this,pOVar5,4,&local_60,false);
LAB_01674b48:
  lVar7 = **(long **)(this + 0xa8);
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar6);
  if ((uVar4 & 1) != 0) {
    iVar2 = *(int *)(lVar7 + 0x90);
    uVar9 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar7 + 0xa0),iVar2);
    pNVar3 = (Node *)Environment::Checkpoint
                               (*(Environment **)(lVar7 + 0xa8),iVar2,0xffffffffffffffff,uVar9);
    NodeProperties::ReplaceFrameStateInput(pNVar6,pNVar3);
  }
  return;
}


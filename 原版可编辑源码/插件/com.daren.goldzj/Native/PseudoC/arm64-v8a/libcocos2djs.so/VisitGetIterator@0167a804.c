
/* v8::internal::compiler::BytecodeGraphBuilder::VisitGetIterator() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitGetIterator(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  int iVar1;
  undefined4 uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  ulong uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Environment *pEVar8;
  long *plVar9;
  long lVar10;
  int local_78 [2];
  ulong uStack_70;
  undefined8 local_68;
  Node *local_60;
  FeedbackSource local_58 [8];
  ulong local_50;
  FeedbackSource local_48 [8];
  ulong local_40;
  Node *local_38;
  
  PrepareEagerCheckpoint(this);
  pEVar8 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar8,uVar2);
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_78,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar2);
  local_40 = uStack_70;
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_78,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar2);
  local_50 = uStack_70;
  pOVar4 = (Operator *)
           JSOperatorBuilder::GetIterator
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),local_48,local_58);
  JSTypeHintLowering::ReduceGetIteratorOperation
            (local_78,this + 0x50,pOVar4,pNVar3,*(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),local_40 & 0xffffffff,
             local_50 & 0xffffffff);
  if (local_78[0] == 2) {
    MergeControlToLeaveFunction(this,local_60);
    if (local_78[0] == 2) {
      return;
    }
  }
  else if (local_78[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = local_68;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_60;
  }
  local_38 = pNVar3;
  pNVar3 = (Node *)MakeNode(this,pOVar4,1,&local_38,false);
  plVar9 = *(long **)(this + 0xa8);
  lVar10 = *plVar9;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(lVar10 + 0x90);
    uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar1);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar10 + 0xa8),iVar1,0,uVar6);
    NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar7);
  }
  if ((ulong)(long)*(int *)((long)plVar9 + 0x5c) < (ulong)(plVar9[6] - plVar9[5] >> 3)) {
    *(Node **)(plVar9[5] + (long)*(int *)((long)plVar9 + 0x5c) * 8) = pNVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


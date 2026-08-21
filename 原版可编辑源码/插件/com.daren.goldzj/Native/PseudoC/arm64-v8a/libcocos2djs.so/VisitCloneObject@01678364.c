
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCloneObject() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCloneObject(BytecodeGraphBuilder *this)

{
  BytecodeArrayAccessor *this_00;
  undefined4 uVar1;
  int iVar2;
  Node *pNVar3;
  Operator *pOVar4;
  ulong uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Environment *pEVar8;
  JSOperatorBuilder *this_01;
  long *plVar9;
  long lVar10;
  Node *local_40 [2];
  
  PrepareEagerCheckpoint(this);
  pEVar8 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar8,uVar1);
  iVar2 = interpreter::BytecodeArrayAccessor::GetFlagOperand(this_00,1);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,2);
  this_01 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_40,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar1);
  pOVar4 = (Operator *)JSOperatorBuilder::CloneObject(this_01,(FeedbackSource *)local_40,iVar2);
  local_40[0] = pNVar3;
  pNVar3 = (Node *)MakeNode(this,pOVar4,1,local_40,false);
  plVar9 = *(long **)(this + 0xa8);
  lVar10 = *plVar9;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar3);
  if ((uVar5 & 1) != 0) {
    iVar2 = *(int *)(lVar10 + 0x90);
    uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar2);
    pNVar7 = (Node *)Environment::Checkpoint(*(Environment **)(lVar10 + 0xa8),iVar2,0,uVar6);
    NodeProperties::ReplaceFrameStateInput(pNVar3,pNVar7);
  }
  if ((ulong)(long)*(int *)((long)plVar9 + 0x5c) < (ulong)(plVar9[6] - plVar9[5] >> 3)) {
    *(Node **)(plVar9[5] + (long)*(int *)((long)plVar9 + 0x5c) * 8) = pNVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


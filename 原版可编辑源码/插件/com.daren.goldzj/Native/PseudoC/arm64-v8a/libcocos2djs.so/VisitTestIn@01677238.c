
/* v8::internal::compiler::BytecodeGraphBuilder::VisitTestIn() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitTestIn(BytecodeGraphBuilder *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  ulong uVar5;
  Node *pNVar6;
  Environment *pEVar7;
  long *plVar8;
  Node *pNVar9;
  long lVar10;
  Node *local_50;
  undefined8 uStack_48;
  Node *local_40;
  undefined8 uStack_38;
  
  PrepareEagerCheckpoint(this);
  pEVar7 = *(Environment **)(this + 0xa8);
  if ((ulong)(long)*(int *)(pEVar7 + 0x5c) <
      (ulong)(*(long *)(pEVar7 + 0x30) - *(long *)(pEVar7 + 0x28) >> 3)) {
    pNVar9 = *(Node **)(*(long *)(pEVar7 + 0x28) + (long)*(int *)(pEVar7 + 0x5c) * 8);
    uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                      ((BytecodeArrayAccessor *)(this + 0x88),0);
    uVar3 = Environment::LookupRegister(pEVar7,uVar2);
    uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                      ((BytecodeArrayAccessor *)(this + 0x88),1);
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)&local_40,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40)
               ,uVar2);
    local_50 = local_40;
    uStack_48 = uStack_38;
    pOVar4 = (Operator *)
             JSOperatorBuilder::HasProperty
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                        (FeedbackSource *)&local_50);
    local_40 = pNVar9;
    uStack_38 = uVar3;
    pNVar9 = (Node *)MakeNode(this,pOVar4,2,&local_40,false);
    plVar8 = *(long **)(this + 0xa8);
    lVar10 = *plVar8;
    uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar9);
    if ((uVar5 & 1) != 0) {
      iVar1 = *(int *)(lVar10 + 0x90);
      uVar3 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar1);
      pNVar6 = (Node *)Environment::Checkpoint(*(Environment **)(lVar10 + 0xa8),iVar1,0,uVar3);
      NodeProperties::ReplaceFrameStateInput(pNVar9,pNVar6);
    }
    if ((ulong)(long)*(int *)((long)plVar8 + 0x5c) < (ulong)(plVar8[6] - plVar8[5] >> 3)) {
      *(Node **)(plVar8[5] + (long)*(int *)((long)plVar8 + 0x5c) * 8) = pNVar9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


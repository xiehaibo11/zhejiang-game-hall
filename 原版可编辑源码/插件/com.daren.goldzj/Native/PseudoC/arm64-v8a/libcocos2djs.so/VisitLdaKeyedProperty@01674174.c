
/* v8::internal::compiler::BytecodeGraphBuilder::VisitLdaKeyedProperty() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitLdaKeyedProperty(BytecodeGraphBuilder *this)

{
  int iVar1;
  undefined4 uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  Node *pNVar5;
  ulong uVar6;
  undefined8 uVar7;
  Environment *pEVar8;
  long *plVar9;
  long lVar10;
  int local_70 [2];
  Node *local_68;
  undefined8 uStack_60;
  Node *local_58;
  FeedbackSource local_50 [8];
  Node *local_48;
  Node *local_40;
  undefined8 uStack_38;
  
  PrepareEagerCheckpoint(this);
  pEVar8 = *(Environment **)(this + 0xa8);
  if ((ulong)(*(long *)(pEVar8 + 0x30) - *(long *)(pEVar8 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(pEVar8 + 0x5c)) goto LAB_01674310;
  uVar7 = *(undefined8 *)(*(long *)(pEVar8 + 0x28) + (long)*(int *)(pEVar8 + 0x5c) * 8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pNVar3 = (Node *)Environment::LookupRegister(pEVar8,uVar2);
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_70,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
             uVar2);
  local_48 = local_68;
  pOVar4 = (Operator *)
           JSOperatorBuilder::LoadProperty
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),local_50);
  JSTypeHintLowering::ReduceLoadKeyedOperation
            (local_70,this + 0x50,pOVar4,pNVar3,uVar7,*(undefined8 *)(*(long *)(this + 0xa8) + 0x20)
             ,*(undefined8 *)(*(long *)(this + 0xa8) + 0x18),(ulong)local_48 & 0xffffffff);
  if (local_70[0] == 2) {
    MergeControlToLeaveFunction(this,local_58);
    if (local_70[0] == 2) {
      return;
    }
    pNVar5 = local_68;
    if (local_70[0] != 1) goto LAB_0167427c;
  }
  else if (local_70[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_60;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_58;
    pNVar5 = local_68;
  }
  else {
LAB_0167427c:
    local_40 = pNVar3;
    uStack_38 = uVar7;
    pNVar5 = (Node *)MakeNode(this,pOVar4,2,&local_40,false);
  }
  plVar9 = *(long **)(this + 0xa8);
  lVar10 = *plVar9;
  uVar6 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar5);
  if ((uVar6 & 1) != 0) {
    iVar1 = *(int *)(lVar10 + 0x90);
    uVar7 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar10 + 0xa0),iVar1);
    pNVar3 = (Node *)Environment::Checkpoint(*(Environment **)(lVar10 + 0xa8),iVar1,0,uVar7);
    NodeProperties::ReplaceFrameStateInput(pNVar5,pNVar3);
  }
  if ((ulong)(long)*(int *)((long)plVar9 + 0x5c) < (ulong)(plVar9[6] - plVar9[5] >> 3)) {
    *(Node **)(plVar9[5] + (long)*(int *)((long)plVar9 + 0x5c) * 8) = pNVar5;
    return;
  }
LAB_01674310:
                    /* WARNING: Subroutine does not return */
  abort();
}


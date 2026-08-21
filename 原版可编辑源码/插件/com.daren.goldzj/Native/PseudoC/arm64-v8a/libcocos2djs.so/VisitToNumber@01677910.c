
/* v8::internal::compiler::BytecodeGraphBuilder::VisitToNumber() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitToNumber(BytecodeGraphBuilder *this)

{
  int iVar1;
  undefined4 uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  Node *pNVar8;
  long *plVar9;
  int local_58 [2];
  Node *local_50;
  undefined8 uStack_48;
  Node *local_40;
  Node *local_38;
  
  PrepareEagerCheckpoint(this);
  lVar7 = *(long *)(this + 0xa8);
  if ((ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(lVar7 + 0x5c)) goto LAB_01677a5c;
  pNVar8 = *(Node **)(*(long *)(lVar7 + 0x28) + (long)*(int *)(lVar7 + 0x5c) * 8);
  uVar2 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  JSTypeHintLowering::ReduceToNumberOperation
            (local_58,this + 0x50,pNVar8,*(undefined8 *)(*(long *)(this + 0xa8) + 0x20),
             *(undefined8 *)(*(long *)(this + 0xa8) + 0x18),uVar2);
  if (local_58[0] == 2) {
    MergeControlToLeaveFunction(this,local_40);
    pNVar4 = local_50;
    if (local_58[0] != 1) goto LAB_016779bc;
  }
  else if (local_58[0] == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = uStack_48;
    *(Node **)(*(long *)(this + 0xa8) + 0x18) = local_40;
    pNVar4 = local_50;
  }
  else {
LAB_016779bc:
    pOVar3 = (Operator *)
             JSOperatorBuilder::ToNumber(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    local_38 = pNVar8;
    pNVar4 = (Node *)MakeNode(this,pOVar3,1,&local_38,false);
  }
  plVar9 = *(long **)(this + 0xa8);
  lVar7 = *plVar9;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar4);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(lVar7 + 0x90);
    uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar7 + 0xa0),iVar1);
    pNVar8 = (Node *)Environment::Checkpoint(*(Environment **)(lVar7 + 0xa8),iVar1,0,uVar6);
    NodeProperties::ReplaceFrameStateInput(pNVar4,pNVar8);
  }
  if ((ulong)(long)*(int *)((long)plVar9 + 0x5c) < (ulong)(plVar9[6] - plVar9[5] >> 3)) {
    *(Node **)(plVar9[5] + (long)*(int *)((long)plVar9 + 0x5c) * 8) = pNVar4;
    return;
  }
LAB_01677a5c:
                    /* WARNING: Subroutine does not return */
  abort();
}


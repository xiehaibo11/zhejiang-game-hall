
/* v8::internal::compiler::BytecodeGraphBuilder::VisitThrow() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitThrow(BytecodeGraphBuilder *this)

{
  int iVar1;
  BytecodeLivenessState *pBVar2;
  Operator *pOVar3;
  ulong uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  long lVar7;
  Node *pNVar8;
  long *plVar9;
  Node *local_28;
  
  pBVar2 = (BytecodeLivenessState *)
           BytecodeAnalysis::GetInLivenessFor
                     (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
  BuildLoopExitsUntilLoop(this,-1,pBVar2);
  lVar7 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar7 + 0x5c) <
      (ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3)) {
    pNVar8 = *(Node **)(*(long *)(lVar7 + 0x28) + (long)*(int *)(lVar7 + 0x5c) * 8);
    pOVar3 = (Operator *)
             JSOperatorBuilder::CallRuntime
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0xa4);
    local_28 = pNVar8;
    pNVar8 = (Node *)MakeNode(this,pOVar3,1,&local_28,false);
    plVar9 = *(long **)(this + 0xa8);
    lVar7 = *plVar9;
    uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar8);
    if ((uVar4 & 1) != 0) {
      iVar1 = *(int *)(lVar7 + 0x90);
      uVar5 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar7 + 0xa0),iVar1);
      pNVar6 = (Node *)Environment::Checkpoint(*(Environment **)(lVar7 + 0xa8),iVar1,0,uVar5);
      NodeProperties::ReplaceFrameStateInput(pNVar8,pNVar6);
    }
    if ((ulong)(long)*(int *)((long)plVar9 + 0x5c) < (ulong)(plVar9[6] - plVar9[5] >> 3)) {
      *(Node **)(plVar9[5] + (long)*(int *)((long)plVar9 + 0x5c) * 8) = pNVar8;
      pOVar3 = (Operator *)
               CommonOperatorBuilder::Throw(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8))
      ;
      pNVar8 = (Node *)MakeNode(this,pOVar3,0,(Node **)0x0,false);
      MergeControlToLeaveFunction(this,pNVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


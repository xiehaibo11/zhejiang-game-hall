
/* v8::internal::compiler::BytecodeGraphBuilder::VisitReThrow() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitReThrow(BytecodeGraphBuilder *this)

{
  BytecodeLivenessState *pBVar1;
  Operator *pOVar2;
  long lVar3;
  Node *pNVar4;
  Node *local_28;
  
  pBVar1 = (BytecodeLivenessState *)
           BytecodeAnalysis::GetInLivenessFor
                     (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
  BuildLoopExitsUntilLoop(this,-1,pBVar1);
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    pNVar4 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
    pOVar2 = (Operator *)
             JSOperatorBuilder::CallRuntime
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0x9f);
    local_28 = pNVar4;
    MakeNode(this,pOVar2,1,&local_28,false);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Throw(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
    pNVar4 = (Node *)MakeNode(this,pOVar2,0,(Node **)0x0,false);
    MergeControlToLeaveFunction(this,pNVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


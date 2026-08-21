
/* v8::internal::compiler::BytecodeGraphBuilder::VisitAbort() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::VisitAbort(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  BytecodeLivenessState *pBVar2;
  Operator *pOVar3;
  Node *pNVar4;
  
  pBVar2 = (BytecodeLivenessState *)
           BytecodeAnalysis::GetInLivenessFor
                     (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
  BuildLoopExitsUntilLoop(this,-1,pBVar2);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::RuntimeAbort
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178),uVar1);
  MakeNode(this,pOVar3,0,(Node **)0x0,false);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Throw(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  pNVar4 = (Node *)MakeNode(this,pOVar3,0,(Node **)0x0,false);
  MergeControlToLeaveFunction(this,pNVar4);
  return;
}


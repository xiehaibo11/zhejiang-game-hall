
/* v8::internal::compiler::BytecodeGraphBuilder::VisitReturn() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitReturn(BytecodeGraphBuilder *this)

{
  BytecodeLivenessState *pBVar1;
  
  pBVar1 = (BytecodeLivenessState *)
           BytecodeAnalysis::GetInLivenessFor
                     (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
  BuildReturn(this,pBVar1);
  return;
}


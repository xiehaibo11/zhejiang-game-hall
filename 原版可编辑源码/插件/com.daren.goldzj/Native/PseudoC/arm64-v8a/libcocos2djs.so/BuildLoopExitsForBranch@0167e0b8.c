
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLoopExitsForBranch(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildLoopExitsForBranch
          (BytecodeGraphBuilder *this,int param_1)

{
  int iVar1;
  BytecodeLivenessState *pBVar2;
  
  if (*(int *)(this + 0x90) < param_1) {
    iVar1 = BytecodeAnalysis::GetLoopOffsetFor(*(BytecodeAnalysis **)(this + 0xa0),param_1);
    pBVar2 = (BytecodeLivenessState *)
             BytecodeAnalysis::GetInLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),param_1);
    BuildLoopExitsUntilLoop(this,iVar1,pBVar2);
    return;
  }
  return;
}


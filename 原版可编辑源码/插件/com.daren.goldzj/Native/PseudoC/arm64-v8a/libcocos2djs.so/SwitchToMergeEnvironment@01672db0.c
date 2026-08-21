
/* v8::internal::compiler::BytecodeGraphBuilder::SwitchToMergeEnvironment(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::SwitchToMergeEnvironment
          (BytecodeGraphBuilder *this,int param_1)

{
  BytecodeLivenessState *pBVar1;
  BytecodeGraphBuilder *pBVar2;
  BytecodeGraphBuilder *pBVar3;
  Environment *pEVar4;
  Environment *this_00;
  BytecodeGraphBuilder *pBVar5;
  
  pBVar2 = this + 200;
  pBVar3 = *(BytecodeGraphBuilder **)pBVar2;
  pBVar5 = pBVar2;
  if (pBVar3 != (BytecodeGraphBuilder *)0x0) {
    do {
      if (param_1 <= *(int *)(pBVar3 + 0x20)) {
        pBVar5 = pBVar3;
      }
      pBVar3 = *(BytecodeGraphBuilder **)(pBVar3 + (ulong)(*(int *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (BytecodeGraphBuilder *)0x0);
    if ((pBVar5 != pBVar2) && (*(int *)(pBVar5 + 0x20) <= param_1)) {
      pEVar4 = *(Environment **)(this + 0xa8);
      this[0x160] = (BytecodeGraphBuilder)0x1;
      if (pEVar4 != (Environment *)0x0) {
        this_00 = *(Environment **)(pBVar5 + 0x28);
        pBVar1 = (BytecodeLivenessState *)
                 BytecodeAnalysis::GetInLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),param_1);
        Environment::Merge(this_00,pEVar4,pBVar1);
      }
      *(undefined8 *)(this + 0xa8) = *(undefined8 *)(pBVar5 + 0x28);
    }
  }
  return;
}


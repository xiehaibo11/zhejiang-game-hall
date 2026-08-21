
/* v8::internal::compiler::BytecodeAnalysis::GetLoopOffsetFor(int) const */

int __thiscall
v8::internal::compiler::BytecodeAnalysis::GetLoopOffsetFor(BytecodeAnalysis *this,int param_1)

{
  BytecodeAnalysis *pBVar1;
  int iVar2;
  BytecodeAnalysis *pBVar3;
  BytecodeAnalysis *pBVar4;
  BytecodeAnalysis *pBVar5;
  
  pBVar3 = this + 0xb0;
  pBVar4 = *(BytecodeAnalysis **)pBVar3;
  pBVar5 = pBVar3;
  if (pBVar4 != (BytecodeAnalysis *)0x0) {
    do {
      pBVar1 = pBVar4;
      if (*(int *)(pBVar4 + 0x1c) <= param_1) {
        pBVar1 = pBVar5;
      }
      pBVar4 = *(BytecodeAnalysis **)(pBVar4 + (ulong)(*(int *)(pBVar4 + 0x1c) <= param_1) * 8);
      pBVar5 = pBVar1;
    } while (pBVar4 != (BytecodeAnalysis *)0x0);
    if (pBVar1 != pBVar3) {
      iVar2 = *(int *)(pBVar1 + 0x20);
      if (param_1 < iVar2) {
        pBVar5 = this + 0xd0;
        for (pBVar3 = *(BytecodeAnalysis **)(this + 0xd0); pBVar3 != (BytecodeAnalysis *)0x0;
            pBVar3 = *(BytecodeAnalysis **)
                      (pBVar3 + (ulong)(*(int *)(pBVar3 + 0x20) <= param_1) * 8)) {
          pBVar4 = pBVar3;
          if (*(int *)(pBVar3 + 0x20) <= param_1) {
            pBVar4 = pBVar5;
          }
          pBVar5 = pBVar4;
        }
        iVar2 = *(int *)(pBVar5 + 0x28);
      }
      return iVar2;
    }
  }
  return -1;
}


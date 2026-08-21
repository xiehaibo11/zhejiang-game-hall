
/* v8::internal::compiler::BytecodeAnalysis::GetLoopInfoFor(int) const */

BytecodeAnalysis * __thiscall
v8::internal::compiler::BytecodeAnalysis::GetLoopInfoFor(BytecodeAnalysis *this,int param_1)

{
  BytecodeAnalysis *pBVar1;
  BytecodeAnalysis *pBVar2;
  BytecodeAnalysis *pBVar3;
  
  pBVar1 = this + 0xd0;
  pBVar3 = *(BytecodeAnalysis **)pBVar1;
  pBVar2 = pBVar1;
  if (pBVar3 != (BytecodeAnalysis *)0x0) {
    do {
      if (param_1 <= *(int *)(pBVar3 + 0x20)) {
        pBVar2 = pBVar3;
      }
      pBVar3 = *(BytecodeAnalysis **)(pBVar3 + (ulong)(*(int *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (BytecodeAnalysis *)0x0);
    if ((pBVar2 != pBVar1) && (*(int *)(pBVar2 + 0x20) <= param_1)) goto LAB_0166d5e4;
  }
  pBVar2 = pBVar1;
LAB_0166d5e4:
  return pBVar2 + 0x28;
}


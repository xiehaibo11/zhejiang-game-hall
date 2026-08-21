
/* v8::internal::compiler::LoopVariableOptimizer::FindInductionVariable(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::LoopVariableOptimizer::FindInductionVariable
          (LoopVariableOptimizer *this,Node *param_1)

{
  uint uVar1;
  LoopVariableOptimizer *pLVar2;
  LoopVariableOptimizer *pLVar3;
  LoopVariableOptimizer *pLVar4;
  
  pLVar2 = this + 0x68;
  pLVar4 = *(LoopVariableOptimizer **)pLVar2;
  if (pLVar4 != (LoopVariableOptimizer *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x14) & 0xffffff;
    pLVar3 = pLVar2;
    do {
      if ((int)uVar1 <= *(int *)(pLVar4 + 0x20)) {
        pLVar3 = pLVar4;
      }
      pLVar4 = *(LoopVariableOptimizer **)
                (pLVar4 + (ulong)(*(int *)(pLVar4 + 0x20) < (int)uVar1) * 8);
    } while (pLVar4 != (LoopVariableOptimizer *)0x0);
    if ((pLVar3 != pLVar2) && (*(int *)(pLVar3 + 0x20) <= (int)uVar1)) {
      return *(undefined8 *)(pLVar3 + 0x28);
    }
  }
  return 0;
}


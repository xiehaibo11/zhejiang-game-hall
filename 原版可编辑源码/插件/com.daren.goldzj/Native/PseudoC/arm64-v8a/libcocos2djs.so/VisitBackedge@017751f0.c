
/* v8::internal::compiler::LoopVariableOptimizer::VisitBackedge(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::VisitBackedge
          (LoopVariableOptimizer *this,Node *param_1,Node *param_2)

{
  LoopVariableOptimizer *pLVar1;
  uint uVar2;
  undefined4 uVar3;
  Node *pNVar4;
  LoopVariableOptimizer *pLVar5;
  LoopVariableOptimizer *pLVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 *puVar9;
  
  if (*(int *)(*(long *)param_2 + 0x1c) == 2) {
    if ((((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) <
         (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3)) &&
       (puVar9 = *(undefined8 **)
                  (*(long *)(this + 0x20) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8),
       puVar9 != (undefined8 *)0x0)) {
      pLVar1 = this + 0x68;
      do {
        pNVar7 = (Node *)*puVar9;
        uVar3 = *(undefined4 *)(puVar9 + 1);
        pNVar8 = (Node *)puVar9[2];
        if (((*(short *)(*(long *)pNVar7 + 0x10) == 0x23) &&
            (pNVar4 = (Node *)NodeProperties::GetControlInput(pNVar7,0), pNVar4 == param_2)) &&
           (pLVar6 = *(LoopVariableOptimizer **)pLVar1, pLVar6 != (LoopVariableOptimizer *)0x0)) {
          uVar2 = *(uint *)(pNVar7 + 0x14) & 0xffffff;
          pLVar5 = pLVar1;
          do {
            if ((int)uVar2 <= *(int *)(pLVar6 + 0x20)) {
              pLVar5 = pLVar6;
            }
            pLVar6 = *(LoopVariableOptimizer **)
                      (pLVar6 + (ulong)(*(int *)(pLVar6 + 0x20) < (int)uVar2) * 8);
          } while (pLVar6 != (LoopVariableOptimizer *)0x0);
          if ((pLVar5 != pLVar1) && (*(int *)(pLVar5 + 0x20) <= (int)uVar2)) {
            InductionVariable::AddUpperBound(*(InductionVariable **)(pLVar5 + 0x28),pNVar8,uVar3);
          }
        }
        if (((*(short *)(*(long *)pNVar8 + 0x10) == 0x23) &&
            (pNVar4 = (Node *)NodeProperties::GetControlInput(pNVar8,0), pNVar4 == param_2)) &&
           (pLVar6 = *(LoopVariableOptimizer **)pLVar1, pLVar6 != (LoopVariableOptimizer *)0x0)) {
          uVar2 = *(uint *)(pNVar8 + 0x14) & 0xffffff;
          pLVar5 = pLVar1;
          do {
            if ((int)uVar2 <= *(int *)(pLVar6 + 0x20)) {
              pLVar5 = pLVar6;
            }
            pLVar6 = *(LoopVariableOptimizer **)
                      (pLVar6 + (ulong)(*(int *)(pLVar6 + 0x20) < (int)uVar2) * 8);
          } while (pLVar6 != (LoopVariableOptimizer *)0x0);
          if ((pLVar5 != pLVar1) && (*(int *)(pLVar5 + 0x20) <= (int)uVar2)) {
            InductionVariable::AddLowerBound(*(InductionVariable **)(pLVar5 + 0x28),pNVar7,uVar3);
          }
        }
        puVar9 = (undefined8 *)puVar9[3];
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  return;
}


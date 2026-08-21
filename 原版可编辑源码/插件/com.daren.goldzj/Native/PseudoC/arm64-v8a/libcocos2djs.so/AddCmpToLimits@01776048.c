
/* v8::internal::compiler::LoopVariableOptimizer::AddCmpToLimits(v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>*,
   v8::internal::compiler::Node*, v8::internal::compiler::InductionVariable::ConstraintKind, bool)
    */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::AddCmpToLimits
          (LoopVariableOptimizer *this,long *param_1,long param_2,int param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  LoopVariableOptimizer *pLVar4;
  Zone *pZVar5;
  long lVar6;
  long lVar7;
  LoopVariableOptimizer *pLVar8;
  LoopVariableOptimizer *pLVar9;
  LoopVariableOptimizer *pLVar10;
  
  plVar3 = (long *)(param_2 + 0x20);
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    plVar3 = (long *)(*plVar3 + 0x10);
  }
  lVar7 = *plVar3;
  lVar2 = plVar3[1];
  pLVar4 = this + 0x68;
  pLVar9 = *(LoopVariableOptimizer **)pLVar4;
  if (pLVar9 == (LoopVariableOptimizer *)0x0) {
    return;
  }
  uVar1 = *(uint *)(lVar7 + 0x14) & 0xffffff;
  pLVar8 = pLVar4;
  pLVar10 = pLVar9;
  do {
    if ((int)uVar1 <= *(int *)(pLVar10 + 0x20)) {
      pLVar8 = pLVar10;
    }
    pLVar10 = *(LoopVariableOptimizer **)
               (pLVar10 + (ulong)(*(int *)(pLVar10 + 0x20) < (int)uVar1) * 8);
  } while (pLVar10 != (LoopVariableOptimizer *)0x0);
  if (((pLVar8 == pLVar4) || ((int)uVar1 < *(int *)(pLVar8 + 0x20))) ||
     (*(long *)(pLVar8 + 0x28) == 0)) {
    uVar1 = *(uint *)(lVar2 + 0x14) & 0xffffff;
    pLVar8 = pLVar4;
    do {
      if ((int)uVar1 <= *(int *)(pLVar9 + 0x20)) {
        pLVar8 = pLVar9;
      }
      pLVar9 = *(LoopVariableOptimizer **)
                (pLVar9 + (ulong)(*(int *)(pLVar9 + 0x20) < (int)uVar1) * 8);
    } while (pLVar9 != (LoopVariableOptimizer *)0x0);
    if (pLVar8 == pLVar4) {
      return;
    }
    if ((int)uVar1 < *(int *)(pLVar8 + 0x20)) {
      return;
    }
    if (*(long *)(pLVar8 + 0x28) == 0) {
      return;
    }
  }
  if ((param_5 & 1) == 0) {
    pZVar5 = *(Zone **)(this + 0x18);
    plVar3 = *(long **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)plVar3) < 0x28) {
      plVar3 = (long *)Zone::NewExpand(pZVar5,0x28);
    }
    else {
      *(long **)(pZVar5 + 0x10) = plVar3 + 5;
    }
    lVar6 = *param_1;
    *plVar3 = lVar2;
    *(uint *)(plVar3 + 1) = (uint)(param_4 == 0);
    plVar3[2] = lVar7;
    plVar3[3] = lVar6;
  }
  else {
    pZVar5 = *(Zone **)(this + 0x18);
    plVar3 = *(long **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)plVar3) < 0x28) {
      plVar3 = (long *)Zone::NewExpand(pZVar5,0x28);
    }
    else {
      *(long **)(pZVar5 + 0x10) = plVar3 + 5;
    }
    lVar6 = *param_1;
    *plVar3 = lVar7;
    *(int *)(plVar3 + 1) = param_4;
    plVar3[2] = lVar2;
    plVar3[3] = lVar6;
  }
  if (lVar6 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x20) + 1;
  }
  plVar3[4] = lVar7;
  *param_1 = (long)plVar3;
  return;
}


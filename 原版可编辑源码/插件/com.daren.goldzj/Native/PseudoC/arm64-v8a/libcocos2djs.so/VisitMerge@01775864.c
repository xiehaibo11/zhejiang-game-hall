
/* v8::internal::compiler::LoopVariableOptimizer::VisitMerge(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::VisitMerge(LoopVariableOptimizer *this,Node *param_1)

{
  long *plVar1;
  Node *pNVar2;
  uint uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *local_50;
  undefined8 local_48;
  
  uVar6 = *(uint *)(param_1 + 0x14);
  pNVar2 = param_1 + 0x20;
  pNVar5 = pNVar2;
  if ((~uVar6 & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  uVar8 = (ulong)*(uint *)(*(long *)pNVar5 + 0x14) & 0xffffff;
  if (uVar8 < (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3)) {
    local_50 = *(long **)(*(long *)(this + 0x20) + uVar8 * 8);
  }
  else {
    local_50 = (long *)0x0;
  }
  lVar12 = 1;
  while( true ) {
    if ((uVar6 & 0xf000000) == 0xf000000) {
      uVar3 = *(uint *)(*(long *)pNVar2 + 8);
    }
    else {
      uVar3 = uVar6 >> 0x18 & 0xf;
    }
    if ((int)uVar3 <= lVar12) break;
    pNVar5 = pNVar2;
    if ((uVar6 & 0xf000000) == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    uVar8 = (ulong)*(uint *)(*(long *)(pNVar5 + lVar12 * 8) + 0x14) & 0xffffff;
    if (uVar8 < (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3)) {
      uVar4 = *(undefined8 *)(*(long *)(this + 0x20) + uVar8 * 8);
    }
    else {
      uVar4 = 0;
    }
    FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>::ResetToCommonAncestor
              ((FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint> *)
               &local_50,uVar4);
    uVar6 = *(uint *)(param_1 + 0x14);
    lVar12 = lVar12 + 1;
  }
  lVar12 = *(long *)(this + 0x20);
  uVar11 = (ulong)(uVar6 & 0xffffff);
  uVar8 = *(long *)(this + 0x28) - lVar12 >> 3;
  if (uVar8 <= uVar11) {
    local_48 = 0;
    std::__ndk1::
    vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
    ::__append((vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
                *)(this + 0x20),(uVar11 - uVar8) + 1,(FunctionalList *)&local_48);
    lVar12 = *(long *)(this + 0x20);
  }
  plVar7 = *(long **)(lVar12 + uVar11 * 8);
  if (plVar7 == (long *)0x0) {
    lVar9 = 0;
    if (local_50 != (long *)0x0) goto LAB_017759a0;
LAB_01775a08:
    if (lVar9 != 0) goto LAB_01775a14;
  }
  else {
    lVar9 = plVar7[4];
    if (local_50 == (long *)0x0) goto LAB_01775a08;
LAB_017759a0:
    if (lVar9 != local_50[4]) goto LAB_01775a14;
  }
  plVar10 = local_50;
  if (plVar7 == local_50) {
    return;
  }
  while (((*plVar7 == *plVar10 && ((int)plVar7[1] == (int)plVar10[1])) && (plVar7[2] == plVar10[2]))
        ) {
    plVar1 = plVar10 + 3;
    plVar7 = (long *)plVar7[3];
    plVar10 = (long *)*plVar1;
    if (plVar7 == (long *)*plVar1) {
      return;
    }
  }
LAB_01775a14:
  *(long **)(lVar12 + uVar11 * 8) = local_50;
  return;
}



/* v8::internal::compiler::LoopVariableOptimizer::VisitIf(v8::internal::compiler::Node*, bool) */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::VisitIf
          (LoopVariableOptimizer *this,Node *param_1,bool param_2)

{
  long *plVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
  *this_00;
  long *local_38;
  undefined8 local_18;
  
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  uVar2 = *(uint *)(*(long *)pNVar5 + 0x14);
  plVar8 = (long *)(*(long *)pNVar5 + 0x20);
  if ((~uVar2 & 0xf000000) == 0) {
    plVar8 = (long *)(*plVar8 + 0x10);
  }
  this_00 = (vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
             *)(this + 0x20);
  uVar7 = (ulong)uVar2 & 0xffffff;
  if (uVar7 < (ulong)(*(long *)(this + 0x28) - *(long *)this_00 >> 3)) {
    local_38 = *(long **)(*(long *)this_00 + uVar7 * 8);
  }
  else {
    local_38 = (long *)0x0;
  }
  uVar3 = *(undefined2 *)(*(long *)*plVar8 + 0x10);
  switch(uVar3) {
  case 0x70:
  case 0x73:
switchD_01775b18_caseD_2b3:
LAB_01775b68:
    uVar4 = 0;
    goto LAB_01775b78;
  case 0x71:
  case 0x74:
switchD_01775b18_caseD_2b5:
LAB_01775b4c:
    uVar4 = 1;
LAB_01775b78:
    AddCmpToLimits(this,&local_38,(long *)*plVar8,uVar4,param_2 & 1);
    break;
  case 0x72:
    break;
  default:
    switch(uVar3) {
    case 0x2b3:
      goto switchD_01775b18_caseD_2b3;
    case 0x2b4:
      param_2 = (bool)~param_2;
      goto LAB_01775b4c;
    case 0x2b5:
      goto switchD_01775b18_caseD_2b5;
    case 0x2b6:
      param_2 = (bool)~param_2;
      goto LAB_01775b68;
    }
  }
  lVar6 = *(long *)(this + 0x20);
  uVar11 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar7 = *(long *)(this + 0x28) - lVar6 >> 3;
  if (uVar7 <= uVar11) {
    local_18 = 0;
    std::__ndk1::
    vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
    ::__append(this_00,(uVar11 - uVar7) + 1,(FunctionalList *)&local_18);
    lVar6 = *(long *)this_00;
  }
  plVar8 = *(long **)(lVar6 + uVar11 * 8);
  if (plVar8 == (long *)0x0) {
    lVar9 = 0;
    if (local_38 == (long *)0x0) goto LAB_01775c30;
LAB_01775bc8:
    if (lVar9 != local_38[4]) goto LAB_01775c3c;
  }
  else {
    lVar9 = plVar8[4];
    if (local_38 != (long *)0x0) goto LAB_01775bc8;
LAB_01775c30:
    if (lVar9 != 0) goto LAB_01775c3c;
  }
  plVar10 = local_38;
  if (plVar8 == local_38) {
    return;
  }
  while (((*plVar8 == *plVar10 && ((int)plVar8[1] == (int)plVar10[1])) && (plVar8[2] == plVar10[2]))
        ) {
    plVar1 = plVar10 + 3;
    plVar8 = (long *)plVar8[3];
    plVar10 = (long *)*plVar1;
    if (plVar8 == (long *)*plVar1) {
      return;
    }
  }
LAB_01775c3c:
  *(long **)(lVar6 + uVar11 * 8) = local_38;
  return;
}


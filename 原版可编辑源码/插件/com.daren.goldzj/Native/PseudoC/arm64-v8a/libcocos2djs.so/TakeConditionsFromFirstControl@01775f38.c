
/* v8::internal::compiler::LoopVariableOptimizer::TakeConditionsFromFirstControl(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::TakeConditionsFromFirstControl
          (LoopVariableOptimizer *this,Node *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
  *this_00;
  long *plVar8;
  undefined8 local_18;
  
  lVar2 = NodeProperties::GetControlInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
             *)(this + 0x20);
  lVar3 = *(long *)this_00;
  uVar6 = (ulong)*(uint *)(lVar2 + 0x14) & 0xffffff;
  uVar4 = *(long *)(this + 0x28) - lVar3 >> 3;
  if (uVar6 < uVar4) {
    plVar8 = *(long **)(lVar3 + uVar6 * 8);
  }
  else {
    plVar8 = (long *)0x0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  if (uVar4 <= uVar6) {
    local_18 = 0;
    std::__ndk1::
    vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
    ::__append(this_00,(uVar6 - uVar4) + 1,(FunctionalList *)&local_18);
    lVar3 = *(long *)this_00;
  }
  plVar5 = *(long **)(lVar3 + uVar6 * 8);
  if (plVar5 == (long *)0x0) {
    lVar2 = 0;
    if (plVar8 == (long *)0x0) goto LAB_01776028;
LAB_01775fc4:
    if (lVar2 != plVar8[4]) goto LAB_01776034;
  }
  else {
    lVar2 = plVar5[4];
    if (plVar8 != (long *)0x0) goto LAB_01775fc4;
LAB_01776028:
    if (lVar2 != 0) goto LAB_01776034;
  }
  plVar7 = plVar8;
  if (plVar5 == plVar8) {
    return;
  }
  while (((*plVar5 == *plVar7 && ((int)plVar5[1] == (int)plVar7[1])) && (plVar5[2] == plVar7[2]))) {
    plVar1 = plVar7 + 3;
    plVar5 = (long *)plVar5[3];
    plVar7 = (long *)*plVar1;
    if (plVar5 == (long *)*plVar1) {
      return;
    }
  }
LAB_01776034:
  *(long **)(lVar3 + uVar6 * 8) = plVar8;
  return;
}


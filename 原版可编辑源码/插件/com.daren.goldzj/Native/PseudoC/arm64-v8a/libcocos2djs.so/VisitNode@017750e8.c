
/* v8::internal::compiler::LoopVariableOptimizer::VisitNode(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::VisitNode(LoopVariableOptimizer *this,Node *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
  *this_00;
  ulong uVar5;
  undefined8 local_28;
  
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0:
    this_00 = (vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
               *)(this + 0x20);
    lVar2 = *(long *)this_00;
    uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar3 = *(long *)(this + 0x28) - lVar2 >> 3;
    if (uVar3 <= uVar5) {
      local_28 = 0;
      std::__ndk1::
      vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
      ::__append(this_00,(uVar5 - uVar3) + 1,(FunctionalList *)&local_28);
      lVar2 = *(long *)this_00;
    }
    lVar4 = *(long *)(lVar2 + uVar5 * 8);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) {
      *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
    }
    return;
  case 1:
    DetectInductionVariables(this,param_1);
  default:
    TakeConditionsFromFirstControl(this,param_1);
    return;
  case 4:
    bVar1 = true;
    break;
  case 5:
    bVar1 = false;
    break;
  case 10:
    VisitMerge(this,param_1);
    return;
  }
  VisitIf(this,param_1,bVar1);
  return;
}


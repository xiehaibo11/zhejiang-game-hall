
/* v8::internal::compiler::LoopVariableOptimizer::VisitStart(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::VisitStart(LoopVariableOptimizer *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
  *this_00;
  ulong uVar4;
  undefined8 local_28;
  
  this_00 = (vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
             *)(this + 0x20);
  lVar1 = *(long *)this_00;
  uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(long *)(this + 0x28) - lVar1 >> 3;
  if (uVar2 <= uVar4) {
    local_28 = 0;
    std::__ndk1::
    vector<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>,v8::internal::ZoneAllocator<v8::internal::compiler::FunctionalList<v8::internal::compiler::LoopVariableOptimizer::Constraint>>>
    ::__append(this_00,(uVar4 - uVar2) + 1,(FunctionalList *)&local_28);
    lVar1 = *(long *)this_00;
  }
  lVar3 = *(long *)(lVar1 + uVar4 * 8);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
    *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
  }
  return;
}


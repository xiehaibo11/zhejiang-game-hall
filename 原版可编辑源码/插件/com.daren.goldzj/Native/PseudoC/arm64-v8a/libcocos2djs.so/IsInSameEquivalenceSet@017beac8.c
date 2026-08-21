
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::IsInSameEquivalenceSet(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*)
   const */

bool __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::IsInSameEquivalenceSet
          (RegisterInfo *this,RegisterInfo *param_1)

{
  return *(int *)(this + 4) == *(int *)(param_1 + 4);
}


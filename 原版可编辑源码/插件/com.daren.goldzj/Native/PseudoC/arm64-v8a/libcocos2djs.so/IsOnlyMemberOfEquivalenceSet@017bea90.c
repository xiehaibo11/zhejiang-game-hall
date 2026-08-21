
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::IsOnlyMemberOfEquivalenceSet()
   const */

bool __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::IsOnlyMemberOfEquivalenceSet
          (RegisterInfo *this)

{
  return *(RegisterInfo **)(this + 0x10) == this;
}


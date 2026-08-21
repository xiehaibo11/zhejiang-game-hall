
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::IsOnlyMaterializedMemberOfEquivalenceSet()
   const */

undefined8 __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::
IsOnlyMaterializedMemberOfEquivalenceSet(RegisterInfo *this)

{
  RegisterInfo *pRVar1;
  
  pRVar1 = this;
  do {
    pRVar1 = *(RegisterInfo **)(pRVar1 + 0x10);
    if (pRVar1 == this) {
      return 1;
    }
  } while (pRVar1[8] == (RegisterInfo)0x0);
  return 0;
}


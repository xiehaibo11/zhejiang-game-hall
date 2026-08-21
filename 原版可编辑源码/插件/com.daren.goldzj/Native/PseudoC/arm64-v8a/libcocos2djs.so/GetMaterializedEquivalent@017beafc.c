
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::GetMaterializedEquivalent()
    */

RegisterInfo * __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::GetMaterializedEquivalent
          (RegisterInfo *this)

{
  RegisterInfo *pRVar1;
  
  pRVar1 = this;
  do {
    if (pRVar1[8] != (RegisterInfo)0x0) {
      return pRVar1;
    }
    pRVar1 = *(RegisterInfo **)(pRVar1 + 0x10);
  } while (pRVar1 != this);
  return (RegisterInfo *)0x0;
}


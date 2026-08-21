
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::GetMaterializedEquivalentOtherThan(v8::internal::interpreter::Register)
    */

RegisterInfo * __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::
GetMaterializedEquivalentOtherThan(RegisterInfo *this,int param_2)

{
  RegisterInfo *pRVar1;
  
  pRVar1 = this;
  if (this[8] != (RegisterInfo)0x0) goto LAB_017beb3c;
  do {
    do {
      pRVar1 = *(RegisterInfo **)(pRVar1 + 0x10);
      if (pRVar1 == this) {
        return (RegisterInfo *)0x0;
      }
    } while (pRVar1[8] == (RegisterInfo)0x0);
LAB_017beb3c:
  } while (*(int *)pRVar1 == param_2);
  return pRVar1;
}


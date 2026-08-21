
/* v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::GetEquivalentToMaterialize()
    */

RegisterInfo * __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo::GetEquivalentToMaterialize
          (RegisterInfo *this)

{
  RegisterInfo RVar1;
  RegisterInfo *pRVar2;
  RegisterInfo *pRVar3;
  RegisterInfo *pRVar4;
  
  pRVar4 = *(RegisterInfo **)(this + 0x10);
  if (pRVar4 != this) {
    RVar1 = pRVar4[8];
    pRVar2 = (RegisterInfo *)0x0;
    while (RVar1 == (RegisterInfo)0x0) {
      pRVar3 = pRVar2;
      if (((pRVar4[9] != (RegisterInfo)0x0) && (pRVar3 = pRVar4, pRVar2 != (RegisterInfo *)0x0)) &&
         (*(int *)pRVar2 <= *(int *)pRVar4)) {
        pRVar3 = pRVar2;
      }
      pRVar4 = *(RegisterInfo **)(pRVar4 + 0x10);
      if (pRVar4 == this) {
        return pRVar3;
      }
      pRVar2 = pRVar3;
      RVar1 = pRVar4[8];
    }
  }
  return (RegisterInfo *)0x0;
}



/* v8::internal::compiler::RegisterAllocationData::GetPhiMapValueFor(int) */

undefined8 __thiscall
v8::internal::compiler::RegisterAllocationData::GetPhiMapValueFor
          (RegisterAllocationData *this,int param_1)

{
  RegisterAllocationData *pRVar1;
  RegisterAllocationData *pRVar2;
  RegisterAllocationData *pRVar3;
  
  pRVar1 = this + 0x30;
  pRVar3 = *(RegisterAllocationData **)pRVar1;
  pRVar2 = pRVar1;
  if (pRVar3 != (RegisterAllocationData *)0x0) {
    do {
      if (param_1 <= *(int *)(pRVar3 + 0x20)) {
        pRVar2 = pRVar3;
      }
      pRVar3 = *(RegisterAllocationData **)(pRVar3 + (ulong)(*(int *)(pRVar3 + 0x20) < param_1) * 8)
      ;
    } while (pRVar3 != (RegisterAllocationData *)0x0);
    if ((pRVar2 != pRVar1) && (*(int *)(pRVar2 + 0x20) <= param_1)) goto LAB_01659288;
  }
  pRVar2 = pRVar1;
LAB_01659288:
  return *(undefined8 *)(pRVar2 + 0x28);
}


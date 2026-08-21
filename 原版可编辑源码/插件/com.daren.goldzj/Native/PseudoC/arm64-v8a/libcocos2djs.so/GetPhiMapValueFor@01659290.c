
/* v8::internal::compiler::RegisterAllocationData::GetPhiMapValueFor(v8::internal::compiler::TopLevelLiveRange*)
    */

undefined8 __thiscall
v8::internal::compiler::RegisterAllocationData::GetPhiMapValueFor
          (RegisterAllocationData *this,TopLevelLiveRange *param_1)

{
  int iVar1;
  RegisterAllocationData *pRVar2;
  RegisterAllocationData *pRVar3;
  RegisterAllocationData *pRVar4;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  pRVar2 = this + 0x30;
  pRVar4 = *(RegisterAllocationData **)pRVar2;
  pRVar3 = pRVar2;
  if (pRVar4 != (RegisterAllocationData *)0x0) {
    do {
      if (iVar1 <= *(int *)(pRVar4 + 0x20)) {
        pRVar3 = pRVar4;
      }
      pRVar4 = *(RegisterAllocationData **)(pRVar4 + (ulong)(*(int *)(pRVar4 + 0x20) < iVar1) * 8);
    } while (pRVar4 != (RegisterAllocationData *)0x0);
    if ((pRVar3 != pRVar2) && (*(int *)(pRVar3 + 0x20) <= iVar1)) goto LAB_016592d0;
  }
  pRVar3 = pRVar2;
LAB_016592d0:
  return *(undefined8 *)(pRVar3 + 0x28);
}


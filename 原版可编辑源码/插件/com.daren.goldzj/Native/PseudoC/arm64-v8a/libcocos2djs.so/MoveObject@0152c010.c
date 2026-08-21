
/* v8::internal::AddressToTraceMap::MoveObject(unsigned long, unsigned long, int) */

void __thiscall
v8::internal::AddressToTraceMap::MoveObject
          (AddressToTraceMap *this,ulong param_1,ulong param_2,int param_3)

{
  AddressToTraceMap *pAVar1;
  uint uVar2;
  AddressToTraceMap *pAVar3;
  AddressToTraceMap *pAVar4;
  AddressToTraceMap *pAVar5;
  
  pAVar4 = this + 8;
  pAVar5 = *(AddressToTraceMap **)pAVar4;
  pAVar3 = pAVar4;
  if (pAVar5 != (AddressToTraceMap *)0x0) {
    do {
      pAVar1 = pAVar5;
      if (*(ulong *)(pAVar5 + 0x20) <= param_1) {
        pAVar1 = pAVar3;
      }
      pAVar5 = *(AddressToTraceMap **)(pAVar5 + (ulong)(*(ulong *)(pAVar5 + 0x20) <= param_1) * 8);
      pAVar3 = pAVar1;
    } while (pAVar5 != (AddressToTraceMap *)0x0);
    if (((pAVar1 != pAVar4) && (*(ulong *)(pAVar1 + 0x28) <= param_1)) &&
       (uVar2 = *(uint *)(pAVar1 + 0x30), uVar2 != 0)) {
      RemoveRange(this,param_1,param_1 + (long)param_3);
      AddRange(this,param_2,param_3,uVar2);
      return;
    }
  }
  return;
}



/* v8::internal::AddressToTraceMap::GetTraceNodeId(unsigned long) */

undefined4 __thiscall
v8::internal::AddressToTraceMap::GetTraceNodeId(AddressToTraceMap *this,ulong param_1)

{
  AddressToTraceMap *pAVar1;
  AddressToTraceMap *pAVar2;
  AddressToTraceMap *pAVar3;
  AddressToTraceMap *pAVar4;
  
  pAVar2 = this + 8;
  pAVar4 = *(AddressToTraceMap **)pAVar2;
  pAVar3 = pAVar2;
  if (pAVar4 != (AddressToTraceMap *)0x0) {
    do {
      pAVar1 = pAVar4;
      if (*(ulong *)(pAVar4 + 0x20) <= param_1) {
        pAVar1 = pAVar3;
      }
      pAVar4 = *(AddressToTraceMap **)(pAVar4 + (ulong)(*(ulong *)(pAVar4 + 0x20) <= param_1) * 8);
      pAVar3 = pAVar1;
    } while (pAVar4 != (AddressToTraceMap *)0x0);
    if ((pAVar1 != pAVar2) && (*(ulong *)(pAVar1 + 0x28) <= param_1)) {
      return *(undefined4 *)(pAVar1 + 0x30);
    }
  }
  return 0;
}


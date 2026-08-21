
/* v8::internal::AddressToTraceMap::Print() */

void __thiscall v8::internal::AddressToTraceMap::Print(AddressToTraceMap *this)

{
  bool bVar1;
  AddressToTraceMap *pAVar2;
  long lVar3;
  AddressToTraceMap *pAVar4;
  
  PrintF("[AddressToTraceMap (%zu): \n",*(undefined8 *)(this + 0x10));
  pAVar4 = *(AddressToTraceMap **)this;
  while (pAVar4 != this + 8) {
    PrintF("[%p - %p] => %u\n",*(undefined8 *)(pAVar4 + 0x28),*(undefined8 *)(pAVar4 + 0x20),
           (ulong)*(uint *)(pAVar4 + 0x30));
    pAVar2 = *(AddressToTraceMap **)(pAVar4 + 8);
    if (*(AddressToTraceMap **)(pAVar4 + 8) == (AddressToTraceMap *)0x0) {
      pAVar2 = pAVar4 + 0x10;
      bVar1 = *(AddressToTraceMap **)*(AddressToTraceMap **)pAVar2 != pAVar4;
      pAVar4 = *(AddressToTraceMap **)pAVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pAVar2;
          pAVar2 = (AddressToTraceMap *)(lVar3 + 0x10);
          pAVar4 = *(AddressToTraceMap **)pAVar2;
        } while (*(long *)pAVar4 != lVar3);
      }
    }
    else {
      do {
        pAVar4 = pAVar2;
        pAVar2 = *(AddressToTraceMap **)pAVar4;
      } while (*(AddressToTraceMap **)pAVar4 != (AddressToTraceMap *)0x0);
    }
  }
  PrintF("]\n");
  return;
}


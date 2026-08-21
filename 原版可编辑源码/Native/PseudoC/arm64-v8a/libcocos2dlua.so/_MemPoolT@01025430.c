
/* tinyxml2::MemPoolT<72>::~MemPoolT() */

void __thiscall tinyxml2::MemPoolT<72>::~MemPoolT(MemPoolT<72> *this)

{
  MemPoolT<72> *pMVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(this + 100);
  pMVar1 = *(MemPoolT<72> **)(this + 8);
  *(undefined ***)this = &PTR__MemPoolT_01727990;
  if (0 < iVar3) {
    lVar4 = 0;
    pvVar2 = *(void **)pMVar1;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        iVar3 = *(int *)(this + 100);
        pMVar1 = *(MemPoolT<72> **)(this + 8);
      }
      lVar4 = lVar4 + 1;
      if (iVar3 <= lVar4) break;
      pvVar2 = *(void **)(pMVar1 + lVar4 * 8);
    }
  }
  if ((pMVar1 != this + 0x10) && (pMVar1 != (MemPoolT<72> *)0x0)) {
    operator_delete__(pMVar1);
    return;
  }
  return;
}


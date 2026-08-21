
/* tinyxml2::MemPoolT<104>::~MemPoolT() */

void __thiscall tinyxml2::MemPoolT<104>::~MemPoolT(MemPoolT<104> *this)

{
  MemPoolT<104> *pMVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(this + 100);
  pMVar1 = *(MemPoolT<104> **)(this + 8);
  *(undefined ***)this = &PTR__MemPoolT_01c691d0;
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(void **)(pMVar1 + lVar3 * 8) != (void *)0x0) {
        operator_delete(*(void **)(pMVar1 + lVar3 * 8));
        iVar2 = *(int *)(this + 100);
        pMVar1 = *(MemPoolT<104> **)(this + 8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if ((pMVar1 != this + 0x10) && (pMVar1 != (MemPoolT<104> *)0x0)) {
    operator_delete__(pMVar1);
  }
  operator_delete(this);
  return;
}


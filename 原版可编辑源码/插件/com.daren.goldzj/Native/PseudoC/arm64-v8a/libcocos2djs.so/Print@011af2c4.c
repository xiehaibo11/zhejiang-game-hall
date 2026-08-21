
/* v8::internal::CodeMap::Print() */

void __thiscall v8::internal::CodeMap::Print(CodeMap *this)

{
  bool bVar1;
  CodeMap *pCVar2;
  long lVar3;
  CodeMap *pCVar4;
  
  pCVar4 = *(CodeMap **)(this + 0x30);
  while (pCVar4 != this + 0x38) {
    base::OS::Print("%p %5d %s\n",*(undefined8 *)(pCVar4 + 0x20),(ulong)*(uint *)(pCVar4 + 0x2c),
                    *(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(this + 8) +
                                         (*(long *)(this + 0x20) + (ulong)*(uint *)(pCVar4 + 0x28)
                                          >> 6 & 0x3fffffffffffff8)) +
                               (*(long *)(this + 0x20) + (ulong)*(uint *)(pCVar4 + 0x28) & 0x1ff) *
                               8) + 8));
    pCVar2 = *(CodeMap **)(pCVar4 + 8);
    if (*(CodeMap **)(pCVar4 + 8) == (CodeMap *)0x0) {
      pCVar2 = pCVar4 + 0x10;
      bVar1 = *(CodeMap **)*(CodeMap **)pCVar2 != pCVar4;
      pCVar4 = *(CodeMap **)pCVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pCVar2;
          pCVar2 = (CodeMap *)(lVar3 + 0x10);
          pCVar4 = *(CodeMap **)pCVar2;
        } while (*(long *)pCVar4 != lVar3);
      }
    }
    else {
      do {
        pCVar4 = pCVar2;
        pCVar2 = *(CodeMap **)pCVar4;
      } while (*(CodeMap **)pCVar4 != (CodeMap *)0x0);
    }
  }
  return;
}


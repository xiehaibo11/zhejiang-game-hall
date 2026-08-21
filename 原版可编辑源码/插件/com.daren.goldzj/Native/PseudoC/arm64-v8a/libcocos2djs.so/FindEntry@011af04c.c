
/* v8::internal::CodeMap::FindEntry(unsigned long) */

undefined8 __thiscall v8::internal::CodeMap::FindEntry(CodeMap *this,ulong param_1)

{
  bool bVar1;
  CodeMap *pCVar2;
  CodeMap *pCVar3;
  CodeMap *pCVar4;
  
  pCVar2 = this + 0x38;
  for (pCVar4 = *(CodeMap **)(this + 0x38); pCVar4 != (CodeMap *)0x0;
      pCVar4 = *(CodeMap **)(pCVar4 + (ulong)(*(ulong *)(pCVar4 + 0x20) <= param_1) * 8)) {
    pCVar3 = pCVar4;
    if (*(ulong *)(pCVar4 + 0x20) <= param_1) {
      pCVar3 = pCVar2;
    }
    pCVar2 = pCVar3;
  }
  if (pCVar2 != *(CodeMap **)(this + 0x30)) {
    pCVar4 = *(CodeMap **)pCVar2;
    if (*(CodeMap **)pCVar2 == (CodeMap *)0x0) {
      do {
        pCVar3 = *(CodeMap **)(pCVar2 + 0x10);
        bVar1 = *(CodeMap **)pCVar3 == pCVar2;
        pCVar2 = pCVar3;
      } while (bVar1);
    }
    else {
      do {
        pCVar3 = pCVar4;
        pCVar4 = *(CodeMap **)(pCVar3 + 8);
      } while (*(CodeMap **)(pCVar3 + 8) != (CodeMap *)0x0);
    }
    if (param_1 < *(long *)(pCVar3 + 0x20) + (ulong)*(uint *)(pCVar3 + 0x2c)) {
      return *(undefined8 *)
              (*(long *)(*(long *)(this + 8) +
                        (*(long *)(this + 0x20) + (ulong)*(uint *)(pCVar3 + 0x28) >> 6 &
                        0x3fffffffffffff8)) +
              (*(long *)(this + 0x20) + (ulong)*(uint *)(pCVar3 + 0x28) & 0x1ff) * 8);
    }
  }
  return 0;
}


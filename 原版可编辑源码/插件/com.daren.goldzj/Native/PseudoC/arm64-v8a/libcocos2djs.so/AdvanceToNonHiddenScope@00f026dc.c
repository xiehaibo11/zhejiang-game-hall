
/* v8::internal::ScopeIterator::AdvanceToNonHiddenScope() */

void __thiscall v8::internal::ScopeIterator::AdvanceToNonHiddenScope(ScopeIterator *this)

{
  ulong *puVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 0x50);
  do {
    if (0 < *(int *)(lVar2 + 0x7c)) {
      pIVar3 = *(Isolate **)this;
      uVar4 = **(ulong **)(this + 0x28) & 0xffffffff00000000 |
              (ulong)*(uint *)(**(ulong **)(this + 0x28) + 0xb);
      if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar1 = *(ulong **)(pIVar3 + 0x95a0);
        if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
          puVar1 = (ulong *)HandleScope::Extend(pIVar3);
        }
        *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
        *puVar1 = uVar4;
      }
      else {
        puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
      }
      lVar2 = *(long *)(this + 0x50);
      *(ulong **)(this + 0x28) = puVar1;
    }
    lVar2 = *(long *)(lVar2 + 8);
    *(long *)(this + 0x50) = lVar2;
  } while ((*(byte *)(lVar2 + 0x81) >> 4 & 1) != 0);
  return;
}


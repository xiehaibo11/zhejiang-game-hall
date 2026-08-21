
/* v8::internal::ScopeIterator::AdvanceContext() */

void __thiscall v8::internal::ScopeIterator::AdvanceContext(ScopeIterator *this)

{
  ulong *puVar1;
  undefined8 uVar2;
  Isolate *pIVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  pIVar3 = *(Isolate **)this;
  uVar5 = **(ulong **)(this + 0x28) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x28) + 0xb);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar5;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
  }
  *(ulong **)(this + 0x28) = puVar1;
  uVar2 = StringSet::New(*(Isolate **)this);
  lVar4 = *(long *)(this + 0x50);
  *(undefined8 *)(this + 0x38) = uVar2;
  if (lVar4 != 0) {
    while (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0) {
      *(long *)(this + 0x50) = lVar4;
      plVar6 = *(long **)(lVar4 + 0x40);
      plVar7 = (long *)(lVar4 + 0x38);
      if (plVar7 != plVar6) {
        do {
          lVar4 = *plVar7;
          if (((*(ushort *)(lVar4 + 0x28) >> 7 & 7) - 1 & 0xff) < 2) {
            uVar2 = StringSet::Add(*(undefined8 *)this,uVar2,**(undefined8 **)(lVar4 + 8));
            *(undefined8 *)(this + 0x38) = uVar2;
            lVar4 = *plVar7;
          }
          plVar7 = (long *)(lVar4 + 0x18);
        } while (plVar7 != plVar6);
        lVar4 = *(long *)(this + 0x50);
      }
      if (0 < *(int *)(lVar4 + 0x7c)) {
        return;
      }
      if (lVar4 == 0) {
        return;
      }
    }
  }
  return;
}


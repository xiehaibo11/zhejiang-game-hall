
/* v8::internal::ScopeIterator::Next() */

void __thiscall v8::internal::ScopeIterator::Next(ScopeIterator *this)

{
  long *plVar1;
  int iVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  iVar2 = Type(this);
  if (iVar2 != 0) {
    lVar6 = *(long *)(this + 0x50);
    lVar8 = *(long *)(this + 0x20);
    if (lVar6 == *(long *)(this + 0x40)) {
      *(undefined8 *)(this + 0x20) = 0;
    }
    if (iVar2 == 6) {
      this[0x58] = (ScopeIterator)0x1;
      uVar7 = **(ulong **)(this + 0x28);
      if (*(short *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7) == 0x90) {
        pIVar3 = *(Isolate **)this;
        uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar5 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar7;
          *(ulong **)(this + 0x28) = puVar5;
        }
        else {
          uVar4 = CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
          *(undefined8 *)(this + 0x28) = uVar4;
        }
      }
    }
    else if (lVar8 == 0) {
      AdvanceContext(this);
    }
    else {
      do {
        if (0 < *(int *)(lVar6 + 0x7c)) {
          pIVar3 = *(Isolate **)this;
          uVar7 = **(ulong **)(this + 0x28) & 0xffffffff00000000 |
                  (ulong)*(uint *)(**(ulong **)(this + 0x28) + 0xb);
          if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)(pIVar3 + 0x95a0);
            if (puVar5 == *(ulong **)(pIVar3 + 0x95a8)) {
              puVar5 = (ulong *)HandleScope::Extend(pIVar3);
            }
            *(ulong **)(pIVar3 + 0x95a0) = puVar5 + 1;
            *puVar5 = uVar7;
          }
          else {
            puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
          }
          lVar6 = *(long *)(this + 0x50);
          *(ulong **)(this + 0x28) = puVar5;
        }
        lVar6 = *(long *)(lVar6 + 8);
        *(long *)(this + 0x50) = lVar6;
      } while ((*(byte *)(lVar6 + 0x81) >> 4 & 1) != 0);
      if ((*(long *)(this + 0x20) == 0) && (*(long *)(this + 0x40) != lVar6)) {
        uVar4 = StringSet::New(*(Isolate **)this);
        *(undefined8 *)(this + 0x38) = uVar4;
        plVar9 = *(long **)(*(long *)(this + 0x50) + 0x40);
        plVar1 = (long *)(*(long *)(this + 0x50) + 0x38);
        while (plVar1 != plVar9) {
          lVar6 = *plVar1;
          if (((*(ushort *)(lVar6 + 0x28) >> 7 & 7) - 1 & 0xff) < 2) {
            uVar4 = StringSet::Add(*(undefined8 *)this,uVar4,**(undefined8 **)(lVar6 + 8));
            *(undefined8 *)(this + 0x38) = uVar4;
            lVar6 = *plVar1;
          }
          plVar1 = (long *)(lVar6 + 0x18);
        }
      }
    }
    UnwrapEvaluationContext(this);
    return;
  }
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


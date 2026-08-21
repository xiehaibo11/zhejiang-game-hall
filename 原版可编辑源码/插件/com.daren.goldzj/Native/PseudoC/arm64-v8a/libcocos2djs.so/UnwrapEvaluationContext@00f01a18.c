
/* v8::internal::ScopeIterator::UnwrapEvaluationContext() */

void __thiscall v8::internal::ScopeIterator::UnwrapEvaluationContext(ScopeIterator *this)

{
  ulong *puVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = **(ulong **)(this + 0x28);
  if (((int)uVar2 != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7) == 0x8b)) {
    do {
      uVar4 = uVar2 & 0xffffffff00000000;
      if (((*(uint *)(uVar2 + 0x13) & 1) == 0) ||
         (uVar5 = uVar4 | *(uint *)(uVar2 + 0x13),
         9 < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) - 0x88)) {
        uVar5 = uVar4 | *(uint *)(uVar2 + 0xb);
      }
      uVar2 = uVar5;
    } while (*(short *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7) == 0x8b);
    pIVar3 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar2);
    }
    *(ulong **)(this + 0x28) = puVar1;
  }
  return;
}


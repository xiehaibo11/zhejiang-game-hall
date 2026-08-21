
/* v8::internal::TransitionsAccessor::ExpectedTransitionKey() */

ulong * __thiscall
v8::internal::TransitionsAccessor::ExpectedTransitionKey(TransitionsAccessor *this)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(this + 0x20);
  if ((2 < uVar1) && (uVar1 != 4)) {
    if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pIVar2 = *(Isolate **)this;
    uVar5 = *(ulong *)(this + 0x18) & 0xfffffffffffffffd;
    if ((*(uint *)(pIVar2 + ((long)(int)((*(uint *)(uVar5 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                             0x1000000000 >> 0x20 | 3U) + (ulong)*(uint *)(uVar5 + 0x17)) & 0x74) ==
        0) {
      uVar4 = *(ulong *)(this + 0x18) & 0xffffffff00000000;
      uVar5 = uVar4 | *(uint *)((uVar4 | *(uint *)(uVar5 + 0x17)) +
                                ((long)(int)((*(uint *)(uVar5 + 0xb) >> 10 & 0x3ff) - 1) *
                                 0xc00000000 + 0x1000000000 >> 0x20) + -1);
      if (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40) {
        if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar2 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(pIVar2);
          }
          *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar5;
          return puVar3;
        }
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
        return puVar3;
      }
    }
  }
  return (ulong *)0x0;
}


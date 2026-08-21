
/* v8::internal::LookupIterator::GetInterceptor() const */

void __thiscall v8::internal::LookupIterator::GetInterceptor(LookupIterator *this)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  uVar2 = **(ulong **)(this + 0x38);
  if ((*(ulong *)(this + 0x48) < 0xffffffff) ||
     ((*(ulong *)(this + 0x48) != 0xffffffffffffffff &&
      ((byte)((*(byte *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 10) >> 3) -
             0x11) < 0xb)))) {
    uVar2 = GetInterceptor<true>(this);
  }
  else {
    uVar3 = *(ulong *)(this + 0x18);
    uVar5 = *(uint *)((uVar3 | 0x13) + (ulong)*(uint *)(uVar2 - 1)) + uVar3;
    if ((uVar5 & 1) != 0) {
      do {
        if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0xa2) {
          if (((uVar5 & 1) != 0) && (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439)
             ) {
            uVar5 = uVar5 & 0xffffffff00000000 |
                    (ulong)*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb)) +
                                    3);
          }
          break;
        }
        uVar5 = *(uint *)(uVar5 + 0x13) + uVar3;
      } while ((uVar5 & 1) != 0);
    }
    uVar2 = *(ulong *)(uVar3 + 0xa0);
    uVar3 = *(uint *)(uVar5 + 0x23) + uVar3;
    if ((int)uVar3 != (int)uVar2) {
      uVar2 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xf);
    }
  }
  pIVar4 = *(Isolate **)(this + 0x18);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar2);
  }
  return;
}



/* v8::internal::LookupIterator::GetReceiverMap() const */

Isolate * __thiscall v8::internal::LookupIterator::GetReceiverMap(LookupIterator *this)

{
  uint uVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  pIVar2 = *(Isolate **)(this + 0x18);
  uVar4 = **(ulong **)(this + 0x30);
  if (((uVar4 & 1) == 0) || (*(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x42))
  {
    pIVar3 = pIVar2 + 0x140;
  }
  else {
    uVar1 = *(uint *)(uVar4 - 1);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar3 = *(Isolate **)(pIVar2 + 0x95a0);
      if (pIVar3 == *(Isolate **)(pIVar2 + 0x95a8)) {
        pIVar3 = (Isolate *)HandleScope::Extend(pIVar2);
      }
      *(Isolate **)(pIVar2 + 0x95a0) = pIVar3 + 8;
      *(Isolate **)pIVar3 = pIVar2 + uVar1;
    }
    else {
      pIVar3 = (Isolate *)
               CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),(ulong)(pIVar2 + uVar1));
    }
  }
  return pIVar3;
}


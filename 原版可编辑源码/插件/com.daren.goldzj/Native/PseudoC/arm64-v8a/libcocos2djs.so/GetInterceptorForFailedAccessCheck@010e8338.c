
/* v8::internal::LookupIterator::GetInterceptorForFailedAccessCheck() const */

ulong * __thiscall
v8::internal::LookupIterator::GetInterceptorForFailedAccessCheck(LookupIterator *this)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  
  uVar2 = AccessCheckInfo::Get(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x38));
  if ((int)uVar2 != 0) {
    lVar1 = 0xb;
    if (0xfffffffe < *(ulong *)(this + 0x48)) {
      lVar1 = 7;
    }
    if (*(uint *)(uVar2 + lVar1) != 0) {
      pIVar4 = *(Isolate **)(this + 0x18);
      uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + lVar1);
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar2);
        return puVar3;
      }
      puVar3 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar2;
      return puVar3;
    }
  }
  return (ulong *)0x0;
}



/* v8::TryCatch::Exception() const */

ulong * __thiscall v8::TryCatch::Exception(TryCatch *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 0x10);
  pIVar1 = *(Isolate **)this;
  if (((uVar3 & 1) == 0) || ((int)uVar3 != *(int *)(pIVar1 + 0xa8))) {
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)internal::HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
    }
  }
  else {
    puVar2 = (ulong *)0x0;
  }
  return puVar2;
}


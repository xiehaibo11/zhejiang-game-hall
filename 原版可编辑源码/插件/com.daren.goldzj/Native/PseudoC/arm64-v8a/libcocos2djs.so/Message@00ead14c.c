
/* v8::TryCatch::Message() const */

ulong * __thiscall v8::TryCatch::Message(TryCatch *this)

{
  ulong uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  
  uVar1 = *(ulong *)(this + 0x18);
  pIVar2 = *(Isolate **)this;
  if ((((*(ulong *)(this + 0x10) & 1) == 0) ||
      ((int)*(ulong *)(this + 0x10) != *(int *)(pIVar2 + 0xa8))) &&
     (((uVar1 & 1) == 0 || ((int)uVar1 != *(int *)(pIVar2 + 0xa8))))) {
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)internal::HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar1;
    }
    else {
      puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar1);
    }
  }
  else {
    puVar3 = (ulong *)0x0;
  }
  return puVar3;
}


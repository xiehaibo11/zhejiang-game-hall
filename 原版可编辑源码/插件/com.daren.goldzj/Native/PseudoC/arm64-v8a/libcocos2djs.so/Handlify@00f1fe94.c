
/* v8::internal::TranslatedValue::Handlify() */

void __thiscall v8::internal::TranslatedValue::Handlify(TranslatedValue *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  if (*this == (TranslatedValue)0x1) {
    uVar3 = *(ulong *)(this + 0x18);
    pIVar2 = *(Isolate **)(*(long *)(this + 8) + 0x18);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
    }
    this[1] = (TranslatedValue)0x2;
    *(ulong **)(this + 0x10) = puVar1;
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}


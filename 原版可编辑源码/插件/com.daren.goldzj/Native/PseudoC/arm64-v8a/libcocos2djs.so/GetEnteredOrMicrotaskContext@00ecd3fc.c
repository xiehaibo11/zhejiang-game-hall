
/* v8::Isolate::GetEnteredOrMicrotaskContext() */

ulong * __thiscall v8::Isolate::GetEnteredOrMicrotaskContext(Isolate *this)

{
  ulong *puVar1;
  undefined8 *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  puVar2 = *(undefined8 **)(this + 0x95c0);
  if (puVar2[6] == 0) {
    puVar1 = (ulong *)0x0;
  }
  else {
    pIVar3 = (Isolate *)*puVar2;
    uVar4 = *(ulong *)(puVar2[4] + puVar2[6] * 8 + -8);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar1 = (ulong *)internal::HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar4;
    }
    else {
      puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
    }
  }
  return puVar1;
}


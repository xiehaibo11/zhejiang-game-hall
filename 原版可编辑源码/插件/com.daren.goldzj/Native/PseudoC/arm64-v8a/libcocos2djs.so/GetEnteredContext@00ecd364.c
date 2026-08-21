
/* v8::Isolate::GetEnteredContext() */

ulong * __thiscall v8::Isolate::GetEnteredContext(Isolate *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  puVar3 = *(undefined8 **)(this + 0x95c0);
  if (puVar3[6] != 0) {
    lVar4 = puVar3[6] + -1;
    do {
      if (*(char *)(puVar3[7] + lVar4) == '\0') {
        pIVar2 = (Isolate *)*puVar3;
        uVar5 = *(ulong *)(puVar3[4] + lVar4 * 8);
        if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) != (CanonicalHandleScope *)0x0) {
          puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
          return puVar1;
        }
        puVar1 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar1 = (ulong *)internal::HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
        *puVar1 = uVar5;
        return puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (lVar4 != -1);
  }
  return (ulong *)0x0;
}



/* v8::internal::TranslatedState::Prepare(unsigned long) */

void __thiscall v8::internal::TranslatedState::Prepare(TranslatedState *this,ulong param_1)

{
  TranslatedFrame *this_00;
  TranslatedFrame *pTVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  pTVar1 = *(TranslatedFrame **)(this + 8);
  for (this_00 = *(TranslatedFrame **)this; this_00 != pTVar1; this_00 = this_00 + 0x58) {
    TranslatedFrame::Handlify(this_00);
  }
  uVar4 = *(ulong *)(this + 0x68);
  if ((int)uVar4 != 0) {
    pIVar3 = *(Isolate **)(this + 0x18);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
    }
    *(ulong **)(this + 0x60) = puVar2;
    *(undefined8 *)(this + 0x68) = 0;
  }
  *(ulong *)(this + 0x20) = param_1;
  UpdateFromPreviouslyMaterializedObjects(this);
  return;
}


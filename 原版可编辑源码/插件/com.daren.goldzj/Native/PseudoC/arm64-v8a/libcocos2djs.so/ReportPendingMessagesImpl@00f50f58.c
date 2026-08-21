
/* v8::internal::Isolate::ReportPendingMessagesImpl(bool) */

void __thiscall v8::internal::Isolate::ReportPendingMessagesImpl(Isolate *this,bool param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  bool bVar4;
  ulong *puVar5;
  CanonicalHandleScope *this_00;
  ulong *puVar6;
  ulong *puVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  MessageLocation aMStack_70 [32];
  
  uVar10 = *(ulong *)(this + 0x2bd8);
  uVar11 = *(ulong *)(this + 0x2c10);
  *(undefined8 *)(this + 0x2c10) = *(undefined8 *)(this + 0xa8);
  if ((int)uVar10 == *(int *)(this + 0x188)) {
    return;
  }
  if (param_1) {
    bVar8 = *(byte *)(*(long *)(this + 0x2bb8) + 0x28) & 1;
  }
  else {
    bVar4 = false;
    if ((*(ulong *)(this + 0x2c30) != 0) &&
       ((*(long *)(this + 0x2bb8) == 0 ||
        (uVar9 = *(ulong *)(*(long *)(this + 0x2bb8) + 0x20),
        bVar4 = *(ulong *)(this + 0x2c30) < uVar9, uVar9 == 0)))) {
      bVar4 = true;
    }
    bVar8 = bVar4 ^ 1;
  }
  if (((uint)uVar11 & (uint)((uint)uVar11 == (uint)*(undefined8 *)(this + 0xa8))) == 0) {
    if (bVar8 != 0) {
      pIVar1 = this + 0x95a0;
      puVar2 = *(ulong **)pIVar1;
      puVar3 = *(ulong **)(this + 0x95a8);
      *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = puVar2;
        if (puVar3 == puVar2) {
          puVar5 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar11;
        this_00 = *(CanonicalHandleScope **)(this + 0x95b8);
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar11);
        this_00 = *(CanonicalHandleScope **)(this + 0x95b8);
      }
      if (this_00 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar1;
        if (puVar6 == *(ulong **)(this + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar10;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar10);
      }
      uVar10 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0x13);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(this + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar10);
      }
      *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
      JSMessageObject::EnsureSourcePositionsAvailable(this,puVar5);
      *(ulong *)(this + 0x2bd8) = *puVar6;
      MessageLocation::MessageLocation
                (aMStack_70,puVar7,*(int *)(*puVar5 + 0x23) >> 1,*(int *)(*puVar5 + 0x27) >> 1);
      MessageHandler::ReportMessage(this,aMStack_70,puVar5);
      *(ulong **)pIVar1 = puVar2;
      *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
      if (*(ulong **)(this + 0x95a8) != puVar3) {
        *(ulong **)(this + 0x95a8) = puVar3;
        HandleScope::DeleteExtensions(this);
      }
      return;
    }
    return;
  }
  return;
}


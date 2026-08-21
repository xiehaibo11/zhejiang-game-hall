
/* v8::TryCatch::~TryCatch() */

void __thiscall v8::TryCatch::~TryCatch(TryCatch *this)

{
  undefined4 uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  int iVar4;
  Isolate *pIVar5;
  Isolate *pIVar6;
  ulong uVar7;
  Isolate *local_58;
  undefined8 uStack_50;
  long local_48;
  
  if (((byte)this[0x28] >> 3 & 1) == 0) {
    pIVar2 = *(Isolate **)this;
    if ((((*(ulong *)(this + 0x10) & 1) == 0) ||
        ((int)*(ulong *)(this + 0x10) != (int)*(undefined8 *)(pIVar2 + 0xa8))) &&
       ((int)*(undefined8 *)(pIVar2 + 0xa8) != *(int *)(pIVar2 + 0x2c20))) {
      internal::Isolate::CancelScheduledExceptionFromTryCatch(pIVar2,this);
      pIVar2 = *(Isolate **)this;
    }
    internal::Isolate::UnregisterTryCatchHandler(pIVar2,this);
    return;
  }
  pIVar6 = *(Isolate **)this;
  HandleScope::Initialize((HandleScope *)&local_58,(Isolate *)pIVar6);
  uVar7 = *(ulong *)(this + 0x10);
  pIVar2 = *(Isolate **)this;
  if (((uVar7 & 1) == 0) || ((int)uVar7 != *(int *)(pIVar2 + 0xa8))) {
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)internal::HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar7;
    }
    else {
      puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar7);
    }
    if (puVar3 != (ulong *)0x0) {
      pIVar2 = *(Isolate **)(pIVar6 + 0x95a0);
      uVar7 = *puVar3;
      if (pIVar2 == *(Isolate **)(pIVar6 + 0x95a8)) {
        pIVar2 = (Isolate *)internal::HandleScope::Extend(pIVar6);
      }
      *(Isolate **)(pIVar6 + 0x95a0) = pIVar2 + 8;
      *(ulong *)pIVar2 = uVar7;
      uVar7 = *(ulong *)(this + 0x10);
      iVar4 = (int)uVar7;
      goto joined_r0x00eaca98;
    }
  }
  pIVar2 = (Isolate *)0x0;
  uVar7 = *(ulong *)(this + 0x10);
  iVar4 = (int)uVar7;
joined_r0x00eaca98:
  if ((((uVar7 & 1) == 0) || (iVar4 != *(int *)(*(long *)this + 0xa8))) &&
     (((byte)this[0x28] >> 2 & 1) != 0)) {
    *(undefined1 *)(*(long *)this + 0x2c18) = 1;
    internal::Isolate::RestorePendingMessageFromTryCatch(*(Isolate **)this,this);
  }
  internal::Isolate::UnregisterTryCatchHandler(*(Isolate **)this,this);
  pIVar5 = *(Isolate **)this;
  uVar1 = *(undefined4 *)(pIVar5 + 0x2c60);
  *(undefined4 *)(pIVar5 + 0x2c60) = 5;
  pIVar6 = pIVar5 + 0xa0;
  if (pIVar2 != (Isolate *)0x0) {
    pIVar6 = pIVar2;
  }
  internal::Isolate::ScheduleThrow(pIVar5,*(undefined8 *)pIVar6);
  *(undefined4 *)(pIVar5 + 0x2c60) = uVar1;
  *(undefined8 *)(local_58 + 0x95a0) = uStack_50;
  *(int *)(local_58 + 0x95b0) = *(int *)(local_58 + 0x95b0) + -1;
  if (*(long *)(local_58 + 0x95a8) != local_48) {
    *(long *)(local_58 + 0x95a8) = local_48;
    internal::HandleScope::DeleteExtensions(local_58);
  }
  return;
}


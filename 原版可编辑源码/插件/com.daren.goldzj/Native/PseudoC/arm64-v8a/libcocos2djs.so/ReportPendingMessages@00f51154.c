
/* v8::internal::Isolate::ReportPendingMessages() */

void __thiscall v8::internal::Isolate::ReportPendingMessages(Isolate *this)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x2bd8);
  uVar2 = PropagatePendingExceptionToExternalTryCatch(this);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(this + 0x2bb8) == 0) ||
       (uVar2 = *(ulong *)(*(long *)(this + 0x2bb8) + 0x20), uVar2 == 0)) {
      bVar1 = false;
    }
    else if ((int)uVar3 == *(int *)(this + 0x188)) {
      bVar1 = true;
    }
    else {
      bVar1 = uVar2 <= *(long *)(this + 0x2c30) - 1U;
    }
    ReportPendingMessagesImpl(this,bVar1);
    return;
  }
  return;
}


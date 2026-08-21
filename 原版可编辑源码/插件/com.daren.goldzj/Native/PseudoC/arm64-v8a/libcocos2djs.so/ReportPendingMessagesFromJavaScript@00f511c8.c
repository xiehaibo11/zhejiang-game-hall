
/* v8::internal::Isolate::ReportPendingMessagesFromJavaScript() */

void __thiscall v8::internal::Isolate::ReportPendingMessagesFromJavaScript(Isolate *this)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x2bb8);
  if (lVar1 != 0) {
    if (*(ulong *)(lVar1 + 0x20) - 1 < **(ulong **)(this + 0x2c30)) {
      if (*(ulong *)(lVar1 + 0x20) < **(ulong **)(this + 0x2c30)) {
        this[0x2c19] = (Isolate)0x1;
        *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) & 0xef | 2;
        *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(this + 0x2bd8);
        uVar2 = *(ulong *)(this + 0x2c10);
        if (((uVar2 & 1) == 0) || ((int)uVar2 != *(int *)(this + 0xa8))) {
          *(ulong *)(lVar1 + 0x18) = uVar2;
        }
        ReportPendingMessagesImpl(this,true);
        return;
      }
      this[0x2c19] = (Isolate)0x0;
      ReportPendingMessagesImpl(this,true);
      return;
    }
  }
  this[0x2c19] = (Isolate)0x0;
  return;
}


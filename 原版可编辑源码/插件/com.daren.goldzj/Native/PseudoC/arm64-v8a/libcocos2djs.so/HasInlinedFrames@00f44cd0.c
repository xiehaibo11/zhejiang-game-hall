
/* v8::internal::JavaScriptFrame::HasInlinedFrames() const */

bool __thiscall v8::internal::JavaScriptFrame::HasInlinedFrames(JavaScriptFrame *this)

{
  long lVar1;
  void *local_38;
  void *local_30;
  undefined8 uStack_28;
  
  local_30 = (void *)0x0;
  uStack_28 = 0;
  local_38 = (void *)0x0;
  (**(code **)(*(long *)this + 0xa0))(this,&local_38);
  lVar1 = (long)local_30 - (long)local_38;
  if (local_38 != (void *)0x0) {
    local_30 = local_38;
    operator_delete(local_38);
  }
  return 1 < (ulong)(lVar1 >> 3);
}


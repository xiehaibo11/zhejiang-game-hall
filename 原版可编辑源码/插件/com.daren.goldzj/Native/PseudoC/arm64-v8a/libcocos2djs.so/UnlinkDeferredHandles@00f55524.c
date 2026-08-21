
/* v8::internal::Isolate::UnlinkDeferredHandles(v8::internal::DeferredHandles*) */

void __thiscall v8::internal::Isolate::UnlinkDeferredHandles(Isolate *this,DeferredHandles *param_1)

{
  long lVar1;
  
  if (*(DeferredHandles **)(this + 0xc608) == param_1) {
    *(undefined8 *)(this + 0xc608) = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}


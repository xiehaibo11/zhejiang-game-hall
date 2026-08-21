
/* v8::internal::Isolate::LinkDeferredHandles(v8::internal::DeferredHandles*) */

void __thiscall v8::internal::Isolate::LinkDeferredHandles(Isolate *this,DeferredHandles *param_1)

{
  Isolate *pIVar1;
  
  pIVar1 = this + 0xc608;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)pIVar1;
  if (*(long *)pIVar1 != 0) {
    *(DeferredHandles **)(*(long *)pIVar1 + 0x20) = param_1;
  }
  *(DeferredHandles **)pIVar1 = param_1;
  return;
}


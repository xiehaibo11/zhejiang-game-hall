
/* v8::internal::wasm::WasmInterpreter::Thread::RaiseException(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::wasm::WasmInterpreter::Thread::RaiseException
          (Thread *this,Isolate *param_1,undefined8 *param_3)

{
  bool bVar1;
  ulong *puVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  if (*(long *)(this + 0x30) == 0) {
    pIVar4 = *(Isolate **)(this + 8);
    uVar5 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(**(ulong **)(this + 0x10) + 0x8b)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar5;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    }
    bVar1 = true;
    *(ulong **)(this + 0x30) = puVar2;
  }
  else {
    bVar1 = false;
  }
  Isolate::Throw(param_1,*param_3,0);
  uVar3 = ThreadImpl::HandleException((ThreadImpl *)this,param_1);
  if ((int)uVar3 != 1) {
    uVar3 = 0;
    *(undefined4 *)(this + 0x58) = 2;
  }
  if (bVar1) {
    *(undefined8 *)(this + 0x30) = 0;
  }
  return uVar3;
}


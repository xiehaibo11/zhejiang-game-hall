
/* v8::internal::wasm::WasmInterpreter::Thread::InitFrame(v8::internal::wasm::WasmFunction const*,
   v8::internal::wasm::WasmValue*) */

void __thiscall
v8::internal::wasm::WasmInterpreter::Thread::InitFrame
          (Thread *this,WasmFunction *param_1,WasmValue *param_2)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  if (*(long *)(this + 0x30) != 0) {
    ThreadImpl::InitFrame((ThreadImpl *)this,param_1,param_2);
    return;
  }
  pIVar2 = *(Isolate **)(this + 8);
  uVar3 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(**(ulong **)(this + 0x10) + 0x8b)) + 0xb);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
  }
  *(ulong **)(this + 0x30) = puVar1;
  ThreadImpl::InitFrame((ThreadImpl *)this,param_1,param_2);
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


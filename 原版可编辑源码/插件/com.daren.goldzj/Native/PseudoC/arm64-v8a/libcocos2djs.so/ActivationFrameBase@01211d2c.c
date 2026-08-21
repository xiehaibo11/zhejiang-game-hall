
/* v8::internal::wasm::WasmInterpreter::Thread::ActivationFrameBase(unsigned int) */

undefined4 __thiscall
v8::internal::wasm::WasmInterpreter::Thread::ActivationFrameBase(Thread *this,uint param_1)

{
  undefined4 uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  if (*(long *)(this + 0x30) == 0) {
    pIVar3 = *(Isolate **)(this + 8);
    uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(**(ulong **)(this + 0x10) + 0x8b)) + 0xb);
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
    *(ulong **)(this + 0x30) = puVar2;
    uVar1 = *(undefined4 *)(*(long *)(this + 0x78) + (ulong)param_1 * 0x10);
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x78) + (ulong)param_1 * 0x10);
  }
  return uVar1;
}


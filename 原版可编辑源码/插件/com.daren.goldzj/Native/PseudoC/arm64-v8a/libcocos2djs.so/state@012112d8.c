
/* v8::internal::wasm::WasmInterpreter::Thread::state() */

undefined4 __thiscall v8::internal::wasm::WasmInterpreter::Thread::state(Thread *this)

{
  Isolate *pIVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (*(long *)(this + 0x30) == 0) {
    pIVar1 = *(Isolate **)(this + 8);
    uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(**(ulong **)(this + 0x10) + 0x8b)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    uVar2 = *(undefined4 *)(this + 0x58);
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(this + 0x58);
  }
  return uVar2;
}


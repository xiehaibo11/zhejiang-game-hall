
/* v8::internal::wasm::WasmInterpreter::Thread::Run(int) */

undefined4 v8::internal::wasm::WasmInterpreter::Thread::Run(int param_1)

{
  bool bVar1;
  InterpreterCode *pIVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  pIVar2 = (InterpreterCode *)(ulong)(uint)param_1;
  bVar1 = true;
  if (*(long *)(pIVar2 + 0x30) == 0) {
    pIVar4 = *(Isolate **)(pIVar2 + 8);
    uVar5 = **(ulong **)(pIVar2 + 0x10) & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(**(ulong **)(pIVar2 + 0x10) + 0x8b)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    }
    bVar1 = false;
    *(ulong **)(pIVar2 + 0x30) = puVar3;
  }
  *(undefined4 *)(pIVar2 + 0x58) = 1;
  ThreadImpl::Execute(pIVar2,*(ulong *)(*(long *)(pIVar2 + 0x40) + -0x18),
                      (int)*(undefined8 *)(*(long *)(pIVar2 + 0x40) + -0x10));
  if (!bVar1) {
    *(undefined8 *)(pIVar2 + 0x30) = 0;
  }
  return *(undefined4 *)(pIVar2 + 0x58);
}


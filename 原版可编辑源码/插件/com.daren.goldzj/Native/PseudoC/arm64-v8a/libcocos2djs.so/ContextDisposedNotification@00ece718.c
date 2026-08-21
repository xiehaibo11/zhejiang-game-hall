
/* v8::Isolate::ContextDisposedNotification(bool) */

void __thiscall v8::Isolate::ContextDisposedNotification(Isolate *this,bool param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  WasmEngine *pWVar6;
  
  if ((!param_1) && (uVar5 = *(ulong *)(this + 0x2bc8), (int)uVar5 != 0)) {
    pIVar1 = this + 0x95a0;
    puVar2 = *(ulong **)pIVar1;
    puVar3 = *(ulong **)(this + 0x95a8);
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    pWVar6 = *(WasmEngine **)(this + 0xc770);
    uVar5 = uVar5 & 0xffffffff00000000 |
            (ulong)*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = puVar2;
      if (puVar3 == puVar2) {
        puVar4 = (ulong *)internal::HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
    }
    internal::wasm::WasmEngine::DeleteCompileJobsOnContext(pWVar6,puVar4);
    *(ulong **)pIVar1 = puVar2;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(ulong **)(this + 0x95a8) != puVar3) {
      *(ulong **)(this + 0x95a8) = puVar3;
      internal::HandleScope::DeleteExtensions((Isolate *)this);
    }
  }
  internal::Heap::NotifyContextDisposed((Heap *)(this + 0x8850),param_1);
  return;
}


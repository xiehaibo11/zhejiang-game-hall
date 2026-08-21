
/* v8::internal::AsmJsWasmStackFrame::GetPosition() const */

void __thiscall v8::internal::AsmJsWasmStackFrame::GetPosition(AsmJsWasmStackFrame *this)

{
  undefined4 uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  uVar1 = FrameSummary::WasmCompiledFrameSummary::GetWasmSourcePosition
                    (*(WasmCode **)(this + 0x20),*(int *)(this + 0x28));
  pIVar3 = *(Isolate **)(this + 8);
  uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x6f);
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
  WasmModuleObject::GetSourcePosition(puVar2,*(undefined4 *)(this + 0x18),uVar1,this[0x2c]);
  return;
}


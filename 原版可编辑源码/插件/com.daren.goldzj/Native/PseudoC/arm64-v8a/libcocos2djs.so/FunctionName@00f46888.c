
/* v8::internal::FrameSummary::WasmFrameSummary::FunctionName() const */

void __thiscall v8::internal::FrameSummary::WasmFrameSummary::FunctionName(WasmFrameSummary *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  WasmFrameSummary *pWVar3;
  ulong uVar4;
  
  pIVar1 = *(Isolate **)this;
  uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x6f);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
  }
  if (*(int *)(this + 8) == 1) {
    pWVar3 = (WasmFrameSummary *)(*(long *)(this + 0x20) + 0x38);
  }
  else {
    pWVar3 = this + 0x1c;
  }
  WasmModuleObject::GetFunctionName(*(undefined8 *)this,puVar2,*(undefined4 *)pWVar3);
  return;
}


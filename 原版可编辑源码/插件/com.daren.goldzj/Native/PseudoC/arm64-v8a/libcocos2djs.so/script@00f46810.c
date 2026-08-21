
/* v8::internal::FrameSummary::WasmFrameSummary::script() const */

void __thiscall v8::internal::FrameSummary::WasmFrameSummary::script(WasmFrameSummary *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  pIVar2 = (Isolate *)(**(ulong **)(this + 0x10) & 0xffffffff00000000);
  uVar3 = (ulong)pIVar2 |
          (ulong)*(uint *)(((ulong)pIVar2 | (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x6f)) +
                          0x13);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar3);
  }
  return;
}



/* v8::internal::FrameSummary::WasmFrameSummary::receiver() const */

void __thiscall v8::internal::FrameSummary::WasmFrameSummary::receiver(WasmFrameSummary *this)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  CanonicalHandleScope *this_00;
  Isolate *pIVar4;
  undefined8 local_18;
  
  uVar1 = *(uint *)(*(long *)(this + 0x10) + 4);
  pIVar4 = (Isolate *)((ulong)uVar1 << 0x20);
  local_18 = *(undefined8 *)(pIVar4 + 0x2bc8);
  uVar2 = Context::global_proxy((Context *)&local_18);
  this_00 = *(CanonicalHandleScope **)((ulong)uVar1 << 0x20 | 0x95b8);
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    CanonicalHandleScope::Lookup(this_00,uVar2);
  }
  return;
}


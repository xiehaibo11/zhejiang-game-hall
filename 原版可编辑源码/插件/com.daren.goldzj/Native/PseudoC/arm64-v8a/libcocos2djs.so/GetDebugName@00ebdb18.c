
/* v8::Function::GetDebugName() const */

ulong * __thiscall v8::Function::GetDebugName(Function *this)

{
  ulong *puVar1;
  CanonicalHandleScope *this_00;
  ulong uVar2;
  Isolate *pIVar3;
  
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(*(ulong *)this - 1)) == 0x439) {
    puVar1 = (ulong *)internal::JSFunction::GetDebugName();
    uVar2 = *puVar1;
    this_00 = *(CanonicalHandleScope **)((ulong)*(uint *)(this + 4) << 0x20 | 0x95b8);
    if (this_00 == (CanonicalHandleScope *)0x0) {
      pIVar3 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
      puVar1 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar1 = (ulong *)internal::HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup(this_00,uVar2);
    }
  }
  else {
    puVar1 = (ulong *)(uVar2 + 0xa0);
  }
  return puVar1;
}


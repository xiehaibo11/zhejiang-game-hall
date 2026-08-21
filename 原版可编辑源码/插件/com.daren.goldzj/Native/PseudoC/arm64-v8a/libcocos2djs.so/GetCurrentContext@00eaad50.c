
/* v8::Isolate::GetCurrentContext() */

ulong * __thiscall v8::Isolate::GetCurrentContext(Isolate *this)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 0x2bc8);
  if ((int)uVar3 != 0) {
    uVar1 = *(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 0x13);
    if (uVar1 != 0) {
      uVar3 = uVar3 & 0xffffffff00000000 | (ulong)uVar1;
      if (*(CanonicalHandleScope **)(this + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
        return puVar2;
      }
      puVar2 = *(ulong **)(this + 0x95a0);
      if (puVar2 == *(ulong **)(this + 0x95a8)) {
        puVar2 = (ulong *)internal::HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
      return puVar2;
    }
  }
  return (ulong *)0x0;
}


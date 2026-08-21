
/* v8::internal::FrameSummary::EnsureSourcePositionsAvailable() */

void __thiscall v8::internal::FrameSummary::EnsureSourcePositionsAvailable(FrameSummary *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (*(int *)(this + 8) != 0) {
    return;
  }
  pIVar1 = *(Isolate **)this;
  uVar3 = **(ulong **)(this + 0x18) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x18) + 0xb);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
  }
  SharedFunctionInfo::EnsureSourcePositionsAvailable(*(undefined8 *)this,puVar2);
  return;
}


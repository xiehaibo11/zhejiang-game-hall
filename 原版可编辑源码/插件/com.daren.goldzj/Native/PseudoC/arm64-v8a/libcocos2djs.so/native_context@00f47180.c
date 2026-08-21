
/* v8::internal::FrameSummary::native_context() const */

void __thiscall v8::internal::FrameSummary::native_context(FrameSummary *this)

{
  int iVar1;
  CanonicalHandleScope *this_00;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 == 2) || (iVar1 == 1)) {
    pIVar3 = *(Isolate **)this;
    this_00 = *(CanonicalHandleScope **)(pIVar3 + 0x95b8);
    uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
            (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x77);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar4 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
    pIVar3 = *(Isolate **)this;
    this_00 = *(CanonicalHandleScope **)(pIVar3 + 0x95b8);
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(**(ulong **)(this + 0x18) + 0xf)
                                                 ) - 1)) + 0x13);
  }
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    CanonicalHandleScope::Lookup(this_00,uVar4);
  }
  return;
}


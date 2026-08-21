
/* v8::internal::FrameSummary::script() const */

void __thiscall v8::internal::FrameSummary::script(FrameSummary *this)

{
  int iVar1;
  CanonicalHandleScope *this_00;
  ulong *puVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 == 2) || (iVar1 == 1)) {
    pIVar4 = (Isolate *)(**(ulong **)(this + 0x10) & 0xffffffff00000000);
    this_00 = *(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8);
    uVar5 = (ulong)pIVar4 |
            (ulong)*(uint *)(((ulong)pIVar4 | (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x6f)) +
                            0x13);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
    uVar5 = uVar3 | *(uint *)((uVar3 | *(uint *)(**(ulong **)(this + 0x18) + 0xb)) + 0xf);
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
      uVar5 = uVar3 | *(uint *)(uVar5 + 0xb);
    }
    pIVar4 = *(Isolate **)this;
    this_00 = *(CanonicalHandleScope **)(pIVar4 + 0x95b8);
  }
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    CanonicalHandleScope::Lookup(this_00,uVar5);
  }
  return;
}


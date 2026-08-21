
/* v8::internal::FrameSummary::receiver() const */

ulong * __thiscall v8::internal::FrameSummary::receiver(FrameSummary *this)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  CanonicalHandleScope *this_00;
  Isolate *pIVar5;
  undefined8 local_18;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 == 2) || (iVar1 == 1)) {
    uVar2 = *(uint *)(*(long *)(this + 0x10) + 4);
    pIVar5 = (Isolate *)((ulong)uVar2 << 0x20);
    local_18 = *(undefined8 *)(pIVar5 + 0x2bc8);
    uVar4 = Context::global_proxy((Context *)&local_18);
    this_00 = *(CanonicalHandleScope **)((ulong)uVar2 << 0x20 | 0x95b8);
    if (this_00 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar4);
    }
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar3 = *(ulong **)(this + 0x10);
  }
  return puVar3;
}


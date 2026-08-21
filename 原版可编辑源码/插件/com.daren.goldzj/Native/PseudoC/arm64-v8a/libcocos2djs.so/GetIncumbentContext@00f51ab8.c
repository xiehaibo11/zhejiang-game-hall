
/* v8::internal::Isolate::GetIncumbentContext() */

void __thiscall v8::internal::Isolate::GetIncumbentContext(Isolate *this)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  StackFrameIterator aSStack_5e8 [1416];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  StackFrameIterator::StackFrameIterator(aSStack_5e8,this);
  if (local_60 != (long *)0x0) {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5e8);
  }
  plVar3 = *(long **)(this + 0xc790);
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = plVar3[1];
  }
  if ((local_60 == (long *)0x0) || ((uVar4 != 0 && (uVar4 <= (ulong)local_60[3])))) {
    if (plVar3 == (long *)0x0) {
      puVar2 = (ulong *)v8::Isolate::GetEnteredOrMicrotaskContext((Isolate *)this);
    }
    else {
      puVar2 = (ulong *)*plVar3;
    }
  }
  else {
    uVar4 = (**(code **)(*local_60 + 0x60))();
    uVar4 = uVar4 & 0xffffffff00000000 |
            (ulong)*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(this + 0x95a0);
      if (puVar2 == *(ulong **)(this + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar2);
  }
  return;
}


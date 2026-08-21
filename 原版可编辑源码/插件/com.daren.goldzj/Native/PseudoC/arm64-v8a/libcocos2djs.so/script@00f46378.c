
/* v8::internal::FrameSummary::JavaScriptFrameSummary::script() const */

void __thiscall
v8::internal::FrameSummary::JavaScriptFrameSummary::script(JavaScriptFrameSummary *this)

{
  ulong *puVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  uVar2 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
  uVar4 = uVar2 | *(uint *)((uVar2 | *(uint *)(**(ulong **)(this + 0x18) + 0xb)) + 0xf);
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
    uVar4 = uVar2 | *(uint *)(uVar4 + 0xb);
  }
  pIVar3 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
  }
  return;
}


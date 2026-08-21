
/* v8::internal::JSStackFrame::GetScriptNameOrSourceUrl() */

ulong * __thiscall v8::internal::JSStackFrame::GetScriptNameOrSourceUrl(JSStackFrame *this)

{
  ulong uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = (**(code **)(*(long *)this + 0xc0))();
  if ((uVar1 & 1) == 0) {
    puVar2 = (ulong *)(*(long *)(this + 8) + 0xb0);
  }
  else {
    puVar2 = (ulong *)(**(code **)(*(long *)this + 200))(this);
    uVar1 = *puVar2;
    pIVar3 = *(Isolate **)(this + 8);
    uVar4 = uVar1 & 0xffffffff00000000;
    if (((*(uint *)(uVar1 + 0x33) & 1) == 0) ||
       (uVar5 = uVar4 | *(uint *)(uVar1 + 0x33),
       0x3f < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
      uVar5 = uVar4 | *(uint *)(uVar1 + 7);
    }
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar5;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
    }
  }
  return puVar2;
}


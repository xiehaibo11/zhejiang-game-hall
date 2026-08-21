
/* v8::internal::JSStackFrame::GetFileName() */

ulong * __thiscall v8::internal::JSStackFrame::GetFileName(JSStackFrame *this)

{
  ulong uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  
  uVar1 = (**(code **)(*(long *)this + 0xc0))();
  if ((uVar1 & 1) == 0) {
    puVar2 = (ulong *)(*(long *)(this + 8) + 0xb0);
  }
  else {
    puVar2 = (ulong *)(**(code **)(*(long *)this + 200))(this);
    pIVar3 = *(Isolate **)(this + 8);
    uVar1 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 7);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar1);
    }
  }
  return puVar2;
}


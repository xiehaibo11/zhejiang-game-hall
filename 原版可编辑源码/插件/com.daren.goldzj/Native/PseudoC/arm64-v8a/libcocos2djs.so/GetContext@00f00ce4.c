
/* v8::internal::FrameInspector::GetContext() */

ulong * __thiscall v8::internal::FrameInspector::GetContext(FrameInspector *this)

{
  ulong *puVar1;
  ulong uVar2;
  Isolate *pIVar3;
  
  if (*(long *)(this + 0x10) == 0) {
    uVar2 = (**(code **)(**(long **)this + 0x60))();
    pIVar3 = *(Isolate **)(this + 0x20);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar2);
    }
  }
  else {
    puVar1 = *(ulong **)(*(long *)(this + 0x10) + 8);
  }
  return puVar1;
}


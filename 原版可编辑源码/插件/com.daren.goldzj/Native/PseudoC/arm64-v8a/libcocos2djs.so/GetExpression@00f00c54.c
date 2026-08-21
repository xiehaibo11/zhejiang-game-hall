
/* v8::internal::FrameInspector::GetExpression(int) */

ulong * __thiscall v8::internal::FrameInspector::GetExpression(FrameInspector *this,int param_1)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  if (this[0x4c] == (FrameInspector)0x0) {
    puVar1 = (ulong *)(**(code **)(**(long **)this + 0x90))();
    pIVar2 = *(Isolate **)(this + 0x20);
    uVar3 = *puVar1;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
    }
  }
  else {
    puVar1 = *(ulong **)(*(long *)(*(long *)(this + 0x10) + 0x28) + (long)param_1 * 8);
  }
  return puVar1;
}



/* v8::internal::ScopeIterator::GetFunctionDebugName() const */

ulong * __thiscall v8::internal::ScopeIterator::GetFunctionDebugName(ScopeIterator *this)

{
  ulong *puVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  if (*(long *)(this + 0x20) != 0) {
    puVar1 = (ulong *)JSFunction::GetDebugName();
    return puVar1;
  }
  local_40 = **(ulong **)(this + 0x28);
  if (*(short *)((local_40 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_40 - 1)) != 0x8f) {
    local_38 = Context::closure_context((Context *)&local_40);
    local_18 = Context::scope_info((Context *)&local_38);
    uVar2 = ScopeInfo::FunctionDebugName((ScopeInfo *)&local_18);
    pIVar3 = *(Isolate **)this;
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
      uVar2 = *puVar1;
    }
    if (0 < *(int *)(uVar2 + 7)) {
      return puVar1;
    }
  }
  return (ulong *)(*(long *)this + 0xa0);
}


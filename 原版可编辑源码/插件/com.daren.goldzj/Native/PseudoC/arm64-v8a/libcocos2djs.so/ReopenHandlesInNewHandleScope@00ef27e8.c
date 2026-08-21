
/* v8::internal::OptimizedCompilationInfo::ReopenHandlesInNewHandleScope(v8::internal::Isolate*) */

void __thiscall
v8::internal::OptimizedCompilationInfo::ReopenHandlesInNewHandleScope
          (OptimizedCompilationInfo *this,Isolate *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  pIVar1 = param_1 + 0x95a0;
  if (*(ulong **)(this + 0x18) != (ulong *)0x0) {
    uVar3 = **(ulong **)(this + 0x18);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
    *(ulong **)(this + 0x18) = puVar2;
  }
  if (*(ulong **)(this + 0x10) != (ulong *)0x0) {
    uVar3 = **(ulong **)(this + 0x10);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
    *(ulong **)(this + 0x10) = puVar2;
  }
  if (*(ulong **)(this + 0x20) != (ulong *)0x0) {
    uVar3 = **(ulong **)(this + 0x20);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
    *(ulong **)(this + 0x20) = puVar2;
  }
  return;
}


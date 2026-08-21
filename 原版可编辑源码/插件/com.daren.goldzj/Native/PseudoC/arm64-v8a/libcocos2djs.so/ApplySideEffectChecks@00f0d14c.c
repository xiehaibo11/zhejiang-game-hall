
/* v8::internal::Debug::ApplySideEffectChecks(v8::internal::Handle<v8::internal::DebugInfo>) */

void __thiscall v8::internal::Debug::ApplySideEffectChecks(Debug *this,ulong *param_2)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  ulong local_18;
  
  pIVar2 = *(Isolate **)(this + 0x88);
  uVar3 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x13);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
  }
  DebugEvaluate::ApplySideEffectChecks();
  local_18 = *param_2;
  DebugInfo::SetDebugExecutionMode((DebugInfo *)&local_18,0x20);
  return;
}


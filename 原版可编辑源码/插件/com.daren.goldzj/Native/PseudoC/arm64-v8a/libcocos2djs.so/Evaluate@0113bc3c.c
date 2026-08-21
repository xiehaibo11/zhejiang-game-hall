
/* v8::internal::SyntheticModule::Evaluate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SyntheticModule>) */

long v8::internal::SyntheticModule::Evaluate(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong local_28;
  
  local_28 = *param_2;
  Module::SetStatus((Module *)&local_28,4);
  pcVar4 = *(code **)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1f)) + 3);
  uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
  }
  lVar2 = (*pcVar4)(puVar1,param_2);
  if (lVar2 == 0) {
    Isolate::PromoteScheduledException(param_1);
    local_28 = *param_2;
    Module::RecordErrorUsingPendingException((Module *)&local_28,param_1);
  }
  else {
    local_28 = *param_2;
    Module::SetStatus((Module *)&local_28,5);
  }
  return lVar2;
}


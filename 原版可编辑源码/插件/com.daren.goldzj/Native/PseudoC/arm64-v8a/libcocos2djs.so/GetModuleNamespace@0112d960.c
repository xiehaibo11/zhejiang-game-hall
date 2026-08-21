
/* v8::internal::SourceTextModule::GetModuleNamespace(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, int) */

void v8::internal::SourceTextModule::GetModuleNamespace(Isolate *param_1,ulong *param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_2 & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)(*param_2 + 0x23)) + (long)(param_3 << 2) + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
  }
  Module::GetModuleNamespace(param_1,puVar1);
  return;
}


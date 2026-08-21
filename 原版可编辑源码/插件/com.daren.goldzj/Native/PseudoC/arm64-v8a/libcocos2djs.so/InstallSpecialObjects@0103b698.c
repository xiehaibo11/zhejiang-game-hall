
/* v8::internal::Genesis::InstallSpecialObjects(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Context>) */

undefined8 v8::internal::Genesis::InstallSpecialObjects(Isolate *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  
  pIVar1 = param_1 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x35f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = puVar2;
    if (puVar3 == puVar2) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  lVar8 = (long)FLAG_stack_trace_limit;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = lVar8 << 1;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),lVar8 << 1);
  }
  JSObject::AddProperty(param_1,puVar4,param_1 + 0x9e8,puVar5,0);
  if (FLAG_expose_wasm == '\0') {
    if (FLAG_validate_asm == '\0') goto LAB_0103b7c4;
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  WasmJs::Install(param_1,bVar6);
LAB_0103b7c4:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(ulong **)(param_1 + 0x95a8) != puVar3) {
    *(ulong **)(param_1 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_1);
  }
  return 1;
}


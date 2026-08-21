
/* v8::internal::JSObject::MigrateInstance(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>) */

void v8::internal::JSObject::MigrateInstance(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  long *plVar2;
  JSObject *pJVar3;
  ulong uVar4;
  ulong local_28;
  
  uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  plVar2 = (long *)Map::Update(param_1,puVar1);
  *(uint *)(*plVar2 + 0xb) = *(uint *)(*plVar2 + 0xb) | 0x4000000;
  pJVar3 = (JSObject *)MigrateToMap(param_1,param_2,plVar2,0);
  if (FLAG_trace_migration != '\0') {
    PrintInstanceMigration(pJVar3,waitpid,*puVar1,*plVar2);
  }
  if (FLAG_verify_heap != '\0') {
    local_28 = *param_2;
    JSObjectVerify((JSObject *)&local_28,param_1);
  }
  return;
}


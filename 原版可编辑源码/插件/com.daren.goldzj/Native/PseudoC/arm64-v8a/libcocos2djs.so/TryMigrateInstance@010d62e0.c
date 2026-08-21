
/* v8::internal::JSObject::TryMigrateInstance(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>) */

undefined8 v8::internal::JSObject::TryMigrateInstance(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  JSObject *pJVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_28;
  
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar5;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  lVar2 = Map::TryUpdate(param_1,puVar1);
  uVar4 = 0;
  if (lVar2 != 0) {
    pJVar3 = (JSObject *)MigrateToMap(param_1,param_2,lVar2,0);
    if (FLAG_trace_migration != '\0') {
      uVar5 = *param_2;
      if (*(int *)(uVar5 - 1) != (int)*puVar1) {
        PrintInstanceMigration
                  (pJVar3,waitpid,*puVar1,uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1));
      }
    }
    if (FLAG_verify_heap != '\0') {
      local_28 = *param_2;
      JSObjectVerify((JSObject *)&local_28,param_1);
    }
    uVar4 = 1;
  }
  return uVar4;
}


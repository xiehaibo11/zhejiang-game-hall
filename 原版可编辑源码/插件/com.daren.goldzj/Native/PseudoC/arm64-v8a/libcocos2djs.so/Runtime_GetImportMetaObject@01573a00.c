
/* v8::internal::Runtime_GetImportMetaObject(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_GetImportMetaObject(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    lVar2 = *(long *)pIVar1;
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    local_28 = *(undefined8 *)(param_3 + 0x2bc8);
    uVar4 = Context::module((Context *)&local_28);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar4;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar4);
    }
    puVar6 = (undefined8 *)Isolate::RunHostInitializeImportMetaObjectCallback(param_3,puVar5);
    uVar7 = *puVar6;
    *(long *)pIVar1 = lVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
  uVar7 = FUN_01573af8(param_1,param_2,param_3);
  return uVar7;
}


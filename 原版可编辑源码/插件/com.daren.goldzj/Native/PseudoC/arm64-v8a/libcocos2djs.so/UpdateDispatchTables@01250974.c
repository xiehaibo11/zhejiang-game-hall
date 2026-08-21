
/* v8::internal::WasmTableObject::UpdateDispatchTables(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, int,
   v8::internal::Handle<v8::internal::WasmJSFunction>) */

void v8::internal::WasmTableObject::UpdateDispatchTables
               (Isolate *param_1,ulong *param_2,undefined4 param_3,undefined8 param_4)

{
  Isolate *pIVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  pIVar1 = param_1 + 0x95a0;
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  if (1 < *(int *)(uVar5 + 3)) {
    iVar6 = 0;
    lVar7 = 0;
    lVar8 = 0x400000000;
    do {
      iVar2 = *(int *)(uVar5 + 7 + (lVar8 >> 0x20));
      uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 7 + (long)iVar6);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar5;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
      WasmInstanceObject::ImportWasmJSFunctionIntoTable(param_1,puVar4,iVar2 >> 1,param_3,param_4);
      uVar5 = *puVar3;
      lVar7 = lVar7 + 3;
      iVar6 = iVar6 + 0xc;
      lVar8 = lVar8 + 0xc00000000;
    } while (lVar7 < *(int *)(uVar5 + 3) >> 1);
  }
  return;
}


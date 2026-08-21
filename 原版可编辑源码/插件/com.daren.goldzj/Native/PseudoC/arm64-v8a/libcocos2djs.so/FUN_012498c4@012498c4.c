
void FUN_012498c4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  WasmEngine *pWVar6;
  long *local_38;
  
  if (*(char *)(param_1 + 8) == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 8) = 1;
    pWVar6 = *(WasmEngine **)(lVar5 + 0xc770);
    plVar1 = operator_new(0x20);
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    *plVar1 = (long)&PTR_FUN_01cbc688;
    plVar1[1] = lVar5;
    puVar2 = (ulong *)v8::internal::GlobalHandles::Create
                                (*(GlobalHandles **)(lVar5 + 0x95e0),*puVar4);
    plVar1[2] = (long)puVar2;
    puVar3 = (ulong *)v8::internal::GlobalHandles::Create
                                (*(GlobalHandles **)(lVar5 + 0x95e0),*param_2);
    plVar1[3] = (long)puVar3;
    v8::internal::GlobalHandles::AnnotateStrongRetainer
              (puVar2,"InstantiateBytesResultResolver::promise_");
    v8::internal::GlobalHandles::AnnotateStrongRetainer
              (puVar3,"InstantiateBytesResultResolver::module_");
    local_38 = plVar1;
    v8::internal::wasm::WasmEngine::AsyncInstantiate
              (pWVar6,lVar5,&local_38,param_2,*(undefined8 *)(param_1 + 0x20));
    plVar1 = local_38;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  return;
}



/* v8::internal::WasmModuleObject::GetFunctionNameOrNull(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>, unsigned int) */

undefined8
v8::internal::WasmModuleObject::GetFunctionNameOrNull(Factory *param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_30;
  long lStack_28;
  
  lVar3 = **(long **)(*(long *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) +
                               3) + 0x18);
  plVar4 = *(long **)(lVar3 + 0xe0);
  lStack_28 = plVar4[1];
  local_30 = *plVar4;
  uVar1 = wasm::WasmModule::LookupFunctionName
                    (*(WasmModule **)(lVar3 + 200),(ModuleWireBytes *)&local_30,param_3);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lStack_28 = (long)uVar1 >> 0x20;
    local_30 = **(long **)(**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                                 (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) +
                          0xe0) + (uVar1 & 0xffffffff);
    uVar2 = Factory::NewStringFromUtf8(param_1,&local_30,0);
  }
  return uVar2;
}



/* v8::internal::wasm::WasmModuleBuilder::AddExport(v8::internal::Vector<char const>,
   v8::internal::wasm::ImportExportKindCode, unsigned int) */

void v8::internal::wasm::WasmModuleBuilder::AddExport
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = CONCAT31(local_18._1_3_,param_4);
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 < *(undefined8 **)(param_1 + 0x78)) {
    puVar1[2] = CONCAT44(param_5,local_18);
    puVar1[1] = param_3;
    *puVar1 = param_2;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 0x18;
  }
  else {
    local_28 = param_2;
    uStack_20 = param_3;
    uStack_14 = param_5;
    std::__ndk1::
    vector<v8::internal::wasm::WasmModuleBuilder::WasmExport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmExport>>
    ::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmExport>
              ((vector<v8::internal::wasm::WasmModuleBuilder::WasmExport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmExport>>
                *)(param_1 + 0x68),(WasmExport *)&local_28);
  }
  return;
}


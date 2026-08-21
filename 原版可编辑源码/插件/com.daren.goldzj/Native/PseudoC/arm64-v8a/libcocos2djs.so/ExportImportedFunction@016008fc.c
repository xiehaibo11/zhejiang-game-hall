
/* v8::internal::wasm::WasmModuleBuilder::ExportImportedFunction(v8::internal::Vector<char const>,
   int) */

void v8::internal::wasm::WasmModuleBuilder::ExportImportedFunction
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  int iStack_14;
  
  uVar2 = local_18;
  local_18 = local_18 & 0xffffff00;
  iStack_14 = param_4 + (int)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3) *
                        0x55555555;
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 < *(undefined8 **)(param_1 + 0x78)) {
    puVar1[2] = CONCAT44(iStack_14,uVar2) & 0xffffffffffffff00;
    puVar1[1] = param_3;
    *puVar1 = param_2;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 0x18;
  }
  else {
    local_28 = param_2;
    uStack_20 = param_3;
    std::__ndk1::
    vector<v8::internal::wasm::WasmModuleBuilder::WasmExport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmExport>>
    ::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmExport>
              ((vector<v8::internal::wasm::WasmModuleBuilder::WasmExport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmExport>>
                *)(param_1 + 0x68),(WasmExport *)&local_28);
  }
  return;
}


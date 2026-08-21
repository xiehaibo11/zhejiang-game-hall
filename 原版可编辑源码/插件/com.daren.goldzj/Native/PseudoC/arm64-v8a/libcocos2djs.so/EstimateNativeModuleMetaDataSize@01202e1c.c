
/* v8::internal::wasm::WasmCodeManager::EstimateNativeModuleMetaDataSize(v8::internal::wasm::WasmModule
   const*) */

long v8::internal::wasm::WasmCodeManager::EstimateNativeModuleMetaDataSize(WasmModule *param_1)

{
  long lVar1;
  
  lVar1 = EstimateStoredSize(param_1);
  return lVar1 + (ulong)*(uint *)(param_1 + 0x44) * 0x98 + 0x188;
}


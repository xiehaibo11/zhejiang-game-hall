
/* v8::internal::wasm::WasmSerializer::WasmSerializer(v8::internal::wasm::NativeModule*) */

void __thiscall
v8::internal::wasm::WasmSerializer::WasmSerializer(WasmSerializer *this,NativeModule *param_1)

{
  *(NativeModule **)this = param_1;
  NativeModule::SnapshotCodeTable();
  return;
}


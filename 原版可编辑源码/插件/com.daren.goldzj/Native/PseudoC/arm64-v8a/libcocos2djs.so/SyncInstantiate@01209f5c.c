
/* v8::internal::wasm::WasmEngine::SyncInstantiate(v8::internal::Isolate*,
   v8::internal::wasm::ErrorThrower*, v8::internal::Handle<v8::internal::WasmModuleObject>,
   v8::internal::MaybeHandle<v8::internal::JSReceiver>,
   v8::internal::MaybeHandle<v8::internal::JSArrayBuffer>) */

void __thiscall
v8::internal::wasm::WasmEngine::SyncInstantiate
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  InstantiateToInstanceObject(param_1,param_2,param_4,param_5,param_6);
  return;
}



/* v8::internal::wasm::NativeModuleSerializer::NativeModuleSerializer(v8::internal::wasm::NativeModule
   const*, v8::internal::Vector<v8::internal::wasm::WasmCode* const>) */

void __thiscall
v8::internal::wasm::NativeModuleSerializer::NativeModuleSerializer
          (NativeModuleSerializer *this,undefined8 param_1,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = param_4;
  this[0x18] = (NativeModuleSerializer)0x0;
  return;
}


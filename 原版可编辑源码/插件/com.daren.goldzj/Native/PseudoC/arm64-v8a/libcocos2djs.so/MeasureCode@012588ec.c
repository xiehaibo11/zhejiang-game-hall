
/* v8::internal::wasm::NativeModuleSerializer::MeasureCode(v8::internal::wasm::WasmCode const*)
   const */

long __thiscall
v8::internal::wasm::NativeModuleSerializer::MeasureCode
          (NativeModuleSerializer *this,WasmCode *param_1)

{
  if (param_1 != (WasmCode *)0x0) {
    return *(long *)(param_1 + 8) + *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x28) +
           *(long *)(param_1 + 0x80) * 8 + 0x5d;
  }
  return 8;
}


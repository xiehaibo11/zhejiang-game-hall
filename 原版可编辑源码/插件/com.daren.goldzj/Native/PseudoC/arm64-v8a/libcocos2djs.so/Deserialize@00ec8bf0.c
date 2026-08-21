
/* v8::WasmModuleObject::Deserialize(v8::Isolate*, v8::MemorySpan<unsigned char const>,
   v8::MemorySpan<unsigned char const>) */

void v8::WasmModuleObject::Deserialize(void)

{
  internal::wasm::DeserializeNativeModule();
  return;
}


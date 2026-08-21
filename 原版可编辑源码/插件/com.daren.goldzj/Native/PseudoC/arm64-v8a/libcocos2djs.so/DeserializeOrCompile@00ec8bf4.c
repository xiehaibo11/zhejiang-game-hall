
/* v8::WasmModuleObject::DeserializeOrCompile(v8::Isolate*, v8::MemorySpan<unsigned char const>,
   v8::MemorySpan<unsigned char const>) */

void v8::WasmModuleObject::DeserializeOrCompile
               (Isolate *param_1,undefined8 param_2,undefined8 param_3,uchar *param_4,ulong param_5)

{
  long lVar1;
  
  lVar1 = internal::wasm::DeserializeNativeModule();
  if (lVar1 != 0) {
    return;
  }
  Compile(param_1,param_4,param_5);
  return;
}


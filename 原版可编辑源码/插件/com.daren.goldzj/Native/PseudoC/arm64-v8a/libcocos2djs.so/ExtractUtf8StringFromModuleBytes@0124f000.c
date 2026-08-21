
/* v8::internal::WasmModuleObject::ExtractUtf8StringFromModuleBytes(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>, v8::internal::wasm::WireBytesRef) */

void v8::internal::WasmModuleObject::ExtractUtf8StringFromModuleBytes
               (Factory *param_1,ulong *param_2,ulong param_3)

{
  long local_20;
  long lStack_18;
  
  lStack_18 = (long)param_3 >> 0x20;
  local_20 = **(long **)(**(long **)(*(long *)((*param_2 & 0xffffffff00000000 |
                                               (ulong)*(uint *)(*param_2 + 0xb)) + 3) + 0x18) + 0xe0
                        ) + (param_3 & 0xffffffff);
  Factory::NewStringFromUtf8(param_1,&local_20,0);
  return;
}


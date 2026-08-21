
/* v8::internal::WasmModuleObject::ExtractUtf8StringFromModuleBytes(v8::internal::Isolate*,
   v8::internal::Vector<unsigned char const>, v8::internal::wasm::WireBytesRef) */

void __thiscall
v8::internal::WasmModuleObject::ExtractUtf8StringFromModuleBytes
          (WasmModuleObject *this,long param_1,undefined8 param_3,ulong param_4)

{
  long local_20;
  long lStack_18;
  
  local_20 = param_1 + (param_4 & 0xffffffff);
  lStack_18 = (long)(int)(param_4 >> 0x20);
  Factory::NewStringFromUtf8((Factory *)this,&local_20,0);
  return;
}


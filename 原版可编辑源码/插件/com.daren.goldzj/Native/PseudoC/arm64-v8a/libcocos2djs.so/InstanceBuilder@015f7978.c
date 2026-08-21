
/* v8::internal::wasm::InstanceBuilder::InstanceBuilder(v8::internal::Isolate*,
   v8::internal::wasm::ErrorThrower*, v8::internal::Handle<v8::internal::WasmModuleObject>,
   v8::internal::MaybeHandle<v8::internal::JSReceiver>,
   v8::internal::MaybeHandle<v8::internal::JSArrayBuffer>) */

void __thiscall
v8::internal::wasm::InstanceBuilder::InstanceBuilder
          (InstanceBuilder *this,undefined8 param_1,undefined8 param_2,ulong *param_4,
          undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  *(undefined8 *)this = param_1;
  *(undefined4 *)(this + 8) =
       *(undefined4 *)
        (**(long **)(*(long *)((*param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*param_4 + 0xb)) +
                              3) + 0x18) + 0xc0);
  lVar1 = *(long *)(**(long **)(*(long *)((*param_4 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(*param_4 + 0xb)) + 3) + 0x18) + 200);
  *(ulong **)(this + 0x20) = param_4;
  *(undefined8 *)(this + 0x28) = param_5;
  *(undefined8 *)(this + 0x30) = param_6;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(long *)(this + 0x10) = lVar1;
  *(undefined8 *)(this + 0x18) = param_2;
  std::__ndk1::
  vector<v8::internal::wasm::InstanceBuilder::SanitizedImport,std::__ndk1::allocator<v8::internal::wasm::InstanceBuilder::SanitizedImport>>
  ::reserve((vector<v8::internal::wasm::InstanceBuilder::SanitizedImport,std::__ndk1::allocator<v8::internal::wasm::InstanceBuilder::SanitizedImport>>
             *)(this + 0x70),
            (*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 3) * -0x5555555555555555);
  return;
}


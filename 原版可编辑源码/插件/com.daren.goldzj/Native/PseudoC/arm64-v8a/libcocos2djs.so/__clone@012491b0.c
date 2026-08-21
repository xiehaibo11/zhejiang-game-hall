
/* std::__ndk1::__function::__func<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&)#1},
   std::__ndk1::allocator<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&)#1}>, void (std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule> const&)>::__clone()
   const */

void __thiscall
std::__ndk1::__function::
__func<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)#1},std::__ndk1::allocator<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)#1}>,void(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)>
::__clone(__func<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::_lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)_1_,std::__ndk1::allocator<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::_lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)_1_>,void(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)>
          *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = operator_new(0x18);
  *puVar4 = &PTR____func_01cbc578;
  puVar4[1] = *(undefined8 *)(this + 8);
  lVar5 = *(long *)(this + 0x10);
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


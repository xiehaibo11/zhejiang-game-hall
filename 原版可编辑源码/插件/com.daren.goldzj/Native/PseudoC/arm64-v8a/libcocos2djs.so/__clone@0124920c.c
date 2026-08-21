
/* std::__ndk1::__function::__func<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&)#1},
   std::__ndk1::allocator<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&)#1}>, void (std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&)>::__clone(std::__ndk1::__function::__base<void
   (std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule> const&)>*) const */

void __thiscall
std::__ndk1::__function::
__func<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)#1},std::__ndk1::allocator<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)#1}>,void(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)>
::__clone(__func<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::_lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)_1_,std::__ndk1::allocator<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::_lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)_1_>,void(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)>
          *this,__base *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined ***)param_1 = &PTR____func_01cbc578;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  *(long *)(param_1 + 0x10) = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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


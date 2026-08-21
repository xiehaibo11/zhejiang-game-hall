
/* std::__ndk1::__shared_ptr_pointer<v8::internal::wasm::WasmModule*,
   std::__ndk1::default_delete<v8::internal::wasm::WasmModule>,
   std::__ndk1::allocator<v8::internal::wasm::WasmModule> >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<v8::internal::wasm::WasmModule*,std::__ndk1::default_delete<v8::internal::wasm::WasmModule>,std::__ndk1::allocator<v8::internal::wasm::WasmModule>>
::__on_zero_shared(__shared_ptr_pointer<v8::internal::wasm::WasmModule*,std::__ndk1::default_delete<v8::internal::wasm::WasmModule>,std::__ndk1::allocator<v8::internal::wasm::WasmModule>>
                   *this)

{
  WasmModule *this_00;
  
  this_00 = *(WasmModule **)(this + 0x18);
  if (this_00 != (WasmModule *)0x0) {
    v8::internal::wasm::WasmModule::~WasmModule(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


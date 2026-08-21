
/* v8::internal::wasm::NativeModule::FreeCode(v8::internal::Vector<v8::internal::wasm::WasmCode*
   const>) */

void v8::internal::wasm::NativeModule::FreeCode(long param_1,undefined8 *param_2,long param_3)

{
  ulong local_38;
  
  WasmCodeAllocator::FreeCode();
  base::Mutex::Lock((Mutex *)(param_1 + 0x110));
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      local_38 = *(ulong *)*param_2;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>>
      ::__erase_unique<unsigned_long>
                ((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>>
                  *)(param_1 + 0x138),&local_38);
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 0x110));
  return;
}


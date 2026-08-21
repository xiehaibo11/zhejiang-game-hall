
/* v8::internal::wasm::WasmEngine::FreeDeadCode(std::__ndk1::unordered_map<v8::internal::wasm::NativeModule*,
   std::__ndk1::vector<v8::internal::wasm::WasmCode*,
   std::__ndk1::allocator<v8::internal::wasm::WasmCode*> >,
   std::__ndk1::hash<v8::internal::wasm::NativeModule*>,
   std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::wasm::NativeModule* const,
   std::__ndk1::vector<v8::internal::wasm::WasmCode*,
   std::__ndk1::allocator<v8::internal::wasm::WasmCode*> > > > > const&) */

void __thiscall
v8::internal::wasm::WasmEngine::FreeDeadCode(WasmEngine *this,unordered_map *param_1)

{
  base::Mutex::Lock((Mutex *)(this + 0x100));
  FreeDeadCodeLocked(this,param_1);
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  return;
}



/* std::__ndk1::__shared_ptr_emplace<v8::internal::wasm::WasmEngine,
   std::__ndk1::allocator<v8::internal::wasm::WasmEngine> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::internal::wasm::WasmEngine,std::__ndk1::allocator<v8::internal::wasm::WasmEngine>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<v8::internal::wasm::WasmEngine,std::__ndk1::allocator<v8::internal::wasm::WasmEngine>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01cbc540;
  v8::internal::wasm::WasmEngine::~WasmEngine((WasmEngine *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}


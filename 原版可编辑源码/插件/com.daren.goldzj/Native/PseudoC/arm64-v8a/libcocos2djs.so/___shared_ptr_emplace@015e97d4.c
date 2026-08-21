
/* std::__ndk1::__shared_ptr_emplace<v8::internal::wasm::JSToWasmWrapperCompilationUnit,
   std::__ndk1::allocator<v8::internal::wasm::JSToWasmWrapperCompilationUnit>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01cc9b18;
  v8::internal::wasm::JSToWasmWrapperCompilationUnit::~JSToWasmWrapperCompilationUnit
            ((JSToWasmWrapperCompilationUnit *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


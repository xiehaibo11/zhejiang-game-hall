
/* std::__ndk1::__shared_ptr_pointer<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>,
   std::__ndk1::allocator<v8::internal::wasm::AsyncCompileJob> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>,std::__ndk1::allocator<v8::internal::wasm::AsyncCompileJob>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>,std::__ndk1::allocator<v8::internal::wasm::AsyncCompileJob>>
           *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}



/* std::__ndk1::__shared_ptr_emplace<v8::internal::wasm::StreamingDecoder::SectionBuffer,
   std::__ndk1::allocator<v8::internal::wasm::StreamingDecoder::SectionBuffer>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::internal::wasm::StreamingDecoder::SectionBuffer,std::__ndk1::allocator<v8::internal::wasm::StreamingDecoder::SectionBuffer>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<v8::internal::wasm::StreamingDecoder::SectionBuffer,std::__ndk1::allocator<v8::internal::wasm::StreamingDecoder::SectionBuffer>>
           *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x28);
  *(undefined ***)this = &PTR____shared_ptr_emplace_01cca2e8;
  *(undefined ***)(this + 0x18) = &PTR__SectionBuffer_01cca320;
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


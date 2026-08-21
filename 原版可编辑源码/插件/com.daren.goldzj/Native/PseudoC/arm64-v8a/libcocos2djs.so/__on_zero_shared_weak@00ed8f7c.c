
/* std::__ndk1::__shared_ptr_pointer<v8::internal::Coverage*,
   std::__ndk1::default_delete<v8::internal::Coverage>,
   std::__ndk1::allocator<v8::internal::Coverage> >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<v8::internal::Coverage*,std::__ndk1::default_delete<v8::internal::Coverage>,std::__ndk1::allocator<v8::internal::Coverage>>
::__on_zero_shared_weak
          (__shared_ptr_pointer<v8::internal::Coverage*,std::__ndk1::default_delete<v8::internal::Coverage>,std::__ndk1::allocator<v8::internal::Coverage>>
           *this)

{
  operator_delete(this);
  return;
}


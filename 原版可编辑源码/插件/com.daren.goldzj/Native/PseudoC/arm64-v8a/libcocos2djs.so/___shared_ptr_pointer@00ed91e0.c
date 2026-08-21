
/* std::__ndk1::__shared_ptr_pointer<v8::internal::TypeProfile*,
   std::__ndk1::default_delete<v8::internal::TypeProfile>,
   std::__ndk1::allocator<v8::internal::TypeProfile> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<v8::internal::TypeProfile*,std::__ndk1::default_delete<v8::internal::TypeProfile>,std::__ndk1::allocator<v8::internal::TypeProfile>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<v8::internal::TypeProfile*,std::__ndk1::default_delete<v8::internal::TypeProfile>,std::__ndk1::allocator<v8::internal::TypeProfile>>
           *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


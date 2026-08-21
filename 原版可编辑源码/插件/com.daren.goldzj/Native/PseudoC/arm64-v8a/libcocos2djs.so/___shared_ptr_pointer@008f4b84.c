
/* std::__ndk1::__shared_ptr_pointer<unsigned char*, void (*)(void*),
   std::__ndk1::allocator<unsigned char> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>>::
~__shared_ptr_pointer
          (__shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>>
           *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


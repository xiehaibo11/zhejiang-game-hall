
/* std::__ndk1::__shared_ptr_pointer<unsigned char*, void (*)(void*),
   std::__ndk1::allocator<unsigned char> >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>>::
__on_zero_shared_weak
          (__shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>>
           *this)

{
  operator_delete(this);
  return;
}



/* std::__ndk1::__shared_ptr_emplace<v8::internal::OwnedVector<unsigned char const>,
   std::__ndk1::allocator<v8::internal::OwnedVector<unsigned char const> > >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::internal::OwnedVector<unsigned_char_const>,std::__ndk1::allocator<v8::internal::OwnedVector<unsigned_char_const>>>
::__on_zero_shared(__shared_ptr_emplace<v8::internal::OwnedVector<unsigned_char_const>,std::__ndk1::allocator<v8::internal::OwnedVector<unsigned_char_const>>>
                   *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


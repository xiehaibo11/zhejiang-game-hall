
/* std::__ndk1::__shared_ptr_emplace<v8::internal::OwnedVector<unsigned char const>,
   std::__ndk1::allocator<v8::internal::OwnedVector<unsigned char const> >
   >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::internal::OwnedVector<unsigned_char_const>,std::__ndk1::allocator<v8::internal::OwnedVector<unsigned_char_const>>>
::__on_zero_shared_weak
          (__shared_ptr_emplace<v8::internal::OwnedVector<unsigned_char_const>,std::__ndk1::allocator<v8::internal::OwnedVector<unsigned_char_const>>>
           *this)

{
  operator_delete(this);
  return;
}


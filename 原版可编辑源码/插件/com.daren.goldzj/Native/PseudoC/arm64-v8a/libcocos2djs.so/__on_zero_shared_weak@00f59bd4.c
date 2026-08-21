
/* std::__ndk1::__shared_ptr_emplace<v8::internal::Counters,
   std::__ndk1::allocator<v8::internal::Counters> >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::internal::Counters,std::__ndk1::allocator<v8::internal::Counters>>::
__on_zero_shared_weak
          (__shared_ptr_emplace<v8::internal::Counters,std::__ndk1::allocator<v8::internal::Counters>>
           *this)

{
  operator_delete(this);
  return;
}


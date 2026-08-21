
/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::atomic<bool>,
   std::__ndk1::allocator<std::__ndk1::atomic<bool> > >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<std::__ndk1::atomic<bool>,std::__ndk1::allocator<std::__ndk1::atomic<bool>>>::
__on_zero_shared_weak
          (__shared_ptr_emplace<std::__ndk1::atomic<bool>,std::__ndk1::allocator<std::__ndk1::atomic<bool>>>
           *this)

{
  operator_delete(this);
  return;
}


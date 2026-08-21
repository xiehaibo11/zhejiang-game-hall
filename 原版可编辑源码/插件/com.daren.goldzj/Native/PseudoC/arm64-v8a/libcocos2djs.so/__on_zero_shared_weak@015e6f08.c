
/* std::__ndk1::__shared_ptr_emplace<v8::base::Semaphore,
   std::__ndk1::allocator<v8::base::Semaphore> >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<v8::base::Semaphore,std::__ndk1::allocator<v8::base::Semaphore>>::
__on_zero_shared_weak
          (__shared_ptr_emplace<v8::base::Semaphore,std::__ndk1::allocator<v8::base::Semaphore>>
           *this)

{
  operator_delete(this);
  return;
}


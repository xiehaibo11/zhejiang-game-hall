
/* std::__ndk1::__shared_ptr_emplace<v8::base::Semaphore,
   std::__ndk1::allocator<v8::base::Semaphore> >::__on_zero_shared() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<v8::base::Semaphore,std::__ndk1::allocator<v8::base::Semaphore>>::
__on_zero_shared(__shared_ptr_emplace<v8::base::Semaphore,std::__ndk1::allocator<v8::base::Semaphore>>
                 *this)

{
  v8::base::Semaphore::~Semaphore((Semaphore *)(this + 0x18));
  return;
}


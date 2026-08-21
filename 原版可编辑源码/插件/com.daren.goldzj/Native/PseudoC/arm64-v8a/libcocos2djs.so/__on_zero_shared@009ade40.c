
/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex, std::__ndk1::allocator<std::__ndk1::mutex>
   >::__on_zero_shared() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>>::
__on_zero_shared(__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>>
                 *this)

{
  mutex::~mutex((mutex *)(this + 0x18));
  return;
}


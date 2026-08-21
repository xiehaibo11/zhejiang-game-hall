
/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex, std::__ndk1::allocator<std::__ndk1::mutex>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>> *this
          )

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_016f4660;
  mutex::~mutex((mutex *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}


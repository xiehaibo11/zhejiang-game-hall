
/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::atomic<bool>,
   std::__ndk1::allocator<std::__ndk1::atomic<bool> > >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<std::__ndk1::atomic<bool>,std::__ndk1::allocator<std::__ndk1::atomic<bool>>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<std::__ndk1::atomic<bool>,std::__ndk1::allocator<std::__ndk1::atomic<bool>>>
           *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


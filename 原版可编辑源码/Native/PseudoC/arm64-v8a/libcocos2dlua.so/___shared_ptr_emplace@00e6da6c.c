
/* std::__ndk1::__shared_ptr_emplace<bool, std::__ndk1::allocator<bool> >::~__shared_ptr_emplace()
    */

void __thiscall
std::__ndk1::__shared_ptr_emplace<bool,std::__ndk1::allocator<bool>>::~__shared_ptr_emplace
          (__shared_ptr_emplace<bool,std::__ndk1::allocator<bool>> *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


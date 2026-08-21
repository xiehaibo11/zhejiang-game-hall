
/* std::__ndk1::__shared_ptr_emplace<bool, std::__ndk1::allocator<bool> >::__on_zero_shared_weak()
    */

void __thiscall
std::__ndk1::__shared_ptr_emplace<bool,std::__ndk1::allocator<bool>>::__on_zero_shared_weak
          (__shared_ptr_emplace<bool,std::__ndk1::allocator<bool>> *this)

{
  operator_delete(this);
  return;
}


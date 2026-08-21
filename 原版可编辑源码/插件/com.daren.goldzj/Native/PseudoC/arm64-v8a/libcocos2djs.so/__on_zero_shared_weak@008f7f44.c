
/* std::__ndk1::__shared_ptr_emplace<se::Value, std::__ndk1::allocator<se::Value>
   >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<se::Value,std::__ndk1::allocator<se::Value>>::
__on_zero_shared_weak(__shared_ptr_emplace<se::Value,std::__ndk1::allocator<se::Value>> *this)

{
  operator_delete(this);
  return;
}


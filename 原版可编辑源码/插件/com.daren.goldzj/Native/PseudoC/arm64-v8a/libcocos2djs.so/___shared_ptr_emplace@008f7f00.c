
/* std::__ndk1::__shared_ptr_emplace<se::Value, std::__ndk1::allocator<se::Value>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<se::Value,std::__ndk1::allocator<se::Value>>::
~__shared_ptr_emplace(__shared_ptr_emplace<se::Value,std::__ndk1::allocator<se::Value>> *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c680d8;
  se::Value::~Value((Value *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


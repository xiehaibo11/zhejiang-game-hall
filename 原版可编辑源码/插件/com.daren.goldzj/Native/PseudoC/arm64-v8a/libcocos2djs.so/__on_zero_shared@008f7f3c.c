
/* std::__ndk1::__shared_ptr_emplace<se::Value, std::__ndk1::allocator<se::Value>
   >::__on_zero_shared() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<se::Value,std::__ndk1::allocator<se::Value>>::__on_zero_shared
          (__shared_ptr_emplace<se::Value,std::__ndk1::allocator<se::Value>> *this)

{
  se::Value::~Value((Value *)(this + 0x18));
  return;
}


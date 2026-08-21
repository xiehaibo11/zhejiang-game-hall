
/* std::__ndk1::__shared_ptr_emplace<cocos2d::Data, std::__ndk1::allocator<cocos2d::Data>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<cocos2d::Data,std::__ndk1::allocator<cocos2d::Data>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::Data,std::__ndk1::allocator<cocos2d::Data>> *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_016cfc60;
  cocos2d::Data::~Data((Data *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


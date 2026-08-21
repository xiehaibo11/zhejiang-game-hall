
/* std::__ndk1::__shared_ptr_emplace<cocos2d::FontFreeType,
   std::__ndk1::allocator<cocos2d::FontFreeType> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::FontFreeType,std::__ndk1::allocator<cocos2d::FontFreeType>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::FontFreeType,std::__ndk1::allocator<cocos2d::FontFreeType>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6ac98;
  cocos2d::FontFreeType::~FontFreeType((FontFreeType *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


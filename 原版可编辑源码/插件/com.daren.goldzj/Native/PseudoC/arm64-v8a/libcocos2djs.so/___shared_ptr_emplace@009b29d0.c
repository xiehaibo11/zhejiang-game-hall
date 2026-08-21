
/* std::__ndk1::__shared_ptr_emplace<cocos2d::FontAtlas, std::__ndk1::allocator<cocos2d::FontAtlas>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<cocos2d::FontAtlas,std::__ndk1::allocator<cocos2d::FontAtlas>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::FontAtlas,std::__ndk1::allocator<cocos2d::FontAtlas>> *this
          )

{
                    /* try { // try from 009b29d0 to 00ab29db has its CatchHandler @ 009b2aa0 */
                    /* try { // try from 009b29dc to 00ab2a03 has its CatchHandler @ 009b293c */
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6ace8;
  cocos2d::FontAtlas::~FontAtlas((FontAtlas *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
                    /* try { // try from 009b2a04 to 00ab2a0b has its CatchHandler @ 009b2a9c */
  operator_delete(this);
  return;
}


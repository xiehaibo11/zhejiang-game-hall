
/* std::__ndk1::__shared_ptr_emplace<cocos2d::TextRenderGroupItem,
   std::__ndk1::allocator<cocos2d::TextRenderGroupItem> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::TextRenderGroupItem,std::__ndk1::allocator<cocos2d::TextRenderGroupItem>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::TextRenderGroupItem,std::__ndk1::allocator<cocos2d::TextRenderGroupItem>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6abf8;
  *(undefined ***)(this + 0x18) = &PTR__TextRenderGroupItem_01c6ab98;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
                    /* try { // try from 009b1bf0 to 00ab1bf7 has its CatchHandler @ 009b1d24 */
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


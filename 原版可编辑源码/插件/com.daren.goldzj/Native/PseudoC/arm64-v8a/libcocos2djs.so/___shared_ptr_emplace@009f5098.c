
/* std::__ndk1::__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,
   std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6c3d8;
  FT_Done_FreeType(*(undefined8 *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


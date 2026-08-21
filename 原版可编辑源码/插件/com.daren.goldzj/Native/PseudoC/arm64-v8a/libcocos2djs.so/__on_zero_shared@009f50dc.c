
/* std::__ndk1::__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,
   std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary> >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary>>
::__on_zero_shared(__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary>>
                   *this)

{
  FT_Done_FreeType(*(undefined8 *)(this + 0x18));
  return;
}


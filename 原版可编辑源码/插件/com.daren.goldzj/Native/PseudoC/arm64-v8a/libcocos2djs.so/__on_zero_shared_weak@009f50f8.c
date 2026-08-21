
/* std::__ndk1::__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,
   std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary> >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary>>
::__on_zero_shared_weak
          (__shared_ptr_emplace<cocos2d::FontFreeTypeLibrary,std::__ndk1::allocator<cocos2d::FontFreeTypeLibrary>>
           *this)

{
  operator_delete(this);
  return;
}


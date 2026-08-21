
/* std::__ndk1::__shared_ptr_pointer<cocos2d::GlyphBitmap*,
   std::__ndk1::default_delete<cocos2d::GlyphBitmap>, std::__ndk1::allocator<cocos2d::GlyphBitmap>
   >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::GlyphBitmap*,std::__ndk1::default_delete<cocos2d::GlyphBitmap>,std::__ndk1::allocator<cocos2d::GlyphBitmap>>
::__on_zero_shared_weak
          (__shared_ptr_pointer<cocos2d::GlyphBitmap*,std::__ndk1::default_delete<cocos2d::GlyphBitmap>,std::__ndk1::allocator<cocos2d::GlyphBitmap>>
           *this)

{
  operator_delete(this);
  return;
}


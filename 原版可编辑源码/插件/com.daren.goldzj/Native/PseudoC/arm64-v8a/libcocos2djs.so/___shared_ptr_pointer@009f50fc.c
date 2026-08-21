
/* std::__ndk1::__shared_ptr_pointer<cocos2d::GlyphBitmap*,
   std::__ndk1::default_delete<cocos2d::GlyphBitmap>, std::__ndk1::allocator<cocos2d::GlyphBitmap>
   >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::GlyphBitmap*,std::__ndk1::default_delete<cocos2d::GlyphBitmap>,std::__ndk1::allocator<cocos2d::GlyphBitmap>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<cocos2d::GlyphBitmap*,std::__ndk1::default_delete<cocos2d::GlyphBitmap>,std::__ndk1::allocator<cocos2d::GlyphBitmap>>
           *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


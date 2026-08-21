
/* std::__ndk1::__shared_ptr_pointer<cocos2d::GlyphBitmap*,
   std::__ndk1::default_delete<cocos2d::GlyphBitmap>, std::__ndk1::allocator<cocos2d::GlyphBitmap>
   >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::GlyphBitmap*,std::__ndk1::default_delete<cocos2d::GlyphBitmap>,std::__ndk1::allocator<cocos2d::GlyphBitmap>>
::__on_zero_shared(__shared_ptr_pointer<cocos2d::GlyphBitmap*,std::__ndk1::default_delete<cocos2d::GlyphBitmap>,std::__ndk1::allocator<cocos2d::GlyphBitmap>>
                   *this)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 0x10);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x18) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}


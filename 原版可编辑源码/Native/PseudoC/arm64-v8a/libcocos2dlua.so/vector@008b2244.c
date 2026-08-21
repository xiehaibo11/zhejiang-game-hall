
/* std::__ndk1::vector<cocos2d::Sprite*, std::__ndk1::allocator<cocos2d::Sprite*>
   >::vector(std::__ndk1::vector<cocos2d::Sprite*, std::__ndk1::allocator<cocos2d::Sprite*> >
   const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>>::vector
          (vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>> *this,vector *param_1)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar1 != 0) {
    if ((ulong)((long)uVar1 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    __dest = operator_new(uVar1);
    *(void **)this = __dest;
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = (void *)((long)__dest + ((long)uVar1 >> 3) * 8);
    __n = *(long *)(param_1 + 8) - (long)*(void **)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)param_1,__n);
      __dest = (void *)((long)__dest + __n);
    }
    *(void **)(this + 8) = __dest;
  }
  return;
}


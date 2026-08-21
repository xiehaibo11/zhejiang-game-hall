
/* void std::__ndk1::vector<cocos2d::renderer::Texture::Image,
   std::__ndk1::allocator<cocos2d::renderer::Texture::Image>
   >::__push_back_slow_path<cocos2d::renderer::Texture::Image>(cocos2d::renderer::Texture::Image&&)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
::__push_back_slow_path<cocos2d::renderer::Texture::Image>
          (vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
           *this,Image *param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  undefined8 uVar4;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 4) + 1;
  if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 4) < 0x7ffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 3;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_008e0a4c;
    }
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0xfffffffffffffff;
  }
  __dest = operator_new(uVar3 << 4);
LAB_008e0a4c:
  uVar4 = *(undefined8 *)param_1;
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *puVar1 = uVar4;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 2;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 0x10);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


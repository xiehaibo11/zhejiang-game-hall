
/* void std::__ndk1::vector<cocos2d::renderer::Camera*,
   std::__ndk1::allocator<cocos2d::renderer::Camera*>
   >::__push_back_slow_path<cocos2d::renderer::Camera* const&>(cocos2d::renderer::Camera* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::renderer::Camera*,std::__ndk1::allocator<cocos2d::renderer::Camera*>>::
__push_back_slow_path<cocos2d::renderer::Camera*const&>
          (vector<cocos2d::renderer::Camera*,std::__ndk1::allocator<cocos2d::renderer::Camera*>>
           *this,Camera **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
                    /* try { // try from 009c9184 to 00ac9257 has its CatchHandler @ 009c8f84 */
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_009c91d8;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
                    /* catch() { ... } // from try @ 009c9004 with catch @ 009c91d0 */
  __dest = operator_new(uVar3 << 3);
                    /* catch() { ... } // from try @ 009c8ff8 with catch @ 009c91d4 */
LAB_009c91d8:
                    /* catch() { ... } // from try @ 009c9050 with catch @ 009c91d8
                       catch() { ... } // from try @ 009c9140 with catch @ 009c91d8 */
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* catch() { ... } // from try @ 009c8fd8 with catch @ 009c91f0 */
    memcpy(__dest,__src,__n);
  }
                    /* catch() { ... } // from try @ 009c9010 with catch @ 009c9200
                       catch() { ... } // from try @ 009c9088 with catch @ 009c9200 */
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}



/* void std::__ndk1::vector<cocos2d::renderer::EffectVariant*,
   std::__ndk1::allocator<cocos2d::renderer::EffectVariant*>
   >::__push_back_slow_path<cocos2d::renderer::EffectVariant*
   const&>(cocos2d::renderer::EffectVariant* const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::EffectVariant*,std::__ndk1::allocator<cocos2d::renderer::EffectVariant*>>
::__push_back_slow_path<cocos2d::renderer::EffectVariant*const&>
          (vector<cocos2d::renderer::EffectVariant*,std::__ndk1::allocator<cocos2d::renderer::EffectVariant*>>
           *this,EffectVariant **param_1)

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
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* catch() { ... } // from try @ 009ceb54 with catch @ 009cec24 */
                    /* catch() { ... } // from try @ 009ceb44 with catch @ 009cec28 */
                    /* catch() { ... } // from try @ 009ceb18 with catch @ 009cec2c */
                    /* catch() { ... } // from try @ 009ceb08 with catch @ 009cec30 */
                    /* catch() { ... } // from try @ 009ceadc with catch @ 009cec34 */
                    /* catch() { ... } // from try @ 009ceacc with catch @ 009cec38 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
                    /* catch() { ... } // from try @ 009ceaa0 with catch @ 009cec3c */
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
                    /* catch() { ... } // from try @ 009cea90 with catch @ 009cec40 */
                    /* catch() { ... } // from try @ 009ce8a8 with catch @ 009cec44 */
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
                    /* catch() { ... } // from try @ 009ce89c with catch @ 009cec48 */
    if (uVar3 == 0) {
                    /* try { // try from 009cecd8 to 00aced2b has its CatchHandler @ 009cecd8
                       catch() { ... } // from try @ 009cecd8 with catch @ 009cecd8
                       catch() { ... } // from try @ 009cef24 with catch @ 009cecd8 */
      __dest = (void *)0x0;
      goto LAB_009cec70;
    }
                    /* catch() { ... } // from try @ 009ce87c with catch @ 009cec4c */
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009cea7c with catch @ 009cec5c
                       catch() { ... } // from try @ 009ceabc with catch @ 009cec5c
                       catch() { ... } // from try @ 009ceaf8 with catch @ 009cec5c
                       catch() { ... } // from try @ 009ceb34 with catch @ 009cec5c
                       catch() { ... } // from try @ 009ceb6c with catch @ 009cec5c */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
                    /* catch() { ... } // from try @ 009ce8b4 with catch @ 009cec60
                       catch() { ... } // from try @ 009ceb94 with catch @ 009cec60 */
    uVar3 = 0x1fffffffffffffff;
  }
                    /* catch() { ... } // from try @ 009cea3c with catch @ 009cec68 */
  __dest = operator_new(uVar3 << 3);
LAB_009cec70:
                    /* catch() { ... } // from try @ 009cea44 with catch @ 009cec70 */
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}



/* void std::__ndk1::vector<cocos2d::Touch*, std::__ndk1::allocator<cocos2d::Touch*>
   >::__push_back_slow_path<cocos2d::Touch* const&>(cocos2d::Touch* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::
__push_back_slow_path<cocos2d::Touch*const&>
          (vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *this,Touch **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* try { // try from 00e17880 to 00f1789f has its CatchHandler @ 00e1795c */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* catch() { ... } // from try @ 00e17830 with catch @ 00e1796c */
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
                    /* try { // try from 00e178cc to 00f178d7 has its CatchHandler @ 00e17958 */
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00e178fc;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e178e8 to 00f17903 has its CatchHandler @ 00e17948 */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_00e178fc:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 00e17904 to 00f1797f has its CatchHandler @ 00e176c4 */
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
                    /* catch() { ... } // from try @ 00e178e8 with catch @ 00e17948 */
    operator_delete(__src);
    return;
  }
                    /* catch() { ... } // from try @ 00e178cc with catch @ 00e17958 */
                    /* catch() { ... } // from try @ 00e17880 with catch @ 00e1795c */
  return;
}


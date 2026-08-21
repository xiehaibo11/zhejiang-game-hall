
/* void std::__ndk1::vector<cocos2d::ui::RadioButton*,
   std::__ndk1::allocator<cocos2d::ui::RadioButton*>
   >::__push_back_slow_path<cocos2d::ui::RadioButton* const&>(cocos2d::ui::RadioButton* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::ui::RadioButton*,std::__ndk1::allocator<cocos2d::ui::RadioButton*>>::
__push_back_slow_path<cocos2d::ui::RadioButton*const&>
          (vector<cocos2d::ui::RadioButton*,std::__ndk1::allocator<cocos2d::ui::RadioButton*>> *this
          ,RadioButton **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc6dcc with catch @ 00dc6e28
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc6df4 with catch @ 00dc6e30
                        */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
                    /* try { // try from 00dc6e50 to 00ec6e53 has its CatchHandler @ 00dc6e5c */
  uVar3 = ((long)__n >> 3) + 1;
                    /* try { // try from 00dc6e54 to 00ec6e5f has its CatchHandler @ 00dc6d4c */
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc6e50 with catch @ 00dc6e5c
                        */
                    /* try { // try from 00dc6e60 to 00ec6e63 has its CatchHandler @ 00dc6e6c */
                    /* try { // try from 00dc6e64 to 00ec6e6f has its CatchHandler @ 00dc6d4c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc6e60 with catch @ 00dc6e6c
                        */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00dc6ea8;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_00dc6ea8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc6f68 with catch @ 00dc6eac
                       catch(type#1 @ 00000000) { ... } // from try @ 00dc6fa4 with catch @ 00dc6eac
                        */
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


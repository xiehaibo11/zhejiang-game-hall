
/* void std::__ndk1::vector<cocos2d::PhysicsShape*, std::__ndk1::allocator<cocos2d::PhysicsShape*>
   >::__push_back_slow_path<cocos2d::PhysicsShape* const&>(cocos2d::PhysicsShape* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::PhysicsShape*,std::__ndk1::allocator<cocos2d::PhysicsShape*>>::
__push_back_slow_path<cocos2d::PhysicsShape*const&>
          (vector<cocos2d::PhysicsShape*,std::__ndk1::allocator<cocos2d::PhysicsShape*>> *this,
          PhysicsShape **param_1)

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
                    /* try { // try from 01001924 to 0110196b has its CatchHandler @ 01001924
                       catch() { ... } // from try @ 01001924 with catch @ 01001924
                       catch() { ... } // from try @ 01001970 with catch @ 01001924 */
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
      goto LAB_01001974;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
                    /* try { // try from 0100196c to 0110196f has its CatchHandler @ 010019b4 */
  __dest = operator_new(uVar3 << 3);
                    /* try { // try from 01001970 to 011019c7 has its CatchHandler @ 01001924 */
LAB_01001974:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
                    /* catch() { ... } // from try @ 0100196c with catch @ 010019b4 */
    operator_delete(__src);
    return;
  }
                    /* try { // try from 010019c8 to 011019f7 has its CatchHandler @ 010019c8
                       catch() { ... } // from try @ 010019c8 with catch @ 010019c8
                       catch() { ... } // from try @ 010019fc with catch @ 010019c8 */
  return;
}


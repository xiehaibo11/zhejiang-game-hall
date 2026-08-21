
/* void std::__ndk1::vector<cocos2d::PhysicsJoint*, std::__ndk1::allocator<cocos2d::PhysicsJoint*>
   >::__push_back_slow_path<cocos2d::PhysicsJoint*>(cocos2d::PhysicsJoint*&&) */

void __thiscall
std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
__push_back_slow_path<cocos2d::PhysicsJoint*>
          (vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *this,
          PhysicsJoint **param_1)

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
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
                    /* catch() { ... } // from try @ 010073d8 with catch @ 01007478 */
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_010074a8;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01007494 to 01107557 has its CatchHandler @ 01007494
                       catch() { ... } // from try @ 01007494 with catch @ 01007494
                       catch() { ... } // from try @ 01007560 with catch @ 01007494
                       catch() { ... } // from try @ 010075a4 with catch @ 01007494 */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_010074a8:
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


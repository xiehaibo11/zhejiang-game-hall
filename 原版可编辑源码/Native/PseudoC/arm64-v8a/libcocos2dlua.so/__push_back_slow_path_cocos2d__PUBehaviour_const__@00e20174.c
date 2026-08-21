
/* void std::__ndk1::vector<cocos2d::PUBehaviour*, std::__ndk1::allocator<cocos2d::PUBehaviour*>
   >::__push_back_slow_path<cocos2d::PUBehaviour* const&>(cocos2d::PUBehaviour* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>::
__push_back_slow_path<cocos2d::PUBehaviour*const&>
          (vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>> *this,
          PUBehaviour **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* try { // try from 00e20174 to 00f2019f has its CatchHandler @ 00e1fd8c */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
                    /* try { // try from 00e201a0 to 00f20203 has its CatchHandler @ 00e20638 */
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
      goto LAB_00e201f4;
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
LAB_00e201f4:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
                    /* try { // try from 00e20220 to 00f2022b has its CatchHandler @ 00e205ac */
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
                    /* try { // try from 00e2023c to 00f20243 has its CatchHandler @ 00e20638 */
    operator_delete(__src);
    return;
  }
  return;
}


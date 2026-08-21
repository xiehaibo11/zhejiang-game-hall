
/* void std::__ndk1::vector<cocos2d::Physics3DObject*,
   std::__ndk1::allocator<cocos2d::Physics3DObject*>
   >::__push_back_slow_path<cocos2d::Physics3DObject* const&>(cocos2d::Physics3DObject* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Physics3DObject*,std::__ndk1::allocator<cocos2d::Physics3DObject*>>::
__push_back_slow_path<cocos2d::Physics3DObject*const&>
          (vector<cocos2d::Physics3DObject*,std::__ndk1::allocator<cocos2d::Physics3DObject*>> *this
          ,Physics3DObject **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* try { // try from 01010d0c to 01110d33 has its CatchHandler @ 0101101c */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 01010d54 to 01110d5f has its CatchHandler @ 01010fd4 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_01010d8c;
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
LAB_01010d8c:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 01010d98 to 01110dab has its CatchHandler @ 01010fd0 */
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* try { // try from 01010db0 to 01110ddb has its CatchHandler @ 01011044 */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
                    /* try { // try from 01010df0 to 01110e03 has its CatchHandler @ 01010fcc */
  return;
}


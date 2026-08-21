
/* void std::__ndk1::vector<cocos2d::Physics3DConstraint*,
   std::__ndk1::allocator<cocos2d::Physics3DConstraint*>
   >::__push_back_slow_path<cocos2d::Physics3DConstraint* const&>(cocos2d::Physics3DConstraint*
   const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::Physics3DConstraint*,std::__ndk1::allocator<cocos2d::Physics3DConstraint*>>::
__push_back_slow_path<cocos2d::Physics3DConstraint*const&>
          (vector<cocos2d::Physics3DConstraint*,std::__ndk1::allocator<cocos2d::Physics3DConstraint*>>
           *this,Physics3DConstraint **param_1)

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
                    /* try { // try from 010173ac to 011173b7 has its CatchHandler @ 01017468 */
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 01017304 to 0111731f has its CatchHandler @ 01017474 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_0101733c;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* try { // try from 01017320 to 0111734b has its CatchHandler @ 010171dc */
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_0101733c:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 0101734c to 01117357 has its CatchHandler @ 01017470 */
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* try { // try from 01017358 to 0111737b has its CatchHandler @ 010171dc */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
                    /* try { // try from 0101737c to 01117387 has its CatchHandler @ 0101746c */
                    /* try { // try from 01017388 to 011173ab has its CatchHandler @ 010171dc */
    operator_delete(__src);
    return;
  }
  return;
}


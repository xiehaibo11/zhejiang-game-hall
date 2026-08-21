
/* void std::__ndk1::vector<cpConstraint*, std::__ndk1::allocator<cpConstraint*>
   >::__push_back_slow_path<cpConstraint* const&>(cpConstraint* const&) */

void __thiscall
std::__ndk1::vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>>::
__push_back_slow_path<cpConstraint*const&>
          (vector<cpConstraint*,std::__ndk1::allocator<cpConstraint*>> *this,cpConstraint **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* catch() { ... } // from try @ 01007598 with catch @ 01007614 */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
                    /* try { // try from 01007658 to 01107667 has its CatchHandler @ 01007678 */
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_01007688;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01007658 with catch @ 01007678
                        */
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_01007688:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
                    /* try { // try from 010076b4 to 011076c3 has its CatchHandler @ 010076dc */
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010076b4 with catch @ 010076dc
                        */
  return;
}


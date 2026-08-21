
/* void std::__ndk1::vector<ClipperLib::PolyNode*, std::__ndk1::allocator<ClipperLib::PolyNode*>
   >::__push_back_slow_path<ClipperLib::PolyNode* const&>(ClipperLib::PolyNode* const&) */

void __thiscall
std::__ndk1::vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>>::
__push_back_slow_path<ClipperLib::PolyNode*const&>
          (vector<ClipperLib::PolyNode*,std::__ndk1::allocator<ClipperLib::PolyNode*>> *this,
          PolyNode **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* catch() { ... } // from try @ 0103e5b4 with catch @ 0103e584 */
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
                    /* try { // try from 0103e5ac to 0113e5b3 has its CatchHandler @ 0103e600 */
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 0103e5b4 to 0113e61b has its CatchHandler @ 0103e584 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_0103e600;
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
LAB_0103e600:
                    /* catch() { ... } // from try @ 0103e5ac with catch @ 0103e600 */
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
                    /* try { // try from 0103e61c to 0113e653 has its CatchHandler @ 0103e61c
                       catch() { ... } // from try @ 0103e61c with catch @ 0103e61c
                       catch() { ... } // from try @ 0103e65c with catch @ 0103e61c */
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
                    /* try { // try from 0103e654 to 0113e65b has its CatchHandler @ 0103e6a8 */
                    /* try { // try from 0103e65c to 0113e6c3 has its CatchHandler @ 0103e61c */
  return;
}


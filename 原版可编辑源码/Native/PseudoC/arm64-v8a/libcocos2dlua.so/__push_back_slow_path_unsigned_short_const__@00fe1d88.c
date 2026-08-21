
/* void std::__ndk1::vector<unsigned short*, std::__ndk1::allocator<unsigned short*>
   >::__push_back_slow_path<unsigned short* const&>(unsigned short* const&) */

void __thiscall
std::__ndk1::vector<unsigned_short*,std::__ndk1::allocator<unsigned_short*>>::
__push_back_slow_path<unsigned_short*const&>
          (vector<unsigned_short*,std::__ndk1::allocator<unsigned_short*>> *this,ushort **param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
                    /* catch() { ... } // from try @ 00fe1d1c with catch @ 00fe1d8c */
  __src = *(void **)this;
                    /* catch() { ... } // from try @ 00fe1de8 with catch @ 00fe1da8 */
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
                    /* try { // try from 00fe1de0 to 010e1de7 has its CatchHandler @ 00fe1e58 */
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00fe1e08;
    }
                    /* try { // try from 00fe1de8 to 010e1e73 has its CatchHandler @ 00fe1da8 */
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_00fe1e08:
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
                    /* catch() { ... } // from try @ 00fe1de0 with catch @ 00fe1e58 */
  return;
}


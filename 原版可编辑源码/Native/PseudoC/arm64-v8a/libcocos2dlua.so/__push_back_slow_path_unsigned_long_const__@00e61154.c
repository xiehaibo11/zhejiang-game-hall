
/* void std::__ndk1::vector<unsigned long, std::__ndk1::allocator<unsigned long>
   >::__push_back_slow_path<unsigned long const&>(unsigned long const&) */

void __thiscall
std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
__push_back_slow_path<unsigned_long_const&>
          (vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *this,ulong *param_1)

{
  ulong *puVar1;
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
                    /* try { // try from 00e6118c to 00f6125b has its CatchHandler @ 00e6118c
                       catch() { ... } // from try @ 00e6118c with catch @ 00e6118c
                       catch() { ... } // from try @ 00e61270 with catch @ 00e6118c
                       catch() { ... } // from try @ 00e612f4 with catch @ 00e6118c */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00e611d4;
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
LAB_00e611d4:
  puVar1 = (ulong *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(ulong **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


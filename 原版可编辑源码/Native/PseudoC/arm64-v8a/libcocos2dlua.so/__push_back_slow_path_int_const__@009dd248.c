
/* void std::__ndk1::vector<int, std::__ndk1::allocator<int> >::__push_back_slow_path<int
   const&>(int const&) */

void __thiscall
std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
          (vector<int,std::__ndk1::allocator<int>> *this,int *param_1)

{
  int *piVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 2) + 1;
  if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* catch() { ... } // from try @ 009dd210 with catch @ 009dd284 */
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 2) < 0x1fffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 1;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_009dd2c8;
    }
    if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x3fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 2);
LAB_009dd2c8:
  piVar1 = (int *)((long)__dest + ((long)__n >> 2) * 4);
  *piVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(int **)(this + 8) = piVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 4);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


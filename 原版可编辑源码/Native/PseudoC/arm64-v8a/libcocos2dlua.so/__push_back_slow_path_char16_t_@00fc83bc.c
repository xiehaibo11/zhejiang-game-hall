
/* void std::__ndk1::vector<char16_t, std::__ndk1::allocator<char16_t>
   >::__push_back_slow_path<char16_t>(char16_t&&) */

void __thiscall
std::__ndk1::vector<char16_t,std::__ndk1::allocator<char16_t>>::__push_back_slow_path<char16_t>
          (vector<char16_t,std::__ndk1::allocator<char16_t>> *this,wchar16 *param_1)

{
  ulong uVar1;
  wchar16 *pwVar2;
  void *__src;
  void *__dest;
  ulong uVar3;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 1) + 1;
  if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  uVar3 = *(long *)(this + 0x10) - (long)__src;
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  if (0x3ffffffffffffffe < (ulong)((long)uVar3 >> 1)) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 << 1);
  }
  pwVar2 = (wchar16 *)((long)__dest + ((long)__n >> 1) * 2);
  *pwVar2 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(wchar16 **)(this + 8) = pwVar2 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 2);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


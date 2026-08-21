
/* void std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short>
   >::__push_back_slow_path<unsigned short const&>(unsigned short const&) */

void __thiscall
std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
__push_back_slow_path<unsigned_short_const&>
          (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this,ushort *param_1)

{
  ulong uVar1;
  ushort *puVar2;
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
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 << 1);
  }
  puVar2 = (ushort *)((long)__dest + ((long)__n >> 1) * 2);
  *puVar2 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(ushort **)(this + 8) = puVar2 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 2);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}



/* void std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int>
   >::__push_back_slow_path<unsigned int>(unsigned int&&) */

void __thiscall
std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
__push_back_slow_path<unsigned_int>
          (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,uint *param_1)

{
  uint *puVar1;
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
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 2) < 0x1fffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 1;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
                    /* try { // try from 00d4bdac to 00e4bdc3 has its CatchHandler @ 00d4c158 */
      goto LAB_00d4bd40;
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
LAB_00d4bd40:
  puVar1 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
  *puVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(uint **)(this + 8) = puVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 4);
  if (__src != (void *)0x0) {
                    /* try { // try from 00d4bd80 to 00e4bd93 has its CatchHandler @ 00d4c114 */
    operator_delete(__src);
    return;
  }
                    /* try { // try from 00d4bd94 to 00e4bdab has its CatchHandler @ 00d4c168 */
  return;
}


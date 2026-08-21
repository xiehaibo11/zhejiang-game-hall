
/* std::__ndk1::vector<short, std::__ndk1::allocator<short> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
          (vector<short,std::__ndk1::allocator<short>> *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)pvVar2 >> 1) < param_1) {
    __src = *(void **)this;
    __n = (long)pvVar2 - (long)__src;
    uVar1 = ((long)__n >> 1) + param_1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar3 = *(long *)(this + 0x10) - (long)__src;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
                    /* try { // try from 009f4e58 to 00af4e93 has its CatchHandler @ 009f4e58
                       catch() { ... } // from try @ 009f4e58 with catch @ 009f4e58
                       catch() { ... } // from try @ 009f508c with catch @ 009f4e58
                       catch() { ... } // from try @ 009f51bc with catch @ 009f4e58
                       catch() { ... } // from try @ 009f5248 with catch @ 009f4e58
                       catch() { ... } // from try @ 009f5334 with catch @ 009f4e58
                       catch() { ... } // from try @ 009f53bc with catch @ 009f4e58
                       catch() { ... } // from try @ 009f540c with catch @ 009f4e58
                       catch() { ... } // from try @ 009f580c with catch @ 009f4e58
                       catch() { ... } // from try @ 009f587c with catch @ 009f4e58
                       catch() { ... } // from try @ 009f5c04 with catch @ 009f4e58 */
    if (0x3ffffffffffffffe < (ulong)((long)uVar3 >> 1)) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
                    /* try { // try from 009f4e98 to 00af4ea3 has its CatchHandler @ 009f5bec */
      pvVar2 = (void *)0x0;
    }
    else {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 << 1);
    }
    __s = (void *)((long)pvVar2 + ((long)__n >> 1) * 2);
    memset(__s,0,param_1 * 2);
    if (0 < (long)__n) {
      memcpy(pvVar2,__src,__n);
    }
    *(void **)this = pvVar2;
    *(void **)(this + 8) = (void *)((long)__s + param_1 * 2);
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 2);
    if (__src != (void *)0x0) {
                    /* try { // try from 009f4ef8 to 00af4eff has its CatchHandler @ 009f5968 */
      operator_delete(__src);
      return;
    }
  }
  else {
    memset(pvVar2,0,param_1 * 2);
    *(void **)(this + 8) = (void *)((long)pvVar2 + param_1 * 2);
                    /* try { // try from 009f4e94 to 00af4e97 has its CatchHandler @ 009f5c0c */
  }
                    /* try { // try from 009f4f08 to 00af4fef has its CatchHandler @ 009f5c20 */
  return;
}


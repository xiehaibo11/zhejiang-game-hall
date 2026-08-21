
/* std::__ndk1::vector<int, std::__ndk1::allocator<int> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
          (vector<int,std::__ndk1::allocator<int>> *this,ulong param_1)

{
  void *__s;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
                    /* catch() { ... } // from try @ 009b5a48 with catch @ 009b5c70 */
                    /* catch() { ... } // from try @ 009b5a3c with catch @ 009b5c74 */
                    /* catch() { ... } // from try @ 009b5a1c with catch @ 009b5c78 */
                    /* catch() { ... } // from try @ 009b5a54 with catch @ 009b5c88 */
  pvVar1 = *(void **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pvVar1 >> 2)) {
    memset(pvVar1,0,param_1 * 4);
    *(void **)(this + 8) = (void *)((long)pvVar1 + param_1 * 4);
    return;
  }
  __src = *(void **)this;
  __n = (long)pvVar1 - (long)__src;
  uVar4 = ((long)__n >> 2) + param_1;
  if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar2 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar2 >> 2) < 0x1fffffffffffffff) {
    uVar3 = lVar2 >> 1;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_009b5d1c;
    }
    if (uVar4 >> 0x3e != 0) {
                    /* try { // try from 009b5ce0 to 00ab5d33 has its CatchHandler @ 009b5ce0
                       catch() { ... } // from try @ 009b5ce0 with catch @ 009b5ce0
                       catch() { ... } // from try @ 009b5ec0 with catch @ 009b5ce0 */
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar4 = 0x3fffffffffffffff;
  }
  pvVar1 = operator_new(uVar4 << 2);
LAB_009b5d1c:
  __s = (void *)((long)pvVar1 + ((long)__n >> 2) * 4);
                    /* try { // try from 009b5d34 to 00ab5d4b has its CatchHandler @ 009b5f3c */
  memset(__s,0,param_1 * 4);
  if (0 < (long)__n) {
    memcpy(pvVar1,__src,__n);
  }
                    /* try { // try from 009b5d54 to 00ab5d5f has its CatchHandler @ 009b5f38 */
  *(void **)this = pvVar1;
  *(void **)(this + 8) = (void *)((long)__s + param_1 * 4);
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar4 * 4);
  if (__src == (void *)0x0) {
    return;
  }
                    /* try { // try from 009b5d60 to 00ab5d6b has its CatchHandler @ 009b5f34 */
                    /* try { // try from 009b5d6c to 00ab5ebf has its CatchHandler @ 009b5f4c */
  operator_delete(__src);
  return;
}


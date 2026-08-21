
/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,ulong param_1)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  void *__dest;
  ulong uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3)) {
    do {
      *puVar3 = 0;
      param_1 = param_1 - 1;
      puVar3 = (undefined1 *)(*(long *)(this + 8) + 1);
      *(undefined1 **)(this + 8) = puVar3;
    } while (param_1 != 0);
    return;
  }
  __src = *(void **)this;
  __n = (long)puVar3 - (long)__src;
  uVar2 = __n + param_1;
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  uVar1 = *(long *)(this + 0x10) - (long)__src;
  if (uVar1 < 0x3fffffffffffffff) {
    uVar1 = uVar1 * 2;
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
                    /* try { // try from 009a8d9c to 00aa8e7f has its CatchHandler @ 009a8bdc */
    if (uVar2 == 0) {
      __dest = (void *)0x0;
      goto LAB_009a8dd4;
    }
  }
  else {
    uVar2 = 0x7fffffffffffffff;
  }
  __dest = operator_new(uVar2);
LAB_009a8dd4:
  memset((void *)((long)__dest + __n),0,param_1);
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(undefined1 **)(this + 8) =
       (undefined1 *)((long)__dest + (long)(puVar3 + (param_1 - (long)__src)));
                    /* catch() { ... } // from try @ 009a8c5c with catch @ 009a8e10 */
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
                    /* catch() { ... } // from try @ 009a8c50 with catch @ 009a8e14 */
  if (__src == (void *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 009a8c30 with catch @ 009a8e18 */
                    /* catch() { ... } // from try @ 009a8c68 with catch @ 009a8e28 */
  operator_delete(__src);
  return;
}


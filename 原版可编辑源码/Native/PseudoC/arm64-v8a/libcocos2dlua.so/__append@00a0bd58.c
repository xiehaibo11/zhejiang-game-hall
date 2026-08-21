
/* std::__ndk1::vector<char, std::__ndk1::allocator<char> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<char,std::__ndk1::allocator<char>>::__append
          (vector<char,std::__ndk1::allocator<char>> *this,ulong param_1)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  
  pvVar1 = *(void **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pvVar1)) {
    pvVar3 = pvVar1;
    if (param_1 != 0) {
      pvVar3 = (void *)((long)pvVar1 + param_1);
      memset(pvVar1,0,param_1);
    }
    *(void **)(this + 8) = pvVar3;
    return;
  }
  pvVar3 = *(void **)this;
  __n = (long)pvVar1 - (long)pvVar3;
  uVar4 = __n + param_1;
  if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  uVar2 = *(long *)(this + 0x10) - (long)pvVar3;
  if (uVar2 < 0x3fffffffffffffff) {
    uVar2 = uVar2 * 2;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_00a0bdf4;
    }
  }
  else {
                    /* try { // try from 00a0bde4 to 00b0bdff has its CatchHandler @ 00a0bf88 */
    uVar4 = 0x7fffffffffffffff;
  }
  pvVar1 = operator_new(uVar4);
LAB_00a0bdf4:
  memset((void *)((long)pvVar1 + __n),0,param_1);
                    /* try { // try from 00a0be0c to 00b0be57 has its CatchHandler @ 00a0bf9c */
  if (0 < (long)__n) {
    memcpy(pvVar1,pvVar3,__n);
  }
  *(void **)this = pvVar1;
  *(ulong *)(this + 8) = (long)((long)pvVar1 + __n) + param_1;
  *(ulong *)(this + 0x10) = (long)pvVar1 + uVar4;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


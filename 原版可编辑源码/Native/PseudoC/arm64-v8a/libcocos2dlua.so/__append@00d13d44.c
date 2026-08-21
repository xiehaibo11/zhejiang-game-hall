
/* std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,ulong param_1)

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
      goto LAB_00d13de0;
    }
  }
  else {
    uVar4 = 0x7fffffffffffffff;
  }
  pvVar1 = operator_new(uVar4);
LAB_00d13de0:
  memset((void *)((long)pvVar1 + __n),0,param_1);
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


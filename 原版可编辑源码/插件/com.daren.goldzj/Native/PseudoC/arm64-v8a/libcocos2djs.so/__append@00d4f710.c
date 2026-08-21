
/* std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
          (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this,ulong param_1)

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
LAB_00d4f824:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = *(long *)(this + 0x10) - (long)__src;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0x3ffffffffffffffe < (ulong)((long)uVar3 >> 1)) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if ((long)uVar1 < 0) goto LAB_00d4f824;
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
      operator_delete(__src);
      return;
    }
  }
  else {
    memset(pvVar2,0,param_1 * 2);
    *(void **)(this + 8) = (void *)((long)pvVar2 + param_1 * 2);
  }
  return;
}


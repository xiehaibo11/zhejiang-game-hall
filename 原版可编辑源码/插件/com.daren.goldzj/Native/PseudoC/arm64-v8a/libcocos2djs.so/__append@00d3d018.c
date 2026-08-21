
/* std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
          (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,ulong param_1)

{
  void *__s;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
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
LAB_00d3d088:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar2 >> 2) < 0x1fffffffffffffff) {
    uVar3 = lVar2 >> 1;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_00d3d0bc;
    }
    if (uVar4 >> 0x3e != 0) goto LAB_00d3d088;
  }
  else {
    uVar4 = 0x3fffffffffffffff;
  }
  pvVar1 = operator_new(uVar4 << 2);
LAB_00d3d0bc:
  __s = (void *)((long)pvVar1 + ((long)__n >> 2) * 4);
  memset(__s,0,param_1 * 4);
  if (0 < (long)__n) {
    memcpy(pvVar1,__src,__n);
  }
  *(void **)this = pvVar1;
  *(void **)(this + 8) = (void *)((long)__s + param_1 * 4);
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar4 * 4);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


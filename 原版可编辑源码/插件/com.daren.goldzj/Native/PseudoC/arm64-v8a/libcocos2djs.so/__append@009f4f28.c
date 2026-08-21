
/* std::__ndk1::vector<double, std::__ndk1::allocator<double> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<double,std::__ndk1::allocator<double>>::__append
          (vector<double,std::__ndk1::allocator<double>> *this,ulong param_1)

{
  void *__s;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
  pvVar1 = *(void **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pvVar1 >> 3)) {
    memset(pvVar1,0,param_1 * 8);
    *(void **)(this + 8) = (void *)((long)pvVar1 + param_1 * 8);
    return;
  }
  __src = *(void **)this;
  __n = (long)pvVar1 - (long)__src;
  uVar4 = ((long)__n >> 3) + param_1;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar2 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_009f4fd4;
    }
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar4 = 0x1fffffffffffffff;
  }
  pvVar1 = operator_new(uVar4 << 3);
LAB_009f4fd4:
  __s = (void *)((long)pvVar1 + ((long)__n >> 3) * 8);
  memset(__s,0,param_1 * 8);
  if (0 < (long)__n) {
    memcpy(pvVar1,__src,__n);
  }
  *(void **)this = pvVar1;
  *(void **)(this + 8) = (void *)((long)__s + param_1 * 8);
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar4 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


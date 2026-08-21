
/* void std::__ndk1::vector<float, std::__ndk1::allocator<float> >::__push_back_slow_path<float
   const&>(float const&) */

void __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
          (vector<float,std::__ndk1::allocator<float>> *this,float *param_1)

{
  float *pfVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar3 = ((long)__n >> 2) + 1;
  if (uVar3 >> 0x3e != 0) {
LAB_00d3ae30:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 2) < 0x1fffffffffffffff) {
    uVar2 = *(long *)(this + 0x10) - (long)__src >> 1;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d3ae44;
    }
    if (uVar3 >> 0x3e != 0) goto LAB_00d3ae30;
  }
  else {
    uVar3 = 0x3fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 2);
LAB_00d3ae44:
  pfVar1 = (float *)((long)__dest + ((long)__n >> 2) * 4);
  *pfVar1 = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(float **)(this + 8) = pfVar1 + 1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 4);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


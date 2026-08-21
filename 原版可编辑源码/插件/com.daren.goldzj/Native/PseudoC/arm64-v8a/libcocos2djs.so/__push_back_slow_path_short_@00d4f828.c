
/* void std::__ndk1::vector<short, std::__ndk1::allocator<short>
   >::__push_back_slow_path<short>(short&&) */

void __thiscall
std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__push_back_slow_path<short>
          (vector<short,std::__ndk1::allocator<short>> *this,short *param_1)

{
  ulong uVar1;
  short *psVar2;
  void *__src;
  void *__dest;
  ulong uVar3;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 1) + 1;
  if (-1 < (long)uVar1) {
    uVar3 = *(long *)(this + 0x10) - (long)__src;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0x3ffffffffffffffe < (ulong)((long)uVar3 >> 1)) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((long)uVar1 < 0) goto LAB_00d4f900;
      __dest = operator_new(uVar1 << 1);
    }
    psVar2 = (short *)((long)__dest + ((long)__n >> 1) * 2);
    *psVar2 = *param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(short **)(this + 8) = psVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 2);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_00d4f900:
                    /* WARNING: Subroutine does not return */
  abort();
}


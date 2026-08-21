
/* std::__ndk1::vector<float, std::__ndk1::allocator<float> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::reserve
          (vector<float,std::__ndk1::allocator<float>> *this,ulong param_1)

{
  void *__dest;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 2) < param_1) {
    if (param_1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __n = *(long *)(this + 8) - (long)__src;
    __dest = operator_new(param_1 * 4);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(size_t *)(this + 8) = (long)__dest + __n;
    *(void **)(this + 0x10) = (void *)((long)__dest + param_1 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


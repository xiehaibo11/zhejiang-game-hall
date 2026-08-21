
/* std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >::reserve(unsigned
   long) */

void __thiscall
std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::reserve
          (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this,ulong param_1)

{
  void *__dest;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 1) < param_1) {
    if ((long)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d47c6c with catch @ 00d47d54
                        */
    __n = *(long *)(this + 8) - (long)__src;
    __dest = operator_new(param_1 * 2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d47c04 with catch @ 00d47d6c
                        */
    if (0 < (long)__n) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d47aa0 with catch @ 00d47d80
                        */
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(size_t *)(this + 8) = (long)__dest + __n;
    *(void **)(this + 0x10) = (void *)((long)__dest + param_1 * 2);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}



/* void std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>
   >::__push_back_slow_path<unsigned char const&>(unsigned char const&) */

void __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
__push_back_slow_path<unsigned_char_const&>
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,uchar *param_1)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = __n + 1;
  if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = (*(long *)(this + 0x10) - (long)__src) * 2;
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  if (0x3ffffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src)) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = operator_new(uVar1);
  }
  *(uchar *)((long)__dest + __n) = *param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = __dest;
  *(uchar **)(this + 8) = (uchar *)((long)__dest + __n) + 1;
  *(ulong *)(this + 0x10) = (long)__dest + uVar1;
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


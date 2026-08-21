
/* void std::__ndk1::vector<std::__ndk1::pair<char, char>,
   std::__ndk1::allocator<std::__ndk1::pair<char, char> >
   >::__push_back_slow_path<std::__ndk1::pair<char, char> >(std::__ndk1::pair<char, char>&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<char,char>,std::__ndk1::allocator<std::__ndk1::pair<char,char>>>::
__push_back_slow_path<std::__ndk1::pair<char,char>>
          (vector<std::__ndk1::pair<char,char>,std::__ndk1::allocator<std::__ndk1::pair<char,char>>>
           *this,pair *param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
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
      if ((long)uVar1 < 0) goto LAB_00869410;
      __dest = operator_new(uVar1 << 1);
    }
    puVar2 = (undefined2 *)((long)__dest + ((long)__n >> 1) * 2);
    *puVar2 = *(undefined2 *)param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(undefined2 **)(this + 8) = puVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 2);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_00869410:
                    /* WARNING: Subroutine does not return */
  abort();
}


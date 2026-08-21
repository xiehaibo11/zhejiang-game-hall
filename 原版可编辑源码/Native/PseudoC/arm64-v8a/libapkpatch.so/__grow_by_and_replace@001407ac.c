
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__grow_by_and_replace(unsigned long, unsigned long, unsigned long, unsigned long, unsigned
   long, unsigned long, char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__grow_by_and_replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
          char *param_7)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar3;
  
  if (-param_1 - 0x12 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10);
  if (((byte)*this & 1) == 0) {
    __src = this + 1;
  }
  if (param_1 < 0x7fffffffffffffe7) {
    uVar2 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar2 = param_2 + param_1;
    }
    uVar3 = 0x17;
    if (0x16 < uVar2) {
      uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    uVar3 = 0xffffffffffffffef;
  }
  __dest = operator_new(uVar3);
  if (param_4 != 0) {
    memcpy(__dest,__src,param_4);
  }
  if (param_6 != 0) {
    memcpy((void *)((long)__dest + param_4),param_7,param_6);
  }
  __n = param_3 - (param_4 + param_5);
  if (__n != 0) {
    memcpy((void *)((long)__dest + param_6 + param_4),__src + param_5 + param_4,__n);
  }
  if (param_1 != 0x16) {
    operator_delete(__src);
  }
  lVar1 = param_6 + param_4 + __n;
  *(ulong *)this = uVar3 | 1;
  *(long *)(this + 8) = lVar1;
  *(void **)(this + 0x10) = __dest;
  *(undefined1 *)((long)__dest + lVar1) = 0;
  return;
}



/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__grow_by(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned
   long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__grow_by(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar2;
  
  if (-param_1 - 0x11 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((byte)*this & 1) == 0) {
    __src = this + 1;
  }
  else {
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
  }
  if (param_1 < 0x7fffffffffffffe7) {
    uVar1 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar1 = param_2 + param_1;
    }
    uVar2 = 0x17;
    if (0x16 < uVar1) {
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    uVar2 = 0xffffffffffffffef;
  }
  __dest = operator_new(uVar2);
  if (param_4 != 0) {
    memcpy(__dest,__src,param_4);
  }
  __n = (param_3 - param_5) - param_4;
  if (__n != 0) {
    memcpy((void *)((long)__dest + param_6 + param_4),__src + param_5 + param_4,__n);
  }
  if (param_1 != 0x16) {
    operator_delete(__src);
  }
  *(void **)(this + 0x10) = __dest;
  *(ulong *)this = uVar2 | 1;
  return;
}


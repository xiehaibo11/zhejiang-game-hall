
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  void *__dest;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar4 = 0x16;
    if (0x16 < param_2) {
LAB_0085bb8c:
      if (param_2 - uVar4 <= -uVar4 - 0x12) {
        if (((byte)bVar1 & 1) == 0) {
          pbVar3 = this + 1;
        }
        else {
          pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(this + 0x10);
        }
        if (uVar4 < 0x7fffffffffffffe7) {
          uVar2 = uVar4 * 2;
          if (uVar2 < param_2 || uVar2 - param_2 == 0) {
            uVar2 = param_2;
          }
          if (uVar2 < 0x17) {
            uVar2 = 0x17;
          }
          else {
            uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
          }
        }
        else {
          uVar2 = 0xffffffffffffffef;
        }
        __dest = operator_new(uVar2);
        memcpy(__dest,param_1,param_2);
        if (uVar4 != 0x16) {
          operator_delete(pbVar3);
        }
        *(ulong *)(this + 8) = param_2;
        *(void **)(this + 0x10) = __dest;
        *(ulong *)this = uVar2 | 1;
        *(undefined1 *)((long)__dest + param_2) = 0;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar4 < param_2) goto LAB_0085bb8c;
  }
  if (((byte)bVar1 & 1) == 0) {
    pbVar3 = this + 1;
  }
  else {
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_2 != 0) {
    memmove(pbVar3,param_1,param_2);
  }
  pbVar3[param_2] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_2;
  }
  return this;
}


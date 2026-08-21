
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char *param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  long lVar1;
  char *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar3 = *this;
  if (((byte)bVar3 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar3 >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar5) {
    if (((byte)bVar3 & 1) == 0) {
      uVar4 = 0x16;
    }
    else {
      uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar5 < param_3) {
      __grow_by_and_replace(this,uVar4,(uVar5 + param_3) - uVar4,uVar5,param_1,0,param_3,param_2);
    }
    else if (param_3 != 0) {
      if (((byte)bVar3 & 1) == 0) {
        pbVar6 = this + 1;
      }
      else {
        pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(this + 0x10);
      }
      if (uVar5 - param_1 != 0) {
        __src = pbVar6 + param_1;
        pcVar2 = param_2 + param_3;
        if (pbVar6 + uVar5 <= param_2 || param_2 < __src) {
          pcVar2 = param_2;
        }
        memmove(__src + param_3,__src,uVar5 - param_1);
        param_2 = pcVar2;
      }
      memmove(pbVar6 + param_1,param_2,param_3);
      lVar1 = uVar5 + param_3;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      pbVar6[lVar1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  bVar4 = *this;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar2) {
    uVar3 = 0x16;
    if (((byte)bVar4 & 1) != 0) {
      uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 - uVar2 < param_3) {
      __grow_by_and_replace(this,uVar3,(uVar2 + param_3) - uVar3,uVar2,param_1,0,param_3,param_2);
    }
    else if (param_3 != 0) {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if (((byte)bVar4 & 1) == 0) {
        pbVar5 = this + 1;
      }
      if (uVar2 - param_1 != 0) {
        uVar3 = param_3;
        if (pbVar5 + uVar2 <= param_2 || param_2 < pbVar5 + param_1) {
          uVar3 = 0;
        }
        param_2 = param_2 + uVar3;
        memmove(pbVar5 + param_1 + param_3,pbVar5 + param_1,uVar2 - param_1);
      }
      memmove(pbVar5 + param_1,param_2,param_3);
      lVar1 = uVar2 + param_3;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      pbVar5[lVar1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}



/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::erase(unsigned long, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar4 = uVar1 - param_1;
  if (param_1 <= uVar1) {
    if (param_2 != 0) {
      if (param_2 == 0xffffffffffffffff) {
        if (((byte)bVar3 & 1) == 0) {
          this[param_1 + 1] =
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
          *this = SUB41((int)param_1 << 1,0);
        }
        else {
          *(undefined1 *)(*(long *)(this + 0x10) + param_1) = 0;
          *(ulong *)(this + 8) = param_1;
        }
      }
      else {
        pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(this + 0x10);
        if (((byte)bVar3 & 1) == 0) {
          pbVar6 = this + 1;
        }
        uVar2 = uVar4;
        if (param_2 <= uVar4) {
          uVar2 = param_2;
        }
        if (uVar4 - uVar2 != 0) {
          memmove(pbVar6 + param_1,pbVar6 + param_1 + uVar2,uVar4 - uVar2);
          bVar3 = *this;
        }
        lVar5 = uVar1 - uVar2;
        if (((byte)bVar3 & 1) == 0) {
          *this = SUB41((int)lVar5 << 1,0);
        }
        else {
          *(long *)(this + 8) = lVar5;
        }
        pbVar6[lVar5] =
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      }
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}


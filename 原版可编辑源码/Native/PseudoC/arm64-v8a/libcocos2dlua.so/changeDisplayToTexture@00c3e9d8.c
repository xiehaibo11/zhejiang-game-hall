
/* cocostudio::DisplayData::changeDisplayToTexture(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::DisplayData::changeDisplayToTexture(DisplayData *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar5;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,(basic_string *)this);
  bVar3 = *in_x8;
  uVar1 = *(ulong *)(in_x8 + 8);
  pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (in_x8 + 0x10);
  if (((byte)bVar3 & 1) == 0) {
    pbVar2 = in_x8 + 1;
    uVar1 = (ulong)((byte)bVar3 >> 1);
  }
  uVar5 = uVar1;
  if (uVar1 != 0) {
    do {
      if (uVar5 == 0) {
        return;
      }
      lVar4 = uVar5 - 1;
      uVar5 = uVar5 - 1;
    } while (pbVar2[lVar4] !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2e);
    if (uVar5 != 0xffffffffffffffff) {
      if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      if (((byte)bVar3 & 1) == 0) {
        *in_x8 = SUB41((int)uVar5 << 1,0);
      }
      else {
        *(ulong *)(in_x8 + 8) = uVar5;
      }
      pbVar2[uVar5] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
  }
  return;
}


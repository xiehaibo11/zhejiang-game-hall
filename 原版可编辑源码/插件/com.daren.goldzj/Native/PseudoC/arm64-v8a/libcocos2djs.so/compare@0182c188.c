
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) const */

int __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  size_t __n;
  ulong uVar2;
  basic_string *pbVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar3 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar2 = (ulong)((byte)*param_3 >> 1);
  }
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar6 = (ulong)((byte)*this >> 1);
    uVar4 = uVar6 - param_1;
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    uVar4 = uVar6 - param_1;
  }
  if (param_1 <= uVar6) {
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
    if (param_4 <= uVar2) {
      uVar6 = uVar2 - param_4;
      if (param_5 <= uVar2 - param_4) {
        uVar6 = param_5;
      }
      __n = uVar6;
      if (uVar4 <= uVar6) {
        __n = uVar4;
      }
      if ((__n == 0) || (iVar5 = memcmp(pbVar1 + param_1,pbVar3 + param_4,__n), iVar5 == 0)) {
        if (uVar4 == uVar6) {
          iVar5 = 0;
        }
        else {
          iVar5 = 1;
          if (uVar4 < uVar6) {
            iVar5 = -1;
          }
        }
      }
      return iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0087bffc("string_view::substr");
}


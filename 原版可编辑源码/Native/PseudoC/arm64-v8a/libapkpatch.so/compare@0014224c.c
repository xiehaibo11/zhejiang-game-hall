
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) const */

int __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  basic_string *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  int iVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  
  uVar3 = *(ulong *)(param_3 + 8);
  pbVar4 = *(basic_string **)(param_3 + 0x10);
  bVar5 = *this;
  if (((byte)*param_3 & 1) == 0) {
    pbVar4 = param_3 + 1;
    uVar3 = (ulong)((byte)*param_3 >> 1);
  }
  uVar2 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar2) {
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar5 & 1) == 0) {
      pbVar7 = this + 1;
    }
    uVar1 = uVar2 - param_1;
    if (param_2 <= uVar2 - param_1) {
      uVar1 = param_2;
    }
    if (param_4 <= uVar3) {
      uVar2 = uVar3 - param_4;
      if (param_5 <= uVar3 - param_4) {
        uVar2 = param_5;
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if ((__n == 0) || (iVar6 = memcmp(pbVar7 + param_1,pbVar4 + param_4,__n), iVar6 == 0)) {
        if (uVar1 == uVar2) {
          iVar6 = 0;
        }
        else {
          iVar6 = 1;
          if (uVar1 < uVar2) {
            iVar6 = -1;
          }
        }
      }
      return iVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0014059c("string_view::substr");
}


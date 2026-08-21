
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) const */

int __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  basic_string *pbVar4;
  int iVar5;
  ulong uVar6;
  
  uVar2 = (ulong)((byte)*param_3 >> 1);
  pbVar4 = param_3 + 4;
  if (((byte)*param_3 & 1) != 0) {
    uVar2 = *(ulong *)(param_3 + 8);
    pbVar4 = *(basic_string **)(param_3 + 0x10);
  }
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar6 = (ulong)((byte)*this >> 1);
    uVar3 = uVar6 - param_1;
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    uVar3 = uVar6 - param_1;
  }
  if (param_1 <= uVar6) {
    if (param_2 <= uVar3) {
      uVar3 = param_2;
    }
    if (param_4 <= uVar2) {
      uVar6 = uVar2 - param_4;
      if (param_5 <= uVar2 - param_4) {
        uVar6 = param_5;
      }
      __n = uVar6;
      if (uVar3 <= uVar6) {
        __n = uVar3;
      }
      if ((__n == 0) ||
         (iVar5 = wmemcmp((wchar_t *)(pbVar1 + param_1 * 4),(wchar_t *)(pbVar4 + param_4 * 4),__n),
         iVar5 == 0)) {
        if (uVar3 == uVar6) {
          iVar5 = 0;
        }
        else {
          iVar5 = 1;
          if (uVar3 < uVar6) {
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


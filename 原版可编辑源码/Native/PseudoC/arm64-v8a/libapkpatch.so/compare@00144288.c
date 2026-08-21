
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) const */

int __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  basic_string *pbVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar6;
  bool bVar7;
  int iVar8;
  
  bVar6 = *this;
  bVar7 = ((byte)*param_3 & 1) != 0;
  pbVar1 = param_3 + 4;
  if (bVar7) {
    pbVar1 = *(basic_string **)(param_3 + 0x10);
  }
  uVar2 = (ulong)((byte)*param_3 >> 1);
  if (bVar7) {
    uVar2 = *(ulong *)(param_3 + 8);
  }
  uVar5 = (ulong)((byte)bVar6 >> 1);
  if (((byte)bVar6 & 1) != 0) {
    uVar5 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar5) {
    pbVar3 = this + 4;
    if (((byte)bVar6 & 1) != 0) {
      pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    uVar4 = uVar5 - param_1;
    if (param_2 <= uVar5 - param_1) {
      uVar4 = param_2;
    }
    if (param_4 <= uVar2) {
      uVar5 = uVar2 - param_4;
      if (param_5 <= uVar2 - param_4) {
        uVar5 = param_5;
      }
      __n = uVar5;
      if (uVar4 <= uVar5) {
        __n = uVar4;
      }
      if ((__n == 0) ||
         (iVar8 = wmemcmp((wchar_t *)(pbVar3 + param_1 * 4),(wchar_t *)(pbVar1 + param_4 * 4),__n),
         iVar8 == 0)) {
        if (uVar4 == uVar5) {
          iVar8 = 0;
        }
        else {
          iVar8 = 1;
          if (uVar4 < uVar5) {
            iVar8 = -1;
          }
        }
      }
      return iVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0014059c("string_view::substr");
}


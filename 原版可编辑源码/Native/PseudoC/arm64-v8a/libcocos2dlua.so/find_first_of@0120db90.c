
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_first_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_first_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  long lVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  ulong uVar6;
  wchar_t *pwVar7;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if ((param_3 == 0) || (uVar6 <= param_2)) {
    return -1;
  }
  pbVar4 = pbVar1 + param_2 * 4;
  pbVar2 = pbVar1 + uVar6 * 4;
  do {
    lVar3 = param_3 << 2;
    pwVar7 = param_1;
    do {
      pbVar5 = pbVar4;
      if (*(wchar_t *)pbVar4 == *pwVar7) goto LAB_0120dbec;
      lVar3 = lVar3 + -4;
      pwVar7 = pwVar7 + 1;
    } while (lVar3 != 0);
    pbVar4 = pbVar4 + 4;
    pbVar5 = pbVar2;
  } while (pbVar4 != pbVar2);
LAB_0120dbec:
  lVar3 = (long)pbVar5 - (long)pbVar1 >> 2;
  if (pbVar5 == pbVar2) {
    lVar3 = -1;
  }
  return lVar3;
}


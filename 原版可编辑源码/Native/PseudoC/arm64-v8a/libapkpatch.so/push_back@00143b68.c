
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::push_back(wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::push_back(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,wchar_t param_1)

{
  byte bVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    bVar1 = (byte)*this >> 1;
    uVar4 = (ulong)bVar1;
    if (bVar1 == 4) {
      uVar4 = 4;
      uVar2 = 4;
LAB_00143bb8:
      __grow_by(this,uVar2,1,uVar2,uVar2,0,0);
      if (((byte)*this & 1) != 0) goto LAB_00143bec;
    }
    pbVar3 = this + 4;
    *this = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            )((char)uVar4 * '\x02' + '\x02');
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar4 == uVar2) goto LAB_00143bb8;
LAB_00143bec:
    pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    *(ulong *)(this + 8) = uVar4 + 1;
  }
  *(wchar_t *)(pbVar3 + uVar4 * 4) = param_1;
  *(undefined4 *)(pbVar3 + uVar4 * 4 + 4) = 0;
  return;
}


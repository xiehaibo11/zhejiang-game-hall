
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::push_back(wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::push_back(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,wchar_t param_1)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar1 = 4;
    if (uVar4 != 4) goto LAB_0182d148;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar4 != uVar1) goto LAB_0182d148;
  }
  __grow_by(this,uVar1,1,uVar1,uVar1,0,0);
  bVar2 = *this;
LAB_0182d148:
  if (((byte)bVar2 & 1) == 0) {
    pbVar3 = this + 4;
    *this = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            )((char)uVar4 * '\x02' + '\x02');
  }
  else {
    pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    *(ulong *)(this + 8) = uVar4 + 1;
  }
  *(wchar_t *)(pbVar3 + uVar4 * 4) = param_1;
  *(undefined4 *)(pbVar3 + uVar4 * 4 + 4) = 0;
  return;
}


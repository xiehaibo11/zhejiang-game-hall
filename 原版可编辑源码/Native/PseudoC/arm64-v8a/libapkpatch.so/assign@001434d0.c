
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  
  bVar3 = *this;
  uVar1 = 4;
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar1 < param_2) {
    uVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(this + 8);
    }
    __grow_by_and_replace(this,uVar1,param_2 - uVar1,uVar2,0,uVar2,param_2,param_1);
  }
  else {
    __s1 = this + 4;
    if (((byte)bVar3 & 1) != 0) {
      __s1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    }
    if (param_2 != 0) {
      wmemmove((wchar_t *)__s1,param_1,param_2);
    }
    *(undefined4 *)(__s1 + param_2 * 4) = 0;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)param_2 << 1,0);
    }
    else {
      *(ulong *)(this + 8) = param_2;
    }
  }
  return this;
}



/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this;
  bVar2 = *this;
  uVar1 = 4;
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  if (uVar1 < param_1) {
    uVar3 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar3 = *(ulong *)(this + 8);
    }
    __grow_by(this,uVar1,param_1 - uVar1,uVar3,0,uVar3,0);
    uVar3 = (ulong)(byte)*this;
  }
  __s = this + 4;
  if ((uVar3 & 1) != 0) {
    __s = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            **)(this + 0x10);
  }
  if (param_1 != 0) {
    wmemset((wchar_t *)__s,param_2,param_1);
  }
  *(undefined4 *)(__s + param_1 * 4) = 0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  return this;
}


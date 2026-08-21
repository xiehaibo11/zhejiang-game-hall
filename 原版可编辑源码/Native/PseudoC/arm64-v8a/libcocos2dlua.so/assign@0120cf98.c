
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar2 = 4;
    uVar3 = (ulong)(byte)bVar1;
    if (4 < param_1) goto LAB_0120cfcc;
LAB_0120cfec:
    if ((uVar3 & 1) == 0) goto LAB_0120cff0;
  }
  else {
    uVar3 = *(ulong *)this;
    uVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
    if (param_1 <= uVar2) goto LAB_0120cfec;
LAB_0120cfcc:
    if (((byte)bVar1 & 1) == 0) {
      uVar3 = (ulong)((byte)bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(this + 8);
    }
    __grow_by(this,uVar2,param_1 - uVar2,uVar3,0,uVar3,0);
    if (((byte)*this & 1) == 0) {
LAB_0120cff0:
      __s = this + 4;
      goto joined_r0x0120cff4;
    }
  }
  __s = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **
         )(this + 0x10);
joined_r0x0120cff4:
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


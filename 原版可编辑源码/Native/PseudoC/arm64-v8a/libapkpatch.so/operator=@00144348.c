
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::operator=(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,basic_string *param_1)

{
  basic_string bVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string *__s2;
  ulong uVar4;
  ulong __n;
  wchar_t *__s1;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (this == (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)param_1) {
    return this;
  }
  bVar1 = *param_1;
  if (((byte)*this & 1) == 0) {
    if (((byte)bVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(this + 8) = uVar6;
      *(undefined8 *)this = uVar5;
      return this;
    }
    __n = *(ulong *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    uVar4 = __n - 4;
    if (__n < 4 || uVar4 == 0) {
      *this = SUB41((int)__n << 1,0);
      if (__n != 0) {
        wmemcpy((wchar_t *)(this + 4),(wchar_t *)__s2,__n);
      }
      *(undefined4 *)(this + __n * 4 + 4) = 0;
      return this;
    }
    uVar3 = (ulong)((byte)*this >> 1);
    uVar2 = 4;
  }
  else {
    __n = (ulong)((byte)bVar1 >> 1);
    __s2 = param_1 + 4;
    if (((byte)bVar1 & 1) != 0) {
      __n = *(ulong *)(param_1 + 8);
      __s2 = *(basic_string **)(param_1 + 0x10);
    }
    uVar4 = *(ulong *)this & 0xfffffffffffffffe;
    if (__n < uVar4) {
      __s1 = *(wchar_t **)(this + 0x10);
      *(ulong *)(this + 8) = __n;
      if (__n != 0) {
        wmemcpy(__s1,(wchar_t *)__s2,__n);
      }
      __s1[__n] = L'\0';
      return this;
    }
    uVar3 = *(ulong *)(this + 8);
    uVar2 = uVar4 - 1;
    uVar4 = (__n - uVar4) + 1;
  }
  __grow_by_and_replace(this,uVar2,uVar4,uVar3,0,uVar3,__n,(wchar_t *)__s2);
  return this;
}


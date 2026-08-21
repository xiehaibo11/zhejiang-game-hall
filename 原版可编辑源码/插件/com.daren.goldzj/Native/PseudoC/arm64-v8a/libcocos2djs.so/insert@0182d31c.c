
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t *param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  long lVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  wchar_t *__s2_00;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
  }
  if (uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  if (((byte)bVar2 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 - uVar4 < param_3) {
    __grow_by_and_replace(this,uVar3,(uVar4 + param_3) - uVar3,uVar4,param_1,0,param_3,param_2);
  }
  else if (param_3 != 0) {
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = this + 4;
    }
    else {
      pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    __s2 = pbVar5 + param_1 * 4;
    __s2_00 = param_2;
    if (uVar4 - param_1 != 0) {
      __s2_00 = param_2 + param_3;
      if (pbVar5 + uVar4 * 4 <= param_2 || param_2 < __s2) {
        __s2_00 = param_2;
      }
      wmemmove((wchar_t *)(__s2 + param_3 * 4),(wchar_t *)__s2,uVar4 - param_1);
    }
    wmemmove((wchar_t *)__s2,__s2_00,param_3);
    lVar1 = uVar4 + param_3;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar5 + lVar1 * 4) = 0;
  }
  return this;
}


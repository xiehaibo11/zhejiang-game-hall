
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t *param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  long lVar1;
  wchar_t *pwVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  bVar3 = *this;
  if (((byte)bVar3 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar3 >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar5) {
    if (((byte)bVar3 & 1) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar5 < param_3) {
      __grow_by_and_replace(this,uVar4,(uVar5 + param_3) - uVar4,uVar5,param_1,0,param_3,param_2);
    }
    else if (param_3 != 0) {
      if (((byte)bVar3 & 1) == 0) {
        pbVar6 = this + 4;
      }
      else {
        pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      if (uVar5 - param_1 != 0) {
        __s2 = pbVar6 + param_1 * 4;
        pwVar2 = param_2 + param_3;
        if (pbVar6 + uVar5 * 4 <= param_2 || param_2 < __s2) {
          pwVar2 = param_2;
        }
        wmemmove((wchar_t *)(__s2 + param_3 * 4),(wchar_t *)__s2,uVar5 - param_1);
        param_2 = pwVar2;
      }
      wmemmove((wchar_t *)(pbVar6 + param_1 * 4),param_2,param_3);
      lVar1 = uVar5 + param_3;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}


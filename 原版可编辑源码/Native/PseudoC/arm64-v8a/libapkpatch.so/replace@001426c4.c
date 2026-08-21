
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, wchar_t const*, unsigned
   long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  ulong uVar6;
  ulong uVar7;
  size_t __n;
  
  bVar5 = *this;
  uVar2 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  uVar6 = uVar2 - param_1;
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  uVar7 = uVar6;
  if (param_2 <= uVar6) {
    uVar7 = param_2;
  }
  uVar3 = 4;
  if (((byte)bVar5 & 1) != 0) {
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((uVar7 - uVar2) + uVar3 < param_4) {
    __grow_by_and_replace
              (this,uVar3,(uVar2 + param_4) - (uVar7 + uVar3),uVar2,param_1,uVar7,param_4,param_3);
    return this;
  }
  pbVar4 = this + 4;
  if (((byte)bVar5 & 1) != 0) {
    pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if ((uVar7 != param_4) && (__n = uVar6 - uVar7, __n != 0)) {
    __s1 = pbVar4 + param_1 * 4;
    if (param_4 < uVar7) {
      if (param_4 != 0) {
        wmemmove((wchar_t *)__s1,param_3,param_4);
      }
      wmemmove((wchar_t *)(__s1 + param_4 * 4),(wchar_t *)(__s1 + uVar7 * 4),__n);
      goto LAB_00142834;
    }
    if ((__s1 < param_3) && (param_3 < pbVar4 + uVar2 * 4)) {
      if (param_3 < __s1 + uVar7 * 4) {
        char_traits<wchar_t>::move((wchar_t *)(pbVar4 + param_1 * 4),param_3,uVar7);
        param_1 = uVar7 + param_1;
        param_3 = param_3 + param_4;
        param_4 = param_4 - uVar7;
        uVar7 = 0;
      }
      else {
        param_3 = param_3 + (param_4 - uVar7);
      }
    }
    wmemmove((wchar_t *)(pbVar4 + param_4 * 4 + param_1 * 4),
             (wchar_t *)(pbVar4 + uVar7 * 4 + param_1 * 4),__n);
  }
  if (param_4 != 0) {
    wmemmove((wchar_t *)(pbVar4 + param_1 * 4),param_3,param_4);
  }
LAB_00142834:
  lVar1 = (param_4 - uVar7) + uVar2;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(pbVar4 + lVar1 * 4) = 0;
  return this;
}


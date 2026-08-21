
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
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  ulong __n_00;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar2 >> 1);
    uVar3 = uVar5 - param_1;
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    uVar3 = uVar5 - param_1;
  }
  if (uVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  __n_00 = uVar3;
  if (param_2 <= uVar3) {
    __n_00 = param_2;
  }
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((__n_00 - uVar5) + uVar4 < param_4) {
    __grow_by_and_replace
              (this,uVar4,((uVar5 + param_4) - __n_00) - uVar4,uVar5,param_1,__n_00,param_4,param_3)
    ;
    return this;
  }
  if (((byte)bVar2 & 1) == 0) {
    pbVar6 = this + 4;
  }
  else {
    pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar4 = param_4;
  if ((__n_00 != param_4) && (__n = uVar3 - __n_00, uVar4 = __n_00, __n != 0)) {
    __s1 = pbVar6 + param_1 * 4;
    if (param_4 < __n_00) {
      if (param_4 != 0) {
        wmemmove((wchar_t *)__s1,param_3,param_4);
      }
      wmemmove((wchar_t *)(__s1 + param_4 * 4),(wchar_t *)(__s1 + __n_00 * 4),__n);
      goto LAB_0120d6c0;
    }
    if ((__s1 < param_3) && (param_3 < pbVar6 + uVar5 * 4)) {
      if (param_3 < __s1 + __n_00 * 4) {
        if (__n_00 != 0) {
          wmemmove((wchar_t *)__s1,param_3,__n_00);
        }
        param_1 = __n_00 + param_1;
        param_3 = param_3 + param_4;
        param_4 = param_4 - __n_00;
        __n_00 = 0;
      }
      else {
        param_3 = param_3 + (param_4 - __n_00);
      }
    }
    wmemmove((wchar_t *)(pbVar6 + param_4 * 4 + param_1 * 4),
             (wchar_t *)(pbVar6 + __n_00 * 4 + param_1 * 4),__n);
    uVar4 = __n_00;
  }
  __n_00 = uVar4;
  if (param_4 != 0) {
    wmemmove((wchar_t *)(pbVar6 + param_1 * 4),param_3,param_4);
  }
LAB_0120d6c0:
  lVar1 = (param_4 - __n_00) + uVar5;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
  return this;
}


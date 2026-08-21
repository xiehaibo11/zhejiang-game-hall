
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest_00;
  ulong uVar4;
  size_t __n;
  ulong uVar5;
  ulong __n_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
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
    uVar4 = 0x16;
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
  uVar4 = param_4;
  if (((byte)bVar2 & 1) == 0) {
    pbVar6 = this + 1;
    if (__n_00 == param_4) goto joined_r0x007d5518;
LAB_007d54d0:
    __n = uVar3 - __n_00;
    uVar4 = __n_00;
    if (__n == 0) goto joined_r0x007d5518;
    __dest = pbVar6 + param_1;
    if (__n_00 <= param_4) {
      if ((__dest < param_3) && (param_3 < pbVar6 + uVar5)) {
        if (param_3 < __dest + __n_00) {
          if (__n_00 != 0) {
            memmove(__dest,param_3,__n_00);
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
      memmove(pbVar6 + param_4 + param_1,pbVar6 + __n_00 + param_1,__n);
      uVar4 = __n_00;
      goto joined_r0x007d5518;
    }
    if (param_4 != 0) {
      memmove(__dest,param_3,param_4);
    }
    __dest_00 = __dest + param_4;
    param_3 = (char *)(__dest + __n_00);
  }
  else {
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (__n_00 != param_4) goto LAB_007d54d0;
joined_r0x007d5518:
    __n_00 = uVar4;
    __n = param_4;
    if (__n == 0) goto LAB_007d552c;
    __dest_00 = pbVar6 + param_1;
    param_4 = __n;
  }
  memmove(__dest_00,param_3,__n);
  __n = param_4;
LAB_007d552c:
  lVar1 = (__n - __n_00) + uVar5;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  pbVar6[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


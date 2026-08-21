
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong __n;
  size_t __n_00;
  
  bVar4 = *this;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  uVar5 = uVar2 - param_1;
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar5;
  if (param_2 <= uVar5) {
    __n = param_2;
  }
  uVar3 = 0x16;
  if (((byte)bVar4 & 1) != 0) {
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((__n - uVar2) + uVar3 < param_4) {
    __grow_by_and_replace
              (this,uVar3,(uVar2 + param_4) - (__n + uVar3),uVar2,param_1,__n,param_4,param_3);
    return this;
  }
  pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)bVar4 & 1) == 0) {
    pbVar6 = this + 1;
  }
  if ((__n == param_4) || (__n_00 = uVar5 - __n, __n_00 == 0)) {
LAB_00140748:
    __n_00 = param_4;
    if (__n_00 == 0) goto LAB_0014075c;
    __dest_00 = pbVar6 + param_1;
    param_4 = __n_00;
  }
  else {
    __dest = pbVar6 + param_1;
    if (__n <= param_4) {
      if ((__dest < param_3) && (param_3 < pbVar6 + uVar2)) {
        if (param_3 < __dest + __n) {
          if (__n != 0) {
            memmove(pbVar6 + param_1,param_3,__n);
          }
          param_1 = __n + param_1;
          param_3 = param_3 + param_4;
          param_4 = param_4 - __n;
          __n = 0;
        }
        else {
          param_3 = param_3 + (param_4 - __n);
        }
      }
      memmove(pbVar6 + param_4 + param_1,pbVar6 + __n + param_1,__n_00);
      goto LAB_00140748;
    }
    if (param_4 != 0) {
      memmove(__dest,param_3,param_4);
    }
    __dest_00 = __dest + param_4;
    param_3 = (char *)(__dest + __n);
  }
  memmove(__dest_00,param_3,__n_00);
  __n_00 = param_4;
LAB_0014075c:
  lVar1 = (__n_00 - __n) + uVar2;
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


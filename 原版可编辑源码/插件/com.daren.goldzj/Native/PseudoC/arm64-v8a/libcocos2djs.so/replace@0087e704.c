
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  void *__dest_00;
  size_t sVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong __n;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest_01;
  ulong uVar7;
  ulong uVar8;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar7 = (ulong)((byte)bVar2 >> 1);
    uVar3 = uVar7 - param_1;
  }
  else {
    uVar7 = *(ulong *)(this + 8);
    uVar3 = uVar7 - param_1;
  }
  if (uVar7 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar3;
  if (param_2 <= uVar3) {
    __n = param_2;
  }
  if (((byte)bVar2 & 1) == 0) {
    uVar8 = 0x16;
  }
  else {
    uVar8 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((__n - uVar7) + uVar8 < param_4) {
    uVar3 = (uVar7 - __n) + param_4;
    if (-uVar8 - 0x12 < uVar3 - uVar8) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = this + 1;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if (uVar8 < 0x7fffffffffffffe7) {
      uVar6 = uVar8 << 1;
      if (uVar8 << 1 <= uVar3) {
        uVar6 = uVar3;
      }
      if (uVar6 < 0x17) {
        uVar6 = 0x17;
      }
      else {
        uVar6 = uVar6 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar6 = 0xffffffffffffffef;
    }
    __dest_00 = operator_new(uVar6);
    if (param_1 != 0) {
      memcpy(__dest_00,pbVar5,param_1);
    }
    memcpy((void *)((long)__dest_00 + param_1),param_3,param_4);
    sVar4 = (uVar7 - __n) - param_1;
    if (sVar4 != 0) {
      memcpy((void *)((long)((long)__dest_00 + param_1) + param_4),pbVar5 + __n + param_1,sVar4);
    }
    if (uVar8 != 0x16) {
      operator_delete(pbVar5);
    }
    *(ulong *)this = uVar6 | 1;
    pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)__dest_00 + uVar3);
    *(ulong *)(this + 8) = uVar3;
    *(void **)(this + 0x10) = __dest_00;
    goto LAB_0087e900;
  }
  uVar8 = param_4;
  if (((byte)bVar2 & 1) == 0) {
    pbVar5 = this + 1;
    if (__n == param_4) goto joined_r0x0087e80c;
LAB_0087e7c4:
    sVar4 = uVar3 - __n;
    uVar8 = __n;
    if (sVar4 == 0) goto joined_r0x0087e80c;
    __dest_01 = pbVar5 + param_1;
    if (__n <= param_4) {
      if ((__dest_01 < param_3) && (param_3 < pbVar5 + uVar7)) {
        if (param_3 < __dest_01 + __n) {
          if (__n != 0) {
            memmove(__dest_01,param_3,__n);
          }
          param_1 = __n + param_1;
          param_3 = param_3 + param_4;
          param_4 = param_4 - __n;
          __dest_01 = pbVar5 + param_1;
          __n = 0;
        }
        else {
          param_3 = param_3 + (param_4 - __n);
        }
      }
      memmove(__dest_01 + param_4,__dest_01 + __n,sVar4);
      uVar8 = __n;
      goto joined_r0x0087e80c;
    }
    if (param_4 != 0) {
      memmove(__dest_01,param_3,param_4);
    }
    __dest = __dest_01 + param_4;
    param_3 = (char *)(__dest_01 + __n);
LAB_0087e81c:
    memmove(__dest,param_3,sVar4);
    sVar4 = param_4;
  }
  else {
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (__n != param_4) goto LAB_0087e7c4;
joined_r0x0087e80c:
    __n = uVar8;
    sVar4 = param_4;
    if (sVar4 != 0) {
      __dest = pbVar5 + param_1;
      param_4 = sVar4;
      goto LAB_0087e81c;
    }
  }
  lVar1 = (sVar4 - __n) + uVar7;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
    pbVar5 = pbVar5 + lVar1;
  }
  else {
    *(long *)(this + 8) = lVar1;
    pbVar5 = pbVar5 + lVar1;
  }
LAB_0087e900:
  *pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


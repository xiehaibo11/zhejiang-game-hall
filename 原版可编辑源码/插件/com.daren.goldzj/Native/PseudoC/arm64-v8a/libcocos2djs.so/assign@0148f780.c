
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar6 = 0x16;
    uVar4 = (ulong)(byte)bVar1;
    if (0x16 < param_1) goto LAB_0148f7dc;
LAB_0148f7b8:
    if ((uVar4 & 1) == 0) {
      pbVar5 = this + 1;
      goto joined_r0x0148f874;
    }
  }
  else {
    uVar4 = *(ulong *)this;
    uVar6 = (uVar4 & 0xfffffffffffffffe) - 1;
    if (param_1 <= uVar6) goto LAB_0148f7b8;
LAB_0148f7dc:
    if (-uVar6 - 0x11 < param_1 - uVar6) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (((byte)bVar1 & 1) == 0) {
      pbVar5 = this + 1;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if (uVar6 < 0x7fffffffffffffe7) {
      uVar3 = uVar6 * 2;
      if (uVar3 < param_1 || uVar3 - param_1 == 0) {
        uVar3 = param_1;
      }
      uVar4 = 0x17;
      if (0x16 < uVar3) {
        uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
      }
      pvVar2 = operator_new(uVar4);
      if (uVar6 != 0x16) goto LAB_0148f858;
    }
    else {
      uVar4 = 0xffffffffffffffef;
      pvVar2 = operator_new(0xffffffffffffffef);
LAB_0148f858:
      operator_delete(pbVar5);
    }
    *(void **)(this + 0x10) = pvVar2;
    *(ulong *)this = uVar4 | 1;
  }
  pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
joined_r0x0148f874:
  if (param_1 != 0) {
    memset(pbVar5,(uint)(byte)param_2,param_1);
  }
  pbVar5[param_1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  return this;
}


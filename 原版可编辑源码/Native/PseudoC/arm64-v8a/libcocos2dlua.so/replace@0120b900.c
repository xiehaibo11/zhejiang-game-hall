
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  
  bVar3 = *this;
  if (((byte)bVar3 & 1) == 0) {
    uVar6 = (ulong)((byte)bVar3 >> 1);
    uVar4 = uVar6 - param_1;
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    uVar4 = uVar6 - param_1;
  }
  if (uVar6 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  uVar2 = uVar4;
  if (param_2 <= uVar4) {
    uVar2 = param_2;
  }
  if (((byte)bVar3 & 1) == 0) {
    uVar5 = 0x16;
  }
  else {
    uVar5 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((uVar2 - uVar6) + uVar5 < param_3) {
    __grow_by(this,uVar5,((uVar6 + param_3) - uVar2) - uVar5,uVar6,param_1,uVar2,param_3);
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  else {
    if (((byte)bVar3 & 1) == 0) {
      pbVar7 = this + 1;
    }
    else {
      pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if ((uVar2 != param_3) && (uVar4 - uVar2 != 0)) {
      memmove(pbVar7 + param_3 + param_1,pbVar7 + uVar2 + param_1,uVar4 - uVar2);
    }
    if (param_3 == 0) goto LAB_0120b9f8;
  }
  memset(pbVar7 + param_1,(uint)(byte)param_4,param_3);
LAB_0120b9f8:
  lVar1 = (param_3 - uVar2) + uVar6;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  pbVar7[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


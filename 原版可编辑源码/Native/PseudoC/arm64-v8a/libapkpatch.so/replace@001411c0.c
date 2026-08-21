
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  
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
  uVar3 = uVar6;
  if (param_2 <= uVar6) {
    uVar3 = param_2;
  }
  uVar4 = 0x16;
  if (((byte)bVar5 & 1) != 0) {
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((uVar3 - uVar2) + uVar4 < param_3) {
    __grow_by(this,uVar4,(uVar2 + param_3) - (uVar3 + uVar4),uVar2,param_1,uVar3,param_3);
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  else {
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar5 & 1) == 0) {
      pbVar7 = this + 1;
    }
    if ((uVar3 != param_3) && (uVar6 - uVar3 != 0)) {
      memmove(pbVar7 + param_3 + param_1,pbVar7 + uVar3 + param_1,uVar6 - uVar3);
    }
    if (param_3 == 0) goto LAB_001412a4;
  }
  memset(pbVar7 + param_1,(uint)(byte)param_4,param_3);
LAB_001412a4:
  lVar1 = (param_3 - uVar3) + uVar2;
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


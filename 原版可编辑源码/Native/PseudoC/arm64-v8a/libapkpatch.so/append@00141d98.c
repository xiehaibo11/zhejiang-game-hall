
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong __n;
  ulong uVar2;
  ulong uVar3;
  basic_string bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  bool bVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  basic_string *pbVar8;
  
  bVar4 = *param_1;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar2) {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    bVar5 = *this;
    if (((byte)bVar4 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    __n = uVar2 - param_2;
    if (param_3 <= uVar2 - param_2) {
      __n = param_3;
    }
    bVar6 = ((byte)bVar5 & 1) != 0;
    uVar2 = 0x16;
    if (bVar6) {
      uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    uVar3 = (ulong)((byte)bVar5 >> 1);
    if (bVar6) {
      uVar3 = *(ulong *)(this + 8);
    }
    if (uVar2 - uVar3 < __n) {
      __grow_by_and_replace
                (this,uVar2,(uVar3 + __n) - uVar2,uVar3,uVar3,0,__n,(char *)(pbVar8 + param_2));
    }
    else if (__n != 0) {
      pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if (((byte)bVar5 & 1) == 0) {
        pbVar7 = this + 1;
      }
      memcpy(pbVar7 + uVar3,pbVar8 + param_2,__n);
      lVar1 = uVar3 + __n;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      pbVar7[lVar1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}



/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  if (param_1 != 0) {
    uVar4 = *(ulong *)this;
    uVar2 = (ulong)((byte)*this >> 1);
    uVar3 = 0x16;
    if (((byte)*this & 1) != 0) {
      uVar2 = *(ulong *)(this + 8);
      uVar3 = (uVar4 & 0xfffffffffffffffe) - 1;
    }
    lVar1 = uVar2 + param_1;
    if (uVar3 - uVar2 < param_1) {
      __grow_by(this,uVar3,lVar1 - uVar3,uVar2,uVar2,0,0);
      uVar4 = (ulong)(byte)*this;
    }
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar4 & 1) == 0) {
      pbVar5 = this + 1;
    }
    memset(pbVar5 + uVar2,(uint)(byte)param_2,param_1);
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    pbVar5[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  return this;
}



/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar2 = 0x16;
    uVar3 = (ulong)(byte)bVar1;
    if (0x16 < param_1) goto LAB_0120b49c;
LAB_0120b4bc:
    if ((uVar3 & 1) == 0) goto LAB_0120b4c0;
  }
  else {
    uVar3 = *(ulong *)this;
    uVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
    if (param_1 <= uVar2) goto LAB_0120b4bc;
LAB_0120b49c:
    if (((byte)bVar1 & 1) == 0) {
      uVar3 = (ulong)((byte)bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(this + 8);
    }
    __grow_by(this,uVar2,param_1 - uVar2,uVar3,0,uVar3,0);
    if (((byte)*this & 1) == 0) {
LAB_0120b4c0:
      __s = this + 1;
      goto joined_r0x0120b4c4;
    }
  }
  __s = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10);
joined_r0x0120b4c4:
  if (param_1 != 0) {
    memset(__s,(uint)(byte)param_2,param_1);
  }
  __s[param_1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
  ;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  return this;
}


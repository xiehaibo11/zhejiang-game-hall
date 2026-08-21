
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::push_back(char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
push_back(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         char param_1)

{
  byte bVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    bVar1 = (byte)*this >> 1;
    uVar4 = (ulong)bVar1;
    if (bVar1 == 0x16) {
      uVar4 = 0x16;
      uVar2 = 0x16;
LAB_00141a18:
      __grow_by(this,uVar2,1,uVar2,uVar2,0,0);
      if (((byte)*this & 1) != 0) goto LAB_00141a4c;
    }
    pbVar3 = this + 1;
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
            ((char)uVar4 * '\x02' + '\x02');
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar4 == uVar2) goto LAB_00141a18;
LAB_00141a4c:
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    *(ulong *)(this + 8) = uVar4 + 1;
  }
  pbVar3[uVar4] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)param_1;
  (pbVar3 + uVar4)[1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}


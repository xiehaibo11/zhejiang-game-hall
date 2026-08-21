
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::push_back(char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
push_back(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         char param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar1 = 0x16;
    if (uVar4 != 0x16) goto LAB_0120b3ac;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar4 != uVar1) goto LAB_0120b3ac;
  }
  __grow_by(this,uVar1,1,uVar1,uVar1,0,0);
  bVar2 = *this;
LAB_0120b3ac:
  if (((byte)bVar2 & 1) == 0) {
    pbVar3 = this + 1;
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
            ((char)uVar4 * '\x02' + '\x02');
  }
  else {
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


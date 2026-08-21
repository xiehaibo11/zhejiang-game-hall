
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::resize(unsigned long, char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  ulong uVar2;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar2 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar2) {
    if (((byte)bVar1 & 1) != 0) {
      *(undefined1 *)(*(long *)(this + 0x10) + param_1) = 0;
      *(ulong *)(this + 8) = param_1;
      return;
    }
    this[param_1 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    *this = SUB41((int)param_1 << 1,0);
    return;
  }
  append(this,param_1 - uVar2,param_2);
  return;
}


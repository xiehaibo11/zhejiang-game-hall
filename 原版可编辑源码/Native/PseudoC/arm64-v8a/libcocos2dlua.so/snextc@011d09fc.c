
/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::snextc() */

ulong __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::snextc
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (*(byte **)(this + 0x18) == *(byte **)(this + 0x20)) {
    uVar1 = (**(code **)(*(long *)this + 0x50))(this);
    if ((int)uVar1 == -1) {
      return uVar1;
    }
    pbVar2 = *(byte **)(this + 0x18);
    if (pbVar2 == *(byte **)(this + 0x20)) goto LAB_011d0a54;
  }
  else {
    pbVar2 = *(byte **)(this + 0x18) + 1;
    *(byte **)(this + 0x18) = pbVar2;
    if (pbVar2 == *(byte **)(this + 0x20)) {
LAB_011d0a54:
                    /* WARNING: Could not recover jumptable at 0x011d0a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)this + 0x48))(this);
      return uVar1;
    }
  }
  return (ulong)*pbVar2;
}


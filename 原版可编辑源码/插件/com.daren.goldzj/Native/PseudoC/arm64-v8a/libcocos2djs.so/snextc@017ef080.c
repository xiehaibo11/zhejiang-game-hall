
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::snextc() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::snextc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = *(int **)(this + 0x18);
  if (piVar1 == *(int **)(this + 0x20)) {
    uVar2 = (**(code **)(*(long *)this + 0x50))(this);
    if ((int)uVar2 == -1) {
      return uVar2;
    }
  }
  else {
    *(int **)(this + 0x18) = piVar1 + 1;
    if (*piVar1 == -1) {
      return 0xffffffff;
    }
  }
  if (*(uint **)(this + 0x18) != *(uint **)(this + 0x20)) {
    return (ulong)**(uint **)(this + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x017ef0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x48))(this);
  return uVar2;
}


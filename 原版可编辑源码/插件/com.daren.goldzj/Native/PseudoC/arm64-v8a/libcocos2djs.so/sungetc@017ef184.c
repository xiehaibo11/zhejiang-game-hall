
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sungetc() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sungetc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x10) != lVar1) {
    *(long *)(this + 0x18) = lVar1 + -4;
    return (ulong)*(uint *)(lVar1 + -4);
  }
                    /* WARNING: Could not recover jumptable at 0x017ef1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x58))(this,0xffffffff);
  return uVar2;
}


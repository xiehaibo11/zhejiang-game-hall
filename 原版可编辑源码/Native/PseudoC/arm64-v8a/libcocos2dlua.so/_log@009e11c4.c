
/* universe::Translated::_log(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Translated * __thiscall universe::Translated::_log(Translated *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *__ptr;
  uint uVar2;
  
  if (*(FILE **)this != (FILE *)0x0) {
    uVar1 = *(ulong *)(param_1 + 8);
    __ptr = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __ptr = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    fwrite(__ptr,1,uVar1 + 1,*(FILE **)this);
    uVar2 = fflush(*(FILE **)this);
    return (Translated *)(ulong)uVar2;
  }
  return this;
}


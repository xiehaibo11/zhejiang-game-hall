
/* CSSColorParser::parse_css_int(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

int CSSColorParser::parse_css_int(basic_string *param_1)

{
  ulong uVar1;
  basic_string *__nptr;
  longlong lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  __nptr = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  if ((uVar1 == 0) || (__nptr[uVar1 - 1] != (basic_string)0x25)) {
    lVar2 = strtoll((char *)__nptr,(char **)0x0,10);
    lVar4 = (long)(double)lVar2;
    if (0xfe < lVar4) {
      lVar4 = 0xff;
    }
    iVar3 = (int)lVar4;
    if (lVar4 < 1) {
      iVar3 = 0;
    }
    return iVar3;
  }
  fVar5 = strtof((char *)__nptr,(char **)0x0);
  fVar5 = (float)(int)((fVar5 / 100.0) * 255.0);
  if (fVar5 < 0.0) {
    return 0;
  }
  if (fVar5 <= 255.0) {
    return (int)fVar5;
  }
  return 0xff;
}


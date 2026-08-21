
/* CSSColorParser::parse_css_float(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

float CSSColorParser::parse_css_float(basic_string *param_1)

{
  ulong uVar1;
  basic_string *__nptr;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  __nptr = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  if ((uVar1 == 0) || (__nptr[uVar1 - 1] != (basic_string)0x25)) {
    fVar3 = strtof((char *)__nptr,(char **)0x0);
  }
  else {
    fVar3 = strtof((char *)__nptr,(char **)0x0);
    fVar3 = fVar3 / 100.0;
  }
  bVar2 = 0.0 <= fVar3;
  if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  fVar4 = 0.0;
  if (bVar2) {
    fVar4 = fVar3;
  }
  return fVar4;
}


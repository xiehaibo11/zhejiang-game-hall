
/* CSSColorParser::parseFloat(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void CSSColorParser::parseFloat(basic_string *param_1)

{
  basic_string *__nptr;
  
  __nptr = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  strtof((char *)__nptr,(char **)0x0);
  return;
}


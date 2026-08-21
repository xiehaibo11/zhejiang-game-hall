
/* CSSColorParser::parseInt(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned char) */

void CSSColorParser::parseInt(basic_string *param_1,uchar param_2)

{
  basic_string *__nptr;
  
  __nptr = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  strtoll((char *)__nptr,(char **)0x0,(uint)param_2);
  return;
}


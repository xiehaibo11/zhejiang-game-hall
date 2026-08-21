
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_QUOTED_CHAR_ERE<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_QUOTED_CHAR_ERE<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (((param_2 != param_3) && (param_2 + 1 != param_3)) && (*param_2 == '\\')) {
    cVar1 = param_2[1];
                    /* try { // try from 00f2bd38 to 0102bd7b has its CatchHandler @ 00f2bd38
                       catch() { ... } // from try @ 00f2bd38 with catch @ 00f2bd38
                       catch() { ... } // from try @ 00f2be44 with catch @ 00f2bd38 */
    switch(cVar1) {
    case '$':
    case '(':
    case ')':
    case '*':
    case '+':
    case '.':
    case '?':
    case '[':
    case '\\':
    case '^':
    case '{':
    case '|':
    case '}':
      __push_char(this,cVar1);
      param_2 = param_2 + 2;
      break;
    default:
      if ((*(uint *)(this + 0x18) & 0x1f0) == 0x40) {
                    /* try { // try from 00f2bd7c to 0102bd83 has its CatchHandler @ 00f2be64 */
        pcVar2 = (char *)__parse_awk_escape<std::__ndk1::__wrap_iter<char_const*>>();
        return pcVar2;
      }
    }
  }
  return param_2;
}


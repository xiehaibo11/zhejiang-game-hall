
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_QUOTED_CHAR_ERE<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_QUOTED_CHAR_ERE<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  if (((param_1 != param_2) && (pcVar1 = param_1 + 1, pcVar1 != param_2)) && (*param_1 == '\\')) {
    switch(*pcVar1) {
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
      __push_char(this,*pcVar1);
      param_1 = param_1 + 2;
      break;
    default:
      if ((*(uint *)(this + 0x18) & 0x1f0) == 0x40) {
        pcVar1 = __parse_awk_escape<char_const*>(this,pcVar1,param_2,(basic_string *)0x0);
        return pcVar1;
      }
    }
  }
  return param_1;
}


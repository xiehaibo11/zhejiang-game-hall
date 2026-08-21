
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_ORD_CHAR_ERE<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_ORD_CHAR_ERE<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  if (param_1 != param_2) {
    switch(*param_1) {
    case '$':
    case '(':
    case '*':
    case '+':
    case '.':
    case '?':
    case '[':
    case '\\':
    case '^':
    case '{':
    case '|':
      break;
    case ')':
      if (*(int *)(this + 0x24) != 0) {
        return param_1;
      }
    default:
      __push_char(this,*param_1);
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}


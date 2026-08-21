
/* v8::internal::compiler::JSONEscaped::PipeCharacter(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, char) */

void v8::internal::compiler::JSONEscaped::PipeCharacter(basic_ostream *param_1,char param_2)

{
  char local_14 [4];
  
  switch(param_2) {
  case '\b':
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\\b",2);
    return;
  case '\t':
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\\t",2);
    return;
  case '\n':
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\\n",2);
    return;
  case '\v':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
    goto switchD_016cfc18_caseD_b;
  case '\f':
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\\f",2);
    return;
  case '\r':
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\\r",2);
    return;
  case '\"':
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\\\"",2);
    return;
  default:
    if (param_2 == '\\') {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\\\\",2);
      return;
    }
switchD_016cfc18_caseD_b:
    local_14[0] = param_2;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_14,1);
    return;
  }
}


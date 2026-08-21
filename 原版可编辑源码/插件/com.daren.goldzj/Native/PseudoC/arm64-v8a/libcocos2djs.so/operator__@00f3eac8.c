
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::ScopeType) */

void v8::internal::operator<<(basic_ostream *param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"CLASS_SCOPE",0xb);
    return;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"EVAL_SCOPE",10);
    return;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"FUNCTION_SCOPE",0xe);
    return;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"MODULE_SCOPE",0xc);
    return;
  case 4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"SCRIPT_SCOPE",0xc);
    return;
  case 5:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"CATCH_SCOPE",0xb);
    return;
  case 6:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"BLOCK_SCOPE",0xb);
    return;
  case 7:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"WITH_SCOPE",10);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}


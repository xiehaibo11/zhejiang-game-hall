
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::AccessMode) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Load",4);
    return;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Store",5);
    return;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"StoreInLiteral",0xe);
    return;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Has",3);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}


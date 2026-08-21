
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::FlagsMode const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,FlagsMode *param_2)

{
  switch(*(undefined4 *)param_2) {
  case 0:
    return;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"branch",6);
    return;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"branch_and_poison",0x11);
    return;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"deoptimize",10);
    return;
  case 4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"deoptimize_and_poison",0x15);
    return;
  case 5:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"set",3);
    return;
  case 6:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"trap",4);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}


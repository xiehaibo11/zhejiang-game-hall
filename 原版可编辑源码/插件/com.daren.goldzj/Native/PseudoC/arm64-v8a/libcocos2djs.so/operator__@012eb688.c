
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::NumberOperationHint) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"SignedSmall",0xb);
    return;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"SignedSmallInputs",0x11);
    return;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Signed32",8)
    ;
    return;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Number",6);
    return;
  case 4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"NumberOrOddball",0xf);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}


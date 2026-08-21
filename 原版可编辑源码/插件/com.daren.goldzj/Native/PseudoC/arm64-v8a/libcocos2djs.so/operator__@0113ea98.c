
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::CompareOperationHint) */

void v8::internal::operator<<(basic_ostream *param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"None",4);
    return;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"SignedSmall",0xb);
    return;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Number",6);
    return;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"NumberOrOddball",0xf);
    return;
  case 4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"InternalizedString",0x12);
    return;
  case 5:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"String",6);
    return;
  case 6:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Symbol",6);
    return;
  case 7:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"BigInt",6);
    return;
  case 8:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Receiver",8)
    ;
    return;
  case 9:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"ReceiverOrNullOrUndefined",0x19);
    return;
  case 10:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Any",3);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}



/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::TrapId) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapUnreachable",0xf);
    return;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapMemOutOfBounds",0x12);
    return;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapUnalignedAccess",0x13);
    return;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapDivByZero",0xd);
    return;
  case 4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapDivUnrepresentable",0x16);
    return;
  case 5:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapRemByZero",0xd);
    return;
  case 6:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapFloatUnrepresentable",0x18);
    return;
  case 7:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapFuncInvalid",0xf);
    return;
  case 8:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapFuncSigMismatch",0x13);
    return;
  case 9:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapDataSegmentDropped",0x16);
    return;
  case 10:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapElemSegmentDropped",0x16);
    return;
  case 0xb:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"TrapTableOutOfBounds",0x14);
    return;
  case 0xc:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Invalid",7);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}


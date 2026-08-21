
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::LoadTransformation) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kS8x16LoadSplat",0xf);
    return;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kS16x8LoadSplat",0xf);
    return;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kS32x4LoadSplat",0xf);
    return;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kS64x2LoadSplat",0xf);
    return;
  case 4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kI16x8Load8x8S",0xe);
    return;
  case 5:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kI16x8Load8x8U",0xe);
    return;
  case 6:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kI32x4Load16x4S",0xf);
    return;
  case 7:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kI32x4Load16x4U",0xf);
    return;
  case 8:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kI64x2Load32x2S",0xf);
    return;
  case 9:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kI64x2Load32x2U",0xf);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}


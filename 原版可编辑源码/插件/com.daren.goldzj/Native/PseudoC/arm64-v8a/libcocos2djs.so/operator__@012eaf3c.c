
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CheckFloat64HoleMode) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,char param_2)

{
  if (param_2 == '\x01') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"allow-return-hole",0x11);
    return;
  }
  if (param_2 == '\0') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"never-return-hole",0x11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


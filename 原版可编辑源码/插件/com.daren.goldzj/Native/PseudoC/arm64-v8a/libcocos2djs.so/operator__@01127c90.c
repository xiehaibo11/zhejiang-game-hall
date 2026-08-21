
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::PropertyConstness) */

void v8::internal::operator<<(basic_ostream *param_1,int param_2)

{
  if (param_2 == 1) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"const",5);
    return;
  }
  if (param_2 == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"mutable",7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


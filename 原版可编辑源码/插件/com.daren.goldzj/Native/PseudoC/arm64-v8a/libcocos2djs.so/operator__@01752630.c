
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CallFrequency const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,CallFrequency *param_2)

{
  if (NAN(*(float *)param_2)) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"unknown",7);
    return;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(float *)param_2);
  return;
}


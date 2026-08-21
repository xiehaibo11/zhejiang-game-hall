
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::base::Flags<v8::internal::compiler::CheckMapsFlag, int>)
    */

void v8::internal::compiler::operator<<(basic_ostream *param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"None",4);
    return;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"TryMigrateInstance",0x12);
  return;
}


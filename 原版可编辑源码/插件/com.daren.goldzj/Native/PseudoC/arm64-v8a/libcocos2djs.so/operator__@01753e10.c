
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ForInMode) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,char param_2)

{
  if (param_2 == '\x02') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Generic",7);
    return;
  }
  if (param_2 != '\x01') {
    if (param_2 == '\0') {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"UseEnumCacheKeysAndIndices",0x1a);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"UseEnumCacheKeys",0x10);
  return;
}


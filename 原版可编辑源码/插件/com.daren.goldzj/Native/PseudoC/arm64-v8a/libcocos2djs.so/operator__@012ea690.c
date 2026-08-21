
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::BaseTaggedness) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,char param_2)

{
  if (param_2 == '\x01') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"tagged base",0xb);
    return;
  }
  if (param_2 == '\0') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"untagged base",0xd);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


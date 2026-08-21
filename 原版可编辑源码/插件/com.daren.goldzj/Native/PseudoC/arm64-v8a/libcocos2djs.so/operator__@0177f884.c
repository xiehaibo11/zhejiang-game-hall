
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::LoadKind) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,int param_2)

{
  if (param_2 == 2) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"kProtected",10);
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"kNormal",7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"kUnaligned",10);
  return;
}


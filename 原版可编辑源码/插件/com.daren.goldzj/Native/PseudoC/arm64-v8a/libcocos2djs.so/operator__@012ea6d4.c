
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ConstFieldInfo const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,ConstFieldInfo *param_2)

{
  basic_ostream *this;
  char *pcVar1;
  ulong uVar2;
  
  if (*(long *)param_2 == 0) {
    pcVar1 = "mutable";
    uVar2 = 7;
  }
  else {
    this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"const (field owner: ",0x14);
    param_1 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,
                         *(ulong *)param_2);
    pcVar1 = ")";
    uVar2 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,uVar2);
  return;
}


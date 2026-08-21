
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CheckFloat64HoleParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,CheckFloat64HoleParameters *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  
  if (*param_2 == (CheckFloat64HoleParameters)0x1) {
    pcVar2 = "allow-return-hole";
  }
  else {
    if (*param_2 != (CheckFloat64HoleParameters)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar2 = "never-return-hole";
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar2,0x11);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  operator<<(pbVar1,(FeedbackSource *)(param_2 + 8));
  return;
}


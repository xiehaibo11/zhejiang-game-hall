
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CheckBoundsParameters const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,CheckBoundsParameters *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  
  pbVar1 = (basic_ostream *)operator<<(param_1,(FeedbackSource *)param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2);
  if (*(int *)(param_2 + 0x10) == 1) {
    pcVar2 = "deopt";
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0) {
      return param_1;
    }
    pcVar2 = "abort";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,5);
  return param_1;
}


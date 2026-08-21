
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::PropertyAccess const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,PropertyAccess *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  
  pcVar1 = "sloppy";
  if (param_2[0x10] != (PropertyAccess)0x0) {
    pcVar1 = "strict";
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar1,6);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  operator<<(pbVar2,(FeedbackSource *)param_2);
  return;
}



/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::NumberOperationParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,NumberOperationParameters *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)operator<<(param_1,*param_2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  operator<<(pbVar1,(FeedbackSource *)(param_2 + 8));
  return;
}


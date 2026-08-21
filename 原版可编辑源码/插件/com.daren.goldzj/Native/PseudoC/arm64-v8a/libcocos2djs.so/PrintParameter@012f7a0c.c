
/* v8::internal::compiler::Operator1<v8::internal::compiler::CheckBoundsParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckBoundsParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CheckBoundsParameters>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::CheckBoundsParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckBoundsParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CheckBoundsParameters>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  pbVar2 = (basic_ostream *)compiler::operator<<(pbVar1,(FeedbackSource *)(param_1 + 0x30));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2);
  if (*(int *)(param_1 + 0x40) == 1) {
    pcVar3 = "deopt";
  }
  else {
    if (*(int *)(param_1 + 0x40) != 0) goto LAB_012f7a80;
    pcVar3 = "abort";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar3,5);
LAB_012f7a80:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}


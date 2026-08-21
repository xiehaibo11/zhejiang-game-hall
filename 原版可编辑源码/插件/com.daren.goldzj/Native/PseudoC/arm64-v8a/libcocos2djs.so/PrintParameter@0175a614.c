
/* v8::internal::compiler::Operator1<v8::internal::compiler::PropertyAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::PropertyAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::PropertyAccess>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::PropertyAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::PropertyAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::PropertyAccess>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  pcVar1 = "sloppy";
  if (*(char *)(param_1 + 0x40) != '\0') {
    pcVar1 = "strict";
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar1,6);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)compiler::operator<<(pbVar2,(FeedbackSource *)(param_1 + 0x30));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  return;
}



/* v8::internal::compiler::Operator1<v8::internal::compiler::GrowFastElementsParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::GrowFastElementsParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::GrowFastElementsParameters>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::GrowFastElementsParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::GrowFastElementsParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::GrowFastElementsParameters>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    pcVar1 = "Runtime::HasSmiOrObjectElements";
    uVar3 = 0x13;
  }
  else {
    if (*(char *)(param_1 + 0x30) != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar1 = "Runtime::HasDoubleElements";
    uVar3 = 0xe;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar1 + 0xc,uVar3);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)compiler::operator<<(pbVar2,(FeedbackSource *)(param_1 + 0x38));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  return;
}


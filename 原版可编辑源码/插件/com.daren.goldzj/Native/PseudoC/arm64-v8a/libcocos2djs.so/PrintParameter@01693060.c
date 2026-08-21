
/* v8::internal::compiler::Operator1<v8::internal::compiler::RegionObservability,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::RegionObservability>,
   v8::internal::compiler::OpHash<v8::internal::compiler::RegionObservability>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::RegionObservability,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RegionObservability>,v8::internal::compiler::OpHash<v8::internal::compiler::RegionObservability>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    pcVar2 = "not-observable";
    uVar3 = 0xe;
  }
  else {
    if (*(char *)(param_1 + 0x2c) != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar2 = "observable";
    uVar3 = 10;
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,pcVar2,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}


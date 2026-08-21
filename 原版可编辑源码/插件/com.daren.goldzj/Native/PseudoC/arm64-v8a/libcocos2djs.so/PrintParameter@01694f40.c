
/* v8::internal::compiler::Operator1<v8::internal::CreateArgumentsType,
   v8::internal::compiler::OpEqualTo<v8::internal::CreateArgumentsType>,
   v8::internal::compiler::OpHash<v8::internal::CreateArgumentsType>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::CreateArgumentsType,v8::internal::compiler::OpEqualTo<v8::internal::CreateArgumentsType>,v8::internal::compiler::OpHash<v8::internal::CreateArgumentsType>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  char cVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 == '\x02') {
    pcVar3 = "REST_PARAMETER";
    uVar4 = 0xe;
  }
  else if (cVar1 == '\x01') {
    pcVar3 = "UNMAPPED_ARGUMENTS";
    uVar4 = 0x12;
  }
  else {
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar3 = "MAPPED_ARGUMENTS";
    uVar4 = 0x10;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar3,uVar4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  return;
}


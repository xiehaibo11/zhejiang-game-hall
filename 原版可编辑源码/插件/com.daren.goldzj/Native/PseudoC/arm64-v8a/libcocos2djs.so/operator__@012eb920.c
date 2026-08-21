
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CheckTaggedInputParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,CheckTaggedInputParameters *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  
  if (*param_2 == (CheckTaggedInputParameters)0x1) {
    pcVar2 = "NumberOrOddball";
    uVar3 = 0xf;
  }
  else {
    if (*param_2 != (CheckTaggedInputParameters)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar2 = "Number";
    uVar3 = 6;
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar2,uVar3);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  operator<<(pbVar1,(FeedbackSource *)(param_2 + 8));
  return;
}


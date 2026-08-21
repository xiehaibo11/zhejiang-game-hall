
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::GrowFastElementsParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,GrowFastElementsParameters *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  
  if (*param_2 == (GrowFastElementsParameters)0x1) {
    pcVar1 = "Runtime::HasSmiOrObjectElements";
    uVar3 = 0x13;
  }
  else {
    if (*param_2 != (GrowFastElementsParameters)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar1 = "Runtime::HasDoubleElements";
    uVar3 = 0xe;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar1 + 0xc,uVar3);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  operator<<(pbVar2,(FeedbackSource *)(param_2 + 8));
  return;
}



/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::DeoptimizeParameters) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,char *param_2)

{
  char cVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    pcVar3 = "Lazy";
LAB_0168cfa0:
    uVar4 = 4;
  }
  else {
    if (cVar1 == '\x01') {
      pcVar3 = "Soft";
      goto LAB_0168cfa0;
    }
    if (cVar1 != '\0') goto LAB_0168d038;
    pcVar3 = "Eager";
    uVar4 = 5;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar3,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,param_2[1]);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  cVar1 = param_2[0x18];
  if (cVar1 == '\x02') {
    pcVar3 = "NoSafetyCheck";
    uVar4 = 0xd;
  }
  else if (cVar1 == '\x01') {
    pcVar3 = "SafetyCheck";
    uVar4 = 0xb;
  }
  else {
    if (cVar1 != '\0') {
LAB_0168d038:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar3 = "CriticalSafetyCheck";
    uVar4 = 0x13;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar3,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  operator<<(pbVar2,(FeedbackSource *)(param_2 + 8));
  return;
}


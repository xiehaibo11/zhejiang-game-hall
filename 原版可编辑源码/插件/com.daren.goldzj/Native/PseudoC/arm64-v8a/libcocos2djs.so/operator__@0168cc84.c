
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::BranchOperatorInfo) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,uint param_2)

{
  uint uVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 == 2) {
    pcVar3 = "False";
    uVar4 = 5;
  }
  else if (uVar1 == 1) {
    pcVar3 = "True";
    uVar4 = 4;
  }
  else {
    if (uVar1 != 0) goto LAB_0168cd3c;
    pcVar3 = "None";
    uVar4 = 4;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar3,uVar4);
  uVar1 = param_2 >> 8 & 0xff;
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  if (uVar1 == 2) {
    pcVar3 = "NoSafetyCheck";
    uVar4 = 0xd;
  }
  else if (uVar1 == 1) {
    pcVar3 = "SafetyCheck";
    uVar4 = 0xb;
  }
  else {
    if (uVar1 != 0) {
LAB_0168cd3c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar3 = "CriticalSafetyCheck";
    uVar4 = 0x13;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  return;
}



/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CallParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,CallParameters *param_2)

{
  uint uVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      (ulong)*(uint *)param_2 & 0x7ffffff);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  if (NAN(*(float *)(param_2 + 4))) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"unknown",7);
  }
  else {
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(float *)(param_2 + 4));
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  uVar1 = *(uint *)param_2 >> 0x1d & 3;
  if (uVar1 == 2) {
    pcVar3 = "ANY";
    uVar4 = 3;
  }
  else if (uVar1 == 1) {
    pcVar3 = "NOT_NULL_OR_UNDEFINED";
    uVar4 = 0x15;
  }
  else {
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar3 = "NULL_OR_UNDEFINED";
    uVar4 = 0x11;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar3,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  if (((byte)param_2[3] >> 4 & 1) == 0) {
    pcVar3 = "SpeculationMode::kAllowSpeculation";
    uVar4 = 0x22;
  }
  else {
    pcVar3 = "SpeculationMode::kDisallowSpeculation";
    uVar4 = 0x25;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar3,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  if (((byte)param_2[3] >> 3 & 1) == 0) {
    pcVar3 = "CallFeedbackRelation::kRelated";
    uVar4 = 0x1e;
  }
  else {
    pcVar3 = "CallFeedbackRelation::kUnrelated";
    uVar4 = 0x20;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  return;
}


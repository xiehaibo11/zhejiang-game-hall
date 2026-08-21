
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x012eb27c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CheckMapsParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,CheckMapsParameters *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  
  if (((byte)*param_2 & 1) == 0) {
    pcVar1 = "None";
    uVar3 = 4;
  }
  else {
    pcVar1 = "TryMigrateInstance";
    uVar3 = 0x12;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar1,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2);
  pbVar2 = internal::operator<<(pbVar2,*(undefined8 *)(param_2 + 8));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  operator<<(pbVar2,(FeedbackSource *)(param_2 + 0x10));
  return;
}


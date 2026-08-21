
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::FeedbackSource const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,FeedbackSource *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  
  if ((*(long *)param_2 == 0) || (*(int *)(param_2 + 8) == -1)) {
    pcVar2 = "FeedbackSource(INVALID)";
    uVar3 = 0x17;
  }
  else {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"FeedbackSource(",0xf);
    param_1 = (basic_ostream *)internal::operator<<(pbVar1,*(undefined4 *)(param_2 + 8));
    pcVar2 = ")";
    uVar3 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,uVar3);
  return;
}


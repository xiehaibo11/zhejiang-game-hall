
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::IfValueParameters const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,IfValueParameters *param_2)

{
  IfValueParameters IVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(int *)param_2)
  ;
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2," (order ",8);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(int *)(param_2 + 4));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,", hint ",7);
  IVar1 = param_2[8];
  if (IVar1 == (IfValueParameters)0x2) {
    pcVar3 = "False";
    uVar4 = 5;
  }
  else if (IVar1 == (IfValueParameters)0x1) {
    pcVar3 = "True";
    uVar4 = 4;
  }
  else {
    if (IVar1 != (IfValueParameters)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar3 = "None";
    uVar4 = 4;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar3,uVar4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")",1);
  return param_1;
}



/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::SourcePosition const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,SourcePosition *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  
  if (((*(ulong *)param_2 & 1) == 0) && ((*(ulong *)param_2 & 0x7fff80000000) != 0)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"<inlined(",9);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                        ((uint)(*(ulong *)param_2 >> 0x1f) & 0xffff) - 1);
    pcVar2 = "):";
    uVar3 = 2;
  }
  else {
    pcVar2 = "<not inlined:";
    uVar3 = 0xd;
    pbVar1 = param_1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar2,uVar3);
  uVar4 = (uint)(*(ulong *)param_2 >> 1);
  if ((*(ulong *)param_2 & 1) == 0) {
    uVar4 = (uVar4 & 0x3fffffff) - 1;
    pbVar1 = param_1;
  }
  else {
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                        uVar4 & 0xfffff);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,", ",2);
    uVar4 = *(uint *)param_2 >> 0x15 & 0x3ff;
  }
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,uVar4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,">",1);
  return param_1;
}


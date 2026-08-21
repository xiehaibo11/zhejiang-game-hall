
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::SourcePositionInfo const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,SourcePositionInfo *param_2)

{
  uint uVar1;
  char *pcVar2;
  size_t sVar3;
  basic_ostream *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  char *local_18;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<",1);
  if (*(ulong **)(param_2 + 0x10) != (ulong *)0x0) {
    uVar6 = **(ulong **)(param_2 + 0x10);
    uVar1 = *(uint *)(uVar6 + 7);
    if (((uVar1 & 1) != 0) &&
       (uVar6 = uVar6 & 0xffffffff00000000, uVar5 = uVar6 | uVar1,
       *(ushort *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40)) {
      local_38 = uVar5;
      String::ToCString(&local_18,&local_38,1,1,0);
      pcVar2 = local_18;
      sVar3 = strlen(local_18);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,pcVar2,sVar3);
      pcVar2 = local_18;
      local_18 = (char *)0x0;
      if (pcVar2 != (char *)0x0) {
        operator_delete__(pcVar2);
      }
      goto LAB_014e67ec;
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"unknown",7);
LAB_014e67ec:
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,":",1)
  ;
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                      *(int *)(param_2 + 0x18) + 1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,":",1);
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                      *(int *)(param_2 + 0x1c) + 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,">",1);
  return param_1;
}


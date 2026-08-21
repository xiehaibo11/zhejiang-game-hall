
void FUN_012f8364(long param_1,basic_ostream *param_2)

{
  char *pcVar1;
  bool bVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  uVar4 = *(ulong *)(param_1 + 0x2c);
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,(int)uVar4);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,", ",2)
  ;
  bVar2 = (uVar4 & 0x100000000) != 0;
  pcVar1 = "not rest length";
  if (bVar2) {
    pcVar1 = "rest length";
  }
  uVar4 = 0xf;
  if (bVar2) {
    uVar4 = 0xb;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,pcVar1,uVar4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"]",1);
  return;
}


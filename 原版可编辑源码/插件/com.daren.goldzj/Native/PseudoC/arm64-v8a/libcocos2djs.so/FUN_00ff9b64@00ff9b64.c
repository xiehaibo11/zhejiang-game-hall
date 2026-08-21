
void FUN_00ff9b64(long param_1,ulong *param_2)

{
  basic_ostream *pbVar1;
  basic_ostream *pbVar2;
  long lVar3;
  
  pbVar1 = (basic_ostream *)(param_1 + 0x10);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"[",1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"",0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*param_2);
  lVar3 = 8;
  do {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,", ",2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
               *(ulong *)((long)param_2 + lVar3));
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x80);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}


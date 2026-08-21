
/* v8::internal::PropertyDetails::PrintAsSlowTo(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::PropertyDetails::PrintAsSlowTo(PropertyDetails *this,basic_ostream *param_1)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  bool bVar4;
  basic_ostream *pbVar5;
  uint uVar6;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1);
  uVar6 = *(uint *)this;
  if ((uVar6 >> 2 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"const ",6);
    uVar6 = *(uint *)this;
  }
  bVar4 = (uVar6 & 1) != 0;
  pcVar1 = "data";
  if (bVar4) {
    pcVar1 = "accessor";
  }
  uVar2 = 4;
  if (bVar4) {
    uVar2 = 8;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,uVar2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", dict_index: ",0xe);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
             *(uint *)this >> 8 & 0x7fffff);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", attrs: ",9);
  uVar6 = *(uint *)this;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"[",1);
  pcVar1 = "_";
  pcVar3 = "W";
  if ((uVar6 & 8) != 0) {
    pcVar3 = pcVar1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar3,1);
  pcVar3 = "E";
  if ((uVar6 & 0x10) != 0) {
    pcVar3 = pcVar1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar3,1);
  pcVar3 = "C";
  if ((uVar6 & 0x20) != 0) {
    pcVar3 = pcVar1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar3,1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"]",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,")",1);
  return;
}



/* v8::internal::PropertyDetails::PrintAsFastTo(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::PropertyDetails::PrintMode) */

void __thiscall
v8::internal::PropertyDetails::PrintAsFastTo
          (PropertyDetails *this,basic_ostream *param_1,uint param_3)

{
  char *pcVar1;
  bool bVar2;
  basic_ostream *pbVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1);
  uVar5 = *(uint *)this;
  if ((uVar5 >> 2 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"const ",6);
    uVar5 = *(uint *)this;
  }
  bVar2 = (uVar5 & 1) != 0;
  pcVar4 = "data";
  if (bVar2) {
    pcVar4 = "accessor";
  }
  uVar6 = 4;
  if (bVar2) {
    uVar6 = 8;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,uVar6);
  if (((byte)*this >> 1 & 1) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," field",6);
    if ((param_3 >> 1 & 1) != 0) {
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1," ",1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                 *(uint *)this >> 0x13 & 0x3ff);
    }
    if ((param_3 >> 2 & 1) == 0) goto LAB_011281a8;
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,":",1);
    uVar6 = (ulong)(*(uint *)this >> 6) & 7;
    if (4 < (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar4 = (&PTR_DAT_01cb4eb0)[uVar6];
    uVar6 = 1;
  }
  else {
    pcVar4 = " descriptor";
    uVar6 = 0xb;
    pbVar3 = param_1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar4,uVar6);
LAB_011281a8:
  if ((param_3 >> 3 & 1) != 0) {
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", p: ",5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
               *(uint *)this >> 9 & 0x3ff);
  }
  if ((param_3 & 1) != 0) {
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", attrs: ",9);
    uVar5 = *(uint *)this;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"[",1);
    pcVar4 = "_";
    pcVar1 = "W";
    if ((uVar5 & 8) != 0) {
      pcVar1 = pcVar4;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar1,1);
    pcVar1 = "E";
    if ((uVar5 & 0x10) != 0) {
      pcVar1 = pcVar4;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar1,1);
    pcVar1 = "C";
    if ((uVar5 & 0x20) != 0) {
      pcVar1 = pcVar4;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar1,1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"]",1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,")",1);
  return;
}


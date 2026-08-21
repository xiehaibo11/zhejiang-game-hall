
/* v8::internal::compiler::BitsetType::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned int) */

void v8::internal::compiler::BitsetType::Print(basic_ostream *param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  size_t sVar3;
  bool bVar4;
  long lVar5;
  
  pcVar2 = (char *)Name(param_2);
  if (pcVar2 == (char *)0x0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1);
    if (param_2 != 0) {
      bVar4 = true;
      lVar5 = 0x154;
      do {
        uVar1 = *(uint *)(&UNK_01a02ef0 + lVar5);
        if ((uVar1 & (param_2 ^ 0xffffffff)) == 0) {
          if (!bVar4) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1," | ",3);
          }
          pcVar2 = (char *)Name(uVar1);
          sVar3 = strlen(pcVar2);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,pcVar2,sVar3);
          bVar4 = false;
          param_2 = param_2 - uVar1;
        }
      } while ((lVar5 != 0) && (lVar5 = lVar5 + -4, param_2 != 0));
    }
    pcVar2 = ")";
    sVar3 = 1;
  }
  else {
    sVar3 = strlen(pcVar2);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,sVar3);
  return;
}


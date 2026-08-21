
void FUN_016d07dc(basic_ostream *param_1,int param_2,undefined8 *param_3)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"     ",5);
  if (0 < param_2) {
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,". ",2);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"#",1)
  ;
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(uint *)((long)param_3 + 0x14) & 0xffffff);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,":",1);
  pbVar1 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar1,(Operator *)*param_3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"(",1);
  plVar7 = param_3 + 4;
  uVar4 = *(byte *)((long)param_3 + 0x17) & 0xf;
  if (uVar4 == 0xf) {
    uVar4 = *(uint *)(*plVar7 + 8);
    plVar7 = (long *)(*plVar7 + 0x10);
  }
  if (uVar4 != 0) {
    plVar5 = (long *)*plVar7;
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"#",1);
    if (plVar5 == (long *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)((long)plVar5 + 0x14) & 0xffffff;
    }
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,uVar3);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,":",1);
    if (plVar5 == (long *)0x0) {
      pcVar6 = "null";
    }
    else {
      pcVar6 = *(char **)(*plVar5 + 8);
    }
    sVar2 = strlen(pcVar6);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar6,sVar2);
    if (uVar4 != 1) {
      lVar8 = (long)(int)uVar4 * 8 + -8;
      do {
        plVar7 = plVar7 + 1;
        plVar5 = (long *)*plVar7;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
        pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"#",1);
        if (plVar5 == (long *)0x0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = *(uint *)((long)plVar5 + 0x14) & 0xffffff;
        }
        pbVar1 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,uVar4);
        pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar1,":",1);
        pcVar6 = "null";
        if (plVar5 != (long *)0x0) {
          pcVar6 = *(char **)(*plVar5 + 8);
        }
        sVar2 = strlen(pcVar6);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar1,pcVar6,sVar2);
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,")",1);
  if (param_3[1] == 0) {
    return;
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"  [Type: ",9);
  pbVar1 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar1,param_3[1]);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}


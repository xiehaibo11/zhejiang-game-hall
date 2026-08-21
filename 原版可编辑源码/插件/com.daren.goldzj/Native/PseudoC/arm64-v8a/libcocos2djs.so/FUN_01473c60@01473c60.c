
void FUN_01473c60(basic_ostream *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  basic_ostream *pbVar3;
  char *pcVar4;
  char local_18 [4];
  char local_14 [4];
  
  switch(param_2) {
  case 0:
    pcVar4 = "\'\\0\'";
    break;
  default:
    iVar2 = isprint(param_2);
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8);
      *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = 8;
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\\x",2);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,param_2);
      *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = uVar1;
    }
    else {
      local_18[0] = '\'';
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,local_18,1);
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,param_2);
      local_14[0] = '\'';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,local_14,1);
    }
    return;
  case 7:
    pcVar4 = "\'\\a\'";
    break;
  case 8:
    pcVar4 = "\'\\b\'";
    break;
  case 9:
    pcVar4 = "\'\\t\'";
    break;
  case 10:
    pcVar4 = "\'\\n\'";
    break;
  case 0xb:
    pcVar4 = "\'\\v\'";
    break;
  case 0xc:
    pcVar4 = "\'\\f\'";
    break;
  case 0xd:
    pcVar4 = "\'\\r\'";
    break;
  case 0x27:
    pcVar4 = "\'\\\'\'";
    break;
  case 0x5c:
    pcVar4 = "\'\\\\\'";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,4);
  return;
}


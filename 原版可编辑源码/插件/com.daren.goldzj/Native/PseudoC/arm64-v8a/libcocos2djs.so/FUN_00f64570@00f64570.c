
basic_ostream<char,std::__ndk1::char_traits<char>> *
FUN_00f64570(basic_ostream<char,std::__ndk1::char_traits<char>> *param_1,undefined4 *param_2)

{
  ulong uVar1;
  char *__s;
  
  switch(*param_2) {
  case 0:
    __s = "false";
    if (**(char **)(param_2 + 4) != '\0') {
      __s = "true";
    }
    uVar1 = 4;
    if (**(char **)(param_2 + 4) == '\0') {
      uVar1 = 5;
    }
    goto LAB_00f64688;
  case 1:
    if (**(char **)(param_2 + 4) == '\0') {
      __s = "unset";
    }
    else {
      __s = "false";
      if ((*(char **)(param_2 + 4))[1] != '\0') {
        __s = "true";
      }
    }
    goto LAB_00f64674;
  case 2:
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              (param_1,**(int **)(param_2 + 4));
    break;
  case 3:
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              (param_1,**(uint **)(param_2 + 4));
    break;
  case 4:
  case 6:
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              (param_1,**(ulong **)(param_2 + 4));
    break;
  case 5:
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              (param_1,**(double **)(param_2 + 4));
    break;
  case 7:
    __s = "nullptr";
    if ((char *)**(long **)(param_2 + 4) != (char *)0x0) {
      __s = (char *)**(long **)(param_2 + 4);
    }
LAB_00f64674:
    uVar1 = strlen(__s);
LAB_00f64688:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)param_1,__s,uVar1);
  }
  return param_1;
}


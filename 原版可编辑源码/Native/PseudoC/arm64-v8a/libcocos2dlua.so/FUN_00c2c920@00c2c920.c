
char * FUN_00c2c920(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_2 + 1;
  if (*param_2 == '%') {
    pcVar3 = param_2 + 2;
    if (param_2[1] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb3a0(*param_1,0x6bc);
    }
  }
  else if (*param_2 == '[') {
    cVar1 = param_2[1];
    if (cVar1 == '^') {
      cVar1 = param_2[2];
      pcVar3 = param_2 + 2;
    }
    do {
      if (cVar1 == '\0') {
LAB_00c2c988:
                    /* WARNING: Subroutine does not return */
        FUN_00bfb3a0(*param_1,0x6de);
      }
      pcVar2 = pcVar3 + 1;
      if (cVar1 == '%') {
        if (pcVar3[1] == '\0') goto LAB_00c2c988;
        cVar1 = pcVar3[2];
        pcVar2 = pcVar3 + 2;
      }
      else {
        cVar1 = pcVar3[1];
      }
      pcVar3 = pcVar2;
    } while (cVar1 != ']');
    pcVar3 = pcVar2 + 1;
  }
  return pcVar3;
}


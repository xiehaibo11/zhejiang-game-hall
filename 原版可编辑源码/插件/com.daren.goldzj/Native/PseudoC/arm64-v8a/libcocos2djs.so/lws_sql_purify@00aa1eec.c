
void lws_sql_purify(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_2;
  if (cVar3 != '\0') {
    pcVar1 = param_1;
    pcVar2 = param_2 + 1;
    do {
      while( true ) {
        param_1 = pcVar1;
        if (param_3 < 3) goto LAB_00aa1f3c;
        if (cVar3 != '\'') break;
        param_1 = pcVar1 + 2;
        pcVar1[0] = '\'';
        pcVar1[1] = '\'';
        param_3 = param_3 + -2;
        cVar3 = *pcVar2;
        pcVar1 = param_1;
        pcVar2 = pcVar2 + 1;
        if (cVar3 == '\0') goto LAB_00aa1f3c;
      }
      param_1 = pcVar1 + 1;
      *pcVar1 = cVar3;
      param_3 = param_3 + -1;
      cVar3 = *pcVar2;
      pcVar1 = param_1;
      pcVar2 = pcVar2 + 1;
    } while (cVar3 != '\0');
  }
LAB_00aa1f3c:
  *param_1 = '\0';
  return;
}


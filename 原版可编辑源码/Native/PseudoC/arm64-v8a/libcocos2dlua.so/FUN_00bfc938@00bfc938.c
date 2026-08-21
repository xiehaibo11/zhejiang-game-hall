
char * FUN_00bfc938(long param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 0x58);
  if (pcVar2 == (char *)0x0) {
    return "";
  }
  for (; pcVar3 = pcVar2, param_2 != 0; param_2 = param_2 + -1) {
    do {
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  return pcVar2;
}


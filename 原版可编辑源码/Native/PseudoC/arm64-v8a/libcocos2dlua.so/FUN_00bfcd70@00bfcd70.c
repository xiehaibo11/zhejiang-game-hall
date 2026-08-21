
void FUN_00bfcd70(char *param_1,long param_2,int param_3)

{
  byte *__src;
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  ulong __n;
  char *__dest;
  
  if (*(char *)(param_2 + 0x18) == '=') {
    strncpy(param_1,(char *)(param_2 + 0x19),0x200);
    param_1[0x1ff] = '\0';
    return;
  }
  if (*(char *)(param_2 + 0x18) == '@') {
    pcVar4 = (char *)(param_2 + 0x19);
    uVar2 = *(int *)(param_2 + 0x10) - 1;
    __dest = param_1;
    if (0x1ff < uVar2) {
      pcVar4 = pcVar4 + ((ulong)uVar2 - 0x1fc);
      *param_1 = '.';
      param_1[1] = '.';
      __dest = param_1 + 3;
      param_1[2] = '.';
    }
    strcpy(__dest,pcVar4);
    return;
  }
  __src = (byte *)(param_2 + 0x18);
  __n = 0;
  pbVar3 = __src;
  do {
    if (*pbVar3 < 0x20) goto joined_r0x00bfcdcc;
    __n = __n + 1;
    pbVar3 = pbVar3 + 1;
  } while (__n != 500);
  pbVar3 = (byte *)(param_2 + 0x20c);
joined_r0x00bfcdcc:
  if (param_3 == -1) {
    builtin_strncpy(param_1,"[builtin:",10);
    bVar1 = *pbVar3;
  }
  else {
    builtin_strncpy(param_1,"[string \"",10);
    bVar1 = *pbVar3;
  }
  if (bVar1 == 0) {
    strcpy(param_1 + 9,(char *)__src);
    pcVar4 = param_1 + 9 + __n;
  }
  else {
    if (0x1f1 < __n) {
      __n = 0x1f1;
    }
    strncpy(param_1 + 9,(char *)__src,__n);
    pcVar4 = param_1 + 9 + __n + 3;
    builtin_strncpy(param_1 + __n + 9,"...",4);
  }
  if (param_3 == -1) {
    strcpy(pcVar4,"]");
    return;
  }
  strcpy(pcVar4,"\"]");
  return;
}


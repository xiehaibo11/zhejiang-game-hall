
char * FUN_00e20f2c(long param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__dest;
  char *pcVar3;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  sVar1 = sVar1 + sVar2 + 1;
  if ((long)sVar1 < 1) {
    __dest = (char *)0x0;
    if (sVar1 != 0) {
      return (char *)0x0;
    }
    pcVar3 = strrchr(param_2,0x2f);
  }
  else {
    __dest = (char *)(**(code **)(param_1 + 8))(param_1,sVar1);
    if (__dest == (char *)0x0) {
      return (char *)0x0;
    }
    memset(__dest,0,sVar1);
    pcVar3 = strrchr(param_2,0x2f);
  }
  if (pcVar3 == (char *)0x0) {
    *__dest = '\0';
  }
  else {
    strncpy(__dest,param_2,(size_t)(pcVar3 + (1 - (long)param_2)));
    __dest[(long)(pcVar3 + (1 - (long)param_2))] = '\0';
    param_2 = pcVar3 + 1;
  }
  pcVar3 = strcat(__dest,param_3);
  strcat(pcVar3,param_2);
  return __dest;
}


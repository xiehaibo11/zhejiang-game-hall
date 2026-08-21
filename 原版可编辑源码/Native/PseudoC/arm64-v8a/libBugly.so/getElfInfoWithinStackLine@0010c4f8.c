
undefined8 getElfInfoWithinStackLine(char *param_1)

{
  char *__haystack;
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    __haystack = strdup(param_1);
    pcVar1 = strstr(__haystack,".so");
    if (pcVar1 == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      log2Console(4,"CrashReport-Native","Parsing stack line for elfInfo: %s",param_1);
      pcVar1 = strchr(__haystack,0x2f);
      pcVar2 = strstr(pcVar1," (");
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
      }
      uVar3 = getElfInfo(pcVar1);
    }
    free(__haystack);
  }
  return uVar3;
}



char * getBuglyClassPathPrefix(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *__haystack;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  
  pcVar3 = malloc(0x14);
  builtin_strncpy(pcVar3,"com/tencent/bugly/",0x13);
  __haystack = (char *)javaTheadDump(param_1,0x1400);
  if (__haystack == (char *)0x0) {
    log2Console(6,"eup","get stack error, return default prefix");
  }
  else {
    pcVar4 = strstr(__haystack,"com.tencent.bugly.");
    if (pcVar4 == (char *)0x0) {
      log2Console(6,"eup","current stack have not bugly line,return default prefix");
    }
    else {
      pcVar5 = malloc(0x80);
      uVar6 = 0;
      iVar2 = 0;
      do {
        cVar1 = pcVar4[uVar6];
        if (cVar1 == '.') {
          pcVar5[uVar6] = '/';
          if (2 < iVar2) break;
          iVar2 = iVar2 + 1;
        }
        else {
          if (cVar1 == '\0') break;
          pcVar5[uVar6] = cVar1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x7f);
      if (pcVar4[uVar6 & 0xffffffff] == '\0') {
        pcVar5 = "bugly line is broken %s ,return default";
      }
      else {
        if ((int)uVar6 != 0x7f) {
          free(__haystack);
          pcVar5[(uVar6 & 0xffffffff) + 1] = '\0';
          iVar2 = strcmp(pcVar5,"com/tencent/bugly/crashreport/");
          if (iVar2 == 0) {
            return pcVar3;
          }
          return pcVar5;
        }
        pcVar5 = "bugly line over 127 ? %s,return default";
      }
      log2Console(6,"eup",pcVar5,pcVar4);
    }
    free(__haystack);
  }
  return pcVar3;
}


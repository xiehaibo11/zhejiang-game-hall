
char * getBuglyClassPathPrefix(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *__haystack;
  char *pcVar4;
  char *__s1;
  char *pcVar5;
  long lVar6;
  
  pcVar3 = malloc(0x14);
  builtin_strncpy(pcVar3,"com/tencent/bugly/",0x13);
  __haystack = (char *)javaTheadDump(param_1,0x1400);
  if (__haystack == (char *)0x0) {
    log2Console(6,"CrashReport-Native","get stack error, return default prefix");
  }
  else {
    pcVar4 = strstr(__haystack,"com.tencent.bugly.");
    if (pcVar4 != (char *)0x0) {
      lVar6 = 0;
      __s1 = malloc(0x80);
      iVar2 = 0;
      pcVar5 = pcVar4;
      do {
        cVar1 = *pcVar5;
        if (cVar1 == '\0') goto LAB_001100c8;
        if (cVar1 == '.') {
          iVar2 = iVar2 + 1;
          __s1[lVar6] = '/';
          if (3 < iVar2) {
            if (*pcVar5 != '\0') {
              free(__haystack);
              __s1[lVar6 + 1] = '\0';
              iVar2 = strcmp(__s1,"com/tencent/bugly/crashreport/");
              if (iVar2 == 0) {
                return pcVar3;
              }
              return __s1;
            }
            goto LAB_001100c8;
          }
        }
        else {
          __s1[lVar6] = cVar1;
        }
        lVar6 = lVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (lVar6 != 0x7f);
      if (pcVar4[0x7f] == '\0') {
LAB_001100c8:
        pcVar5 = "bugly line is broken %s ,return default";
      }
      else {
        pcVar5 = "bugly line over 127 ? %s,return default";
      }
      log2Console(6,"CrashReport-Native",pcVar5,pcVar4);
      free(__haystack);
      return pcVar3;
    }
    log2Console(6,"CrashReport-Native","current stack have not bugly line,return default prefix");
    free(__haystack);
  }
  return pcVar3;
}


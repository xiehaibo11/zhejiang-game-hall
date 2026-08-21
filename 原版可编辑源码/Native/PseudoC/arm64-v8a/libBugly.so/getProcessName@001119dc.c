
char * getProcessName(uint param_1)

{
  char *__s;
  char *__s_00;
  FILE *__stream;
  size_t sVar1;
  long lVar2;
  
  if ((int)param_1 < 2) {
    __s_00 = (char *)0x0;
  }
  else {
    __s = calloc(1,0x1000);
    __s_00 = calloc(1,0x200);
    snprintf(__s,0x1000,"/proc/%d/cmdline",(ulong)param_1);
    __stream = fopen(__s,"r");
    if (__stream != (FILE *)0x0) {
      fgets(__s_00,0x200,__stream);
      fclose(__stream);
    }
    if (__s_00 != (char *)0x0) {
      sVar1 = strlen(__s_00);
      lVar2 = (long)(int)sVar1 + -1;
      if (__s_00[lVar2] == '\n') {
        __s_00[lVar2] = '\0';
      }
    }
    free(__s);
  }
  return __s_00;
}


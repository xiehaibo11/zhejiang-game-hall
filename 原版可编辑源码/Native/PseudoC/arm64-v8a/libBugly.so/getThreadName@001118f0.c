
char * getThreadName(uint param_1)

{
  char *__s;
  char *__s_00;
  FILE *__stream;
  size_t sVar1;
  long lVar2;
  
  if (1 < (int)param_1) {
    __s = calloc(1,0x1000);
    __s_00 = calloc(1,0x80);
    snprintf(__s,0x1000,"/proc/%d/comm",(ulong)param_1);
    __stream = fopen(__s,"r");
    if (__stream != (FILE *)0x0) {
      fgets(__s_00,0x80,__stream);
      fclose(__stream);
    }
    free(__s);
    if (__s_00 != (char *)0x0) {
      sVar1 = strlen(__s_00);
      lVar2 = (long)(int)sVar1 + -1;
      if (__s_00[lVar2] != '\n') {
        return __s_00;
      }
      __s_00[lVar2] = '\0';
      return __s_00;
    }
  }
  return (char *)0x0;
}



char * getThreadName(uint param_1)

{
  char *__s;
  FILE *__stream;
  size_t sVar1;
  long lVar2;
  char *__s_00;
  
  if ((int)param_1 < 2) {
    __s_00 = (char *)0x0;
  }
  else {
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
      lVar2 = (long)((sVar1 << 0x20) + -0x100000000) >> 0x20;
      if (__s_00[lVar2] == '\n') {
        __s_00[lVar2] = '\0';
      }
    }
  }
  return __s_00;
}


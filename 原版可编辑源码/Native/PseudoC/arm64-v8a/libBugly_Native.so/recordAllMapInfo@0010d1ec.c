
undefined8 recordAllMapInfo(uint param_1)

{
  char *pcVar1;
  char *__s;
  FILE *__stream;
  char *pcVar2;
  int *piVar3;
  
  if (1 < (int)param_1) {
    pcVar1 = calloc(1,0x100);
    __s = calloc(1,0x400);
    sprintf(pcVar1,"/proc/%d/maps",(ulong)param_1);
    log2Console(4,"eup","Read map file: %s",pcVar1);
    __stream = fopen(pcVar1,"r");
    if (__stream == (FILE *)0x0) {
      piVar3 = (int *)__errno();
      pcVar1 = strerror(*piVar3);
      log2Console(4,"eup","Failed to open maps file for: %s",pcVar1);
    }
    else {
      pcVar2 = fgets(__s,0x400,__stream);
      while (pcVar2 != (char *)0x0) {
        pcVar2 = strchr(__s,0x28);
        if ((pcVar2 == (char *)0x0) &&
           (((pcVar2 = strstr(__s,"r-x"), pcVar2 != (char *)0x0 ||
             (pcVar2 = strstr(__s,"rwx"), pcVar2 != (char *)0x0)) ||
            (pcVar2 = strstr(__s,"--x"), pcVar2 != (char *)0x0)))) {
          log2File(DAT_0013fe10,__s);
        }
        pcVar2 = fgets(__s,0x400,__stream);
      }
      free(__s);
      free(pcVar1);
      fclose(__stream);
    }
  }
  return 0;
}


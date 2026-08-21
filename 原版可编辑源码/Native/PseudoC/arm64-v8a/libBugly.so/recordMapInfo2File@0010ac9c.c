
undefined8 recordMapInfo2File(long *param_1,char *param_2,long param_3)

{
  char *__haystack;
  char cVar1;
  byte bVar2;
  char *pcVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (param_3 != 0)) {
    do {
      cVar1 = *(char *)((long)param_1 + 0x43);
      __haystack = (char *)((long)param_1 + 0x43);
      bVar2 = *(byte *)((long)param_1 + 0x42);
      if ((cVar1 != '\0') &&
         (((param_2 == (char *)0x0 || (pcVar3 = strstr(__haystack,param_2), pcVar3 != (char *)0x0))
          && (pcVar3 = strchr(__haystack,0x28), (pcVar3 != (char *)0x0 || cVar1 == '[') < bVar2))))
      {
        lVar4 = getElfInfo(__haystack);
        if (lVar4 == 0) {
          log2File(param_3,"%016lx-%016lx  %s [unknown:unknown]\n",param_1[1],param_1[2],__haystack,
                   0x88,0xa8);
        }
        else {
          log2File(param_3,"%016lx-%016lx  %s [%s:%s]\n",param_1[1],param_1[2],__haystack,
                   lVar4 + 0x88,lVar4 + 0xa8);
        }
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
    return 1;
  }
  return 0;
}



undefined8 recordMapInfo2File(long *param_1,char *param_2,long param_3)

{
  char *__s;
  bool bVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  
  uVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != 0)) {
    do {
      while( true ) {
        __s = (char *)((long)param_1 + 0x43);
        sVar3 = strlen(__s);
        if (sVar3 != 0) break;
LAB_0010d144:
        param_1 = (long *)*param_1;
joined_r0x0010d1ac:
        if (param_1 == (long *)0x0) goto LAB_0010d1b0;
      }
      bVar1 = *(char *)((long)param_1 + 0x42) != '\0';
      if (param_2 != (char *)0x0) {
        pcVar4 = strstr(__s,param_2);
        bVar1 = bVar1 && pcVar4 != (char *)0x0;
      }
      pcVar4 = strchr(__s,0x28);
      if (((pcVar4 != (char *)0x0) || (*__s == '[')) || (!bVar1)) goto LAB_0010d144;
      lVar5 = getElfInfo(__s);
      if (lVar5 == 0) {
        log2File(param_3,"%016lx-%016lx  %s [unknown:unknown]\n",param_1[1],param_1[2],__s);
        param_1 = (long *)*param_1;
        goto joined_r0x0010d1ac;
      }
      log2File(param_3,"%016lx-%016lx  %s [%s:%s]\n",param_1[1],param_1[2],__s,lVar5 + 0x88,
               lVar5 + 0xa8);
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
LAB_0010d1b0:
    uVar2 = 1;
  }
  return uVar2;
}



long FUN_00ab00d0(long param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 00ab00f0 to 00bb027f has its CatchHandler @ 00ab0898 */
  sVar3 = strlen(param_3);
  pcVar4 = strchr(param_3,0x3a);
  lVar6 = *(long *)(param_1 + 0x830);
  iVar1 = (int)sVar3;
  if (pcVar4 != (char *)0x0) {
    iVar1 = (int)pcVar4 - (int)param_3;
  }
  if (lVar6 != 0) {
    lVar5 = lVar6;
    do {
      if ((*(int *)(lVar5 + 0x1d0) == param_2) &&
         (iVar2 = strncmp(*(char **)(lVar5 + 0x170),param_3,(long)iVar1), iVar2 == 0)) {
        return lVar5;
      }
      lVar5 = *(long *)(lVar5 + 0x158);
    } while (lVar5 != 0);
    if (lVar6 != 0) {
      lVar5 = lVar6;
      do {
        pcVar4 = *(char **)(lVar5 + 0x170);
        sVar3 = strlen(pcVar4);
        if ((((*(int *)(lVar5 + 0x1d0) == param_2) && (iVar2 = (int)sVar3, iVar2 <= iVar1 + -2)) &&
            (param_3[(long)(((ulong)(uint)(iVar1 - iVar2) << 0x20) + -0x100000000) >> 0x20] == '.'))
           && (iVar2 = strncmp(pcVar4,param_3 + ((long)iVar1 - (long)iVar2),(long)iVar2), iVar2 == 0
              )) {
          return lVar5;
        }
        lVar5 = *(long *)(lVar5 + 0x158);
      } while (lVar5 != 0);
      for (; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x158)) {
        if (*(int *)(lVar6 + 0x1d0) == param_2) {
          return lVar6;
        }
      }
    }
  }
  return 0;
}


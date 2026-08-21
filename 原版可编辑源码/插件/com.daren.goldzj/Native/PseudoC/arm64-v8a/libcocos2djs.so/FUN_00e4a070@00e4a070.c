
long FUN_00e4a070(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *__s2;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x280);
  if (0 < iVar2) {
    lVar4 = *(long *)(param_1 + 0x288);
    cVar1 = *param_2;
    lVar5 = 0;
    do {
      __s2 = *(char **)(lVar4 + lVar5 * 8);
      if ((cVar1 == *__s2) && (iVar3 = strcmp(param_2,__s2), iVar3 == 0)) {
        lVar5 = strtol(*(char **)(*(long *)(param_1 + 0x290) + lVar5 * 8),(char **)0x0,10);
        return lVar5;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  return 0;
}



long FUN_0108f660(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *__s2;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x278);
                    /* try { // try from 0108f67c to 0118f68f has its CatchHandler @ 0108f8b0 */
  if (0 < iVar2) {
    lVar4 = *(long *)(param_1 + 0x280);
    cVar1 = *param_2;
                    /* try { // try from 0108f690 to 0118f69b has its CatchHandler @ 0108f8a0 */
    lVar5 = 0;
    do {
      __s2 = *(char **)(lVar4 + lVar5 * 8);
                    /* try { // try from 0108f69c to 0118f6ff has its CatchHandler @ 0108f60c */
      if ((cVar1 == *__s2) && (iVar3 = strcmp(param_2,__s2), iVar3 == 0)) {
        lVar5 = atol(*(char **)(*(long *)(param_1 + 0x288) + lVar5 * 8));
        return lVar5;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  return 0;
}


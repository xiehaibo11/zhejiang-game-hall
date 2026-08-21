
long FUN_01052854(long param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  sVar3 = strlen(param_3);
                    /* try { // try from 0105288c to 0115289b has its CatchHandler @ 010534d0 */
  pcVar4 = strchr(param_3,0x3a);
  lVar6 = *(long *)(param_1 + 0x830);
  iVar1 = (int)sVar3;
  if (pcVar4 != (char *)0x0) {
    iVar1 = (int)pcVar4 - (int)param_3;
  }
  if (lVar6 != 0) {
                    /* try { // try from 010528a8 to 011528bb has its CatchHandler @ 010534cc */
    lVar5 = lVar6;
    do {
                    /* try { // try from 010528c0 to 011528e7 has its CatchHandler @ 01053538 */
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
                    /* try { // try from 010528f8 to 0115290b has its CatchHandler @ 010534c4 */
                    /* try { // try from 01052910 to 01152937 has its CatchHandler @ 01053534 */
        if ((((*(int *)(lVar5 + 0x1d0) == param_2) && (iVar2 = (int)sVar3, iVar2 <= iVar1 + -2)) &&
            (param_3[(long)(((ulong)(uint)(iVar1 - iVar2) << 0x20) + -0x100000000) >> 0x20] == '.'))
           && (iVar2 = strncmp(pcVar4,param_3 + ((long)iVar1 - (long)iVar2),(long)iVar2), iVar2 == 0
              )) {
          return lVar5;
        }
        lVar5 = *(long *)(lVar5 + 0x158);
      } while (lVar5 != 0);
      for (; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x158)) {
                    /* try { // try from 0105294c to 0115295b has its CatchHandler @ 010534c0 */
        if (*(int *)(lVar6 + 0x1d0) == param_2) {
          return lVar6;
        }
      }
    }
  }
  return 0;
}


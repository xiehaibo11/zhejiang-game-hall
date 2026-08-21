
void FUN_010edf0c(long param_1,long param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  
  if ((0 < (int)param_4) && (iVar5 = *(int *)(param_1 + 0x88), iVar5 != 0)) {
    uVar7 = 0;
    plVar8 = *(long **)(*(long *)(param_1 + 0x290) + 0x30);
    lVar3 = *plVar8;
    lVar4 = plVar8[1];
                    /* catch() { ... } // from try @ 010edeac with catch @ 010edf30 */
    lVar9 = plVar8[2];
    do {
      pbVar10 = *(byte **)(param_2 + uVar7 * 8);
      pcVar11 = *(char **)(param_3 + uVar7 * 8);
      iVar12 = iVar5;
      do {
        bVar6 = *pbVar10;
        pbVar1 = pbVar10 + 1;
        pbVar2 = pbVar10 + 2;
        iVar12 = iVar12 + -1;
        pbVar10 = pbVar10 + 3;
        *pcVar11 = *(char *)(lVar4 + (ulong)*pbVar1) + *(char *)(lVar3 + (ulong)bVar6) +
                   *(char *)(lVar9 + (ulong)*pbVar2);
        pcVar11 = pcVar11 + 1;
      } while (iVar12 != 0);
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_4);
  }
  return;
}


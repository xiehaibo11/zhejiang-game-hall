
void FUN_010edf84(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  
  if ((0 < (int)param_4) && (iVar1 = *(int *)(param_1 + 0x88), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 010edfe0 with catch @ 010edfa8 */
    uVar2 = *(uint *)(param_1 + 0x90);
    if ((int)uVar2 < 1) {
      uVar9 = (ulong)param_4;
      do {
        memset((void *)*param_3,0,(ulong)(iVar1 - 1) + 1);
        uVar9 = uVar9 - 1;
        param_3 = param_3 + 1;
      } while (uVar9 != 0);
    }
    else {
      uVar9 = 0;
      lVar10 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
      lVar11 = (ulong)uVar2 - (ulong)(uVar2 & 1);
      do {
                    /* try { // try from 010edfd8 to 011edfdf has its CatchHandler @ 010ee048 */
        pbVar12 = *(byte **)(param_2 + uVar9 * 8);
                    /* try { // try from 010edfe0 to 011ee063 has its CatchHandler @ 010edfa8 */
        pcVar13 = (char *)param_3[uVar9];
        iVar14 = iVar1;
        do {
          if ((uVar2 < 2) || (lVar11 == 0)) {
            lVar7 = 0;
            cVar5 = '\0';
                    /* catch() { ... } // from try @ 010edfd8 with catch @ 010ee048 */
            pbVar3 = pbVar12;
LAB_010ee04c:
            lVar8 = (ulong)uVar2 - lVar7;
            plVar6 = (long *)(lVar10 + lVar7 * 8);
            do {
              lVar8 = lVar8 + -1;
                    /* try { // try from 010ee064 to 011ee18f has its CatchHandler @ 010ee064
                       catch() { ... } // from try @ 010ee064 with catch @ 010ee064
                       catch() { ... } // from try @ 010ee19c with catch @ 010ee064 */
              cVar5 = cVar5 + *(char *)(*plVar6 + (ulong)*pbVar3);
              pbVar3 = pbVar3 + 1;
              plVar6 = plVar6 + 1;
            } while (lVar8 != 0);
          }
          else {
            lVar7 = 0;
            cVar4 = '\0';
            cVar5 = '\0';
            do {
              pbVar3 = pbVar12 + lVar7;
              plVar6 = (long *)(lVar10 + lVar7 * 8);
              lVar7 = lVar7 + 2;
              cVar4 = cVar4 + *(char *)(*plVar6 + (ulong)*pbVar3);
              cVar5 = cVar5 + *(char *)(plVar6[1] + (ulong)pbVar3[1]);
            } while (lVar11 != lVar7);
            cVar5 = cVar5 + cVar4;
            pbVar3 = pbVar12 + lVar11;
            lVar7 = lVar11;
            if ((uVar2 & 1) != 0) goto LAB_010ee04c;
          }
          pbVar12 = pbVar12 + (ulong)(uVar2 - 1) + 1;
          iVar14 = iVar14 + -1;
          *pcVar13 = cVar5;
          pcVar13 = pcVar13 + 1;
        } while (iVar14 != 0);
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_4);
    }
  }
  return;
}


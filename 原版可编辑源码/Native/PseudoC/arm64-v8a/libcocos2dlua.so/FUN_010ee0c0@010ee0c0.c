
void FUN_010ee0c0(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  
  if (0 < (int)param_4) {
    lVar12 = *(long *)(param_1 + 0x290);
    iVar5 = *(int *)(param_1 + 0x88);
    uVar17 = *(uint *)(lVar12 + 0x4c);
    if (iVar5 == 0) {
      do {
                    /* try { // try from 010ee19c to 011ee30b has its CatchHandler @ 010ee064 */
        param_4 = param_4 - 1;
        uVar17 = uVar17 + 1 & 0xf;
      } while (param_4 != 0);
      *(uint *)(lVar12 + 0x4c) = uVar17;
    }
    else {
      plVar14 = *(long **)(lVar12 + 0x30);
      uVar13 = 0;
      lVar1 = *plVar14;
      lVar3 = plVar14[1];
      lVar15 = plVar14[2];
      do {
        lVar2 = *(long *)(lVar12 + 0x50);
        lVar4 = *(long *)(lVar12 + 0x58);
        pbVar6 = *(byte **)(param_2 + uVar13 * 8);
        lVar8 = *(long *)(lVar12 + 0x60);
        uVar16 = 0;
        pcVar7 = *(char **)(param_3 + uVar13 * 8);
        iVar9 = iVar5;
        do {
          lVar11 = (long)(int)uVar17 * 0x40;
          lVar10 = (ulong)uVar16 * 4;
          iVar9 = iVar9 + -1;
          uVar16 = uVar16 + 1 & 0xf;
          *pcVar7 = *(char *)(lVar3 + (long)*(int *)(lVar4 + lVar11 + lVar10) + (ulong)pbVar6[1]) +
                    *(char *)(lVar1 + (long)*(int *)(lVar2 + lVar11 + lVar10) + (ulong)*pbVar6) +
                    *(char *)(lVar15 + (long)*(int *)(lVar8 + lVar11 + lVar10) + (ulong)pbVar6[2]);
          pbVar6 = pbVar6 + 3;
          pcVar7 = pcVar7 + 1;
        } while (iVar9 != 0);
        uVar13 = uVar13 + 1;
        uVar17 = uVar17 + 1 & 0xf;
        *(uint *)(lVar12 + 0x4c) = uVar17;
                    /* try { // try from 010ee190 to 011ee19b has its CatchHandler @ 010ee2b4 */
      } while (uVar13 != param_4);
    }
  }
  return;
}


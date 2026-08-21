
void jpeg_fdct_islow(int *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar10 = 0;
  do {
    plVar1 = (long *)(param_2 + lVar10);
    piVar3 = param_1 + lVar10;
    lVar10 = lVar10 + 8;
    pbVar4 = (byte *)(*plVar1 + (param_3 & 0xffffffff));
    lVar14 = (ulong)pbVar4[7] + (ulong)*pbVar4;
    lVar16 = (ulong)pbVar4[6] + (ulong)pbVar4[1];
    lVar15 = (ulong)pbVar4[5] + (ulong)pbVar4[2];
    lVar17 = (ulong)pbVar4[4] + (ulong)pbVar4[3];
    lVar11 = (ulong)*pbVar4 - (ulong)pbVar4[7];
    lVar8 = (ulong)pbVar4[3] - (ulong)pbVar4[4];
    lVar12 = (ulong)pbVar4[1] - (ulong)pbVar4[6];
    lVar13 = (ulong)pbVar4[2] - (ulong)pbVar4[5];
    iVar9 = (int)lVar15 + (int)lVar16;
    lVar16 = lVar16 - lVar15;
    iVar2 = (int)lVar17 + (int)lVar14;
    lVar14 = lVar14 - lVar17;
    lVar18 = (lVar8 + lVar11) * -0x1ccd;
    lVar20 = (lVar13 + lVar12) * -0x5203;
    lVar15 = (lVar14 + lVar16) * 0x1151 + 0x400;
    lVar19 = (lVar8 + lVar12 + lVar13 + lVar11) * 0x25a1 + 0x400;
    lVar17 = lVar19 + (lVar13 + lVar11) * -0xc7c;
    lVar19 = lVar19 + (lVar8 + lVar12) * -0x3ec5;
    *piVar3 = (iVar2 + iVar9) * 4 + -0x1000;
    piVar3[1] = (int)((ulong)(lVar18 + lVar11 * 0x300b + lVar17) >> 0xb);
    piVar3[2] = (int)((ulong)(lVar15 + lVar14 * 0x187e) >> 0xb);
    piVar3[3] = (int)((ulong)(lVar20 + lVar12 * 0x6254 + lVar19) >> 0xb);
    piVar3[4] = (iVar2 - iVar9) * 4;
    piVar3[5] = (int)((ulong)(lVar20 + lVar13 * 0x41b3 + lVar17) >> 0xb);
    piVar3[6] = (int)((ulong)(lVar15 + lVar16 * -0x3b21) >> 0xb);
    piVar3[7] = (int)((ulong)(lVar18 + lVar8 * 0x98e + lVar19) >> 0xb);
  } while (lVar10 != 0x40);
  iVar9 = 8;
  do {
                    /* try { // try from 0110135c to 0120146b has its CatchHandler @ 0110135c
                       catch() { ... } // from try @ 0110135c with catch @ 0110135c
                       catch() { ... } // from try @ 0110147c with catch @ 0110135c */
    iVar2 = *param_1 - param_1[0x38];
    iVar5 = param_1[8] - param_1[0x30];
    iVar6 = param_1[0x10] - param_1[0x28];
    iVar7 = param_1[0x18] - param_1[0x20];
    lVar10 = (long)(param_1[0x38] + *param_1);
    lVar8 = (long)(param_1[0x30] + param_1[8]);
    lVar16 = (long)(param_1[0x28] + param_1[0x10]);
    lVar11 = (long)(param_1[0x20] + param_1[0x18]);
    lVar17 = lVar10 - lVar11;
    lVar14 = lVar16 + lVar8;
    lVar8 = lVar8 - lVar16;
    lVar16 = (long)iVar6 + (long)iVar2;
    lVar15 = (long)iVar7 + (long)iVar5;
    lVar12 = ((long)iVar7 + (long)iVar2) * -0x1ccd;
    lVar10 = lVar10 + lVar11 + 2;
    lVar13 = ((long)iVar6 + (long)iVar5) * -0x5203;
    lVar11 = (lVar15 + lVar16) * 0x25a1 + 0x4000;
    lVar19 = (lVar17 + lVar8) * 0x1151 + 0x4000;
    lVar16 = lVar11 + lVar16 * -0xc7c;
    lVar11 = lVar11 + lVar15 * -0x3ec5;
    iVar9 = iVar9 + -1;
    *param_1 = (int)((ulong)(lVar10 + lVar14) >> 2);
    param_1[0x20] = (int)((ulong)(lVar10 - lVar14) >> 2);
    param_1[0x10] = (int)((ulong)(lVar19 + lVar17 * 0x187e) >> 0xf);
    param_1[0x30] = (int)((ulong)(lVar19 + lVar8 * -0x3b21) >> 0xf);
    param_1[8] = (int)((ulong)(lVar12 + (long)iVar2 * 0x300b + lVar16) >> 0xf);
    param_1[0x18] = (int)((ulong)(lVar13 + (long)iVar5 * 0x6254 + lVar11) >> 0xf);
    param_1[0x28] = (int)((ulong)(lVar13 + (long)iVar6 * 0x41b3 + lVar16) >> 0xf);
    param_1[0x38] = (int)((ulong)(lVar12 + (long)iVar7 * 0x98e + lVar11) >> 0xf);
    param_1 = param_1 + 1;
  } while (0 < iVar9);
                    /* try { // try from 0110146c to 0120147b has its CatchHandler @ 011014e8 */
  return;
}


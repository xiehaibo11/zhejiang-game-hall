
void jpeg_fdct_9x9(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int aiStack_70 [8];
  
  piVar14 = param_1;
  iVar13 = 0;
  while( true ) {
    do {
      iVar6 = iVar13;
      piVar3 = piVar14;
      pbVar1 = (byte *)(*(long *)(param_2 + (long)iVar6 * 8) + (param_3 & 0xffffffff));
      lVar2 = (ulong)pbVar1[8] + (ulong)*pbVar1;
      lVar7 = (ulong)pbVar1[7] + (ulong)pbVar1[1];
      lVar4 = (ulong)pbVar1[6] + (ulong)pbVar1[2];
      lVar5 = (ulong)pbVar1[5] + (ulong)pbVar1[3];
      lVar9 = (ulong)*pbVar1 - (ulong)pbVar1[8];
      lVar12 = (ulong)pbVar1[1] - (ulong)pbVar1[7];
      lVar15 = (ulong)pbVar1[2] - (ulong)pbVar1[6];
      lVar16 = (ulong)pbVar1[3] - (ulong)pbVar1[5];
      lVar8 = (ulong)pbVar1[4] + lVar7;
      lVar7 = lVar7 + (ulong)pbVar1[4] * -2;
      lVar11 = lVar4 + lVar2 + lVar5;
      lVar17 = (lVar2 - lVar4) * 0x2a87 + 0x800;
      lVar18 = (lVar15 + lVar9) * 0x1d17;
      lVar19 = lVar12 * -0x2731 + 0x800;
      lVar10 = (lVar16 + lVar9) * 0xf7a;
      piVar3[4] = (int)((ulong)(lVar17 + (lVar5 - lVar2) * 0x7dc + lVar7 * -0x16a1) >> 0xc);
      piVar3[5] = (int)((ulong)(lVar19 + lVar18 + (lVar15 - lVar16) * -0x2c91) >> 0xc);
      piVar3[2] = (int)((ulong)(lVar17 + (lVar4 - lVar5) * 0x22ab + lVar7 * 0x16a1) >> 0xc);
      piVar3[3] = (int)(((lVar9 - lVar15) - lVar16) * 0x2731 + 0x800U >> 0xc);
      piVar3[6] = (int)((lVar11 + lVar8 * -2) * 0x16a1 + 0x800U >> 0xc);
      piVar3[7] = (int)((ulong)(lVar19 + lVar10 + (lVar15 - lVar16) * 0x2c91) >> 0xc);
      *piVar3 = ((int)lVar11 + (int)lVar8) * 2 + -0x900;
      piVar3[1] = (int)(lVar12 * 0x2731 + lVar18 + lVar10 + 0x800U >> 0xc);
      piVar14 = aiStack_70;
      iVar13 = 8;
    } while (iVar6 == 7);
    if (iVar6 == 8) break;
    piVar14 = piVar3 + 8;
    iVar13 = iVar6 + 1;
  }
  iVar13 = 8;
  piVar14 = aiStack_70;
  do {
    iVar6 = param_1[8] - param_1[0x38];
    lVar10 = (long)(*piVar14 + *param_1);
    lVar12 = (long)(param_1[0x30] + param_1[0x10]);
    lVar9 = (long)(param_1[0x38] + param_1[8]);
    lVar16 = (long)(param_1[0x28] + param_1[0x18]);
    lVar4 = (long)(*param_1 - *piVar14);
    lVar8 = (long)(param_1[0x10] - param_1[0x30]);
    lVar11 = (long)(param_1[0x18] - param_1[0x28]);
    lVar2 = param_1[0x20] + lVar9;
    lVar9 = lVar9 + (long)param_1[0x20] * -2;
    lVar7 = lVar12 + lVar10 + lVar16;
    lVar15 = (lVar8 + lVar4) * 0x2df8;
    lVar17 = (long)iVar6 * -0x3def + 0x4000;
    lVar18 = (lVar10 - lVar12) * 0x4333 + 0x4000;
    lVar5 = (lVar11 + lVar4) * 0x1876;
    iVar13 = iVar13 + -1;
    param_1[0x18] = (int)(((lVar4 - lVar8) - lVar11) * 0x3def + 0x4000U >> 0xf);
    *param_1 = (int)((lVar7 + lVar2) * 0x3291 + 0x4000U >> 0xf);
    param_1[0x30] = (int)((lVar7 + lVar2 * -2) * 0x23c2 + 0x4000U >> 0xf);
    param_1[0x10] = (int)((ulong)(lVar18 + (lVar12 - lVar16) * 0x36c8 + lVar9 * 0x23c2) >> 0xf);
    param_1[0x20] = (int)((ulong)(lVar18 + (lVar16 - lVar10) * 0xc6b + lVar9 * -0x23c2) >> 0xf);
    param_1[0x28] = (int)((ulong)(lVar17 + lVar15 + (lVar8 - lVar11) * -0x466d) >> 0xf);
    param_1[0x38] = (int)((ulong)(lVar17 + lVar5 + (lVar8 - lVar11) * 0x466d) >> 0xf);
    param_1[8] = (int)(lVar15 + (long)iVar6 * 0x3def + lVar5 + 0x4000U >> 0xf);
    param_1 = param_1 + 1;
    piVar14 = piVar14 + 1;
  } while (0 < iVar13);
  return;
}


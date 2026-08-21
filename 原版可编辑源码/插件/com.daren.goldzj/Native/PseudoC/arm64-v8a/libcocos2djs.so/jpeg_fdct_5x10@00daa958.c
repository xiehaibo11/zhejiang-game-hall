
void jpeg_fdct_5x10(int *param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int local_a0 [8];
  int local_80 [8];
  
  memset(param_1,0,0x100);
  piVar4 = param_1;
  iVar6 = 0;
  while( true ) {
    do {
      iVar15 = iVar6;
      piVar14 = piVar4;
      pbVar2 = (byte *)(*(long *)(param_2 + (long)iVar15 * 8) + (ulong)param_3);
      bVar5 = pbVar2[2];
      lVar12 = (ulong)pbVar2[4] + (ulong)*pbVar2;
      lVar10 = (ulong)*pbVar2 - (ulong)pbVar2[4];
      lVar13 = (ulong)pbVar2[3] + (ulong)pbVar2[1];
      lVar11 = (ulong)pbVar2[1] - (ulong)pbVar2[3];
      lVar3 = lVar13 + lVar12;
      lVar16 = lVar3 + (ulong)(uint)bVar5 * -4;
      lVar12 = (lVar12 - lVar13) * 0x194c + 0x400;
      lVar13 = (lVar11 + lVar10) * 0x1a9a;
      piVar14[3] = (int)(lVar13 + lVar11 * -0x45a4 + 0x400U >> 0xb);
      piVar14[4] = (int)((ulong)(lVar12 + lVar16 * -0xb50) >> 0xb);
      *piVar14 = ((int)lVar3 + (uint)bVar5) * 4 + -0xa00;
      piVar14[1] = (int)(lVar13 + lVar10 * 0x1071 + 0x400U >> 0xb);
      piVar14[2] = (int)((ulong)(lVar12 + lVar16 * 0xb50) >> 0xb);
      piVar4 = local_a0;
      iVar6 = 8;
    } while (iVar15 == 7);
    if (iVar15 == 9) break;
    piVar4 = piVar14 + 8;
    iVar6 = iVar15 + 1;
  }
  lVar12 = 0;
  do {
    piVar4 = (int *)((long)param_1 + lVar12);
    iVar6 = *piVar4 - *(int *)((long)local_80 + lVar12);
    iVar15 = piVar4[8] - *(int *)((long)local_a0 + lVar12);
    uVar1 = piVar4[0x38] + piVar4[0x10];
    iVar7 = piVar4[0x10] - piVar4[0x38];
    iVar8 = piVar4[0x18] - piVar4[0x30];
    iVar9 = piVar4[0x20] - piVar4[0x28];
    lVar13 = (long)(*(int *)((long)local_80 + lVar12) + *piVar4);
    lVar16 = (long)(*(int *)((long)local_a0 + lVar12) + piVar4[8]);
    lVar11 = (long)(piVar4[0x30] + piVar4[0x18]);
    lVar10 = (long)(piVar4[0x28] + piVar4[0x20]);
    lVar3 = lVar10 + lVar13;
    lVar13 = lVar13 - lVar10;
    lVar10 = lVar11 + lVar16;
    lVar16 = lVar16 - lVar11;
    lVar11 = (long)iVar9 + (long)iVar6;
    lVar19 = (long)iVar15 - (long)iVar8;
    lVar17 = (lVar13 + lVar16) * 0x220c;
    piVar4[0x10] = (int)(lVar17 + lVar13 * 0x150b + 0x4000U >> 0xf);
    lVar18 = lVar19 * 0x2123 + (long)iVar7 * -0x28f6 + lVar11 * 0xca8;
    lVar13 = ((long)iVar8 + (long)iVar15) * -0x1813 + ((long)iVar6 - (long)iVar9) * 0x26f5 + 0x4000;
    piVar4[0x30] = (int)(lVar17 + lVar16 * -0x5924 + 0x4000U >> 0xf);
    *piVar4 = (int)((lVar10 + (int)uVar1 + lVar3) * 0x28f6 + 0x4000U >> 0xf);
    piVar4[8] = (int)((long)iVar15 * 0x339d + (long)iVar6 * 0x3937 + (long)iVar7 * 0x28f6 +
                      (long)iVar8 * 0x1a4c + (long)iVar9 * 0x910 + 0x4000U >> 0xf);
    lVar12 = lVar12 + 4;
    piVar4[0x18] = (int)((ulong)(lVar13 + lVar18) >> 0xf);
    piVar4[0x28] = (int)((lVar11 - (lVar19 + iVar7)) * 0x28f6 + 0x4000U >> 0xf);
    piVar4[0x20] = (int)(lVar3 * 0x2edd +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) *
                         -0x1cf7 + lVar10 * -0x11e6 + 0x4000 >> 0xf);
    piVar4[0x38] = (int)((ulong)(lVar13 - lVar18) >> 0xf);
  } while ((int)lVar12 != 0x14);
  return;
}


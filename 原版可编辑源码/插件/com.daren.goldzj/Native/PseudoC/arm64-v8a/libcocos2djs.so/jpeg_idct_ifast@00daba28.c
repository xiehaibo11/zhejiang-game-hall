
void jpeg_idct_ifast(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  short *psVar19;
  int iVar20;
  short sVar21;
  long lVar22;
  int local_130 [16];
  int local_f0 [8];
  int local_d0 [8];
  int aiStack_b0 [8];
  int local_90 [8];
  int local_70 [8];
  int local_50 [8];
  
  piVar18 = local_130;
  lVar16 = *(long *)(param_1 + 0x1b8);
  piVar17 = *(int **)(param_2 + 0x58);
  psVar19 = (short *)(param_3 + 0x40);
  iVar20 = 9;
  do {
    sVar21 = psVar19[-0x10];
    if (psVar19[-0x18] == 0 && sVar21 == 0) {
      if ((((psVar19[-8] != 0) || (*psVar19 != 0)) || (psVar19[8] != 0)) ||
         ((psVar19[0x10] != 0 || (psVar19[0x18] != 0)))) {
        sVar21 = 0;
        goto LAB_00dabad0;
      }
      iVar15 = *piVar17 * (int)psVar19[-0x20];
      *piVar18 = iVar15;
      piVar18[8] = iVar15;
      piVar18[0x10] = iVar15;
      piVar18[0x18] = iVar15;
      piVar18[0x20] = iVar15;
      piVar18[0x28] = iVar15;
      piVar18[0x30] = iVar15;
      lVar22 = 0x38;
    }
    else {
LAB_00dabad0:
      iVar9 = piVar17[8] * (int)psVar19[-0x18];
      iVar1 = piVar17[0x20] * (int)*psVar19 + *piVar17 * (int)psVar19[-0x20];
      iVar10 = *piVar17 * (int)psVar19[-0x20] - piVar17[0x20] * (int)*psVar19;
      iVar15 = piVar17[0x30] * (int)psVar19[0x10] + piVar17[0x10] * (int)sVar21;
      iVar2 = piVar17[0x28] * (int)psVar19[8] + piVar17[0x18] * (int)psVar19[-8];
      iVar3 = piVar17[0x38] * (int)psVar19[0x18] + iVar9;
      iVar9 = iVar9 - piVar17[0x38] * (int)psVar19[0x18];
      iVar4 = iVar3 + iVar2;
      iVar5 = iVar15 + iVar1;
      iVar11 = piVar17[0x28] * (int)psVar19[8] - piVar17[0x18] * (int)psVar19[-8];
      iVar1 = iVar1 - iVar15;
      iVar15 = (int)((ulong)((long)(piVar17[0x10] * (int)sVar21 - piVar17[0x30] * (int)psVar19[0x10]
                                   ) * 0x16a) >> 8) - iVar15;
      *piVar18 = iVar4 + iVar5;
      piVar18[0x38] = iVar5 - iVar4;
      iVar5 = iVar15 + iVar10;
      iVar10 = iVar10 - iVar15;
      iVar15 = (int)((ulong)((long)(iVar9 + iVar11) * 0x1d9) >> 8);
      iVar4 = (iVar15 - (int)((ulong)((long)iVar11 * 0x29d) >> 8)) - iVar4;
      iVar2 = (int)((ulong)((long)(iVar3 - iVar2) * 0x16a) >> 8) - iVar4;
      iVar3 = (iVar15 - (int)((ulong)((long)iVar9 * 0x115) >> 8)) - iVar2;
      piVar18[0x30] = iVar5 - iVar4;
      piVar18[0x28] = iVar10 - iVar2;
      iVar15 = iVar1 - iVar3;
      piVar18[0x18] = iVar3 + iVar1;
      lVar22 = 0x20;
      piVar18[8] = iVar4 + iVar5;
      piVar18[0x10] = iVar2 + iVar10;
    }
    iVar20 = iVar20 + -1;
    piVar18[lVar22] = iVar15;
    piVar18 = piVar18 + 1;
    piVar17 = piVar17 + 1;
    psVar19 = psVar19 + 1;
  } while (1 < iVar20);
  lVar22 = 0;
  lVar16 = lVar16 + -0x180;
  piVar18 = local_130 + 4;
  do {
    iVar20 = piVar18[-3];
    iVar15 = piVar18[-2];
    pbVar7 = (byte *)(*(long *)(param_4 + lVar22) + (param_5 & 0xffffffff));
    uVar6 = piVar18[-4] + 0x4010;
    if (iVar20 == 0 && iVar15 == 0) {
      if (((piVar18[-1] != 0) || (*piVar18 != 0)) ||
         ((piVar18[1] != 0 || ((piVar18[2] != 0 || (piVar18[3] != 0)))))) {
        iVar15 = 0;
        goto LAB_00dabc9c;
      }
      bVar8 = *(byte *)(lVar16 + (ulong)(uVar6 >> 5 & 0x3ff));
      *pbVar7 = bVar8;
      *(short *)(pbVar7 + 5) = (short)((uint)bVar8 * 0x1010101);
      *(uint *)(pbVar7 + 1) = (uint)bVar8 * 0x1010101;
      lVar13 = 7;
    }
    else {
LAB_00dabc9c:
      iVar11 = piVar18[2];
      iVar1 = *piVar18 + uVar6;
      iVar12 = uVar6 - *piVar18;
      iVar2 = iVar11 + iVar15;
      iVar3 = piVar18[-1] + piVar18[1];
      iVar10 = piVar18[1] - piVar18[-1];
      iVar4 = piVar18[3] + iVar20;
      iVar20 = iVar20 - piVar18[3];
      iVar5 = iVar2 + iVar1;
      iVar9 = iVar4 + iVar3;
      iVar1 = iVar1 - iVar2;
      *pbVar7 = *(byte *)(lVar16 + (ulong)((uint)(iVar9 + iVar5) >> 5 & 0x3ff));
      iVar2 = (int)((ulong)((long)(iVar15 - iVar11) * 0x16a) >> 8) - iVar2;
      iVar14 = (int)((ulong)((long)(iVar20 + iVar10) * 0x1d9) >> 8);
      iVar11 = (iVar14 - (int)((ulong)((long)iVar10 * 0x29d) >> 8)) - iVar9;
      iVar15 = iVar2 + iVar12;
      pbVar7[7] = *(byte *)(lVar16 + (ulong)((uint)(iVar5 - iVar9) >> 5 & 0x3ff));
      iVar12 = iVar12 - iVar2;
      pbVar7[1] = *(byte *)(lVar16 + (ulong)((uint)(iVar11 + iVar15) >> 5 & 0x3ff));
      iVar2 = (int)((ulong)((long)(iVar4 - iVar3) * 0x16a) >> 8) - iVar11;
      pbVar7[6] = *(byte *)(lVar16 + (ulong)((uint)(iVar15 - iVar11) >> 5 & 0x3ff));
      pbVar7[2] = *(byte *)(lVar16 + (ulong)((uint)(iVar2 + iVar12) >> 5 & 0x3ff));
      iVar20 = (iVar14 - (int)((ulong)((long)iVar20 * 0x115) >> 8)) - iVar2;
      pbVar7[5] = *(byte *)(lVar16 + (ulong)((uint)(iVar12 - iVar2) >> 5 & 0x3ff));
      pbVar7[3] = *(byte *)(lVar16 + (ulong)((uint)(iVar20 + iVar1) >> 5 & 0x3ff));
      bVar8 = *(byte *)(lVar16 + (ulong)((uint)(iVar1 - iVar20) >> 5 & 0x3ff));
      lVar13 = 4;
    }
    lVar22 = lVar22 + 8;
    piVar18 = piVar18 + 8;
    pbVar7[lVar13] = bVar8;
    if (lVar22 == 0x40) {
      return;
    }
  } while( true );
}


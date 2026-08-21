
void jpeg_idct_islow(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  int *piVar17;
  short *psVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  short sVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int local_160 [16];
  int local_120 [8];
  int local_100 [8];
  int aiStack_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  lVar16 = *(long *)(param_1 + 0x1b8);
  piVar17 = *(int **)(param_2 + 0x58);
  piVar15 = local_160;
  psVar18 = (short *)(param_3 + 0x40);
  iVar19 = 9;
  do {
    sVar22 = psVar18[-0x10];
    if (psVar18[-0x18] == 0 && sVar22 == 0) {
      if ((((psVar18[-8] != 0) || (*psVar18 != 0)) || (psVar18[8] != 0)) ||
         ((psVar18[0x10] != 0 || (psVar18[0x18] != 0)))) {
        sVar22 = 0;
        goto LAB_00dabea8;
      }
      iVar20 = (int)psVar18[-0x20] * *piVar17 * 4;
      *piVar15 = iVar20;
      piVar15[8] = iVar20;
      piVar15[0x10] = iVar20;
      piVar15[0x18] = iVar20;
      piVar15[0x20] = iVar20;
      piVar15[0x28] = iVar20;
      piVar15[0x30] = iVar20;
      lVar21 = 0x38;
    }
    else {
LAB_00dabea8:
      lVar34 = (long)piVar17[0x38] * (long)psVar18[0x18];
      lVar29 = (long)piVar17[0x18] * (long)psVar18[-8];
      lVar21 = (long)piVar17[8] * (long)psVar18[-0x18];
      lVar31 = ((long)piVar17[0x30] * (long)psVar18[0x10] + (long)piVar17[0x10] * (long)sVar22) *
               0x1151;
      lVar26 = (long)piVar17[0x28] * (long)psVar18[8];
      lVar23 = lVar31 + (long)piVar17[0x10] * (long)sVar22 * 0x187e;
      lVar31 = lVar31 + (long)piVar17[0x30] * (long)psVar18[0x10] * -0x3b21;
      uVar3 = (long)(*piVar17 * (int)psVar18[-0x20]) << 0xd | 0x400;
      lVar32 = (lVar21 + lVar34) * -0x1ccd;
      lVar24 = (ulong)(uint)(piVar17[0x20] * (int)*psVar18) * 0x2000 + uVar3;
      lVar28 = uVar3 + (ulong)(uint)(piVar17[0x20] * (int)*psVar18) * -0x2000;
      lVar33 = (lVar29 + lVar26) * -0x5203;
      lVar1 = lVar23 + lVar24;
      lVar24 = lVar24 - lVar23;
      lVar23 = lVar31 + lVar28;
      lVar28 = lVar28 - lVar31;
      lVar30 = (lVar21 + lVar26 + lVar29 + lVar34) * 0x25a1;
      lVar35 = lVar30 + (lVar29 + lVar34) * -0x3ec5;
      lVar30 = lVar30 + (lVar21 + lVar26) * -0xc7c;
      lVar31 = lVar32 + lVar34 * 0x98e + lVar35;
      lVar32 = lVar32 + lVar21 * 0x300b + lVar30;
      lVar30 = lVar33 + lVar26 * 0x41b3 + lVar30;
      lVar35 = lVar33 + lVar29 * 0x6254 + lVar35;
      iVar20 = (int)((ulong)(lVar24 - lVar31) >> 0xb);
      lVar21 = 0x20;
      *piVar15 = (int)((ulong)(lVar32 + lVar1) >> 0xb);
      piVar15[0x38] = (int)((ulong)(lVar1 - lVar32) >> 0xb);
      piVar15[8] = (int)((ulong)(lVar35 + lVar23) >> 0xb);
      piVar15[0x30] = (int)((ulong)(lVar23 - lVar35) >> 0xb);
      piVar15[0x10] = (int)((ulong)(lVar30 + lVar28) >> 0xb);
      piVar15[0x28] = (int)((ulong)(lVar28 - lVar30) >> 0xb);
      piVar15[0x18] = (int)((ulong)(lVar31 + lVar24) >> 0xb);
    }
    iVar19 = iVar19 + -1;
    piVar15[lVar21] = iVar20;
    piVar15 = piVar15 + 1;
    piVar17 = piVar17 + 1;
    psVar18 = psVar18 + 1;
  } while (1 < iVar19);
  lVar21 = 0;
  lVar16 = lVar16 + -0x180;
  piVar15 = local_160 + 4;
  do {
    iVar19 = piVar15[-3];
    iVar20 = piVar15[-2];
    pbVar2 = (byte *)(*(long *)(param_4 + lVar21) + (param_5 & 0xffffffff));
    if (iVar19 == 0 && iVar20 == 0) {
      if (((piVar15[-1] != 0) || (*piVar15 != 0)) ||
         ((piVar15[1] != 0 || ((piVar15[2] != 0 || (piVar15[3] != 0)))))) {
        iVar20 = 0;
        goto LAB_00dac0c0;
      }
      bVar7 = *(byte *)(lVar16 + ((long)piVar15[-4] + 0x4010U >> 5 & 0x3ff));
      *pbVar2 = bVar7;
      *(short *)(pbVar2 + 5) = (short)((uint)bVar7 * 0x1010101);
      *(uint *)(pbVar2 + 1) = (uint)bVar7 * 0x1010101;
      lVar24 = 7;
    }
    else {
LAB_00dac0c0:
      iVar4 = *piVar15;
      iVar5 = piVar15[1];
      iVar6 = piVar15[3];
      iVar8 = piVar15[-1];
      iVar25 = (int)((long)piVar15[-4] + 0x4010U);
      iVar27 = (piVar15[2] + iVar20) * 0x1151;
      iVar12 = (iVar19 + iVar6) * -0x1ccd;
      iVar14 = (iVar19 + iVar5 + iVar8 + iVar6) * 0x25a1;
      iVar9 = (iVar25 + iVar4) * 0x2000;
      iVar10 = iVar27 + iVar20 * 0x187e;
      iVar27 = iVar27 + piVar15[2] * -0x3b21;
      iVar11 = iVar14 + (iVar19 + iVar5) * -0xc7c;
      iVar20 = iVar10 + iVar9;
      iVar19 = iVar12 + iVar19 * 0x300b + iVar11;
      *pbVar2 = *(byte *)(lVar16 + ((ulong)((uint)(iVar19 + iVar20) >> 0x12) & 0x3ff));
      iVar13 = (iVar8 + iVar5) * -0x5203;
      iVar25 = (iVar25 - iVar4) * 0x2000;
      iVar14 = iVar14 + (iVar8 + iVar6) * -0x3ec5;
      iVar4 = iVar27 + iVar25;
      iVar8 = iVar13 + iVar8 * 0x6254 + iVar14;
      pbVar2[7] = *(byte *)(lVar16 + ((ulong)((uint)(iVar20 - iVar19) >> 0x12) & 0x3ff));
      iVar25 = iVar25 - iVar27;
      pbVar2[1] = *(byte *)(lVar16 + ((ulong)((uint)(iVar8 + iVar4) >> 0x12) & 0x3ff));
      iVar11 = iVar13 + iVar5 * 0x41b3 + iVar11;
      pbVar2[6] = *(byte *)(lVar16 + ((ulong)((uint)(iVar4 - iVar8) >> 0x12) & 0x3ff));
      iVar9 = iVar9 - iVar10;
      pbVar2[2] = *(byte *)(lVar16 + ((ulong)((uint)(iVar11 + iVar25) >> 0x12) & 0x3ff));
      iVar14 = iVar12 + iVar6 * 0x98e + iVar14;
      pbVar2[5] = *(byte *)(lVar16 + ((ulong)((uint)(iVar25 - iVar11) >> 0x12) & 0x3ff));
      lVar24 = 4;
      pbVar2[3] = *(byte *)(lVar16 + ((ulong)((uint)(iVar14 + iVar9) >> 0x12) & 0x3ff));
      bVar7 = *(byte *)(lVar16 + ((ulong)((uint)(iVar9 - iVar14) >> 0x12) & 0x3ff));
    }
    lVar21 = lVar21 + 8;
    piVar15 = piVar15 + 8;
    pbVar2[lVar24] = bVar7;
    if (lVar21 == 0x40) {
      return;
    }
  } while( true );
}


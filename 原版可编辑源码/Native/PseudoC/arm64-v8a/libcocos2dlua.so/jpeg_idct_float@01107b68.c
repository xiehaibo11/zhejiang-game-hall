
void jpeg_idct_float(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  short *psVar14;
  int iVar15;
  long lVar16;
  short sVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_110 [64];
  
  pfVar13 = local_110;
  lVar11 = *(long *)(param_1 + 0x1b8);
  pfVar12 = *(float **)(param_2 + 0x58);
  psVar14 = (short *)(param_3 + 0x40);
  iVar15 = 9;
  do {
    sVar17 = psVar14[-0x10];
    if (psVar14[-0x18] == 0 && sVar17 == 0) {
      if ((((psVar14[-8] != 0) || (*psVar14 != 0)) || (psVar14[8] != 0)) ||
         ((psVar14[0x10] != 0 || (psVar14[0x18] != 0)))) {
        sVar17 = 0;
        goto LAB_01107c1c;
      }
      lVar16 = 0x38;
      fVar3 = *pfVar12 * (float)(int)psVar14[-0x20];
      *pfVar13 = fVar3;
      pfVar13[8] = fVar3;
      pfVar13[0x10] = fVar3;
      pfVar13[0x18] = fVar3;
      pfVar13[0x20] = fVar3;
      pfVar13[0x28] = fVar3;
      pfVar13[0x30] = fVar3;
    }
    else {
LAB_01107c1c:
      fVar23 = pfVar12[8] * (float)(int)psVar14[-0x18];
      fVar22 = *pfVar12 * (float)(int)psVar14[-0x20] + pfVar12[0x20] * (float)(int)*psVar14;
      fVar3 = *pfVar12 * (float)(int)psVar14[-0x20] - pfVar12[0x20] * (float)(int)*psVar14;
      fVar20 = pfVar12[0x10] * (float)(int)sVar17 + pfVar12[0x30] * (float)(int)psVar14[0x10];
      fVar5 = pfVar12[0x18] * (float)(int)psVar14[-8] + pfVar12[0x28] * (float)(int)psVar14[8];
      fVar4 = pfVar12[0x28] * (float)(int)psVar14[8] - pfVar12[0x18] * (float)(int)psVar14[-8];
      fVar19 = fVar23 + pfVar12[0x38] * (float)(int)psVar14[0x18];
      fVar23 = fVar23 - pfVar12[0x38] * (float)(int)psVar14[0x18];
      fVar18 = (pfVar12[0x10] * (float)(int)sVar17 - pfVar12[0x30] * (float)(int)psVar14[0x10]) *
               1.4142135 - fVar20;
      fVar24 = fVar5 + fVar19;
      fVar21 = fVar22 + fVar20;
      fVar22 = fVar22 - fVar20;
      fVar20 = fVar3 + fVar18;
      fVar3 = fVar3 - fVar18;
      fVar18 = (fVar4 + fVar23) * 1.847759;
      fVar4 = (fVar18 + fVar4 * -2.613126) - fVar24;
      *pfVar13 = fVar21 + fVar24;
      fVar19 = (fVar19 - fVar5) * 1.4142135 - fVar4;
      fVar5 = (fVar18 + fVar23 * -1.0823922) - fVar19;
      pfVar13[0x30] = fVar20 - fVar4;
      pfVar13[0x10] = fVar3 + fVar19;
      pfVar13[0x28] = fVar3 - fVar19;
      fVar3 = fVar22 - fVar5;
      lVar16 = 0x20;
      pfVar13[0x38] = fVar21 - fVar24;
      pfVar13[8] = fVar20 + fVar4;
      pfVar13[0x18] = fVar22 + fVar5;
    }
    iVar15 = iVar15 + -1;
    pfVar13[lVar16] = fVar3;
    pfVar13 = pfVar13 + 1;
    pfVar12 = pfVar12 + 1;
    psVar14 = psVar14 + 1;
    if (iVar15 < 2) {
      lVar16 = 0;
      lVar11 = lVar11 + -0x180;
      do {
        pfVar13 = local_110 + lVar16;
        lVar6 = lVar16 + 1;
        lVar7 = lVar16 + 4;
        lVar8 = lVar16 + 5;
        fVar4 = local_110[lVar16 + 2];
        lVar9 = lVar16 + 3;
        fVar18 = local_110[lVar16 + 6];
        lVar10 = lVar16 + 7;
        plVar1 = (long *)(param_4 + lVar16);
        lVar16 = lVar16 + 8;
        fVar24 = fVar4 + fVar18;
        fVar23 = local_110[lVar8] + local_110[lVar9];
        fVar19 = local_110[lVar8] - local_110[lVar9];
        fVar21 = local_110[lVar6] + local_110[lVar10];
        fVar5 = local_110[lVar6] - local_110[lVar10];
        fVar22 = *pfVar13 + 512.5 + local_110[lVar7];
        fVar3 = (*pfVar13 + 512.5) - local_110[lVar7];
        fVar20 = fVar23 + fVar21;
        fVar25 = fVar22 + fVar24;
        puVar2 = (undefined1 *)(*plVar1 + (ulong)param_5);
        fVar26 = (fVar19 + fVar5) * 1.847759;
        *puVar2 = *(undefined1 *)(lVar11 + (ulong)((int)(fVar25 + fVar20) & 0x3ff));
        fVar4 = (fVar4 - fVar18) * 1.4142135 - fVar24;
        fVar18 = fVar3 + fVar4;
        fVar19 = (fVar26 + fVar19 * -2.613126) - fVar20;
        puVar2[7] = *(undefined1 *)(lVar11 + (ulong)((int)(fVar25 - fVar20) & 0x3ff));
        puVar2[1] = *(undefined1 *)(lVar11 + (ulong)((int)(fVar18 + fVar19) & 0x3ff));
        fVar3 = fVar3 - fVar4;
        fVar20 = (fVar21 - fVar23) * 1.4142135 - fVar19;
        puVar2[6] = *(undefined1 *)(lVar11 + (ulong)((int)(fVar18 - fVar19) & 0x3ff));
        fVar22 = fVar22 - fVar24;
        puVar2[2] = *(undefined1 *)(lVar11 + (ulong)((int)(fVar3 + fVar20) & 0x3ff));
        fVar4 = (fVar26 + fVar5 * -1.0823922) - fVar20;
        puVar2[5] = *(undefined1 *)(lVar11 + (ulong)((int)(fVar3 - fVar20) & 0x3ff));
        puVar2[3] = *(undefined1 *)(lVar11 + (ulong)((int)(fVar22 + fVar4) & 0x3ff));
        puVar2[4] = *(undefined1 *)(lVar11 + (ulong)((int)(fVar22 - fVar4) & 0x3ff));
      } while (lVar16 != 0x40);
      return;
    }
  } while( true );
}


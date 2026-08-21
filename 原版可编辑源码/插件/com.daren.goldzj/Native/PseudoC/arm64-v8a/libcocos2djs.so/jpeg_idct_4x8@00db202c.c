
void jpeg_idct_4x8(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int local_e0 [4];
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  
  piVar8 = local_e0;
  lVar5 = *(long *)(param_1 + 0x1b8);
  piVar6 = *(int **)(param_2 + 0x58);
  psVar9 = (short *)(param_3 + 0x40);
  iVar10 = 5;
  do {
    sVar13 = psVar9[-0x10];
    if (psVar9[-0x18] == 0 && sVar13 == 0) {
      if ((((psVar9[-8] != 0) || (*psVar9 != 0)) || (psVar9[8] != 0)) ||
         ((psVar9[0x10] != 0 || (psVar9[0x18] != 0)))) {
        sVar13 = 0;
        goto LAB_00db2104;
      }
      iVar11 = (int)psVar9[-0x20] * *piVar6 * 4;
      *piVar8 = iVar11;
      piVar8[4] = iVar11;
      piVar8[8] = iVar11;
      piVar8[0xc] = iVar11;
      piVar8[0x10] = iVar11;
      piVar8[0x14] = iVar11;
      piVar8[0x18] = iVar11;
      lVar12 = 0x1c;
    }
    else {
LAB_00db2104:
      lVar23 = (long)piVar6[0x38] * (long)psVar9[0x18];
      lVar16 = (long)piVar6[0x28] * (long)psVar9[8];
      lVar19 = (long)piVar6[0x18] * (long)psVar9[-8];
      lVar12 = (long)piVar6[8] * (long)psVar9[-0x18];
      uVar7 = (long)(*piVar6 * (int)psVar9[-0x20]) << 0xd | 0x400;
      lVar22 = ((long)piVar6[0x30] * (long)psVar9[0x10] + (long)piVar6[0x10] * (long)sVar13) *
               0x1151;
      lVar14 = lVar22 + (long)piVar6[0x10] * (long)sVar13 * 0x187e;
      lVar22 = lVar22 + (long)piVar6[0x30] * (long)psVar9[0x10] * -0x3b21;
      lVar15 = (ulong)(uint)(piVar6[0x20] * (int)*psVar9) * 0x2000 + uVar7;
      lVar17 = uVar7 + (ulong)(uint)(piVar6[0x20] * (int)*psVar9) * -0x2000;
      lVar20 = (lVar12 + lVar23) * -0x1ccd;
      lVar21 = (lVar19 + lVar16) * -0x5203;
      lVar1 = lVar15 + lVar14;
      lVar15 = lVar15 - lVar14;
      lVar14 = lVar17 + lVar22;
      lVar17 = lVar17 - lVar22;
      lVar18 = (lVar12 + lVar16 + lVar19 + lVar23) * 0x25a1;
      lVar24 = lVar18 + (lVar19 + lVar23) * -0x3ec5;
      lVar18 = lVar18 + (lVar12 + lVar16) * -0xc7c;
      lVar22 = lVar20 + lVar23 * 0x98e + lVar24;
      lVar20 = lVar20 + lVar12 * 0x300b + lVar18;
      lVar18 = lVar21 + lVar16 * 0x41b3 + lVar18;
      lVar24 = lVar21 + lVar19 * 0x6254 + lVar24;
      iVar11 = (int)((ulong)(lVar15 - lVar22) >> 0xb);
      lVar12 = 0x10;
      *piVar8 = (int)((ulong)(lVar20 + lVar1) >> 0xb);
      piVar8[0x1c] = (int)((ulong)(lVar1 - lVar20) >> 0xb);
      piVar8[4] = (int)((ulong)(lVar24 + lVar14) >> 0xb);
      piVar8[0x18] = (int)((ulong)(lVar14 - lVar24) >> 0xb);
      piVar8[8] = (int)((ulong)(lVar18 + lVar17) >> 0xb);
      piVar8[0x14] = (int)((ulong)(lVar17 - lVar18) >> 0xb);
      piVar8[0xc] = (int)((ulong)(lVar22 + lVar15) >> 0xb);
    }
    iVar10 = iVar10 + -1;
    piVar8[lVar12] = iVar11;
    piVar8 = piVar8 + 1;
    piVar6 = piVar6 + 1;
    psVar9 = psVar9 + 1;
    if (iVar10 < 2) {
      iVar4 = (local_e0[3] + local_e0[1]) * 0x1151;
      iVar3 = iVar4 + local_e0[1] * 0x187e;
      iVar4 = iVar4 + local_e0[3] * -0x3b21;
      iVar10 = (local_e0[0] + 0x4010 + local_e0[2]) * 0x2000;
      lVar5 = lVar5 + -0x180;
      uVar7 = (ulong)param_5;
      puVar2 = (undefined1 *)(*param_4 + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_e0[0] + 0x4010) - local_e0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_d0[3] + local_d0[1]) * 0x1151;
      iVar3 = iVar4 + local_d0[1] * 0x187e;
      iVar4 = iVar4 + local_d0[3] * -0x3b21;
      iVar10 = (local_d0[0] + 0x4010 + local_d0[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[1] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_d0[0] + 0x4010) - local_d0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_c0[3] + local_c0[1]) * 0x1151;
      iVar3 = iVar4 + local_c0[1] * 0x187e;
      iVar4 = iVar4 + local_c0[3] * -0x3b21;
      iVar10 = (local_c0[0] + 0x4010 + local_c0[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[2] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_c0[0] + 0x4010) - local_c0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_b0[3] + local_b0[1]) * 0x1151;
      iVar3 = iVar4 + local_b0[1] * 0x187e;
      iVar4 = iVar4 + local_b0[3] * -0x3b21;
      iVar10 = (local_b0[0] + 0x4010 + local_b0[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[3] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_b0[0] + 0x4010) - local_b0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_a0[3] + local_a0[1]) * 0x1151;
      iVar3 = iVar4 + local_a0[1] * 0x187e;
      iVar4 = iVar4 + local_a0[3] * -0x3b21;
      iVar10 = (local_a0[0] + 0x4010 + local_a0[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[4] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_a0[0] + 0x4010) - local_a0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_90[3] + local_90[1]) * 0x1151;
      iVar3 = iVar4 + local_90[1] * 0x187e;
      iVar4 = iVar4 + local_90[3] * -0x3b21;
      iVar10 = (local_90[0] + 0x4010 + local_90[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[5] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_90[0] + 0x4010) - local_90[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_80[3] + local_80[1]) * 0x1151;
      iVar3 = iVar4 + local_80[1] * 0x187e;
      iVar4 = iVar4 + local_80[3] * -0x3b21;
      iVar10 = (local_80[0] + 0x4010 + local_80[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[6] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_80[0] + 0x4010) - local_80[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      puVar2 = (undefined1 *)(param_4[7] + uVar7);
      iVar4 = (local_70[3] + local_70[1]) * 0x1151;
      iVar3 = iVar4 + local_70[1] * 0x187e;
      iVar10 = (local_70[0] + 0x4010 + local_70[2]) * 0x2000;
      iVar4 = iVar4 + local_70[3] * -0x3b21;
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_70[0] + 0x4010) - local_70[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      return;
    }
  } while( true );
}


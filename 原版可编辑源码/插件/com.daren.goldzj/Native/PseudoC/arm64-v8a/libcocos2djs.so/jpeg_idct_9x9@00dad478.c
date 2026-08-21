
void jpeg_idct_9x9(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int local_180 [72];
  
  lVar20 = *(long *)(param_1 + 0x1b8);
  lVar25 = *(long *)(param_2 + 0x58);
  lVar24 = 0;
  do {
    psVar4 = (short *)(param_3 + lVar24 * 2);
    piVar5 = (int *)(lVar25 + lVar24 * 4);
    lVar26 = (long)piVar5[0x10] * (long)psVar4[0x10];
    lVar27 = (long)piVar5[0x20] * (long)psVar4[0x20];
    lVar28 = (long)piVar5[8] * (long)psVar4[8];
    lVar30 = (long)piVar5[0x28] * (long)psVar4[0x28];
    lVar22 = (long)piVar5[0x38] * (long)psVar4[0x38];
    lVar29 = (long)piVar5[0x18] * (long)psVar4[0x18] * -0x2731;
    uVar9 = (long)(*piVar5 * (int)*psVar4) << 0xd | 0x400;
    lVar31 = (lVar30 + lVar28) * 0x1d17;
    lVar32 = (lVar22 + lVar28) * 0xf7a;
    lVar23 = (lVar28 - lVar30) - lVar22;
    lVar28 = (long)piVar5[0x30] * (long)psVar4[0x30] * 0x16a1 + uVar9;
    lVar21 = uVar9 + (long)piVar5[0x30] * (long)psVar4[0x30] * -0x2d42;
    lVar6 = (lVar27 + lVar26) * 0x2a87 + lVar27 * -0x7dc + lVar28;
    lVar7 = lVar31 + (long)piVar5[0x18] * (long)psVar4[0x18] * 0x2731 + lVar32;
    lVar31 = lVar29 + (lVar30 - lVar22) * -0x2c91 + lVar31;
    lVar32 = (lVar30 - lVar22) * 0x2c91 + lVar29 + lVar32;
    lVar30 = lVar21 + (lVar26 - lVar27) * 0x16a1;
    lVar22 = lVar28 + (lVar27 + lVar26) * -0x2a87 + lVar26 * 0x22ab;
    lVar29 = lVar28 + lVar26 * -0x22ab + lVar27 * 0x7dc;
    lVar28 = lVar24 + 1;
    local_180[lVar24] = (int)((ulong)(lVar7 + lVar6) >> 0xb);
    local_180[lVar24 + 0x40] = (int)((ulong)(lVar6 - lVar7) >> 0xb);
    local_180[lVar24 + 8] = (int)((ulong)(lVar23 * 0x2731 + lVar30) >> 0xb);
    local_180[lVar24 + 0x38] = (int)((ulong)(lVar30 + lVar23 * -0x2731) >> 0xb);
    local_180[lVar24 + 0x10] = (int)((ulong)(lVar31 + lVar22) >> 0xb);
    local_180[lVar24 + 0x30] = (int)((ulong)(lVar22 - lVar31) >> 0xb);
    local_180[lVar24 + 0x18] = (int)((ulong)(lVar32 + lVar29) >> 0xb);
    local_180[lVar24 + 0x28] = (int)((ulong)(lVar29 - lVar32) >> 0xb);
    local_180[lVar24 + 0x20] = (int)((ulong)(lVar21 + (lVar26 - lVar27) * -0x2d42) >> 0xb);
    lVar24 = lVar28;
  } while ((int)lVar28 != 8);
  lVar24 = 0;
  lVar20 = lVar20 + -0x180;
  do {
    iVar12 = local_180[lVar24 + 1];
    iVar10 = local_180[lVar24 + 2];
    iVar11 = local_180[lVar24 + 4];
    iVar13 = local_180[lVar24 + 5];
    iVar14 = local_180[lVar24 + 7];
    iVar1 = local_180[lVar24] * 0x2000 + 0x8020000;
    iVar16 = local_180[lVar24 + 3] * -0x2731;
    iVar17 = (iVar13 + iVar12) * 0x1d17;
    iVar2 = local_180[lVar24 + 6] * 0x16a1 + iVar1;
    iVar18 = (iVar14 + iVar12) * 0xf7a;
    iVar19 = (iVar12 - iVar13) - iVar14;
    iVar1 = iVar1 + local_180[lVar24 + 6] * -0x2d42;
    iVar12 = (iVar11 + iVar10) * 0x2a87 + iVar11 * -0x7dc + iVar2;
    iVar3 = iVar17 + local_180[lVar24 + 3] * 0x2731 + iVar18;
    puVar8 = (undefined1 *)(*(long *)(param_4 + lVar24) + (ulong)param_5);
    *puVar8 = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar3 + iVar12) >> 0x12) & 0x3ff));
    iVar15 = iVar1 + (iVar10 - iVar11) * 0x16a1;
    puVar8[8] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar12 - iVar3) >> 0x12) & 0x3ff));
    iVar12 = iVar2 + (iVar11 + iVar10) * -0x2a87 + iVar10 * 0x22ab;
    puVar8[1] = *(undefined1 *)
                 (lVar20 + ((ulong)((uint)(iVar19 * 0x2731 + iVar15) >> 0x12) & 0x3ff));
    iVar17 = iVar16 + (iVar13 - iVar14) * -0x2c91 + iVar17;
    puVar8[7] = *(undefined1 *)
                 (lVar20 + ((ulong)((uint)(iVar15 + iVar19 * -0x2731) >> 0x12) & 0x3ff));
    iVar2 = iVar2 + iVar10 * -0x22ab + iVar11 * 0x7dc;
    puVar8[2] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar17 + iVar12) >> 0x12) & 0x3ff));
    iVar18 = (iVar13 - iVar14) * 0x2c91 + iVar16 + iVar18;
    puVar8[6] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar12 - iVar17) >> 0x12) & 0x3ff));
    puVar8[3] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar18 + iVar2) >> 0x12) & 0x3ff));
    lVar24 = lVar24 + 8;
    puVar8[5] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar2 - iVar18) >> 0x12) & 0x3ff));
    puVar8[4] = *(undefined1 *)
                 (lVar20 + ((ulong)((uint)(iVar1 + (iVar10 - iVar11) * -0x2d42) >> 0x12) & 0x3ff));
  } while (lVar24 != 0x48);
  return;
}


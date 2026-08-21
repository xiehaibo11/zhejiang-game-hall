
void jpeg_idct_16x8(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
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
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  int *piVar27;
  short *psVar28;
  int iVar29;
  short sVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  int local_160 [64];
  
  lVar26 = *(long *)(param_1 + 0x1b8);
  piVar25 = *(int **)(param_2 + 0x58);
  piVar27 = local_160;
  psVar28 = (short *)(param_3 + 0x40);
  iVar29 = 9;
  do {
    sVar30 = psVar28[-0x10];
    if (psVar28[-0x18] == 0 && sVar30 == 0) {
      if ((((psVar28[-8] != 0) || (*psVar28 != 0)) || (psVar28[8] != 0)) ||
         ((psVar28[0x10] != 0 || (psVar28[0x18] != 0)))) {
        sVar30 = 0;
        goto LAB_0110bf30;
      }
      iVar23 = (int)psVar28[-0x20] * *piVar25 * 4;
      *piVar27 = iVar23;
      piVar27[8] = iVar23;
      piVar27[0x10] = iVar23;
      piVar27[0x18] = iVar23;
      piVar27[0x20] = iVar23;
      piVar27[0x28] = iVar23;
      piVar27[0x30] = iVar23;
      lVar24 = 0x38;
    }
    else {
LAB_0110bf30:
      lVar42 = (long)piVar25[0x38] * (long)psVar28[0x18];
      lVar33 = (long)piVar25[0x28] * (long)psVar28[8];
      lVar37 = (long)piVar25[0x18] * (long)psVar28[-8];
      lVar24 = (long)piVar25[8] * (long)psVar28[-0x18];
      uVar6 = (long)(*piVar25 * (int)psVar28[-0x20]) << 0xd | 0x400;
      lVar41 = ((long)piVar25[0x30] * (long)psVar28[0x10] + (long)piVar25[0x10] * (long)sVar30) *
               0x1151;
      lVar31 = lVar41 + (long)piVar25[0x10] * (long)sVar30 * 0x187e;
      lVar41 = lVar41 + (long)piVar25[0x30] * (long)psVar28[0x10] * -0x3b21;
      lVar32 = (ulong)(uint)(piVar25[0x20] * (int)*psVar28) * 0x2000 + uVar6;
      lVar34 = uVar6 + (ulong)(uint)(piVar25[0x20] * (int)*psVar28) * -0x2000;
      lVar39 = (lVar24 + lVar42) * -0x1ccd;
      lVar40 = (lVar37 + lVar33) * -0x5203;
      lVar4 = lVar32 + lVar31;
      lVar32 = lVar32 - lVar31;
      lVar31 = lVar34 + lVar41;
      lVar34 = lVar34 - lVar41;
      lVar35 = (lVar24 + lVar33 + lVar37 + lVar42) * 0x25a1;
      lVar43 = lVar35 + (lVar37 + lVar42) * -0x3ec5;
      lVar35 = lVar35 + (lVar24 + lVar33) * -0xc7c;
      lVar41 = lVar39 + lVar42 * 0x98e + lVar43;
      lVar39 = lVar39 + lVar24 * 0x300b + lVar35;
      lVar35 = lVar40 + lVar33 * 0x41b3 + lVar35;
      lVar43 = lVar40 + lVar37 * 0x6254 + lVar43;
      iVar23 = (int)((ulong)(lVar32 - lVar41) >> 0xb);
      lVar24 = 0x20;
      *piVar27 = (int)((ulong)(lVar39 + lVar4) >> 0xb);
      piVar27[0x38] = (int)((ulong)(lVar4 - lVar39) >> 0xb);
      piVar27[8] = (int)((ulong)(lVar43 + lVar31) >> 0xb);
      piVar27[0x30] = (int)((ulong)(lVar31 - lVar43) >> 0xb);
      piVar27[0x10] = (int)((ulong)(lVar35 + lVar34) >> 0xb);
      piVar27[0x28] = (int)((ulong)(lVar34 - lVar35) >> 0xb);
      piVar27[0x18] = (int)((ulong)(lVar41 + lVar32) >> 0xb);
    }
    iVar29 = iVar29 + -1;
    piVar27[lVar24] = iVar23;
    piVar27 = piVar27 + 1;
    piVar25 = piVar25 + 1;
    psVar28 = psVar28 + 1;
    if (iVar29 < 2) {
      lVar24 = 0;
      lVar26 = lVar26 + -0x180;
      do {
        iVar10 = local_160[lVar24 + 1];
        iVar7 = local_160[lVar24 + 4];
        iVar11 = local_160[lVar24 + 5];
        iVar8 = local_160[lVar24 + 2];
        iVar12 = local_160[lVar24 + 3];
        iVar9 = local_160[lVar24 + 6];
        iVar13 = local_160[lVar24 + 7];
        iVar22 = local_160[lVar24] * 0x2000 + 0x8020000;
        iVar36 = (iVar8 - iVar9) * 0x8d4;
        iVar38 = (iVar8 - iVar9) * 0x2c63;
        puVar5 = (undefined1 *)(*(long *)(param_4 + lVar24) + (param_5 & 0xffffffff));
        iVar16 = (iVar12 + iVar10) * 0x2b4e;
        iVar17 = (iVar11 + iVar10) * 0x27e9;
        iVar18 = (iVar13 + iVar10) * 0x22fc;
        iVar19 = (iVar11 + iVar12) * 0x470;
        iVar20 = (iVar13 + iVar12) * -0x1555;
        iVar14 = iVar38 + iVar9 * 0x5203;
        iVar29 = iVar22 + iVar7 * 0x29cf;
        iVar23 = iVar14 + iVar29;
        iVar1 = iVar16 + iVar10 * -0x492a + iVar17 + iVar18;
        *puVar5 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar23) >> 0x12) & 0x3ff));
        iVar2 = iVar22 + iVar7 * 0x1151;
        iVar15 = iVar36 + iVar8 * 0x1ccd;
        iVar3 = iVar15 + iVar2;
        iVar16 = iVar16 + iVar12 * 0x24d + iVar19 + iVar20;
        puVar5[0xf] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar23 - iVar1) >> 0x12) & 0x3ff));
        iVar38 = iVar38 + iVar8 * -0x133e;
        puVar5[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar16 + iVar3) >> 0x12) & 0x3ff));
        iVar8 = (iVar13 + iVar11) * -0x2b4e;
        iVar21 = iVar22 + iVar7 * -0x1151;
        iVar23 = iVar38 + iVar21;
        iVar1 = iVar19 + iVar11 * -0x2406 + iVar17 + iVar8;
        puVar5[0xe] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar3 - iVar16) >> 0x12) & 0x3ff));
        iVar22 = iVar22 + iVar7 * -0x29cf;
        puVar5[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar23) >> 0x12) & 0x3ff));
        iVar36 = iVar36 + iVar9 * -0x1050;
        iVar8 = iVar20 + iVar13 * 0x2218 + iVar18 + iVar8;
        iVar3 = iVar36 + iVar22;
        puVar5[0xd] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar23 - iVar1) >> 0x12) & 0x3ff));
        iVar22 = iVar22 - iVar36;
        puVar5[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar8 + iVar3) >> 0x12) & 0x3ff));
        iVar7 = (iVar10 - iVar13) * 0x1cb6;
        iVar16 = (iVar13 + iVar12) * -0x27e9;
        iVar1 = (iVar13 - iVar11) * 0xd23;
        iVar23 = iVar16 + iVar13 * 0x6485 + iVar7 + iVar1;
        puVar5[0xc] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar3 - iVar8) >> 0x12) & 0x3ff));
        puVar5[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar23 + iVar22) >> 0x12) & 0x3ff));
        iVar3 = (iVar11 + iVar10) * 0x1555;
        iVar8 = (iVar11 - iVar12) * 0x2d09;
        iVar21 = iVar21 - iVar38;
        iVar1 = iVar8 + iVar11 * -0x1886 + iVar3 + iVar1;
        puVar5[0xb] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar22 - iVar23) >> 0x12) & 0x3ff));
        puVar5[5] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar21) >> 0x12) & 0x3ff));
        iVar23 = (iVar10 - iVar12) * 0xd23;
        iVar2 = iVar2 - iVar15;
        iVar16 = iVar23 + iVar12 * 0x3f1a + iVar8 + iVar16;
        puVar5[10] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar21 - iVar1) >> 0x12) & 0x3ff));
        puVar5[6] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar16 + iVar2) >> 0x12) & 0x3ff));
        iVar29 = iVar29 - iVar14;
        iVar7 = iVar23 + iVar10 * -0x3abe + iVar3 + iVar7;
        puVar5[9] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar2 - iVar16) >> 0x12) & 0x3ff));
        lVar24 = lVar24 + 8;
        puVar5[7] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar7 + iVar29) >> 0x12) & 0x3ff));
        puVar5[8] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar29 - iVar7) >> 0x12) & 0x3ff));
      } while (lVar24 != 0x40);
      return;
    }
  } while( true );
}



int FUN_010a4adc(undefined8 *param_1,short *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  long lVar15;
  ushort *puVar16;
  short sVar17;
  ushort uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  short *psVar22;
  undefined1 uVar23;
  ushort *puVar24;
  ushort *puVar25;
  ushort *puVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  ushort *puVar29;
  int iVar30;
  int local_64;
  
  local_64 = 0;
  uVar11 = *param_1;
  uVar3 = param_1[1];
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  lVar21 = param_1[2];
  uVar2 = param_1[3];
  lVar14 = param_1[4];
  if (*(uint *)(param_1 + 7) < (uint)(int)*param_2) {
    uVar1 = (int)*param_2 + 3U & 0xfffffffc;
    uVar10 = ft_mem_realloc(uVar11,8,*(uint *)(param_1 + 7),uVar1,param_1[8],&local_64);
    param_1[8] = uVar10;
    if (local_64 != 0) {
      return local_64;
    }
    *(uint *)(param_1 + 7) = uVar1;
  }
  sVar17 = param_2[1];
  if (*(uint *)(param_1 + 5) < (int)sVar17 + 2U) {
    uVar1 = (int)sVar17 + 0xbU & 0xfffffff8;
    uVar11 = ft_mem_realloc(uVar11,0x50,*(uint *)(param_1 + 5),uVar1,param_1[6],&local_64);
    param_1[6] = uVar11;
    if (local_64 != 0) {
      return local_64;
    }
    *(uint *)(param_1 + 5) = uVar1;
    sVar17 = param_2[1];
  }
  *(int *)((long)param_1 + 0x2c) = (int)sVar17;
  sVar17 = *param_2;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(int *)((long)param_1 + 0x3c) = (int)sVar17;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  iVar9 = FT_Outline_Get_Orientation(param_2);
  if (iVar9 == 1) {
    *(undefined4 *)(param_1 + 0xd) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x12) = 1;
  }
  iVar9 = *(int *)((long)param_1 + 0x2c);
  param_1[1] = uVar3;
  param_1[2] = lVar21;
  param_1[3] = uVar2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[4] = lVar14;
  if (iVar9 != 0) {
    puVar26 = (ushort *)param_1[6];
    psVar22 = *(short **)(param_2 + 0xc);
    puVar29 = puVar26 + (long)iVar9 * 0x28;
    if (0 < iVar9) {
      puVar28 = *(undefined8 **)(param_2 + 4);
      pbVar27 = *(byte **)(param_2 + 8);
      puVar25 = puVar26 + (long)*psVar22 * 0x28;
      iVar30 = 0;
      puVar13 = puVar26;
      puVar24 = puVar25;
      do {
        puVar13[1] = 0x404;
        uVar11 = *puVar28;
        puVar13[0xc] = (ushort)uVar11;
        puVar13[0xd] = (ushort)puVar28[1];
        lVar12 = FT_MulFix(uVar11,uVar3);
        lVar12 = lVar12 + lVar21;
        *(long *)(puVar13 + 0x10) = lVar12;
        *(long *)(puVar13 + 4) = lVar12;
        lVar12 = FT_MulFix(puVar28[1],uVar2);
        lVar12 = lVar12 + lVar14;
        *(long *)(puVar13 + 0x14) = lVar12;
        *(long *)(puVar13 + 8) = lVar12;
        bVar4 = *pbVar27;
        *(ushort **)(puVar13 + 0x24) = puVar25;
        uVar18 = (ushort)((bVar4 & 3) == 2) << 1;
        if ((bVar4 & 3) == 0) {
          uVar18 = 1;
        }
        *puVar13 = uVar18;
        *(ushort **)(puVar25 + 0x20) = puVar13;
        puVar25 = puVar13;
        if ((puVar13 == puVar24) && (iVar30 = iVar30 + 1, puVar24 = puVar13, iVar30 < *param_2)) {
          puVar25 = puVar26 + (long)*(short *)(*(long *)(param_2 + 0xc) + (long)iVar30 * 2) * 0x28;
          puVar24 = puVar26 + (long)*(short *)(*(long *)(param_2 + 0xc) + (long)iVar30 * 2) * 0x28;
        }
        puVar13 = puVar13 + 0x28;
        pbVar27 = pbVar27 + 1;
        puVar28 = puVar28 + 2;
      } while (puVar13 < puVar29);
      psVar22 = *(short **)(param_2 + 0xc);
    }
    iVar30 = *(int *)((long)param_1 + 0x3c);
    puVar28 = (undefined8 *)param_1[8];
    if (0 < iVar30) {
      sVar17 = 0;
      puVar19 = puVar28;
      do {
        puVar20 = puVar19 + 1;
        *puVar19 = puVar26 + (long)(int)sVar17 * 0x28;
        sVar17 = *psVar22 + 1;
        puVar19 = puVar20;
        psVar22 = psVar22 + 1;
      } while (puVar20 < puVar28 + iVar30);
      puVar28 = (undefined8 *)param_1[8];
    }
    if (0 < iVar30) {
      puVar19 = puVar28 + iVar30;
      uVar1 = (uint)*(ushort *)(*(long *)(param_1[0x14] + 8) + 0x88) * 5 >> 9;
      do {
        puVar13 = (ushort *)*puVar28;
        do {
          puVar25 = puVar13;
          puVar13 = *(ushort **)(puVar25 + 0x24);
          if (puVar13 == (ushort *)*puVar28) {
            uVar18 = puVar25[0xd];
            break;
          }
          uVar18 = puVar25[0xd];
          lVar21 = (long)(short)puVar25[0xc] - (long)(short)puVar13[0xc];
          lVar14 = -lVar21;
          if (-1 < lVar21) {
            lVar14 = lVar21;
          }
          lVar12 = (long)(short)uVar18 - (long)(short)puVar13[0xd];
          lVar21 = -lVar12;
          if (-1 < lVar12) {
            lVar21 = lVar12;
          }
        } while (lVar21 + lVar14 < (long)(int)(uVar1 * 2 + -1));
        lVar21 = 0;
        lVar14 = 0;
        puVar25[0x18] = 0;
        puVar25[0x19] = 0;
        puVar25[0x1a] = 0;
        puVar25[0x1b] = 0;
        puVar25[0x1c] = 0;
        puVar25[0x1d] = 0;
        puVar25[0x1e] = 0;
        puVar25[0x1f] = 0;
        puVar13 = puVar25;
        puVar24 = puVar25;
        uVar6 = puVar25[0xc];
        do {
          puVar24 = *(ushort **)(puVar24 + 0x20);
          uVar7 = puVar24[0xc];
          uVar8 = puVar24[0xd];
          lVar14 = ((long)(short)uVar7 - (long)(short)uVar6) + lVar14;
          lVar12 = -lVar14;
          if (-1 < lVar14) {
            lVar12 = lVar14;
          }
          lVar21 = ((long)(short)uVar8 - (long)(short)uVar18) + lVar21;
          lVar15 = -lVar21;
          if (-1 < lVar21) {
            lVar15 = lVar21;
          }
          if (lVar15 + lVar12 < (long)(ulong)uVar1) {
            *puVar24 = *puVar24 | 0x10;
          }
          else {
            lVar15 = (long)puVar24 - (long)puVar13 >> 4;
            lVar12 = -lVar14;
            *(long *)(puVar13 + 0x18) = lVar15 * -0x3333333333333333;
            *(long *)(puVar24 + 0x1c) = lVar15 * 0x3333333333333333;
            if (lVar21 < lVar14) {
              lVar15 = lVar21;
              if (lVar21 < lVar12) {
                lVar15 = lVar14;
                lVar14 = lVar21;
              }
              uVar23 = 1;
              if (lVar21 < lVar12) {
                uVar23 = 0xfe;
              }
            }
            else {
              lVar15 = lVar14;
              lVar14 = lVar21;
              if (lVar21 < lVar12) {
                lVar15 = lVar21;
                lVar14 = lVar12;
              }
              uVar23 = 2;
              if (lVar21 < lVar12) {
                uVar23 = 0xff;
              }
            }
            puVar16 = *(ushort **)(puVar13 + 0x20);
            lVar21 = -lVar14;
            if (-1 < lVar14) {
              lVar21 = lVar14;
            }
            lVar14 = lVar15 * -0xe;
            if (-1 < lVar15) {
              lVar14 = lVar15 * 0xe;
            }
            if (lVar21 <= lVar14) {
              uVar23 = 4;
            }
            *(undefined1 *)((long)puVar13 + 3) = uVar23;
            for (; puVar16 != puVar24; puVar16 = *(ushort **)(puVar16 + 0x20)) {
              *(undefined1 *)(puVar16 + 1) = uVar23;
              *(undefined1 *)((long)puVar16 + 3) = uVar23;
            }
            lVar12 = (long)puVar25 - (long)puVar24 >> 4;
            *(undefined1 *)(puVar24 + 1) = uVar23;
            lVar14 = 0;
            lVar21 = 0;
            *(long *)(puVar24 + 0x18) = lVar12 * -0x3333333333333333;
            *(long *)(puVar25 + 0x1c) = lVar12 * 0x3333333333333333;
            puVar13 = puVar24;
          }
          uVar18 = uVar8;
          uVar6 = uVar7;
        } while (puVar24 != puVar25);
        puVar28 = puVar28 + 1;
      } while (puVar28 < puVar19);
    }
    puVar13 = puVar26;
    if (0 < iVar9) {
      do {
        if ((((*puVar13 >> 4 & 1) == 0) && ((char)puVar13[1] == '\x04')) &&
           (*(char *)((long)puVar13 + 3) == '\x04')) {
          lVar14 = *(long *)(puVar13 + 0x18);
          lVar21 = *(long *)(puVar13 + 0x1c);
          if ((-1 < ((int)(short)puVar13[lVar14 * 0x28 + 0xc] - (int)(short)puVar13[0xc] ^
                    (int)(short)puVar13[0xc] - (int)(short)puVar13[lVar21 * 0x28 + 0xc])) &&
             (-1 < ((int)(short)puVar13[0xd] - (int)(short)puVar13[lVar21 * 0x28 + 0xd] ^
                   (int)(short)puVar13[lVar14 * 0x28 + 0xd] - (int)(short)puVar13[0xd]))) {
            *puVar13 = *puVar13 | 0x10;
            lVar12 = (lVar14 - lVar21) * 0x50 >> 4;
            *(long *)(puVar13 + lVar21 * 0x28 + 0x18) = lVar12 * -0x3333333333333333;
            *(long *)(puVar13 + lVar14 * 0x28 + 0x1c) = lVar12 * 0x3333333333333333;
          }
        }
        puVar13 = puVar13 + 0x28;
      } while (puVar13 < puVar29);
      if (0 < iVar9) {
        do {
          uVar18 = *puVar26;
          if ((uVar18 >> 4 & 1) == 0) {
            if ((uVar18 & 3) == 0) {
              cVar5 = *(char *)((long)puVar26 + 3);
              if (cVar5 == (char)puVar26[1]) {
                if (cVar5 == 4) {
                  lVar14 = *(long *)(puVar26 + 0x18);
                  lVar21 = *(long *)(puVar26 + 0x1c);
                  iVar9 = ft_corner_is_flat((long)(short)puVar26[0xc] -
                                            (long)(short)puVar26[lVar21 * 0x28 + 0xc],
                                            (long)(short)puVar26[0xd] -
                                            (long)(short)puVar26[lVar21 * 0x28 + 0xd],
                                            (long)(short)puVar26[lVar14 * 0x28 + 0xc] -
                                            (long)(short)puVar26[0xc],
                                            (long)(short)puVar26[lVar14 * 0x28 + 0xd] -
                                            (long)(short)puVar26[0xd]);
                  if (iVar9 == 0) goto LAB_010a50c8;
                  lVar12 = (lVar14 - lVar21) * 0x50 >> 4;
                  *(long *)(puVar26 + lVar21 * 0x28 + 0x18) = lVar12 * -0x3333333333333333;
                  *(long *)(puVar26 + lVar14 * 0x28 + 0x1c) = lVar12 * 0x3333333333333333;
                  uVar18 = *puVar26;
                }
              }
              else if ((int)(char)puVar26[1] + (int)cVar5 != 0) goto LAB_010a50c8;
            }
            *puVar26 = uVar18 | 0x10;
          }
LAB_010a50c8:
          puVar26 = puVar26 + 0x28;
        } while (puVar26 < puVar29);
      }
    }
  }
  return local_64;
}


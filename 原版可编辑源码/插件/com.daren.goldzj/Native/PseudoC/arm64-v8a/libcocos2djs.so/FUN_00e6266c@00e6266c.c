
int FUN_00e6266c(undefined8 *param_1,ushort *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ushort uVar13;
  long lVar14;
  ushort *puVar15;
  ushort uVar16;
  int iVar17;
  short *psVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 uVar24;
  ushort *puVar25;
  ushort *puVar26;
  ushort *puVar27;
  short sVar28;
  int iVar29;
  byte *pbVar30;
  ushort *puVar31;
  int local_64;
  
  local_64 = 0;
  uVar9 = *param_1;
  uVar2 = param_1[1];
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x146) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  lVar19 = param_1[2];
  uVar16 = *param_2;
  uVar20 = param_1[3];
  lVar21 = param_1[4];
  if (uVar16 < 9) {
    if (param_1[8] == 0) {
      param_1[8] = param_1 + 0x287;
      *(undefined4 *)(param_1 + 7) = 8;
      uVar16 = param_2[1];
      goto joined_r0x00e6276c;
    }
  }
  else if (*(uint *)(param_1 + 7) < (uint)(int)(short)uVar16) {
    puVar12 = (undefined8 *)param_1[8];
    if (puVar12 == param_1 + 0x287) {
      puVar12 = (undefined8 *)0x0;
      param_1[8] = 0;
    }
    uVar1 = (int)(short)uVar16 + 3U & 0xfffffffc;
    uVar8 = FUN_00e13bcc(uVar9,8,*(uint *)(param_1 + 7),uVar1,puVar12,&local_64);
    param_1[8] = uVar8;
    if (local_64 != 0) {
      return local_64;
    }
    *(uint *)(param_1 + 7) = uVar1;
  }
  uVar16 = param_2[1];
joined_r0x00e6276c:
  iVar17 = (int)(short)uVar16;
  if ((int)(short)uVar16 + 2U < 0x61) {
    if (param_1[6] == 0) {
      param_1[6] = param_1 + 0x28f;
      *(undefined4 *)(param_1 + 5) = 0x60;
    }
  }
  else if (*(uint *)(param_1 + 5) < (int)(short)uVar16 + 2U) {
    puVar12 = (undefined8 *)param_1[6];
    if (puVar12 == param_1 + 0x28f) {
      puVar12 = (undefined8 *)0x0;
      param_1[6] = 0;
    }
    uVar1 = iVar17 + 0xbU & 0xfffffff8;
    uVar9 = FUN_00e13bcc(uVar9,0x50,*(uint *)(param_1 + 5),uVar1,puVar12,&local_64);
    param_1[6] = uVar9;
    if (local_64 != 0) {
      return local_64;
    }
    *(uint *)(param_1 + 5) = uVar1;
    iVar17 = (int)(short)param_2[1];
  }
  *(int *)((long)param_1 + 0x2c) = iVar17;
  uVar16 = *param_2;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(int *)((long)param_1 + 0x3c) = (int)(short)uVar16;
  *(undefined4 *)(param_1 + 0x14a) = 0xffffffff;
  iVar17 = FT_Outline_Get_Orientation(param_2);
  if (iVar17 == 1) {
    *(undefined4 *)(param_1 + 0xd) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x14a) = 1;
  }
  param_1[1] = uVar2;
  param_1[2] = lVar19;
  param_1[3] = uVar20;
  param_1[4] = lVar21;
  param_1[0x286] = 0;
  param_1[0x285] = 0;
  iVar17 = *(int *)((long)param_1 + 0x2c);
  if (iVar17 != 0) {
    puVar27 = (ushort *)param_1[6];
    puVar31 = puVar27 + (long)iVar17 * 0x28;
    psVar18 = *(short **)(param_2 + 0xc);
    uVar7 = (ulong)*(ushort *)(*(long *)(param_1[0x284] + 8) + 0x88) * 5 >> 9;
    if (0 < iVar17) {
      sVar28 = *psVar18;
      puVar12 = *(undefined8 **)(param_2 + 4);
      pbVar30 = *(byte **)(param_2 + 8);
      iVar29 = 0;
      puVar26 = puVar27 + (long)sVar28 * 0x28;
      puVar11 = puVar27;
      puVar25 = puVar26;
      do {
        puVar11[1] = 0x404;
        uVar9 = *puVar12;
        puVar11[0xc] = (ushort)uVar9;
        puVar11[0xd] = (ushort)puVar12[1];
        lVar10 = FT_MulFix(uVar9,uVar2);
        lVar10 = lVar10 + lVar19;
        *(long *)(puVar11 + 0x10) = lVar10;
        *(long *)(puVar11 + 4) = lVar10;
        lVar10 = FT_MulFix(puVar12[1],uVar20);
        lVar10 = lVar10 + lVar21;
        *(long *)(puVar11 + 0x14) = lVar10;
        *(long *)(puVar11 + 8) = lVar10;
        puVar22 = (undefined8 *)(*(long *)(param_2 + 4) + (long)sVar28 * 0x10);
        puVar26[0xc] = (ushort)*puVar22;
        puVar26[0xd] = (ushort)puVar22[1];
        uVar16 = (ushort)((*pbVar30 & 3) == 2) << 1;
        if ((*pbVar30 & 3) == 0) {
          uVar16 = 1;
        }
        *puVar11 = uVar16;
        lVar14 = (long)(short)puVar11[0xc] - (long)(short)puVar25[0xc];
        lVar10 = -lVar14;
        if (-1 < lVar14) {
          lVar10 = lVar14;
        }
        lVar6 = (long)(short)puVar11[0xd] - (long)(short)puVar25[0xd];
        lVar14 = -lVar6;
        if (-1 < lVar6) {
          lVar14 = lVar6;
        }
        if (lVar14 + lVar10 < (long)uVar7) {
          *puVar25 = *puVar25 | 0x20;
        }
        *(ushort **)(puVar11 + 0x24) = puVar25;
        *(ushort **)(puVar25 + 0x20) = puVar11;
        puVar25 = puVar11;
        if ((puVar11 == puVar26) &&
           (iVar29 = iVar29 + 1, puVar26 = puVar11, iVar29 < (short)*param_2)) {
          sVar28 = *(short *)(*(long *)(param_2 + 0xc) + (long)iVar29 * 2);
          puVar26 = puVar27 + (long)sVar28 * 0x28;
          puVar25 = puVar27 + (long)sVar28 * 0x28;
        }
        puVar11 = puVar11 + 0x28;
        pbVar30 = pbVar30 + 1;
        puVar12 = puVar12 + 2;
      } while (puVar11 < puVar31);
      psVar18 = *(short **)(param_2 + 0xc);
    }
    iVar29 = *(int *)((long)param_1 + 0x3c);
    if (0 < iVar29) {
      puVar22 = (undefined8 *)param_1[8];
      sVar28 = 0;
      puVar12 = puVar22;
      do {
        puVar23 = puVar12 + 1;
        *puVar12 = puVar27 + (long)(int)sVar28 * 0x28;
        sVar28 = *psVar18 + 1;
        psVar18 = psVar18 + 1;
        puVar12 = puVar23;
      } while (puVar23 < puVar22 + iVar29);
      if (0 < iVar29) {
        puVar12 = (undefined8 *)param_1[8];
        puVar22 = puVar12 + iVar29;
        do {
          puVar11 = (ushort *)*puVar12;
          do {
            puVar26 = puVar11;
            puVar11 = *(ushort **)(puVar26 + 0x24);
            if (puVar11 == (ushort *)*puVar12) {
              uVar16 = puVar26[0xd];
              break;
            }
            uVar16 = puVar26[0xd];
            lVar21 = (long)(short)puVar26[0xc] - (long)(short)puVar11[0xc];
            lVar19 = -lVar21;
            if (-1 < lVar21) {
              lVar19 = lVar21;
            }
            lVar10 = (long)(short)uVar16 - (long)(short)puVar11[0xd];
            lVar21 = -lVar10;
            if (-1 < lVar10) {
              lVar21 = lVar10;
            }
          } while (lVar21 + lVar19 < (long)((int)uVar7 * 2 + -1));
          lVar19 = 0;
          lVar21 = 0;
          puVar26[0x18] = 0;
          puVar26[0x19] = 0;
          puVar26[0x1a] = 0;
          puVar26[0x1b] = 0;
          puVar26[0x1c] = 0;
          puVar26[0x1d] = 0;
          puVar26[0x1e] = 0;
          puVar26[0x1f] = 0;
          puVar11 = puVar26;
          puVar25 = puVar26;
          uVar13 = puVar26[0xc];
          do {
            while( true ) {
              puVar25 = *(ushort **)(puVar25 + 0x20);
              uVar4 = puVar25[0xc];
              uVar5 = puVar25[0xd];
              lVar19 = ((long)(short)uVar4 - (long)(short)uVar13) + lVar19;
              lVar10 = -lVar19;
              if (-1 < lVar19) {
                lVar10 = lVar19;
              }
              lVar21 = ((long)(short)uVar5 - (long)(short)uVar16) + lVar21;
              lVar14 = -lVar21;
              if (-1 < lVar21) {
                lVar14 = lVar21;
              }
              uVar16 = uVar5;
              uVar13 = uVar4;
              if ((long)uVar7 <= lVar14 + lVar10) break;
              *puVar25 = *puVar25 | 0x10;
              if (puVar25 == puVar26) goto LAB_00e62bc4;
            }
            lVar14 = (long)puVar25 - (long)puVar11 >> 4;
            lVar10 = -lVar19;
            *(long *)(puVar11 + 0x18) = lVar14 * -0x3333333333333333;
            *(long *)(puVar25 + 0x1c) = lVar14 * 0x3333333333333333;
            if (lVar21 < lVar19) {
              lVar14 = lVar21;
              if (lVar21 < lVar10) {
                lVar14 = lVar19;
                lVar19 = -lVar21;
              }
              uVar24 = 1;
              if (lVar21 < lVar10) {
                uVar24 = 0xfe;
              }
            }
            else {
              lVar14 = lVar19;
              lVar19 = lVar21;
              if (lVar21 < lVar10) {
                lVar14 = lVar21;
                lVar19 = lVar10;
              }
              uVar24 = 2;
              if (lVar21 < lVar10) {
                uVar24 = 0xff;
              }
            }
            puVar15 = *(ushort **)(puVar11 + 0x20);
            lVar21 = -lVar14;
            if (-1 < lVar14) {
              lVar21 = lVar14;
            }
            if (lVar19 <= lVar21 * 0xe) {
              uVar24 = 4;
            }
            *(undefined1 *)((long)puVar11 + 3) = uVar24;
            for (; puVar15 != puVar25; puVar15 = *(ushort **)(puVar15 + 0x20)) {
              *(undefined1 *)(puVar15 + 1) = uVar24;
              *(undefined1 *)((long)puVar15 + 3) = uVar24;
            }
            lVar10 = (long)puVar26 - (long)puVar25 >> 4;
            *(undefined1 *)(puVar25 + 1) = uVar24;
            lVar19 = 0;
            lVar21 = 0;
            *(long *)(puVar25 + 0x18) = lVar10 * -0x3333333333333333;
            *(long *)(puVar26 + 0x1c) = lVar10 * 0x3333333333333333;
            puVar11 = puVar25;
          } while (puVar25 != puVar26);
LAB_00e62bc4:
          puVar12 = puVar12 + 1;
        } while (puVar12 < puVar22);
      }
    }
    puVar11 = puVar27;
    if (0 < iVar17) {
      do {
        if ((((*puVar11 >> 4 & 1) == 0) && ((char)puVar11[1] == '\x04')) &&
           (*(char *)((long)puVar11 + 3) == '\x04')) {
          lVar19 = *(long *)(puVar11 + 0x18);
          lVar21 = *(long *)(puVar11 + 0x1c);
          if ((-1 < ((int)(short)puVar11[lVar19 * 0x28 + 0xc] - (int)(short)puVar11[0xc] ^
                    (int)(short)puVar11[0xc] - (int)(short)puVar11[lVar21 * 0x28 + 0xc])) &&
             (-1 < ((int)(short)puVar11[0xd] - (int)(short)puVar11[lVar21 * 0x28 + 0xd] ^
                   (int)(short)puVar11[lVar19 * 0x28 + 0xd] - (int)(short)puVar11[0xd]))) {
            *puVar11 = *puVar11 | 0x10;
            lVar10 = (lVar19 - lVar21) * 0x50 >> 4;
            *(long *)(puVar11 + lVar21 * 0x28 + 0x18) = lVar10 * -0x3333333333333333;
            *(long *)(puVar11 + lVar19 * 0x28 + 0x1c) = lVar10 * 0x3333333333333333;
          }
        }
        puVar11 = puVar11 + 0x28;
      } while (puVar11 < puVar31);
      if (0 < iVar17) {
        do {
          uVar16 = *puVar27;
          if ((uVar16 >> 4 & 1) == 0) {
            if ((uVar16 & 3) == 0) {
              cVar3 = *(char *)((long)puVar27 + 3);
              if (cVar3 == (char)puVar27[1]) {
                if (cVar3 == 4) {
                  lVar19 = *(long *)(puVar27 + 0x18);
                  lVar21 = *(long *)(puVar27 + 0x1c);
                  iVar17 = FUN_00e1360c((long)(short)puVar27[0xc] -
                                        (long)(short)puVar27[lVar21 * 0x28 + 0xc],
                                        (long)(short)puVar27[0xd] -
                                        (long)(short)puVar27[lVar21 * 0x28 + 0xd],
                                        (long)(short)puVar27[lVar19 * 0x28 + 0xc] -
                                        (long)(short)puVar27[0xc],
                                        (long)(short)puVar27[lVar19 * 0x28 + 0xd] -
                                        (long)(short)puVar27[0xd]);
                  if (iVar17 == 0) goto LAB_00e62d5c;
                  lVar10 = (lVar19 - lVar21) * 0x50 >> 4;
                  *(long *)(puVar27 + lVar21 * 0x28 + 0x18) = lVar10 * -0x3333333333333333;
                  *(long *)(puVar27 + lVar19 * 0x28 + 0x1c) = lVar10 * 0x3333333333333333;
                  uVar16 = *puVar27;
                }
              }
              else if ((int)(char)puVar27[1] + (int)cVar3 != 0) goto LAB_00e62d5c;
            }
            *puVar27 = uVar16 | 0x10;
          }
LAB_00e62d5c:
          puVar27 = puVar27 + 0x28;
        } while (puVar27 < puVar31);
      }
    }
  }
  return local_64;
}


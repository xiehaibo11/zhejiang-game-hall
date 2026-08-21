
undefined8 FUN_01146adc(long param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  undefined2 uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  uint *__src;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined4 uVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined1 uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  uint *puVar31;
  long *plVar32;
  undefined4 *puVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  int iVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  puVar33 = *(undefined4 **)(param_1 + 0x18);
  iVar6 = puVar33[0x21];
  uVar7 = puVar33[0x24];
  uVar37 = (ulong)uVar7;
  uVar11 = puVar33[0x22] * iVar6;
  if (uVar7 == uVar11) {
    return 1;
  }
  lVar42 = *(long *)(puVar33 + 6);
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar14 = FUN_011473d4(puVar33,lVar42,iVar6,puVar33[0x22],param_2,FUN_01147fbc);
    return uVar14;
  }
  uVar16 = puVar33[0x31];
  uVar35 = 0;
  if (iVar6 != 0) {
    uVar35 = (int)uVar7 / iVar6;
  }
  uVar7 = uVar7 - uVar35 * iVar6;
  uVar40 = (ulong)uVar7;
  if (uVar16 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = (long)*(int *)(*(long *)(puVar33 + 0x34) +
                           (long)(((int)uVar7 >> (uVar16 & 0x1f)) +
                                 puVar33[0x32] * ((int)uVar35 >> (uVar16 & 0x1f))) * 4);
  }
  uVar7 = puVar33[0x30];
  puVar2 = puVar33 + 0x3e;
  puVar3 = (ulong *)(puVar33 + 10);
  plVar32 = (long *)(*(long *)(puVar33 + 0x38) + lVar21 * 0x238);
LAB_01146c54:
  do {
    iVar36 = (int)uVar37;
    lVar21 = 0;
    lVar29 = uVar37 << 0x20;
    uVar41 = uVar37 & 0xffffffff;
    while( true ) {
      uVar16 = puVar33[0x13];
      iVar34 = (int)lVar21;
      if (((long)(iVar6 * param_2) <= iVar36 + lVar21) || (uVar16 != 0)) {
        lVar42 = (long)(int)puVar33[0x23];
        if ((int)puVar33[0x23] < (int)uVar35) {
          FUN_0114f1dc(puVar2,lVar42,uVar35,*(long *)(puVar33 + 6) + (int)puVar33[0x21] * lVar42,
                       *(long *)(*(int **)(puVar33 + 2) + 0xe) + **(int **)(puVar33 + 2) * lVar42);
          uVar16 = puVar33[0x13];
        }
        puVar33[0x25] = uVar35;
        puVar33[0x23] = uVar35;
        if (((int)uVar11 <= iVar34 + iVar36) || (uVar16 == 0)) {
          puVar33[0x24] = iVar34 + iVar36;
          return 1;
        }
        goto LAB_01147388;
      }
      uVar16 = (int)uVar40 + iVar34;
      if ((uVar16 & uVar7) == 0) {
        uVar39 = puVar33[0x31];
        if (uVar39 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = (long)*(int *)(*(long *)(puVar33 + 0x34) +
                                 (long)(((int)uVar16 >> (uVar39 & 0x1f)) +
                                       puVar33[0x32] * ((int)uVar35 >> (uVar39 & 0x1f))) * 4);
        }
        plVar32 = (long *)(*(long *)(puVar33 + 0x38) + lVar17 * 0x238);
      }
      uVar39 = puVar33[0x12];
      if (0x1f < (int)uVar39) {
        FUN_0115f290(puVar3);
        uVar39 = puVar33[0x12];
      }
      uVar18 = *puVar3;
      lVar17 = *plVar32;
      uVar28 = uVar18 >> (uVar39 & 0x3f);
      pbVar22 = (byte *)(lVar17 + (uVar28 & 0xff) * 4);
      bVar8 = *pbVar22;
      uVar16 = bVar8 - 8;
      if (bVar8 < 8 || uVar16 == 0) {
        uVar25 = puVar33[0x13];
      }
      else {
        uVar26 = uVar39 + 8;
        puVar33[0x12] = uVar26;
        if (puVar33[0x13] == 0) {
          if (*(long *)(puVar33 + 0x10) == *(long *)(puVar33 + 0xe)) {
            uVar25 = (uint)(0x38 < (int)uVar39);
          }
          else {
            uVar25 = 0;
          }
        }
        else {
          uVar25 = 1;
        }
        puVar33[0x13] = uVar25;
        pbVar22 = pbVar22 + (ulong)((1 << (ulong)(uVar16 & 0x1f)) - 1U &
                                   (uint)(uVar18 >> (uVar26 & 0x3f))) * 4 +
                            (ulong)*(ushort *)(lVar17 + (uVar28 & 0xff) * 4 + 2) * 4;
        bVar8 = *pbVar22;
        uVar39 = uVar26;
      }
      uVar39 = uVar39 + bVar8;
      puVar33[0x12] = uVar39;
      if (uVar25 == 0) {
        if (*(long *)(puVar33 + 0x10) == *(long *)(puVar33 + 0xe)) {
          uVar16 = (uint)(0x40 < (int)uVar39);
        }
        else {
          uVar16 = 0;
        }
      }
      else {
        uVar16 = 1;
      }
      puVar33[0x13] = uVar16;
      uVar9 = *(ushort *)(pbVar22 + 2);
      iVar38 = (int)uVar41;
      uVar25 = (uint)uVar9;
      if (0xff < uVar9) break;
      *(char *)(lVar42 + iVar36 + lVar21) = (char)uVar9;
      lVar21 = lVar21 + 1;
      lVar29 = lVar29 + 0x100000000;
      uVar41 = (ulong)(iVar38 + 1);
      if (iVar6 <= (int)uVar40 + (int)lVar21) goto code_r0x01146de8;
    }
    if (0x117 < uVar25) {
LAB_01147388:
      uVar20 = 5;
      if (uVar16 == 0) {
        uVar20 = 3;
      }
      *puVar33 = uVar20;
      return 0;
    }
    if (uVar25 < 0x104) {
      uVar25 = uVar25 - 0x100;
    }
    else {
      iVar13 = FUN_0115f344(puVar3);
      uVar18 = *(ulong *)(puVar33 + 10);
      uVar39 = puVar33[0x12];
      uVar25 = iVar13 + ((uVar25 & 1 | 2) << (ulong)((int)(uVar25 - 0x102) >> 1 & 0x1f));
    }
    lVar17 = plVar32[4];
    uVar41 = uVar18 >> (uVar39 & 0x3f);
    pbVar22 = (byte *)(lVar17 + (uVar41 & 0xff) * 4);
    bVar8 = *pbVar22;
    uVar16 = bVar8 - 8;
    if (bVar8 < 8 || uVar16 == 0) {
      uVar26 = puVar33[0x13];
    }
    else {
      uVar1 = uVar39 + 8;
      puVar33[0x12] = uVar1;
      if (puVar33[0x13] == 0) {
        if (*(long *)(puVar33 + 0x10) == *(long *)(puVar33 + 0xe)) {
          uVar26 = (uint)(0x38 < (int)uVar39);
        }
        else {
          uVar26 = 0;
        }
      }
      else {
        uVar26 = 1;
      }
      puVar33[0x13] = uVar26;
      pbVar22 = pbVar22 + (ulong)((1 << (ulong)(uVar16 & 0x1f)) - 1U &
                                 (uint)(uVar18 >> (uVar1 & 0x3f))) * 4 +
                          (ulong)*(ushort *)(lVar17 + (uVar41 & 0xff) * 4 + 2) * 4;
      bVar8 = *pbVar22;
      uVar39 = uVar1;
    }
    iVar13 = uVar39 + bVar8;
    puVar33[0x12] = iVar13;
    if (uVar26 == 0) {
      uVar16 = (uint)(0x40 < iVar13 && *(long *)(puVar33 + 0x10) == *(long *)(puVar33 + 0xe));
    }
    else {
      uVar16 = 1;
    }
    puVar33[0x13] = uVar16;
    uVar9 = *(ushort *)(pbVar22 + 2);
    uVar16 = (uint)uVar9;
    if (0x1f < iVar13) {
      FUN_0115f290(puVar3);
    }
    if (3 < uVar9) {
      iVar13 = FUN_0115f344(puVar3);
      uVar16 = iVar13 + ((uVar9 & 1 | 2) << (ulong)((int)(uVar9 - 2) >> 1 & 0x1f));
    }
    uVar39 = uVar25 + 1;
    if ((int)(uVar16 + 1) < 0x79) {
      iVar13 = (8 - ((byte)(&DAT_014988cc)[(int)uVar16] & 0xf)) +
               (uint)((byte)(&DAT_014988cc)[(int)uVar16] >> 4) * iVar6;
      if (iVar13 < 2) {
        iVar13 = 1;
      }
    }
    else {
      iVar13 = uVar16 - 0x77;
    }
    if (((int)((uVar11 - iVar36) - iVar34) < (int)uVar39) || (iVar34 + iVar36 < iVar13)) {
      uVar16 = puVar33[0x13];
      goto LAB_01147388;
    }
    lVar29 = lVar29 >> 0x20;
    lVar30 = (long)iVar13;
    puVar15 = (undefined1 *)(lVar42 + lVar29);
    lVar17 = -lVar30;
    __src = (uint *)(puVar15 + -lVar30);
    if ((int)uVar39 < 8) {
LAB_01147070:
      if ((int)uVar39 <= iVar13) {
        memcpy(puVar15,__src,(long)(int)uVar39);
        goto LAB_01147298;
      }
      if ((int)uVar39 < 1) goto LAB_01147298;
      uVar41 = (ulong)uVar39;
      if (uVar39 < 0x20) {
LAB_011470c4:
        lVar19 = 0;
        goto LAB_011470c8;
      }
      lVar19 = uVar41 - (uVar39 & 0x1f);
      if (lVar19 == 0) goto LAB_011470c8;
      if (((ulong)(lVar42 + lVar29) < lVar42 + ((lVar29 + uVar41) - lVar30)) &&
         ((ulong)(lVar42 + (lVar29 - lVar30)) < lVar42 + lVar29 + uVar41)) goto LAB_011470c4;
      puVar27 = (undefined8 *)(lVar42 + 0x10 + (long)iVar38);
      lVar29 = lVar19;
      do {
        puVar4 = (undefined8 *)((long)puVar27 + lVar17);
        uVar14 = puVar4[-2];
        uVar44 = puVar4[1];
        uVar43 = *puVar4;
        lVar29 = lVar29 + -0x20;
        puVar27[-1] = puVar4[-1];
        puVar27[-2] = uVar14;
        puVar27[1] = uVar44;
        *puVar27 = uVar43;
        puVar27 = puVar27 + 4;
      } while (lVar29 != 0);
      if ((uVar39 & 0x1f) != 0) {
LAB_011470c8:
        lVar29 = uVar41 - lVar19;
        puVar15 = (undefined1 *)(lVar42 + lVar19 + (long)iVar38);
        do {
          lVar29 = lVar29 + -1;
          *puVar15 = puVar15[lVar17];
          puVar15 = puVar15 + 1;
        } while (lVar29 != 0);
      }
    }
    else {
      if (iVar13 == 4) {
        uVar16 = *__src;
        uVar26 = uVar16;
joined_r0x0114710c:
        uVar24 = (undefined1)uVar26;
      }
      else {
        if (iVar13 != 2) {
          if (iVar13 != 1) goto LAB_01147070;
          uVar26 = (uint)(byte)*__src;
          uVar16 = (uint)(byte)*__src * 0x1010101;
          goto joined_r0x0114710c;
        }
        uVar10 = (undefined2)*__src;
        uVar24 = (undefined1)uVar10;
        uVar16 = CONCAT22(uVar10,uVar10);
      }
      if (((ulong)puVar15 & 3) != 0) {
        *puVar15 = uVar24;
        uVar16 = uVar16 >> 8 | uVar16 << 0x18;
        if (((ulong)(puVar15 + 1) & 3) == 0) {
          __src = (uint *)((long)__src + 1);
          puVar15 = puVar15 + 1;
          uVar39 = uVar25;
        }
        else {
          lVar30 = lVar42 + iVar38;
          lVar29 = 0;
          do {
            lVar19 = lVar30 + lVar17 + lVar29;
            lVar5 = lVar30 + lVar29;
            uVar16 = uVar16 >> 8 | uVar16 << 0x18;
            lVar29 = lVar29 + 1;
            *(undefined1 *)(lVar5 + 1) = *(undefined1 *)(lVar19 + 1);
          } while (((int)lVar5 + 2U & 3) != 0);
          lVar30 = lVar42 + iVar38;
          __src = (uint *)(lVar30 + lVar17 + lVar29 + 1);
          puVar15 = (undefined1 *)(lVar30 + lVar29 + 1);
          uVar39 = uVar25 - (int)lVar29;
        }
      }
      uVar26 = (int)uVar39 >> 2;
      if ((int)uVar26 < 1) {
        iVar36 = 0;
        if ((int)uVar39 < 1) goto LAB_01147298;
      }
      else {
        if (uVar26 < 8) {
          lVar29 = 0;
LAB_011471f0:
          lVar17 = (ulong)uVar26 - lVar29;
          puVar31 = (uint *)(puVar15 + lVar29 * 4);
          do {
            lVar17 = lVar17 + -1;
            *puVar31 = uVar16;
            puVar31 = puVar31 + 1;
          } while (lVar17 != 0);
        }
        else {
          uVar1 = uVar39 >> 2 & 7;
          lVar29 = (ulong)uVar26 - (ulong)uVar1;
          if (lVar29 == 0) goto LAB_011471f0;
          puVar27 = (undefined8 *)(puVar15 + 0x10);
          lVar17 = lVar29;
          do {
            puVar27[-1] = CONCAT44(uVar16,uVar16);
            puVar27[-2] = CONCAT44(uVar16,uVar16);
            puVar27[1] = CONCAT44(uVar16,uVar16);
            *puVar27 = CONCAT44(uVar16,uVar16);
            lVar17 = lVar17 + -8;
            puVar27 = puVar27 + 4;
          } while (lVar17 != 0);
          if (uVar1 != 0) goto LAB_011471f0;
        }
        iVar36 = uVar26 * 4;
        if ((int)uVar39 <= iVar36) goto LAB_01147298;
      }
      lVar29 = (long)iVar36;
      lVar17 = (long)(int)uVar39;
      uVar41 = lVar17 - lVar29;
      if ((0x1f < uVar41) && (uVar18 = uVar41 & 0xffffffffffffffe0, uVar18 != 0)) {
        pbVar22 = puVar15 + lVar29;
        pbVar23 = (byte *)((long)__src + lVar29);
        if (((byte *)((long)__src + lVar17) <= pbVar22) || (puVar15 + lVar17 <= pbVar23)) {
          lVar29 = uVar18 + lVar29;
          pbVar22 = pbVar22 + 0x10;
          pbVar23 = pbVar23 + 0x10;
          uVar28 = uVar18;
          do {
            pbVar12 = pbVar23 + -8;
            uVar14 = *(undefined8 *)(pbVar23 + -0x10);
            uVar44 = *(undefined8 *)(pbVar23 + 8);
            uVar43 = *(undefined8 *)pbVar23;
            uVar28 = uVar28 - 0x20;
            pbVar23 = pbVar23 + 0x20;
            *(undefined8 *)(pbVar22 + -8) = *(undefined8 *)pbVar12;
            *(undefined8 *)(pbVar22 + -0x10) = uVar14;
            *(undefined8 *)(pbVar22 + 8) = uVar44;
            *(undefined8 *)pbVar22 = uVar43;
            pbVar22 = pbVar22 + 0x20;
          } while (uVar28 != 0);
          if (uVar41 == uVar18) goto LAB_01147298;
        }
      }
      lVar17 = lVar17 - lVar29;
      pbVar22 = (byte *)((long)__src + lVar29);
      pbVar23 = puVar15 + lVar29;
      do {
        lVar17 = lVar17 + -1;
        *pbVar23 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        pbVar23 = pbVar23 + 1;
      } while (lVar17 != 0);
    }
LAB_01147298:
    uVar40 = (uVar40 & 0xffffffff) + (ulong)uVar25 + lVar21 + 1;
    uVar39 = (uint)uVar40;
    uVar37 = (ulong)uVar25 + (uVar37 & 0xffffffff) + lVar21 + 1;
    uVar16 = uVar35;
    while (uVar35 = uVar16, uVar25 = (uint)uVar40, iVar6 <= (int)uVar39) {
      uVar16 = uVar35 + 1;
      uVar39 = uVar25 - iVar6;
      uVar40 = (ulong)uVar39;
      if ((uVar16 & 0xf) == 0) {
        lVar21 = (long)(int)puVar33[0x23];
        if ((int)puVar33[0x23] <= (int)uVar35) {
          FUN_0114f1dc(puVar2,lVar21,uVar16,*(long *)(puVar33 + 6) + (int)puVar33[0x21] * lVar21,
                       *(long *)(*(int **)(puVar33 + 2) + 0xe) + **(int **)(puVar33 + 2) * lVar21);
        }
        puVar33[0x25] = uVar16;
        puVar33[0x23] = uVar16;
      }
    }
    if (((int)uVar37 < iVar6 * param_2) && ((uVar25 & uVar7) != 0)) {
      uVar16 = puVar33[0x31];
      if (uVar16 == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = (long)*(int *)(*(long *)(puVar33 + 0x34) +
                               (long)(((int)uVar25 >> (uVar16 & 0x1f)) +
                                     puVar33[0x32] * ((int)uVar35 >> (uVar16 & 0x1f))) * 4);
      }
      plVar32 = (long *)(*(long *)(puVar33 + 0x38) + lVar21 * 0x238);
    }
  } while( true );
code_r0x01146de8:
  uVar16 = uVar35 + 1;
  uVar37 = lVar21 + (uVar37 & 0xffffffff);
  if ((uVar16 & 0xf) == 0) {
    lVar21 = (long)(int)puVar33[0x23];
    if ((int)puVar33[0x23] <= (int)uVar35) {
      FUN_0114f1dc(puVar2,lVar21,uVar16,*(long *)(puVar33 + 6) + (int)puVar33[0x21] * lVar21,
                   *(long *)(*(int **)(puVar33 + 2) + 0xe) + **(int **)(puVar33 + 2) * lVar21);
    }
    uVar40 = 0;
    puVar33[0x25] = uVar16;
    puVar33[0x23] = uVar16;
    uVar35 = uVar16;
  }
  else {
    uVar40 = 0;
    uVar35 = uVar16;
  }
  goto LAB_01146c54;
}


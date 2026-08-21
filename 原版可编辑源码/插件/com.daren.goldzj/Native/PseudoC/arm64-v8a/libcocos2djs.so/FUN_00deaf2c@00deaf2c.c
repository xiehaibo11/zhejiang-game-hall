
undefined8
FUN_00deaf2c(undefined4 *param_1,long param_2,int param_3,int param_4,int param_5,code *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong *__src;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  ulong *puVar26;
  uint *puVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long *plVar32;
  uint *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  uint *local_b0;
  uint local_70;
  
  iVar11 = param_1[0x24];
  uVar5 = param_1[0x31];
  uVar30 = 0;
  if (param_3 != 0) {
    uVar30 = iVar11 / param_3;
  }
  uVar31 = iVar11 - uVar30 * param_3;
  if (uVar5 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                           (long)(((int)uVar31 >> (uVar5 & 0x1f)) +
                                 param_1[0x32] * ((int)uVar30 >> (uVar5 & 0x1f))) * 4);
  }
  puVar2 = (undefined8 *)(param_1 + 10);
  iVar6 = param_1[0x26];
  uVar5 = param_1[0x30];
  local_b0 = (uint *)(param_2 + (long)iVar11 * 4);
  plVar32 = (long *)(*(long *)(param_1 + 0x38) + lVar13 * 0x238);
  plVar3 = (long *)(param_1 + 0x28);
  puVar1 = (uint *)(param_2 + (long)(param_4 * param_3) * 4);
  local_70 = uVar30;
  if (param_1[0x14] == 0) {
    local_70 = 0x1000000;
  }
  puVar15 = local_b0;
  plVar4 = plVar3;
  if (iVar6 < 1) {
    plVar4 = (long *)0x0;
  }
LAB_00deb0f8:
  do {
    puVar33 = puVar15;
    if ((uint *)(param_2 + (long)(param_5 * param_3) * 4) <= puVar33) {
LAB_00deba54:
      if (((param_1[0x14] == 0) || (puVar1 <= puVar33)) || (param_1[0x13] == 0)) {
        if (param_1[0x13] == 0) {
          if (param_6 != (code *)0x0) {
            (*param_6)(param_1,uVar30);
          }
          *param_1 = 0;
          uVar12 = 1;
          param_1[0x24] = (int)((ulong)((long)puVar33 - param_2) >> 2);
        }
        else {
LAB_00debabc:
          uVar12 = 0;
          *param_1 = 3;
        }
      }
      else {
        *param_1 = 5;
        *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
        *puVar2 = *(undefined8 *)(param_1 + 0x16);
        param_1[0x24] = param_1[0x20];
        if (0 < (int)param_1[0x26]) {
          FUN_00e02fdc(param_1 + 0x2c,plVar3);
        }
        uVar12 = 1;
      }
      return uVar12;
    }
    if ((int)local_70 <= (int)uVar30) {
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 0x16) = *puVar2;
      param_1[0x20] = (int)((ulong)((long)puVar33 - param_2) >> 2);
      if (0 < (int)param_1[0x26]) {
        FUN_00e02fdc(plVar3,param_1 + 0x2c);
      }
      local_70 = uVar30 + 8;
    }
    if ((uVar31 & uVar5) == 0) {
      uVar28 = param_1[0x31];
      if (uVar28 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                               (long)(((int)uVar31 >> (uVar28 & 0x1f)) +
                                     param_1[0x32] * ((int)uVar30 >> (uVar28 & 0x1f))) * 4);
      }
      plVar32 = (long *)(*(long *)(param_1 + 0x38) + lVar13 * 0x238);
    }
    if ((int)plVar32[6] != 0) {
      uVar28 = *(uint *)((long)plVar32 + 0x2c);
LAB_00deb9b8:
      *puVar33 = uVar28;
LAB_00deb9bc:
      uVar31 = uVar31 + 1;
      puVar15 = puVar33 + 1;
      if (param_3 <= (int)uVar31) {
        uVar30 = uVar30 + 1;
        if ((param_6 != (code *)0x0) && ((uVar30 & 0xf) == 0)) {
          (*param_6)(param_1,uVar30);
        }
        uVar31 = 0;
        if ((0 < iVar6) && (local_b0 < puVar15)) {
          lVar13 = *plVar4;
          puVar24 = local_b0;
          if (local_b0 <= puVar33) {
            puVar24 = puVar33;
          }
          puVar19 = local_b0 + -1;
          do {
            puVar19 = puVar19 + 1;
            *(uint *)(lVar13 + (ulong)(*puVar19 * 0x1e35a7bd >>
                                      (ulong)(*(uint *)(plVar4 + 1) & 0x1f)) * 4) = *puVar19;
          } while (puVar19 < puVar33);
          uVar31 = 0;
          local_b0 = (uint *)((long)local_b0 +
                             ((long)puVar24 + (3 - (long)local_b0) & 0xfffffffffffffffcU) + 4);
        }
      }
      goto LAB_00deb0f8;
    }
    if (0x1f < (int)param_1[0x12]) {
      FUN_00e02de8(puVar2);
    }
    if (*(int *)((long)plVar32 + 0x34) != 0) {
      uVar14 = *(ulong *)(param_1 + 10);
      uVar18 = uVar14 >> (param_1[0x12] & 0x3f) & 0x3f;
      uVar28 = *(uint *)((long)plVar32 + uVar18 * 8 + 0x3c);
      iVar11 = (int)plVar32[uVar18 + 7] + param_1[0x12];
      if ((int)plVar32[uVar18 + 7] < 0x100) {
        param_1[0x12] = iVar11;
        if (param_1[0x13] == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
            param_1[0x13] = (uint)(0x40 < iVar11);
          }
          else {
            param_1[0x13] = 0;
          }
        }
        else {
          param_1[0x13] = 1;
        }
        goto LAB_00deb9b8;
      }
      uVar22 = iVar11 - 0x100;
      param_1[0x12] = uVar22;
      if (param_1[0x13] == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
          uVar21 = (uint)(0x140 < iVar11);
          param_1[0x13] = uVar21;
        }
        else {
          uVar21 = 0;
          param_1[0x13] = 0;
        }
      }
      else {
        uVar21 = 1;
        param_1[0x13] = 1;
      }
      if (uVar28 == 0) goto LAB_00deb9bc;
      if (uVar21 == 0) goto LAB_00deb210;
      goto LAB_00deba54;
    }
    uVar22 = param_1[0x12];
    uVar14 = *(ulong *)(param_1 + 10);
    lVar13 = *plVar32;
    uVar18 = uVar14 >> (uVar22 & 0x3f);
    pbVar17 = (byte *)(lVar13 + (uVar18 & 0xff) * 4);
    uVar28 = (uint)*pbVar17;
    if (uVar28 < 8 || uVar28 - 8 == 0) {
      uVar21 = param_1[0x13];
    }
    else {
      uVar20 = uVar22 + 8;
      param_1[0x12] = uVar20;
      if (param_1[0x13] == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
          uVar21 = (uint)(0x38 < (int)uVar22);
        }
        else {
          uVar21 = 0;
        }
      }
      else {
        uVar21 = 1;
      }
      param_1[0x13] = uVar21;
      pbVar17 = pbVar17 + (ulong)((1 << (ulong)(uVar28 - 8 & 0x1f)) - 1U &
                                 (uint)(uVar14 >> (uVar20 & 0x3f))) * 4 +
                          (ulong)*(ushort *)(lVar13 + (uVar18 & 0xff) * 4 + 2) * 4;
      uVar28 = (uint)*pbVar17;
      uVar22 = uVar20;
    }
    uVar22 = uVar22 + uVar28;
    param_1[0x12] = uVar22;
    if (uVar21 == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
        uVar21 = (uint)(0x40 < (int)uVar22);
      }
      else {
        uVar21 = 0;
      }
    }
    else {
      uVar21 = 1;
    }
    param_1[0x13] = uVar21;
    uVar28 = (uint)*(ushort *)(pbVar17 + 2);
    if (uVar21 != 0) goto LAB_00deba54;
LAB_00deb210:
    if ((int)uVar28 < 0x100) {
      if ((int)plVar32[5] != 0) {
        uVar28 = *(uint *)((long)plVar32 + 0x2c) | uVar28 << 8;
        goto LAB_00deb9b8;
      }
      lVar13 = plVar32[1];
      uVar18 = uVar14 >> (uVar22 & 0x3f);
      pbVar17 = (byte *)(lVar13 + (uVar18 & 0xff) * 4);
      bVar8 = *pbVar17;
      uVar21 = bVar8 - 8;
      if (bVar8 < 8 || uVar21 == 0) {
        uVar20 = uVar22 + bVar8;
        param_1[0x12] = uVar20;
LAB_00deb7d8:
        uVar25 = (uint)(0x40 < (int)uVar20 && *(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe))
        ;
      }
      else {
        uVar20 = uVar22 + 8;
        param_1[0x12] = uVar20;
        param_1[0x13] =
             (uint)(*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe) && 0x38 < (int)uVar22);
        uVar25 = 1;
        pbVar17 = pbVar17 + (ulong)((1 << (ulong)(uVar21 & 0x1f)) - 1U &
                                   (uint)(uVar14 >> (uVar20 & 0x3f))) * 4 +
                            (ulong)*(ushort *)(lVar13 + (uVar18 & 0xff) * 4 + 2) * 4;
        uVar20 = uVar20 + *pbVar17;
        param_1[0x12] = uVar20;
        if ((*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0xe)) || ((int)uVar22 < 0x39))
        goto LAB_00deb7d8;
      }
      param_1[0x13] = uVar25;
      uVar9 = *(ushort *)(pbVar17 + 2);
      if (0x1f < (int)uVar20) {
        FUN_00e02de8(puVar2);
        uVar14 = *(ulong *)(param_1 + 10);
        uVar20 = param_1[0x12];
      }
      lVar13 = plVar32[2];
      uVar18 = uVar14 >> (uVar20 & 0x3f);
      pbVar17 = (byte *)(lVar13 + (uVar18 & 0xff) * 4);
      bVar8 = *pbVar17;
      uVar22 = bVar8 - 8;
      if (bVar8 < 8 || uVar22 == 0) {
        uVar21 = param_1[0x13];
      }
      else {
        uVar25 = uVar20 + 8;
        param_1[0x12] = uVar25;
        if (param_1[0x13] == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
            uVar21 = (uint)(0x38 < (int)uVar20);
          }
          else {
            uVar21 = 0;
          }
        }
        else {
          uVar21 = 1;
        }
        param_1[0x13] = uVar21;
        pbVar17 = pbVar17 + (ulong)((1 << (ulong)(uVar22 & 0x1f)) - 1U &
                                   (uint)(uVar14 >> (uVar25 & 0x3f))) * 4 +
                            (ulong)*(ushort *)(lVar13 + (uVar18 & 0xff) * 4 + 2) * 4;
        bVar8 = *pbVar17;
        uVar20 = uVar25;
      }
      uVar20 = uVar20 + bVar8;
      param_1[0x12] = uVar20;
      if (uVar21 == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
          uVar22 = (uint)(0x40 < (int)uVar20);
        }
        else {
          uVar22 = 0;
        }
      }
      else {
        uVar22 = 1;
      }
      param_1[0x13] = uVar22;
      lVar13 = plVar32[3];
      uVar18 = uVar14 >> (uVar20 & 0x3f);
      uVar10 = *(ushort *)(pbVar17 + 2);
      pbVar17 = (byte *)(lVar13 + (uVar18 & 0xff) * 4);
      bVar8 = *pbVar17;
      if (8 < bVar8) {
        uVar21 = uVar20 + 8;
        param_1[0x12] = uVar21;
        if (uVar22 == 0) {
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
            uVar22 = (uint)(0x38 < (int)uVar20);
          }
          else {
            uVar22 = 0;
          }
        }
        else {
          uVar22 = 1;
        }
        param_1[0x13] = uVar22;
        pbVar17 = pbVar17 + (ulong)((1 << (ulong)(bVar8 - 8 & 0x1f)) - 1U &
                                   (uint)(uVar14 >> (uVar21 & 0x3f))) * 4 +
                            (ulong)*(ushort *)(lVar13 + (uVar18 & 0xff) * 4 + 2) * 4;
        bVar8 = *pbVar17;
        uVar20 = uVar21;
      }
      iVar11 = uVar20 + bVar8;
      param_1[0x12] = iVar11;
      if (uVar22 == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
          param_1[0x13] = (uint)(0x40 < iVar11);
          if (0x40 < iVar11) goto LAB_00deba54;
        }
        else {
          param_1[0x13] = 0;
        }
        uVar28 = (uint)uVar9 << 0x10 | uVar28 << 8 | (uint)uVar10 |
                 (uint)*(ushort *)(pbVar17 + 2) << 0x18;
        goto LAB_00deb9b8;
      }
      param_1[0x13] = 1;
      goto LAB_00deba54;
    }
    if (0x117 < (int)uVar28) {
      if ((int)uVar28 < iVar6 + 0x118) {
        lVar13 = *plVar4;
        if (local_b0 < puVar33) {
          puVar15 = local_b0;
          do {
            puVar24 = puVar15 + 1;
            *(uint *)(lVar13 + (ulong)(*puVar15 * 0x1e35a7bd >>
                                      (ulong)(*(uint *)(plVar4 + 1) & 0x1f)) * 4) = *puVar15;
            puVar15 = puVar24;
          } while (puVar24 < puVar33);
          local_b0 = (uint *)((long)local_b0 +
                             ((long)puVar33 + (-1 - (long)local_b0) & 0xfffffffffffffffcU) + 4);
        }
        uVar28 = *(uint *)(lVar13 + (ulong)(uVar28 - 0x118) * 4);
        goto LAB_00deb9b8;
      }
      goto LAB_00debabc;
    }
    uVar21 = uVar28 - 0x100;
    if (0x103 < (int)uVar28) {
      iVar11 = FUN_00e02e9c(puVar2);
      uVar14 = *(ulong *)(param_1 + 10);
      uVar22 = param_1[0x12];
      uVar21 = iVar11 + ((uVar21 & 1 | 2) << (ulong)((int)(uVar28 - 0x102) >> 1 & 0x1f));
    }
    lVar13 = plVar32[4];
    uVar18 = uVar14 >> (uVar22 & 0x3f);
    pbVar17 = (byte *)(lVar13 + (uVar18 & 0xff) * 4);
    bVar8 = *pbVar17;
    uVar28 = bVar8 - 8;
    if (bVar8 < 8 || uVar28 == 0) {
      uVar20 = param_1[0x13];
    }
    else {
      uVar25 = uVar22 + 8;
      param_1[0x12] = uVar25;
      if (param_1[0x13] == 0) {
        if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe)) {
          uVar20 = (uint)(0x38 < (int)uVar22);
        }
        else {
          uVar20 = 0;
        }
      }
      else {
        uVar20 = 1;
      }
      param_1[0x13] = uVar20;
      pbVar17 = pbVar17 + (ulong)((1 << (ulong)(uVar28 & 0x1f)) - 1U &
                                 (uint)(uVar14 >> (uVar25 & 0x3f))) * 4 +
                          (ulong)*(ushort *)(lVar13 + (uVar18 & 0xff) * 4 + 2) * 4;
      bVar8 = *pbVar17;
      uVar22 = uVar25;
    }
    iVar11 = uVar22 + bVar8;
    param_1[0x12] = iVar11;
    if (uVar20 == 0) {
      uVar28 = (uint)(0x40 < iVar11 && *(long *)(param_1 + 0x10) == *(long *)(param_1 + 0xe));
    }
    else {
      uVar28 = 1;
    }
    param_1[0x13] = uVar28;
    uVar9 = *(ushort *)(pbVar17 + 2);
    uVar28 = (uint)uVar9;
    if (0x1f < iVar11) {
      FUN_00e02de8(puVar2);
    }
    if (3 < uVar9) {
      iVar11 = FUN_00e02e9c(puVar2);
      uVar28 = iVar11 + ((uVar9 & 1 | 2) << (ulong)((int)(uVar9 - 2) >> 1 & 0x1f));
    }
    if ((int)(uVar28 + 1) < 0x79) {
      iVar11 = (8 - ((byte)(&DAT_0196fd0c)[(int)uVar28] & 0xf)) +
               (uint)((byte)(&DAT_0196fd0c)[(int)uVar28] >> 4) * param_3;
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      iVar7 = param_1[0x13];
    }
    else {
      iVar11 = uVar28 - 0x77;
      iVar7 = param_1[0x13];
    }
    if (iVar7 != 0) goto LAB_00deba54;
    lVar13 = (long)iVar11;
    if ((long)puVar33 - param_2 >> 2 < lVar13) goto LAB_00debabc;
    uVar28 = uVar21 + 1;
    lVar29 = (long)(int)uVar28;
    if ((long)puVar1 - (long)puVar33 >> 2 < lVar29) goto LAB_00debabc;
    __src = (ulong *)(puVar33 + -lVar13);
    if (((((ulong)puVar33 & 3) == 0) && (3 < (int)uVar28)) && (iVar11 < 3)) {
      if (iVar11 == 1) {
        uVar22 = (uint)*__src;
        uVar18 = (ulong)uVar22;
        uVar14 = CONCAT44(uVar22,uVar22);
      }
      else {
        uVar18 = *__src;
        uVar14 = uVar18;
      }
      puVar15 = puVar33;
      uVar22 = uVar28;
      if (((uint)puVar33 >> 2 & 1) != 0) {
        __src = (ulong *)((long)__src + 4);
        *puVar33 = (uint)uVar18;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        puVar15 = puVar33 + 1;
        uVar22 = uVar21;
      }
      uVar21 = (int)uVar22 >> 1;
      if ((int)uVar21 < 1) {
        lVar13 = 0;
      }
      else {
        if (uVar21 < 4) {
          lVar13 = 0;
LAB_00deb574:
          lVar23 = (ulong)uVar21 - lVar13;
          puVar26 = (ulong *)(puVar15 + lVar13 * 2);
          do {
            lVar23 = lVar23 + -1;
            *puVar26 = uVar14;
            puVar26 = puVar26 + 1;
          } while (lVar23 != 0);
        }
        else {
          uVar20 = uVar22 >> 1 & 3;
          lVar13 = (ulong)uVar21 - (ulong)uVar20;
          if (lVar13 == 0) goto LAB_00deb574;
          puVar26 = (ulong *)(puVar15 + 4);
          lVar23 = lVar13;
          do {
            puVar26[-1] = uVar14;
            puVar26[-2] = uVar14;
            puVar26[1] = uVar14;
            *puVar26 = uVar14;
            lVar23 = lVar23 + -4;
            puVar26 = puVar26 + 4;
          } while (lVar23 != 0);
          if (uVar20 != 0) goto LAB_00deb574;
        }
        lVar13 = (long)(int)(uVar21 << 1);
      }
      if ((uVar22 & 1) != 0) {
        puVar15[lVar13] = *(uint *)((long)__src + lVar13 * 4);
      }
    }
    else if (iVar11 < (int)uVar28) {
      if (0 < (int)uVar28) {
        uVar14 = (ulong)uVar28;
        if (uVar28 < 8) {
LAB_00deb4d4:
          lVar23 = 0;
        }
        else {
          lVar23 = uVar14 - (uVar28 & 7);
          if (lVar23 != 0) {
            lVar16 = lVar23;
            puVar15 = puVar33;
            if ((puVar33 < puVar33 + (uVar14 - lVar13)) && (__src < puVar33 + uVar14))
            goto LAB_00deb4d4;
            do {
              puVar24 = puVar15 + -lVar13;
              uVar12 = *(undefined8 *)puVar24;
              uVar35 = *(undefined8 *)(puVar24 + 6);
              uVar34 = *(undefined8 *)(puVar24 + 4);
              lVar16 = lVar16 + -8;
              *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(puVar24 + 2);
              *(undefined8 *)puVar15 = uVar12;
              *(undefined8 *)(puVar15 + 6) = uVar35;
              *(undefined8 *)(puVar15 + 4) = uVar34;
              puVar15 = puVar15 + 8;
            } while (lVar16 != 0);
            if ((uVar28 & 7) == 0) goto LAB_00deb5a0;
          }
        }
        lVar16 = uVar14 - lVar23;
        puVar15 = puVar33 + lVar23;
        do {
          lVar16 = lVar16 + -1;
          *puVar15 = puVar15[-lVar13];
          puVar15 = puVar15 + 1;
        } while (lVar16 != 0);
      }
    }
    else {
      memcpy(puVar33,__src,lVar29 << 2);
    }
LAB_00deb5a0:
    uVar31 = uVar28 + uVar31;
    if (param_3 <= (int)uVar31) {
      if (param_6 == (code *)0x0) {
        do {
          uVar31 = uVar31 - param_3;
          uVar30 = uVar30 + 1;
        } while (param_3 <= (int)uVar31);
      }
      else {
        do {
          uVar30 = uVar30 + 1;
          uVar31 = uVar31 - param_3;
          if ((uVar30 & 0xf) == 0) {
            (*param_6)(param_1,uVar30);
          }
        } while (param_3 <= (int)uVar31);
      }
    }
    puVar15 = puVar33 + lVar29;
    if ((uVar31 & uVar5) != 0) {
      uVar28 = param_1[0x31];
      if (uVar28 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (long)*(int *)(*(long *)(param_1 + 0x34) +
                               (long)(((int)uVar31 >> (uVar28 & 0x1f)) +
                                     param_1[0x32] * ((int)uVar30 >> (uVar28 & 0x1f))) * 4);
      }
      plVar32 = (long *)(*(long *)(param_1 + 0x38) + lVar13 * 0x238);
    }
    if ((0 < iVar6) && (local_b0 < puVar15)) {
      puVar33 = local_b0 + 1;
      lVar13 = *plVar4;
      puVar24 = puVar15;
      if (puVar15 <= puVar33) {
        puVar24 = puVar33;
      }
      puVar19 = local_b0;
      do {
        puVar27 = puVar19 + 1;
        *(uint *)(lVar13 + (ulong)(*puVar19 * 0x1e35a7bd >> (ulong)(*(uint *)(plVar4 + 1) & 0x1f)) *
                           4) = *puVar19;
        puVar19 = puVar27;
      } while (puVar27 < puVar15);
      local_b0 = (uint *)((long)puVar33 +
                         ((long)puVar24 + (-1 - (long)local_b0) & 0xfffffffffffffffcU));
    }
  } while( true );
}



void pitch_unquant_3tap(long param_1,void *param_2,int param_3,undefined8 param_4,undefined8 param_5
                       ,long *param_6,uint param_7,uint *param_8,undefined2 *param_9,
                       undefined8 param_10,undefined8 param_11,int param_12,int param_13,
                       short param_14,int param_15)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  undefined8 *puVar21;
  short *psVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar23 = *param_6 + (long)((4 << (ulong)(*(uint *)(param_6 + 1) & 0x1f)) * param_15);
  uVar12 = speex_bits_unpack_unsigned(param_10,*(undefined4 *)((long)param_6 + 0xc));
  uVar2 = uVar12 + param_3;
  uVar13 = speex_bits_unpack_unsigned(param_10,(int)param_6[1]);
  uVar17 = (uVar13 & 0xffffffff) << 2;
  cVar8 = *(char *)(lVar23 + (-(uVar13 >> 0x1f & 1) & 0xfffffffc00000000 | uVar17));
  uVar17 = (ulong)(int)uVar17;
  cVar9 = *(char *)(lVar23 + (uVar17 | 1));
  cVar10 = *(char *)(lVar23 + (uVar17 | 2));
  uVar24 = (int)cVar8 + 0x20;
  uVar25 = (int)cVar9 + 0x20;
  uVar15 = (int)cVar10 + 0x20;
  if ((param_12 != 0) && (param_13 < (int)uVar2)) {
    iVar3 = (int)param_14 >> (3 < param_12);
    if (0x3d < iVar3) {
      iVar3 = 0x3e;
    }
    uVar5 = -(int)cVar9 - 0x20;
    if (-0x21 < cVar9) {
      uVar5 = uVar25;
    }
    uVar6 = uVar24;
    if (cVar8 < -0x1f) {
      uVar6 = -(uVar24 >> 1);
    }
    uVar7 = uVar15;
    if (cVar10 < -0x1f) {
      uVar7 = -(uVar15 >> 1);
    }
    iVar16 = (int)(short)((short)uVar5 + (short)uVar6 + (short)uVar7);
    if (iVar3 < iVar16) {
      sVar11 = 0;
      if (iVar16 != 0) {
        sVar11 = (short)((iVar3 << 0xe) / iVar16);
      }
      iVar3 = (int)sVar11;
      uVar24 = iVar3 * uVar24 >> 0xe;
      uVar25 = iVar3 * uVar25 >> 0xe;
      uVar15 = iVar3 * uVar15 >> 0xe;
    }
  }
  *param_8 = uVar2;
  *param_9 = (short)uVar24;
  param_9[1] = (short)uVar25;
  param_9[2] = (short)uVar15;
  memset(param_2,0,-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2);
  uVar6 = (-2 - uVar12) - param_3;
  uVar5 = param_7;
  if ((int)~uVar6 <= (int)param_7) {
    uVar5 = ~uVar6;
  }
  uVar7 = param_7;
  if ((int)(uVar2 + 1) < (int)param_7) {
    uVar7 = uVar2 + 1;
  }
  sVar11 = (short)(uVar15 << 7);
  if (0 < (int)uVar7) {
    iVar3 = (int)sVar11;
    uVar17 = (ulong)(int)uVar7;
    if (uVar7 < 8) {
      uVar13 = 0;
      iVar20 = 0;
    }
    else {
      uVar13 = uVar17 & 0xfffffffffffffff8;
      puVar21 = (undefined8 *)((long)param_2 + 0x10);
      iVar20 = (int)uVar13;
      iVar16 = ~uVar12 - param_3;
      uVar14 = uVar13;
      do {
        puVar1 = (undefined8 *)(param_1 + (long)iVar16 * 2);
        uVar26 = *puVar1;
        uVar27 = puVar1[1];
        uVar14 = uVar14 - 8;
        iVar16 = iVar16 + 8;
        puVar21[-1] = CONCAT44((int)((ulong)puVar21[-1] >> 0x20) +
                               iVar3 * (short)((ulong)uVar26 >> 0x30),
                               (int)puVar21[-1] + iVar3 * (short)((ulong)uVar26 >> 0x20));
        puVar21[-2] = CONCAT44((int)((ulong)puVar21[-2] >> 0x20) +
                               iVar3 * (short)((ulong)uVar26 >> 0x10),
                               (int)puVar21[-2] + iVar3 * (short)uVar26);
        puVar21[1] = CONCAT44((int)((ulong)puVar21[1] >> 0x20) +
                              iVar3 * (short)((ulong)uVar27 >> 0x30),
                              (int)puVar21[1] + iVar3 * (short)((ulong)uVar27 >> 0x20));
        *puVar21 = CONCAT44((int)((ulong)*puVar21 >> 0x20) + iVar3 * (short)((ulong)uVar27 >> 0x10),
                            (int)*puVar21 + iVar3 * (short)uVar27);
        puVar21 = puVar21 + 4;
      } while (uVar14 != 0);
      if (uVar13 == uVar17) goto LAB_00113d38;
    }
    psVar22 = (short *)(param_1 + ((long)iVar20 - (long)(int)~uVar6) * 2);
    do {
      lVar23 = uVar13 * 4;
      uVar13 = uVar13 + 1;
      *(int *)((long)param_2 + lVar23) = *(int *)((long)param_2 + lVar23) + *psVar22 * iVar3;
      psVar22 = psVar22 + 1;
    } while ((long)uVar13 < (long)uVar17);
  }
LAB_00113d38:
  uVar15 = uVar2 + 1 + uVar2;
  uVar4 = uVar15;
  if ((int)param_7 <= (int)uVar15) {
    uVar4 = param_7;
  }
  if ((int)uVar7 < (int)uVar4) {
    uVar17 = (ulong)(int)uVar5;
    lVar23 = (long)(int)uVar4;
    uVar13 = lVar23 - uVar17;
    iVar3 = (int)sVar11;
    if (7 < uVar13) {
      uVar5 = uVar6;
      if ((int)uVar6 <= (int)~param_7) {
        uVar5 = ~param_7;
      }
      iVar16 = (-2 - uVar5) + uVar12 * -2 + param_3 * -2;
      if ((iVar16 <= iVar16 + (int)(~uVar17 + lVar23)) && (~uVar17 + lVar23 >> 0x20 == 0)) {
        uVar18 = uVar13 & 0xfffffffffffffff8;
        lVar19 = uVar17 * 4;
        uVar17 = uVar18 + uVar17;
        uVar15 = ~(uVar5 + uVar15);
        puVar21 = (undefined8 *)((long)param_2 + lVar19 + 0x10);
        uVar14 = uVar18;
        do {
          puVar1 = (undefined8 *)(param_1 + (long)(int)uVar15 * 2);
          uVar26 = *puVar1;
          uVar27 = puVar1[1];
          uVar15 = uVar15 + 8;
          uVar14 = uVar14 - 8;
          puVar21[-1] = CONCAT44((int)((ulong)puVar21[-1] >> 0x20) +
                                 iVar3 * (short)((ulong)uVar26 >> 0x30),
                                 (int)puVar21[-1] + iVar3 * (short)((ulong)uVar26 >> 0x20));
          puVar21[-2] = CONCAT44((int)((ulong)puVar21[-2] >> 0x20) +
                                 iVar3 * (short)((ulong)uVar26 >> 0x10),
                                 (int)puVar21[-2] + iVar3 * (short)uVar26);
          puVar21[1] = CONCAT44((int)((ulong)puVar21[1] >> 0x20) +
                                iVar3 * (short)((ulong)uVar27 >> 0x30),
                                (int)puVar21[1] + iVar3 * (short)((ulong)uVar27 >> 0x20));
          *puVar21 = CONCAT44((int)((ulong)*puVar21 >> 0x20) +
                              iVar3 * (short)((ulong)uVar27 >> 0x10),
                              (int)*puVar21 + iVar3 * (short)uVar27);
          puVar21 = puVar21 + 4;
        } while (uVar14 != 0);
        if (uVar13 == uVar18) goto LAB_00113d98;
      }
    }
    do {
      lVar19 = uVar17 * 4;
      iVar16 = (int)uVar17;
      uVar17 = uVar17 + 1;
      *(int *)((long)param_2 + lVar19) =
           *(int *)((long)param_2 + lVar19) +
           *(short *)(param_1 + (long)(int)((uVar12 * -2 + -2 + param_3 * -2 | 1) + iVar16) * 2) *
           iVar3;
    } while ((long)uVar17 < lVar23);
  }
LAB_00113d98:
  uVar5 = -uVar6 - 2;
  uVar15 = param_7;
  if ((int)uVar5 <= (int)param_7) {
    uVar15 = uVar5;
  }
  uVar7 = uVar2;
  if ((int)param_7 <= (int)uVar2) {
    uVar7 = param_7;
  }
  sVar11 = (short)(uVar25 << 7);
  if (0 < (int)uVar7) {
    iVar3 = (int)sVar11;
    uVar17 = (ulong)(int)uVar7;
    if (uVar7 < 8) {
      uVar13 = 0;
      iVar20 = 0;
    }
    else {
      uVar13 = uVar17 & 0xfffffffffffffff8;
      puVar21 = (undefined8 *)((long)param_2 + 0x10);
      iVar20 = (int)uVar13;
      iVar16 = -uVar5;
      uVar14 = uVar13;
      do {
        puVar1 = (undefined8 *)(param_1 + (long)iVar16 * 2);
        uVar26 = *puVar1;
        uVar27 = puVar1[1];
        uVar14 = uVar14 - 8;
        iVar16 = iVar16 + 8;
        puVar21[-1] = CONCAT44((int)((ulong)puVar21[-1] >> 0x20) +
                               iVar3 * (short)((ulong)uVar26 >> 0x30),
                               (int)puVar21[-1] + iVar3 * (short)((ulong)uVar26 >> 0x20));
        puVar21[-2] = CONCAT44((int)((ulong)puVar21[-2] >> 0x20) +
                               iVar3 * (short)((ulong)uVar26 >> 0x10),
                               (int)puVar21[-2] + iVar3 * (short)uVar26);
        puVar21[1] = CONCAT44((int)((ulong)puVar21[1] >> 0x20) +
                              iVar3 * (short)((ulong)uVar27 >> 0x30),
                              (int)puVar21[1] + iVar3 * (short)((ulong)uVar27 >> 0x20));
        *puVar21 = CONCAT44((int)((ulong)*puVar21 >> 0x20) + iVar3 * (short)((ulong)uVar27 >> 0x10),
                            (int)*puVar21 + iVar3 * (short)uVar27);
        puVar21 = puVar21 + 4;
      } while (uVar14 != 0);
      if (uVar13 == uVar17) goto LAB_00113e54;
    }
    psVar22 = (short *)(param_1 + ((long)iVar20 - (long)(int)uVar5) * 2);
    do {
      lVar23 = uVar13 * 4;
      uVar13 = uVar13 + 1;
      *(int *)((long)param_2 + lVar23) = *(int *)((long)param_2 + lVar23) + *psVar22 * iVar3;
      psVar22 = psVar22 + 1;
    } while ((long)uVar13 < (long)uVar17);
  }
LAB_00113e54:
  uVar25 = uVar2 * 2;
  if ((int)param_7 <= (int)(uVar2 * 2)) {
    uVar25 = param_7;
  }
  if ((int)uVar7 < (int)uVar25) {
    uVar17 = (ulong)(int)uVar15;
    lVar23 = (long)(int)uVar25;
    uVar13 = lVar23 - uVar17;
    iVar3 = (int)sVar11;
    if (7 < uVar13) {
      uVar25 = param_7;
      if ((int)(-uVar6 - 2) <= (int)param_7) {
        uVar25 = -uVar6 - 2;
      }
      iVar16 = uVar25 + uVar2 * -2;
      if ((iVar16 <= iVar16 + (int)(~uVar17 + lVar23)) && (~uVar17 + lVar23 >> 0x20 == 0)) {
        uVar18 = uVar13 & 0xfffffffffffffff8;
        lVar19 = uVar17 * 4;
        uVar17 = uVar18 + uVar17;
        puVar21 = (undefined8 *)((long)param_2 + lVar19 + 0x10);
        uVar14 = uVar18;
        do {
          puVar1 = (undefined8 *)(param_1 + (long)iVar16 * 2);
          uVar26 = *puVar1;
          uVar27 = puVar1[1];
          iVar16 = iVar16 + 8;
          uVar14 = uVar14 - 8;
          puVar21[-1] = CONCAT44((int)((ulong)puVar21[-1] >> 0x20) +
                                 iVar3 * (short)((ulong)uVar26 >> 0x30),
                                 (int)puVar21[-1] + iVar3 * (short)((ulong)uVar26 >> 0x20));
          puVar21[-2] = CONCAT44((int)((ulong)puVar21[-2] >> 0x20) +
                                 iVar3 * (short)((ulong)uVar26 >> 0x10),
                                 (int)puVar21[-2] + iVar3 * (short)uVar26);
          puVar21[1] = CONCAT44((int)((ulong)puVar21[1] >> 0x20) +
                                iVar3 * (short)((ulong)uVar27 >> 0x30),
                                (int)puVar21[1] + iVar3 * (short)((ulong)uVar27 >> 0x20));
          *puVar21 = CONCAT44((int)((ulong)*puVar21 >> 0x20) +
                              iVar3 * (short)((ulong)uVar27 >> 0x10),
                              (int)*puVar21 + iVar3 * (short)uVar27);
          puVar21 = puVar21 + 4;
        } while (uVar14 != 0);
        if (uVar13 == uVar18) goto LAB_00113eac;
      }
    }
    do {
      lVar19 = uVar17 * 4;
      iVar16 = (int)uVar17;
      uVar17 = uVar17 + 1;
      *(int *)((long)param_2 + lVar19) =
           *(int *)((long)param_2 + lVar19) +
           *(short *)(param_1 + (long)(int)(uVar12 * -2 + param_3 * -2 + iVar16) * 2) * iVar3;
    } while ((long)uVar17 < lVar23);
  }
LAB_00113eac:
  uVar5 = -uVar6 - 3;
  uVar25 = uVar2 - 1;
  uVar15 = param_7;
  if ((int)uVar5 <= (int)param_7) {
    uVar15 = uVar5;
  }
  uVar6 = uVar25;
  if ((int)param_7 <= (int)uVar25) {
    uVar6 = param_7;
  }
  sVar11 = (short)(uVar24 << 7);
  if (0 < (int)uVar6) {
    iVar3 = (int)sVar11;
    uVar17 = (ulong)(int)uVar6;
    if (uVar6 < 8) {
      uVar13 = 0;
      iVar20 = 0;
    }
    else {
      uVar13 = uVar17 & 0xfffffffffffffff8;
      puVar21 = (undefined8 *)((long)param_2 + 0x10);
      iVar20 = (int)uVar13;
      iVar16 = (1 - uVar12) - param_3;
      uVar14 = uVar13;
      do {
        puVar1 = (undefined8 *)(param_1 + (long)iVar16 * 2);
        uVar26 = *puVar1;
        uVar27 = puVar1[1];
        uVar14 = uVar14 - 8;
        iVar16 = iVar16 + 8;
        puVar21[-1] = CONCAT44((int)((ulong)puVar21[-1] >> 0x20) +
                               iVar3 * (short)((ulong)uVar26 >> 0x30),
                               (int)puVar21[-1] + iVar3 * (short)((ulong)uVar26 >> 0x20));
        puVar21[-2] = CONCAT44((int)((ulong)puVar21[-2] >> 0x20) +
                               iVar3 * (short)((ulong)uVar26 >> 0x10),
                               (int)puVar21[-2] + iVar3 * (short)uVar26);
        puVar21[1] = CONCAT44((int)((ulong)puVar21[1] >> 0x20) +
                              iVar3 * (short)((ulong)uVar27 >> 0x30),
                              (int)puVar21[1] + iVar3 * (short)((ulong)uVar27 >> 0x20));
        *puVar21 = CONCAT44((int)((ulong)*puVar21 >> 0x20) + iVar3 * (short)((ulong)uVar27 >> 0x10),
                            (int)*puVar21 + iVar3 * (short)uVar27);
        puVar21 = puVar21 + 4;
      } while (uVar14 != 0);
      if (uVar13 == uVar17) goto LAB_00113f74;
    }
    psVar22 = (short *)(param_1 + ((long)iVar20 - (long)(int)uVar5) * 2);
    do {
      lVar23 = uVar13 * 4;
      uVar13 = uVar13 + 1;
      *(int *)((long)param_2 + lVar23) = *(int *)((long)param_2 + lVar23) + *psVar22 * iVar3;
      psVar22 = psVar22 + 1;
    } while ((long)uVar13 < (long)uVar17);
  }
LAB_00113f74:
  uVar25 = uVar25 + uVar2;
  uVar24 = uVar25;
  if ((int)param_7 <= (int)uVar25) {
    uVar24 = param_7;
  }
  if ((int)uVar6 < (int)uVar24) {
    uVar17 = (ulong)(int)uVar15;
    lVar23 = (long)(int)uVar24;
    uVar13 = lVar23 - uVar17;
    iVar3 = (int)sVar11;
    if (((7 < uVar13) &&
        (iVar16 = uVar6 + 1 + uVar12 * -2 + param_3 * -2, iVar16 <= iVar16 + (int)(~uVar17 + lVar23)
        )) && (~uVar17 + lVar23 >> 0x20 == 0)) {
      uVar18 = uVar13 & 0xfffffffffffffff8;
      lVar19 = uVar17 * 4;
      uVar17 = uVar18 + uVar17;
      iVar16 = (uVar15 - 1) - (uVar25 - 1);
      puVar21 = (undefined8 *)((long)param_2 + lVar19 + 0x10);
      uVar14 = uVar18;
      do {
        puVar1 = (undefined8 *)(param_1 + (long)iVar16 * 2);
        uVar26 = *puVar1;
        uVar27 = puVar1[1];
        iVar16 = iVar16 + 8;
        uVar14 = uVar14 - 8;
        puVar21[-1] = CONCAT44((int)((ulong)puVar21[-1] >> 0x20) +
                               iVar3 * (short)((ulong)uVar26 >> 0x30),
                               (int)puVar21[-1] + iVar3 * (short)((ulong)uVar26 >> 0x20));
        puVar21[-2] = CONCAT44((int)((ulong)puVar21[-2] >> 0x20) +
                               iVar3 * (short)((ulong)uVar26 >> 0x10),
                               (int)puVar21[-2] + iVar3 * (short)uVar26);
        puVar21[1] = CONCAT44((int)((ulong)puVar21[1] >> 0x20) +
                              iVar3 * (short)((ulong)uVar27 >> 0x30),
                              (int)puVar21[1] + iVar3 * (short)((ulong)uVar27 >> 0x20));
        *puVar21 = CONCAT44((int)((ulong)*puVar21 >> 0x20) + iVar3 * (short)((ulong)uVar27 >> 0x10),
                            (int)*puVar21 + iVar3 * (short)uVar27);
        puVar21 = puVar21 + 4;
      } while (uVar14 != 0);
      if (uVar13 == uVar18) {
        return;
      }
    }
    do {
      iVar16 = (int)uVar17;
      lVar19 = uVar17 * 4;
      uVar17 = uVar17 + 1;
      *(int *)((long)param_2 + lVar19) =
           *(int *)((long)param_2 + lVar19) +
           *(short *)(param_1 + (long)(int)(uVar12 * -2 + param_3 * -2 + iVar16 + 1) * 2) * iVar3;
    } while ((long)uVar17 < lVar23);
  }
  return;
}


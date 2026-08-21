
void speex_preprocess_estimate_update(int *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  
  iVar5 = *param_1;
  uVar28 = param_1[1];
  uVar1 = (ulong)uVar28;
  uVar23 = *(ulong *)(param_1 + 0x16);
  iVar6 = param_1[3];
  uVar29 = uVar28 * 2 - iVar5;
  param_1[0x3e] = param_1[0x3e] + 1;
  FUN_00123298();
  FUN_00123868(param_1);
  if (2 < (int)uVar28) {
    lVar7 = *(long *)(param_1 + 0x30);
    lVar9 = 1;
    lVar14 = (ulong)(uVar28 - 1) - 1;
    lVar17 = 4;
    do {
      if (*(int *)(lVar7 + lVar17) == 0) {
        puVar13 = (uint *)(*(long *)(param_1 + 0x1e) + lVar17);
        uVar30 = *puVar13;
        uVar31 = *(uint *)(*(long *)(param_1 + 0x16) + lVar17);
LAB_00123f1c:
        *puVar13 = ((int)(uVar30 << 1) >> 0x10) * 0x799a + ((uVar30 & 0x7fff) * 0x799a >> 0xf) +
                   ((uVar31 & 0xff) * 0x33300 >> 0xf) + ((int)(uVar31 << 8) >> 0x10) * 0x666;
      }
      else {
        uVar30 = *(uint *)(*(long *)(param_1 + 0x1e) + lVar17);
        uVar31 = *(uint *)(*(long *)(param_1 + 0x16) + lVar17);
        if ((int)uVar31 < (int)(uVar30 + 0x40) >> 7) {
          puVar13 = (uint *)(*(long *)(param_1 + 0x1e) + lVar9 * 4);
          goto LAB_00123f1c;
        }
      }
      lVar9 = lVar9 + 1;
      lVar14 = lVar14 + -1;
      lVar17 = lVar17 + 4;
    } while (lVar14 != 0);
  }
  if (0 < (int)uVar29) {
    iVar2 = *param_1;
    lVar17 = (long)iVar2;
    lVar9 = *(long *)(param_1 + 0x1c);
    puVar10 = *(undefined8 **)(param_1 + 0x3a);
    uVar15 = (ulong)uVar29;
    if (uVar29 < 8) {
      uVar19 = 0;
    }
    else {
      uVar29 = iVar5 + iVar2 + uVar28 * -2;
      uVar19 = 0;
      if (((int)uVar29 <= (int)(uVar29 + (int)(uVar15 - 1))) && (uVar15 - 1 >> 0x20 == 0)) {
        iVar3 = iVar5 + iVar2 + uVar28 * -2;
        uVar16 = (long)puVar10 + uVar15 * 2;
        uVar19 = 0;
        if (((undefined8 *)(lVar9 + (lVar17 + uVar15) * 2) <= puVar10 ||
             uVar16 <= (ulong)(lVar9 + lVar17 * 2)) &&
           ((undefined8 *)(param_2 + (uVar15 + (long)iVar3) * 2) <= puVar10 ||
            uVar16 <= (ulong)(param_2 + (long)iVar3 * 2))) {
          uVar19 = uVar15 & 0xfffffff8;
          puVar20 = (undefined8 *)(lVar9 + lVar17 * 2);
          uVar16 = uVar19;
          puVar22 = puVar10;
          do {
            puVar4 = (undefined8 *)
                     (param_2 + (-(ulong)(uVar29 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar29 << 1)
                     );
            uVar25 = puVar4[1];
            uVar24 = *puVar4;
            uVar27 = puVar20[1];
            uVar26 = *puVar20;
            uVar16 = uVar16 - 8;
            uVar29 = uVar29 + 8;
            puVar22[1] = CONCAT26((short)((uint)((int)(short)((ulong)uVar27 >> 0x30) *
                                                (int)(short)((ulong)uVar25 >> 0x30)) >> 0xf),
                                  CONCAT24((short)((uint)((int)(short)((ulong)uVar27 >> 0x20) *
                                                         (int)(short)((ulong)uVar25 >> 0x20)) >> 0xf
                                                  ),CONCAT22((short)((uint)((int)(short)((ulong)
                                                  uVar27 >> 0x10) *
                                                  (int)(short)((ulong)uVar25 >> 0x10)) >> 0xf),
                                                  (short)((uint)((int)(short)uVar27 *
                                                                (int)(short)uVar25) >> 0xf))));
            *puVar22 = CONCAT26((short)((uint)((int)(short)((ulong)uVar26 >> 0x30) *
                                              (int)(short)((ulong)uVar24 >> 0x30)) >> 0xf),
                                CONCAT24((short)((uint)((int)(short)((ulong)uVar26 >> 0x20) *
                                                       (int)(short)((ulong)uVar24 >> 0x20)) >> 0xf),
                                         CONCAT22((short)((uint)((int)(short)((ulong)uVar26 >> 0x10)
                                                                * (int)(short)((ulong)uVar24 >> 0x10
                                                                              )) >> 0xf),
                                                  (short)((uint)((int)(short)uVar26 *
                                                                (int)(short)uVar24) >> 0xf))));
            puVar20 = puVar20 + 2;
            puVar22 = puVar22 + 2;
          } while (uVar16 != 0);
          if (uVar19 == uVar15) goto LAB_0012407c;
        }
      }
    }
    iVar5 = iVar5 + iVar2 + (int)uVar19 + uVar28 * -2;
    lVar14 = uVar15 - uVar19;
    psVar8 = (short *)(lVar9 + (uVar19 + lVar17) * 2);
    puVar11 = (undefined2 *)((long)puVar10 + uVar19 * 2);
    do {
      lVar9 = (long)iVar5;
      lVar14 = lVar14 + -1;
      iVar5 = iVar5 + 1;
      *puVar11 = (short)((uint)((int)*psVar8 * (int)*(short *)(param_2 + lVar9 * 2)) >> 0xf);
      psVar8 = psVar8 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar14 != 0);
  }
LAB_0012407c:
  uVar29 = iVar6 + uVar28;
  if (0 < (int)uVar29) {
    uVar19 = *(ulong *)(param_1 + 0x22);
    uVar15 = (ulong)uVar29;
    if ((uVar29 < 8) || ((uVar19 < uVar23 + uVar15 * 4 && (uVar23 < uVar19 + uVar15 * 4)))) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar15 & 0xfffffff8;
      puVar10 = (undefined8 *)(uVar23 + 0x10);
      puVar20 = (undefined8 *)(uVar19 + 0x10);
      uVar21 = uVar16;
      do {
        puVar22 = puVar10 + -1;
        uVar24 = puVar10[-2];
        uVar26 = puVar10[1];
        uVar25 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar21 = uVar21 - 8;
        puVar20[-1] = *puVar22;
        puVar20[-2] = uVar24;
        puVar20[1] = uVar26;
        *puVar20 = uVar25;
        puVar20 = puVar20 + 4;
      } while (uVar21 != 0);
      if (uVar16 == uVar15) goto LAB_001240d8;
    }
    lVar9 = uVar15 - uVar16;
    puVar12 = (undefined4 *)(uVar19 + uVar16 * 4);
    puVar18 = (undefined4 *)(uVar23 + uVar16 * 4);
    do {
      lVar9 = lVar9 + -1;
      *puVar12 = *puVar18;
      puVar12 = puVar12 + 1;
      puVar18 = puVar18 + 1;
    } while (lVar9 != 0);
  }
LAB_001240d8:
  if (0 < (int)uVar28) {
    iVar5 = (int)(short)param_1[9];
    lVar9 = *(long *)(param_1 + 0x20);
    if (uVar28 < 8) {
      uVar15 = 0;
    }
    else {
      uVar15 = uVar1 & 0xfffffff8;
      iVar6 = (int)(short)param_1[9];
      puVar10 = (undefined8 *)(lVar9 + 0x10);
      uVar23 = uVar15;
      do {
        uVar25 = puVar10[-1];
        uVar24 = puVar10[-2];
        uVar27 = puVar10[1];
        uVar26 = *puVar10;
        uVar23 = uVar23 - 8;
        uVar28 = (uint)((ushort)uVar24 & 0x7fff);
        uVar29 = (uint)((ushort)uVar25 & 0x7fff);
        uVar30 = (uint)((ushort)uVar26 & 0x7fff);
        uVar31 = (uint)((ushort)uVar27 & 0x7fff);
        puVar10[-1] = CONCAT44((((int)((ulong)uVar25 >> 0x20) << 1) >> 0x10) * iVar5 +
                               ((int)((uint)((ushort)(CONCAT15((char)((ulong)uVar25 >> 0x28),
                                                               CONCAT14((char)((ulong)uVar25 >> 0x20
                                                                              ),uVar29)) >> 0x20) &
                                            0x7fff) * iVar5) >> 0xf),
                               (((int)uVar25 << 1) >> 0x10) * iVar5 + ((int)(uVar29 * iVar5) >> 0xf)
                              );
        puVar10[-2] = CONCAT44((((int)((ulong)uVar24 >> 0x20) << 1) >> 0x10) * iVar6 +
                               ((int)((uint)((ushort)(CONCAT15((char)((ulong)uVar24 >> 0x28),
                                                               CONCAT14((char)((ulong)uVar24 >> 0x20
                                                                              ),uVar28)) >> 0x20) &
                                            0x7fff) * iVar6) >> 0xf),
                               (((int)uVar24 << 1) >> 0x10) * iVar6 + ((int)(uVar28 * iVar6) >> 0xf)
                              );
        puVar10[1] = CONCAT44((((int)((ulong)uVar27 >> 0x20) << 1) >> 0x10) * iVar5 +
                              ((int)((uint)((ushort)(CONCAT15((char)((ulong)uVar27 >> 0x28),
                                                              CONCAT14((char)((ulong)uVar27 >> 0x20)
                                                                       ,uVar31)) >> 0x20) & 0x7fff)
                                    * iVar5) >> 0xf),
                              (((int)uVar27 << 1) >> 0x10) * iVar5 + ((int)(uVar31 * iVar5) >> 0xf))
        ;
        *puVar10 = CONCAT44((((int)((ulong)uVar26 >> 0x20) << 1) >> 0x10) * iVar6 +
                            ((int)((uint)((ushort)(CONCAT15((char)((ulong)uVar26 >> 0x28),
                                                            CONCAT14((char)((ulong)uVar26 >> 0x20),
                                                                     uVar30)) >> 0x20) & 0x7fff) *
                                  iVar6) >> 0xf),
                            (((int)uVar26 << 1) >> 0x10) * iVar6 + ((int)(uVar30 * iVar6) >> 0xf));
        puVar10 = puVar10 + 4;
      } while (uVar23 != 0);
      if (uVar15 == uVar1) {
        return;
      }
    }
    lVar17 = uVar1 - uVar15;
    puVar13 = (uint *)(lVar9 + uVar15 * 4);
    do {
      lVar17 = lVar17 + -1;
      *puVar13 = ((int)(*puVar13 << 1) >> 0x10) * iVar5 +
                 ((int)((*puVar13 & 0x7fff) * iVar5) >> 0xf);
      puVar13 = puVar13 + 1;
    } while (lVar17 != 0);
  }
  return;
}


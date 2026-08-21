
undefined8 FUN_00ddcb18(long param_1,void *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  void *__s;
  long lVar15;
  byte *pbVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  piVar14 = *(int **)(param_1 + 0x350);
  lVar2 = 0;
  if ((long)piVar14[2] != 0) {
    lVar2 = param_3 / (long)piVar14[2];
  }
  __s = param_2;
  if (*piVar14 != 2) {
    __s = *(void **)(piVar14 + 4);
  }
  _TIFFmemset(__s,0,lVar2 << 2);
  pbVar16 = *(byte **)(param_1 + 0x388);
  lVar15 = *(long *)(param_1 + 0x390);
  if (lVar2 < 1) {
    iVar8 = 0x28;
    do {
      iVar8 = iVar8 + -8;
      if (iVar8 < 8) goto LAB_00ddcd5c;
    } while (lVar2 == 0);
    lVar11 = 0;
  }
  else {
    uVar5 = 0x20;
    do {
      if ((int)uVar5 < 8) goto LAB_00ddcd5c;
      uVar5 = uVar5 - 8;
      lVar7 = 0;
      pbVar3 = pbVar16;
      do {
        pbVar16 = pbVar3;
        lVar11 = lVar7;
        if (lVar15 < 1) break;
        pbVar16 = pbVar3 + 1;
        uVar1 = (uint)*pbVar3;
        if ((char)*pbVar3 < '\0') {
          pbVar16 = pbVar3 + 2;
          uVar10 = lVar7 - lVar2;
          lVar15 = lVar15 + -2;
          if ((lVar7 < lVar2) && (iVar8 = uVar1 - 0x7e, iVar8 != 0)) {
            if (uVar10 <= ~(ulong)(uVar1 - 0x7f)) {
              uVar10 = ~(ulong)(uVar1 - 0x7f);
            }
            uVar10 = -uVar10;
            uVar1 = (uint)pbVar3[1] << (ulong)(uVar5 & 0x1f);
            if ((7 < uVar10) && (uVar12 = uVar10 & 0x1fffffff8, uVar12 != 0)) {
              iVar8 = iVar8 - (int)uVar12;
              lVar11 = lVar7 + uVar12;
              puVar6 = (undefined8 *)((long)__s + lVar7 * 4 + 0x10);
              uVar13 = uVar12;
              do {
                uVar21 = puVar6[-1];
                uVar4 = puVar6[-2];
                uVar23 = puVar6[1];
                uVar22 = *puVar6;
                uVar13 = uVar13 - 8;
                bVar17 = (byte)uVar1;
                bVar18 = (byte)(uVar1 >> 8);
                bVar19 = (byte)(uVar1 >> 0x10);
                bVar20 = (byte)(uVar1 >> 0x18);
                puVar6[-1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) | bVar20,
                                      CONCAT16((byte)((ulong)uVar21 >> 0x30) | bVar19,
                                               CONCAT15((byte)((ulong)uVar21 >> 0x28) | bVar18,
                                                        CONCAT14((byte)((ulong)uVar21 >> 0x20) |
                                                                 bVar17,CONCAT13((byte)((ulong)
                                                  uVar21 >> 0x18) | bVar20,
                                                  CONCAT12((byte)((ulong)uVar21 >> 0x10) | bVar19,
                                                           CONCAT11((byte)((ulong)uVar21 >> 8) |
                                                                    bVar18,(byte)uVar21 | bVar17))))
                                                  )));
                puVar6[-2] = CONCAT17((byte)((ulong)uVar4 >> 0x38) | bVar20,
                                      CONCAT16((byte)((ulong)uVar4 >> 0x30) | bVar19,
                                               CONCAT15((byte)((ulong)uVar4 >> 0x28) | bVar18,
                                                        CONCAT14((byte)((ulong)uVar4 >> 0x20) |
                                                                 bVar17,CONCAT13((byte)((ulong)uVar4
                                                                                       >> 0x18) |
                                                                                 bVar20,CONCAT12((
                                                  byte)((ulong)uVar4 >> 0x10) | bVar19,
                                                  CONCAT11((byte)((ulong)uVar4 >> 8) | bVar18,
                                                           (byte)uVar4 | bVar17)))))));
                puVar6[1] = CONCAT17((byte)((ulong)uVar23 >> 0x38) | bVar20,
                                     CONCAT16((byte)((ulong)uVar23 >> 0x30) | bVar19,
                                              CONCAT15((byte)((ulong)uVar23 >> 0x28) | bVar18,
                                                       CONCAT14((byte)((ulong)uVar23 >> 0x20) |
                                                                bVar17,CONCAT13((byte)((ulong)uVar23
                                                                                      >> 0x18) |
                                                                                bVar20,CONCAT12((
                                                  byte)((ulong)uVar23 >> 0x10) | bVar19,
                                                  CONCAT11((byte)((ulong)uVar23 >> 8) | bVar18,
                                                           (byte)uVar23 | bVar17)))))));
                *puVar6 = CONCAT17((byte)((ulong)uVar22 >> 0x38) | bVar20,
                                   CONCAT16((byte)((ulong)uVar22 >> 0x30) | bVar19,
                                            CONCAT15((byte)((ulong)uVar22 >> 0x28) | bVar18,
                                                     CONCAT14((byte)((ulong)uVar22 >> 0x20) | bVar17
                                                              ,CONCAT13((byte)((ulong)uVar22 >> 0x18
                                                                              ) | bVar20,
                                                                        CONCAT12((byte)((ulong)
                                                  uVar22 >> 0x10) | bVar19,
                                                  CONCAT11((byte)((ulong)uVar22 >> 8) | bVar18,
                                                           (byte)uVar22 | bVar17)))))));
                puVar6 = puVar6 + 4;
              } while (uVar13 != 0);
              lVar7 = lVar11;
              if (uVar12 == uVar10) goto joined_r0x00ddccdc;
            }
            iVar8 = -iVar8;
            do {
              iVar8 = iVar8 + 1;
              lVar11 = lVar7 * 4;
              lVar7 = lVar7 + 1;
              *(uint *)((long)__s + lVar11) = *(uint *)((long)__s + lVar11) | uVar1;
              lVar11 = lVar7;
              if (lVar2 <= lVar7) break;
            } while (iVar8 != 0);
          }
        }
        else {
          lVar15 = lVar15 + -1;
          if (lVar15 == 0) {
joined_r0x00ddcd14:
            lVar15 = 0;
            lVar11 = lVar7;
            break;
          }
          lVar11 = 0;
          while ((lVar9 = lVar11, lVar7 + lVar9 < lVar2 && (uVar1 != (uint)lVar9))) {
            lVar11 = lVar9 + 1;
            *(uint *)((long)__s + lVar9 * 4 + lVar7 * 4) =
                 (uint)pbVar16[lVar9] << (ulong)(uVar5 & 0x1f) |
                 *(uint *)((long)__s + lVar9 * 4 + lVar7 * 4);
            if (lVar15 == lVar11) {
              pbVar16 = pbVar3 + lVar9 + 2;
              lVar7 = lVar7 + lVar11;
              goto joined_r0x00ddcd14;
            }
          }
          lVar15 = lVar15 - lVar9;
          pbVar16 = pbVar16 + lVar9;
          lVar11 = lVar7 + lVar9;
        }
joined_r0x00ddccdc:
        lVar7 = lVar11;
        pbVar3 = pbVar16;
      } while (lVar11 < lVar2);
    } while (lVar2 == lVar11);
  }
  TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"LogLuvDecode32",
               "Not enough data at row %lu (short %llu pixels)",*(undefined4 *)(param_1 + 0x27c),
               lVar2 - lVar11);
  uVar4 = 0;
LAB_00ddcd74:
  *(byte **)(param_1 + 0x388) = pbVar16;
  *(long *)(param_1 + 0x390) = lVar15;
  return uVar4;
LAB_00ddcd5c:
  (**(code **)(piVar14 + 8))(piVar14,param_2,lVar2);
  uVar4 = 1;
  goto LAB_00ddcd74;
}


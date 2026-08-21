
undefined8 FUN_00ddd48c(long param_1,void *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  void *__s;
  long lVar16;
  byte *pbVar17;
  byte bVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  piVar15 = *(int **)(param_1 + 0x350);
  lVar3 = 0;
  if ((long)piVar15[2] != 0) {
    lVar3 = param_3 / (long)piVar15[2];
  }
  __s = param_2;
  if (*piVar15 != 1) {
    __s = *(void **)(piVar15 + 4);
  }
  _TIFFmemset(__s,0,lVar3 << 1);
  pbVar17 = *(byte **)(param_1 + 0x388);
  lVar16 = *(long *)(param_1 + 0x390);
  if (lVar3 < 1) {
    iVar9 = 0x18;
    do {
      iVar9 = iVar9 + -8;
      if (iVar9 < 8) goto LAB_00ddd6d0;
    } while (lVar3 == 0);
    lVar12 = 0;
  }
  else {
    uVar6 = 0x10;
    do {
      if ((int)uVar6 < 8) goto LAB_00ddd6d0;
      uVar6 = uVar6 - 8;
      lVar8 = 0;
      pbVar4 = pbVar17;
      do {
        pbVar17 = pbVar4;
        lVar12 = lVar8;
        if (lVar16 < 1) break;
        pbVar17 = pbVar4 + 1;
        uVar1 = (uint)*pbVar4;
        if ((char)*pbVar4 < '\0') {
          pbVar17 = pbVar4 + 2;
          uVar11 = lVar8 - lVar3;
          lVar16 = lVar16 + -2;
          if ((lVar8 < lVar3) && (iVar9 = uVar1 - 0x7e, iVar9 != 0)) {
            if (uVar11 <= ~(ulong)(uVar1 - 0x7f)) {
              uVar11 = ~(ulong)(uVar1 - 0x7f);
            }
            uVar11 = -uVar11;
            iVar2 = (uint)pbVar4[1] << (ulong)(uVar6 & 0x1f);
            if ((0xf < uVar11) && (uVar13 = uVar11 & 0x1fffffff0, uVar13 != 0)) {
              iVar9 = iVar9 - (int)uVar13;
              lVar12 = lVar8 + uVar13;
              puVar7 = (undefined8 *)((long)__s + lVar8 * 2 + 0x10);
              uVar14 = uVar13;
              do {
                uVar20 = puVar7[-1];
                uVar5 = puVar7[-2];
                uVar22 = puVar7[1];
                uVar21 = *puVar7;
                uVar14 = uVar14 - 0x10;
                bVar18 = (byte)iVar2;
                bVar19 = (byte)((uint)iVar2 >> 8);
                puVar7[-1] = CONCAT17(bVar19 | (byte)((ulong)uVar20 >> 0x38),
                                      CONCAT16(bVar18 | (byte)((ulong)uVar20 >> 0x30),
                                               CONCAT15(bVar19 | (byte)((ulong)uVar20 >> 0x28),
                                                        CONCAT14(bVar18 | (byte)((ulong)uVar20 >>
                                                                                0x20),
                                                                 CONCAT13(bVar19 | (byte)((ulong)
                                                  uVar20 >> 0x18),
                                                  CONCAT12(bVar18 | (byte)((ulong)uVar20 >> 0x10),
                                                           CONCAT11(bVar19 | (byte)((ulong)uVar20 >>
                                                                                   8),
                                                                    bVar18 | (byte)uVar20)))))));
                puVar7[-2] = CONCAT17(bVar19 | (byte)((ulong)uVar5 >> 0x38),
                                      CONCAT16(bVar18 | (byte)((ulong)uVar5 >> 0x30),
                                               CONCAT15(bVar19 | (byte)((ulong)uVar5 >> 0x28),
                                                        CONCAT14(bVar18 | (byte)((ulong)uVar5 >>
                                                                                0x20),
                                                                 CONCAT13(bVar19 | (byte)((ulong)
                                                  uVar5 >> 0x18),
                                                  CONCAT12(bVar18 | (byte)((ulong)uVar5 >> 0x10),
                                                           CONCAT11(bVar19 | (byte)((ulong)uVar5 >>
                                                                                   8),
                                                                    bVar18 | (byte)uVar5)))))));
                puVar7[1] = CONCAT17(bVar19 | (byte)((ulong)uVar22 >> 0x38),
                                     CONCAT16(bVar18 | (byte)((ulong)uVar22 >> 0x30),
                                              CONCAT15(bVar19 | (byte)((ulong)uVar22 >> 0x28),
                                                       CONCAT14(bVar18 | (byte)((ulong)uVar22 >>
                                                                               0x20),
                                                                CONCAT13(bVar19 | (byte)((ulong)
                                                  uVar22 >> 0x18),
                                                  CONCAT12(bVar18 | (byte)((ulong)uVar22 >> 0x10),
                                                           CONCAT11(bVar19 | (byte)((ulong)uVar22 >>
                                                                                   8),
                                                                    bVar18 | (byte)uVar22)))))));
                *puVar7 = CONCAT17(bVar19 | (byte)((ulong)uVar21 >> 0x38),
                                   CONCAT16(bVar18 | (byte)((ulong)uVar21 >> 0x30),
                                            CONCAT15(bVar19 | (byte)((ulong)uVar21 >> 0x28),
                                                     CONCAT14(bVar18 | (byte)((ulong)uVar21 >> 0x20)
                                                              ,CONCAT13(bVar19 | (byte)((ulong)
                                                  uVar21 >> 0x18),
                                                  CONCAT12(bVar18 | (byte)((ulong)uVar21 >> 0x10),
                                                           CONCAT11(bVar19 | (byte)((ulong)uVar21 >>
                                                                                   8),
                                                                    bVar18 | (byte)uVar21)))))));
                puVar7 = puVar7 + 4;
              } while (uVar14 != 0);
              lVar8 = lVar12;
              if (uVar13 == uVar11) goto joined_r0x00ddd650;
            }
            iVar9 = -iVar9;
            do {
              iVar9 = iVar9 + 1;
              lVar12 = lVar8 * 2;
              lVar8 = lVar8 + 1;
              *(ushort *)((long)__s + lVar12) = (ushort)iVar2 | *(ushort *)((long)__s + lVar12);
              lVar12 = lVar8;
              if (lVar3 <= lVar8) break;
            } while (iVar9 != 0);
          }
        }
        else {
          lVar16 = lVar16 + -1;
          if (lVar16 == 0) {
joined_r0x00ddd688:
            lVar16 = 0;
            lVar12 = lVar8;
            break;
          }
          lVar12 = 0;
          while ((lVar10 = lVar12, lVar8 + lVar10 < lVar3 && (uVar1 != (uint)lVar10))) {
            lVar12 = lVar10 + 1;
            *(ushort *)((long)__s + lVar10 * 2 + lVar8 * 2) =
                 (ushort)pbVar17[lVar10] << (ulong)(uVar6 & 0x1f) |
                 *(ushort *)((long)__s + lVar10 * 2 + lVar8 * 2);
            if (lVar16 == lVar12) {
              pbVar17 = pbVar4 + lVar10 + 2;
              lVar8 = lVar8 + lVar12;
              goto joined_r0x00ddd688;
            }
          }
          lVar16 = lVar16 - lVar10;
          pbVar17 = pbVar17 + lVar10;
          lVar12 = lVar8 + lVar10;
        }
joined_r0x00ddd650:
        lVar8 = lVar12;
        pbVar4 = pbVar17;
      } while (lVar12 < lVar3);
    } while (lVar3 == lVar12);
  }
  TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"LogL16Decode",
               "Not enough data at row %lu (short %llu pixels)",*(undefined4 *)(param_1 + 0x27c),
               lVar3 - lVar12);
  uVar5 = 0;
LAB_00ddd6e8:
  *(byte **)(param_1 + 0x388) = pbVar17;
  *(long *)(param_1 + 0x390) = lVar16;
  return uVar5;
LAB_00ddd6d0:
  (**(code **)(piVar15 + 8))(piVar15,param_2,lVar3);
  uVar5 = 1;
  goto LAB_00ddd6e8;
}


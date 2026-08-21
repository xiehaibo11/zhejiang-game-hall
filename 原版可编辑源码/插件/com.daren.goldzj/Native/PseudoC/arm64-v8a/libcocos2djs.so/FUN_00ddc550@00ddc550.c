
undefined8 FUN_00ddc550(long param_1,ulong *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  uint3 uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  
  piVar5 = *(int **)(param_1 + 0x350);
  if (*piVar5 != 2) {
    param_2 = *(ulong **)(piVar5 + 4);
  }
  uVar6 = *(ulong *)(param_1 + 0x390);
  pbVar9 = *(byte **)(param_1 + 0x388);
  lVar7 = 0;
  lVar3 = 0;
  if ((long)piVar5[2] != 0) {
    lVar3 = param_3 / (long)piVar5[2];
  }
  if ((0 < (long)uVar6) && (0 < lVar3)) {
    uVar8 = 0xfffffffffffffffc;
    if (-4 < (long)~uVar6) {
      uVar8 = ~uVar6;
    }
    uVar10 = (uVar6 + uVar8 + 3) / 3;
    uVar8 = -lVar3;
    uVar11 = ~uVar10;
    if (uVar8 < uVar11 || -uVar11 == lVar3) {
      uVar8 = ~uVar10;
    }
    uVar11 = -uVar8;
    lVar7 = 0;
    uVar10 = uVar6;
    if (3 < uVar11) {
      uVar12 = uVar11 & 3;
      lVar7 = uVar11 - uVar12;
      if (lVar7 != 0) {
        uVar11 = 0xfffffffffffffffc;
        if (-4 < (long)~uVar6) {
          uVar11 = ~uVar6;
        }
        uVar14 = (uVar6 + uVar11 + 3) / 3;
        uVar11 = -lVar3;
        uVar16 = ~uVar14;
        if (uVar11 < uVar16 || -uVar16 == lVar3) {
          uVar11 = ~uVar14;
        }
        if ((param_2 < pbVar9 + uVar11 * -3) && (pbVar9 < (byte *)((long)param_2 + uVar11 * -4))) {
          lVar7 = 0;
        }
        else {
          pbVar2 = pbVar9 + uVar12 * -3 + uVar8 * -3;
          uVar6 = uVar6 + uVar12 * 3 + uVar8 * 3;
          lVar13 = lVar7;
          puVar15 = param_2;
          do {
            uVar17 = *(undefined8 *)pbVar9;
            pbVar1 = pbVar9 + 8;
            lVar13 = lVar13 + -4;
            pbVar9 = pbVar9 + 0xc;
            uVar18 = *(undefined4 *)pbVar1;
            uVar4 = CONCAT12((char)((ulong)uVar17 >> 0x18),(short)uVar17) & 0xff00ff;
            puVar15[1] = (ulong)CONCAT16((char)((uint)uVar18 >> 8),
                                         CONCAT15((char)((uint)uVar18 >> 0x10),
                                                  CONCAT14((char)((uint)uVar18 >> 0x18),
                                                           (uint)CONCAT12((char)((ulong)uVar17 >>
                                                                                0x30),
                                                                          CONCAT11((char)((ulong)
                                                  uVar17 >> 0x38),(char)uVar18)))));
            *puVar15 = (ulong)CONCAT16((char)(uVar4 >> 0x10),
                                       CONCAT15((char)((ulong)uVar17 >> 0x20),
                                                CONCAT14((char)((ulong)uVar17 >> 0x28),
                                                         (uint)CONCAT12((char)uVar4,
                                                                        CONCAT11((char)((ulong)
                                                  uVar17 >> 8),(char)((ulong)uVar17 >> 0x10))))));
            puVar15 = puVar15 + 2;
          } while (lVar13 != 0);
          uVar10 = uVar6;
          pbVar9 = pbVar2;
          if (uVar12 == 0) goto LAB_00ddc76c;
        }
      }
    }
    do {
      pbVar2 = pbVar9 + 3;
      uVar6 = uVar10 - 3;
      *(uint *)((long)param_2 + lVar7 * 4) =
           (uint)*pbVar9 << 0x10 | (uint)pbVar9[1] << 8 | (uint)pbVar9[2];
      lVar7 = lVar7 + 1;
      pbVar9 = pbVar2;
      if ((long)uVar10 < 4) break;
      uVar10 = uVar6;
    } while (lVar7 < lVar3);
  }
LAB_00ddc76c:
  *(byte **)(param_1 + 0x388) = pbVar9;
  *(ulong *)(param_1 + 0x390) = uVar6;
  if (lVar3 - lVar7 != 0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"LogLuvDecode24",
                 "Not enough data at row %lu (short %llu pixels)",*(undefined4 *)(param_1 + 0x27c),
                 lVar3 - lVar7);
    return 0;
  }
  (**(code **)(piVar5 + 8))();
  return 1;
}


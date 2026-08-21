
void signal_div(ulong param_1,ulong param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_3 < 0x400001) {
    if (param_3 < 0x1001) {
      if (0 < (int)param_4) {
        iVar1 = param_3 + 0x40 >> 7;
        if (iVar1 < 6) {
          iVar1 = 5;
        }
        sVar3 = 0;
        if ((short)iVar1 != 0) {
          sVar3 = (short)(0x20000 / (int)(short)iVar1);
        }
        iVar1 = (int)sVar3;
        uVar4 = (ulong)param_4;
        if ((param_4 < 0x10) || ((param_2 < param_1 + uVar4 * 2 && (param_1 < param_2 + uVar4 * 2)))
           ) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar4 & 0xfffffff0;
          puVar9 = (undefined8 *)(param_1 + 0x10);
          puVar10 = (undefined8 *)(param_2 + 0x10);
          uVar11 = uVar6;
          do {
            uVar13 = puVar9[-1];
            uVar12 = puVar9[-2];
            uVar15 = puVar9[1];
            uVar14 = *puVar9;
            puVar9 = puVar9 + 4;
            uVar11 = uVar11 - 0x10;
            puVar10[-1] = CONCAT26((short)(iVar1 * (short)((short)((ulong)uVar13 >> 0x30) << 2) +
                                           0x20U >> 6),
                                   CONCAT24((short)(iVar1 * (short)((short)((ulong)uVar13 >> 0x20)
                                                                   << 2) + 0x20U >> 6),
                                            CONCAT22((short)(iVar1 * (short)((short)((ulong)uVar13
                                                                                    >> 0x10) << 2) +
                                                             0x20U >> 6),
                                                     (short)(iVar1 * (short)((short)uVar13 << 2) +
                                                             0x20U >> 6))));
            puVar10[-2] = CONCAT26((short)(iVar1 * (short)((short)((ulong)uVar12 >> 0x30) << 2) +
                                           0x20U >> 6),
                                   CONCAT24((short)(iVar1 * (short)((short)((ulong)uVar12 >> 0x20)
                                                                   << 2) + 0x20U >> 6),
                                            CONCAT22((short)(iVar1 * (short)((short)((ulong)uVar12
                                                                                    >> 0x10) << 2) +
                                                             0x20U >> 6),
                                                     (short)(iVar1 * (short)((short)uVar12 << 2) +
                                                             0x20U >> 6))));
            puVar10[1] = CONCAT26((short)(iVar1 * (short)((short)((ulong)uVar15 >> 0x30) << 2) +
                                          0x20U >> 6),
                                  CONCAT24((short)(iVar1 * (short)((short)((ulong)uVar15 >> 0x20) <<
                                                                  2) + 0x20U >> 6),
                                           CONCAT22((short)(iVar1 * (short)((short)((ulong)uVar15 >>
                                                                                   0x10) << 2) +
                                                            0x20U >> 6),
                                                    (short)(iVar1 * (short)((short)uVar15 << 2) +
                                                            0x20U >> 6))));
            *puVar10 = CONCAT26((short)(iVar1 * (short)((short)((ulong)uVar14 >> 0x30) << 2) + 0x20U
                                       >> 6),
                                CONCAT24((short)(iVar1 * (short)((short)((ulong)uVar14 >> 0x20) << 2
                                                                ) + 0x20U >> 6),
                                         CONCAT22((short)(iVar1 * (short)((short)((ulong)uVar14 >>
                                                                                 0x10) << 2) + 0x20U
                                                         >> 6),
                                                  (short)(iVar1 * (short)((short)uVar14 << 2) +
                                                          0x20U >> 6))));
            puVar10 = puVar10 + 4;
          } while (uVar11 != 0);
          if (uVar6 == uVar4) {
            return;
          }
        }
        lVar5 = uVar4 - uVar6;
        puVar7 = (undefined2 *)(param_2 + uVar6 * 2);
        psVar8 = (short *)(param_1 + uVar6 * 2);
        do {
          lVar5 = lVar5 + -1;
          *puVar7 = (short)(iVar1 * (short)(*psVar8 << 2) + 0x20U >> 6);
          puVar7 = puVar7 + 1;
          psVar8 = psVar8 + 1;
        } while (lVar5 != 0);
      }
    }
    else if (0 < (int)param_4) {
      iVar1 = param_3 * 0x80 + 0x8000 >> 0x10;
      sVar3 = 0;
      if (iVar1 != 0) {
        sVar3 = (short)(0x20000 / iVar1);
      }
      iVar1 = (int)sVar3;
      uVar4 = (ulong)param_4;
      if ((param_4 < 0x10) || ((param_2 < param_1 + uVar4 * 2 && (param_1 < param_2 + uVar4 * 2))))
      {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar4 & 0xfffffff0;
        puVar9 = (undefined8 *)(param_1 + 0x10);
        puVar10 = (undefined8 *)(param_2 + 0x10);
        uVar11 = uVar6;
        do {
          uVar13 = puVar9[-1];
          uVar12 = puVar9[-2];
          uVar15 = puVar9[1];
          uVar14 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar11 = uVar11 - 0x10;
          puVar10[-1] = CONCAT26((short)((uint)(iVar1 * (short)((short)((ulong)uVar13 >> 0x30) << 2)
                                               + 0x80) >> 8),
                                 CONCAT24((short)((uint)(iVar1 * (short)((short)((ulong)uVar13 >>
                                                                                0x20) << 2) + 0x80)
                                                 >> 8),
                                          CONCAT22((short)((uint)(iVar1 * (short)((short)((ulong)
                                                  uVar13 >> 0x10) << 2) + 0x80) >> 8),
                                                  (short)((uint)(iVar1 * (short)((short)uVar13 << 2)
                                                                + 0x80) >> 8))));
          puVar10[-2] = CONCAT26((short)((uint)(iVar1 * (short)((short)((ulong)uVar12 >> 0x30) << 2)
                                               + 0x80) >> 8),
                                 CONCAT24((short)((uint)(iVar1 * (short)((short)((ulong)uVar12 >>
                                                                                0x20) << 2) + 0x80)
                                                 >> 8),
                                          CONCAT22((short)((uint)(iVar1 * (short)((short)((ulong)
                                                  uVar12 >> 0x10) << 2) + 0x80) >> 8),
                                                  (short)((uint)(iVar1 * (short)((short)uVar12 << 2)
                                                                + 0x80) >> 8))));
          puVar10[1] = CONCAT26((short)((uint)(iVar1 * (short)((short)((ulong)uVar15 >> 0x30) << 2)
                                              + 0x80) >> 8),
                                CONCAT24((short)((uint)(iVar1 * (short)((short)((ulong)uVar15 >>
                                                                               0x20) << 2) + 0x80)
                                                >> 8),
                                         CONCAT22((short)((uint)(iVar1 * (short)((short)((ulong)
                                                  uVar15 >> 0x10) << 2) + 0x80) >> 8),
                                                  (short)((uint)(iVar1 * (short)((short)uVar15 << 2)
                                                                + 0x80) >> 8))));
          *puVar10 = CONCAT26((short)((uint)(iVar1 * (short)((short)((ulong)uVar14 >> 0x30) << 2) +
                                            0x80) >> 8),
                              CONCAT24((short)((uint)(iVar1 * (short)((short)((ulong)uVar14 >> 0x20)
                                                                     << 2) + 0x80) >> 8),
                                       CONCAT22((short)((uint)(iVar1 * (short)((short)((ulong)uVar14
                                                                                      >> 0x10) << 2)
                                                              + 0x80) >> 8),
                                                (short)((uint)(iVar1 * (short)((short)uVar14 << 2) +
                                                              0x80) >> 8))));
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        if (uVar6 == uVar4) {
          return;
        }
      }
      lVar5 = uVar4 - uVar6;
      puVar7 = (undefined2 *)(param_2 + uVar6 * 2);
      psVar8 = (short *)(param_1 + uVar6 * 2);
      do {
        lVar5 = lVar5 + -1;
        *puVar7 = (short)((uint)(iVar1 * (short)(*psVar8 << 2) + 0x80) >> 8);
        puVar7 = puVar7 + 1;
        psVar8 = psVar8 + 1;
      } while (lVar5 != 0);
    }
  }
  else if (0 < (int)param_4) {
    iVar1 = param_3 * 4 + 0x8000;
    iVar2 = iVar1 >> 0x10;
    sVar3 = 0;
    if (iVar2 != 0) {
      sVar3 = (short)(((iVar1 >> 0x11) + 0x200000) / iVar2);
    }
    iVar1 = (int)sVar3;
    uVar4 = (ulong)param_4;
    if ((param_4 < 0x10) || ((param_2 < param_1 + uVar4 * 2 && (param_1 < param_2 + uVar4 * 2)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffff0;
      puVar9 = (undefined8 *)(param_1 + 0x10);
      puVar10 = (undefined8 *)(param_2 + 0x10);
      uVar11 = uVar6;
      do {
        uVar13 = puVar9[-1];
        uVar12 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar11 = uVar11 - 0x10;
        puVar10[-1] = CONCAT26((short)(iVar1 * (short)((ulong)uVar13 >> 0x30) + 0x4000U >> 0xf),
                               CONCAT24((short)(iVar1 * (short)((ulong)uVar13 >> 0x20) + 0x4000U >>
                                               0xf),
                                        CONCAT22((short)(iVar1 * (short)((ulong)uVar13 >> 0x10) +
                                                         0x4000U >> 0xf),
                                                 (short)(iVar1 * (short)uVar13 + 0x4000U >> 0xf))));
        puVar10[-2] = CONCAT26((short)(iVar1 * (short)((ulong)uVar12 >> 0x30) + 0x4000U >> 0xf),
                               CONCAT24((short)(iVar1 * (short)((ulong)uVar12 >> 0x20) + 0x4000U >>
                                               0xf),
                                        CONCAT22((short)(iVar1 * (short)((ulong)uVar12 >> 0x10) +
                                                         0x4000U >> 0xf),
                                                 (short)(iVar1 * (short)uVar12 + 0x4000U >> 0xf))));
        puVar10[1] = CONCAT26((short)(iVar1 * (short)((ulong)uVar15 >> 0x30) + 0x4000U >> 0xf),
                              CONCAT24((short)(iVar1 * (short)((ulong)uVar15 >> 0x20) + 0x4000U >>
                                              0xf),
                                       CONCAT22((short)(iVar1 * (short)((ulong)uVar15 >> 0x10) +
                                                        0x4000U >> 0xf),
                                                (short)(iVar1 * (short)uVar15 + 0x4000U >> 0xf))));
        *puVar10 = CONCAT26((short)(iVar1 * (short)((ulong)uVar14 >> 0x30) + 0x4000U >> 0xf),
                            CONCAT24((short)(iVar1 * (short)((ulong)uVar14 >> 0x20) + 0x4000U >> 0xf
                                            ),CONCAT22((short)(iVar1 * (short)((ulong)uVar14 >> 0x10
                                                                              ) + 0x4000U >> 0xf),
                                                       (short)(iVar1 * (short)uVar14 + 0x4000U >>
                                                              0xf))));
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      if (uVar6 == uVar4) {
        return;
      }
    }
    lVar5 = uVar4 - uVar6;
    puVar7 = (undefined2 *)(param_2 + uVar6 * 2);
    psVar8 = (short *)(param_1 + uVar6 * 2);
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = (short)(iVar1 * *psVar8 + 0x4000U >> 0xf);
      puVar7 = puVar7 + 1;
      psVar8 = psVar8 + 1;
    } while (lVar5 != 0);
  }
  return;
}


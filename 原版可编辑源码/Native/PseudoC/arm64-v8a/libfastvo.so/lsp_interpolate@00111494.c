
void lsp_interpolate(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                    int param_5,short param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  short *psVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  undefined8 *puVar9;
  long lVar10;
  short *psVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (0 < (int)param_4) {
    iVar1 = 0;
    if (param_6 != 0) {
      iVar1 = (param_5 * 0x4000 + 0x4000) / (int)param_6;
    }
    iVar2 = (int)(short)iVar1;
    iVar1 = iVar1 * -0x10000 + 0x40000000 >> 0x10;
    uVar3 = (ulong)param_4;
    uVar4 = 0;
    if (7 < param_4) {
      lVar6 = uVar3 * 2;
      if (((undefined8 *)((long)param_1 + lVar6) <= param_3 ||
           (undefined8 *)((long)param_3 + lVar6) <= param_1) &&
         ((undefined8 *)((long)param_2 + lVar6) <= param_3 ||
          (undefined8 *)((long)param_3 + lVar6) <= param_2)) {
        uVar4 = uVar3 & 0xfffffff8;
        uVar7 = uVar4;
        puVar9 = param_3;
        puVar12 = param_2;
        puVar13 = param_1;
        do {
          uVar15 = puVar13[1];
          uVar14 = *puVar13;
          uVar17 = puVar12[1];
          uVar16 = *puVar12;
          uVar7 = uVar7 - 8;
          puVar9[1] = CONCAT26((short)(iVar2 * (short)((ulong)uVar17 >> 0x30) + 0x2000U >> 0xe) +
                               (short)(iVar1 * (short)((ulong)uVar15 >> 0x30) + 0x2000U >> 0xe),
                               CONCAT24((short)(iVar2 * (short)((ulong)uVar17 >> 0x20) + 0x2000U >>
                                               0xe) +
                                        (short)(iVar1 * (short)((ulong)uVar15 >> 0x20) + 0x2000U >>
                                               0xe),
                                        CONCAT22((short)(iVar2 * (short)((ulong)uVar17 >> 0x10) +
                                                         0x2000U >> 0xe) +
                                                 (short)(iVar1 * (short)((ulong)uVar15 >> 0x10) +
                                                         0x2000U >> 0xe),
                                                 (short)(iVar2 * (short)uVar17 + 0x2000U >> 0xe) +
                                                 (short)(iVar1 * (short)uVar15 + 0x2000U >> 0xe))));
          *puVar9 = CONCAT26((short)(iVar2 * (short)((ulong)uVar16 >> 0x30) + 0x2000U >> 0xe) +
                             (short)(iVar1 * (short)((ulong)uVar14 >> 0x30) + 0x2000U >> 0xe),
                             CONCAT24((short)(iVar2 * (short)((ulong)uVar16 >> 0x20) + 0x2000U >>
                                             0xe) +
                                      (short)(iVar1 * (short)((ulong)uVar14 >> 0x20) + 0x2000U >>
                                             0xe),
                                      CONCAT22((short)(iVar2 * (short)((ulong)uVar16 >> 0x10) +
                                                       0x2000U >> 0xe) +
                                               (short)(iVar1 * (short)((ulong)uVar14 >> 0x10) +
                                                       0x2000U >> 0xe),
                                               (short)(iVar2 * (short)uVar16 + 0x2000U >> 0xe) +
                                               (short)(iVar1 * (short)uVar14 + 0x2000U >> 0xe))));
          puVar9 = puVar9 + 2;
          puVar12 = puVar12 + 2;
          puVar13 = puVar13 + 2;
        } while (uVar7 != 0);
        if (uVar4 == uVar3) {
          return;
        }
      }
    }
    lVar10 = uVar4 * 2;
    lVar6 = uVar3 - uVar4;
    psVar5 = (short *)((long)param_3 + lVar10);
    psVar8 = (short *)((long)param_2 + lVar10);
    psVar11 = (short *)((long)param_1 + lVar10);
    do {
      lVar6 = lVar6 + -1;
      *psVar5 = (short)(iVar2 * *psVar8 + 0x2000U >> 0xe) +
                (short)(iVar1 * *psVar11 + 0x2000U >> 0xe);
      psVar5 = psVar5 + 1;
      psVar8 = psVar8 + 1;
      psVar11 = psVar11 + 1;
    } while (lVar6 != 0);
  }
  return;
}



void FUN_0113d534(long param_1,short *param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  short *psVar5;
  ulong uVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  if (param_3 < 0) {
    param_3 = param_3 + 1;
  }
  param_3 = param_3 >> 1;
  lVar10 = param_3 - lVar9;
  if (lVar10 != 0 && lVar9 <= param_3) {
    TIFFSwabArrayOfShort(param_2,param_3);
    if (lVar9 == 3) {
      sVar2 = *param_2;
      psVar5 = param_2 + 5;
      do {
        param_3 = param_3 + -3;
        sVar2 = psVar5[-2] + sVar2;
        psVar5[-2] = sVar2;
        psVar5[-1] = psVar5[-1] + psVar5[-4];
        *psVar5 = *psVar5 + psVar5[-3];
        psVar5 = psVar5 + 3;
      } while (3 < param_3);
    }
    else if (lVar9 == 4) {
      sVar2 = *param_2;
      do {
        psVar5 = param_2 + 4;
        sVar2 = *psVar5 + sVar2;
        param_3 = param_3 + -4;
        param_2[5] = param_2[5] + param_2[1];
        *psVar5 = sVar2;
        param_2[6] = param_2[6] + param_2[2];
        param_2[7] = param_2[7] + param_2[3];
        param_2 = psVar5;
      } while (4 < param_3);
    }
    else {
      uVar3 = lVar9 - 4;
      uVar4 = uVar3 & 0xfffffffffffffff0;
      do {
        if (lVar9 != 0) {
          if (lVar9 != 1) {
            if (lVar9 != 2) {
              if (4 < lVar9) {
                psVar5 = param_2;
                uVar6 = uVar3;
                if ((uVar3 < 0x10) || (uVar4 == 0)) {
LAB_0113d6a8:
                  lVar7 = uVar6 + 1;
                  do {
                    lVar7 = lVar7 + -1;
                    psVar5[lVar9] = psVar5[lVar9] + *psVar5;
                    psVar5 = psVar5 + 1;
                  } while (1 < lVar7);
                }
                else {
                  psVar5 = param_2 + uVar4;
                  uVar6 = uVar4;
                  psVar8 = param_2;
                  do {
                    psVar1 = psVar8 + lVar9;
                    uVar12 = *(undefined8 *)(psVar8 + 4);
                    uVar11 = *(undefined8 *)psVar8;
                    uVar14 = *(undefined8 *)(psVar8 + 0xc);
                    uVar13 = *(undefined8 *)(psVar8 + 8);
                    uVar16 = *(undefined8 *)(psVar1 + 4);
                    uVar15 = *(undefined8 *)psVar1;
                    uVar18 = *(undefined8 *)(psVar1 + 0xc);
                    uVar17 = *(undefined8 *)(psVar1 + 8);
                    uVar6 = uVar6 - 0x10;
                    psVar8 = psVar8 + 0x10;
                    *(ulong *)(psVar1 + 4) =
                         CONCAT26((short)((ulong)uVar16 >> 0x30) + (short)((ulong)uVar12 >> 0x30),
                                  CONCAT24((short)((ulong)uVar16 >> 0x20) +
                                           (short)((ulong)uVar12 >> 0x20),
                                           CONCAT22((short)((ulong)uVar16 >> 0x10) +
                                                    (short)((ulong)uVar12 >> 0x10),
                                                    (short)uVar16 + (short)uVar12)));
                    *(ulong *)psVar1 =
                         CONCAT26((short)((ulong)uVar15 >> 0x30) + (short)((ulong)uVar11 >> 0x30),
                                  CONCAT24((short)((ulong)uVar15 >> 0x20) +
                                           (short)((ulong)uVar11 >> 0x20),
                                           CONCAT22((short)((ulong)uVar15 >> 0x10) +
                                                    (short)((ulong)uVar11 >> 0x10),
                                                    (short)uVar15 + (short)uVar11)));
                    *(ulong *)(psVar1 + 0xc) =
                         CONCAT26((short)((ulong)uVar18 >> 0x30) + (short)((ulong)uVar14 >> 0x30),
                                  CONCAT24((short)((ulong)uVar18 >> 0x20) +
                                           (short)((ulong)uVar14 >> 0x20),
                                           CONCAT22((short)((ulong)uVar18 >> 0x10) +
                                                    (short)((ulong)uVar14 >> 0x10),
                                                    (short)uVar18 + (short)uVar14)));
                    *(ulong *)(psVar1 + 8) =
                         CONCAT26((short)((ulong)uVar17 >> 0x30) + (short)((ulong)uVar13 >> 0x30),
                                  CONCAT24((short)((ulong)uVar17 >> 0x20) +
                                           (short)((ulong)uVar13 >> 0x20),
                                           CONCAT22((short)((ulong)uVar17 >> 0x10) +
                                                    (short)((ulong)uVar13 >> 0x10),
                                                    (short)uVar17 + (short)uVar13)));
                  } while (uVar6 != 0);
                  uVar6 = uVar3 - uVar4;
                  if (uVar3 != uVar4) goto LAB_0113d6a8;
                }
                param_2 = param_2 + uVar3;
              }
              param_2[lVar9] = param_2[lVar9] + *param_2;
              psVar5 = param_2 + 1;
              psVar5[lVar9] = psVar5[lVar9] + *psVar5;
              param_2 = param_2 + 2;
            }
            param_2[lVar9] = param_2[lVar9] + *param_2;
            param_2 = param_2 + 1;
          }
          param_2[lVar9] = param_2[lVar9] + *param_2;
          param_2 = param_2 + 1;
        }
        lVar10 = lVar10 - lVar9;
      } while (0 < lVar10);
    }
  }
  return;
}


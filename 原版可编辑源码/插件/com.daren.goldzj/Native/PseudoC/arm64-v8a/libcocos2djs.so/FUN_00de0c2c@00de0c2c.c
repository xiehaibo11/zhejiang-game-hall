
void FUN_00de0c2c(long param_1,short *param_2,long param_3)

{
  short *psVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  short *psVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_3 < 0) {
    param_3 = param_3 + 1;
  }
  param_3 = param_3 >> 1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  lVar5 = param_3 - lVar3;
  if (lVar5 != 0 && lVar3 <= param_3) {
    if (lVar3 == 3) {
      sVar4 = *param_2;
      psVar2 = param_2 + 5;
      do {
        param_3 = param_3 + -3;
        sVar4 = psVar2[-2] + sVar4;
        psVar2[-2] = sVar4;
        psVar2[-1] = psVar2[-1] + psVar2[-4];
        *psVar2 = *psVar2 + psVar2[-3];
        psVar2 = psVar2 + 3;
      } while (3 < param_3);
    }
    else if (lVar3 == 4) {
      sVar4 = *param_2;
      do {
        psVar2 = param_2 + 4;
        sVar4 = *psVar2 + sVar4;
        param_3 = param_3 + -4;
        param_2[5] = param_2[5] + param_2[1];
        *psVar2 = sVar4;
        param_2[6] = param_2[6] + param_2[2];
        param_2[7] = param_2[7] + param_2[3];
        param_2 = psVar2;
      } while (4 < param_3);
    }
    else {
      uVar6 = lVar3 - 4;
      uVar7 = uVar6 & 0xfffffffffffffff0;
      do {
        if (lVar3 != 0) {
          if (lVar3 != 1) {
            if (lVar3 != 2) {
              if (4 < lVar3) {
                psVar2 = param_2;
                uVar8 = uVar6;
                if ((uVar6 < 0x10) || (uVar7 == 0)) {
LAB_00de0d80:
                  lVar9 = uVar8 + 1;
                  do {
                    lVar9 = lVar9 + -1;
                    psVar2[lVar3] = psVar2[lVar3] + *psVar2;
                    psVar2 = psVar2 + 1;
                  } while (1 < lVar9);
                }
                else {
                  psVar2 = param_2 + uVar7;
                  uVar8 = uVar7;
                  psVar10 = param_2;
                  do {
                    psVar1 = psVar10 + lVar3;
                    uVar12 = *(undefined8 *)(psVar10 + 4);
                    uVar11 = *(undefined8 *)psVar10;
                    uVar14 = *(undefined8 *)(psVar10 + 0xc);
                    uVar13 = *(undefined8 *)(psVar10 + 8);
                    uVar16 = *(undefined8 *)(psVar1 + 4);
                    uVar15 = *(undefined8 *)psVar1;
                    uVar18 = *(undefined8 *)(psVar1 + 0xc);
                    uVar17 = *(undefined8 *)(psVar1 + 8);
                    uVar8 = uVar8 - 0x10;
                    psVar10 = psVar10 + 0x10;
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
                  } while (uVar8 != 0);
                  uVar8 = uVar6 - uVar7;
                  if (uVar6 != uVar7) goto LAB_00de0d80;
                }
                param_2 = param_2 + uVar6;
              }
              param_2[lVar3] = param_2[lVar3] + *param_2;
              psVar2 = param_2 + 1;
              psVar2[lVar3] = psVar2[lVar3] + *psVar2;
              param_2 = param_2 + 2;
            }
            param_2[lVar3] = param_2[lVar3] + *param_2;
            param_2 = param_2 + 1;
          }
          param_2[lVar3] = param_2[lVar3] + *param_2;
          param_2 = param_2 + 1;
        }
        lVar5 = lVar5 - lVar3;
      } while (0 < lVar5);
    }
  }
  return;
}


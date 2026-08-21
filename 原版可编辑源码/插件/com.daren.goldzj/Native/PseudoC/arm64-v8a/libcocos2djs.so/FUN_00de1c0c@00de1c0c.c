
void FUN_00de1c0c(long param_1,long param_2,long param_3)

{
  short *psVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  short *psVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  ulong uVar10;
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
  lVar3 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  lVar4 = (param_3 >> 1) - lVar3;
  if (lVar4 != 0 && lVar3 <= param_3 >> 1) {
    uVar2 = lVar3 - 4;
    lVar5 = lVar4 + -1;
    if (uVar2 == 0) {
      do {
        psVar6 = (short *)(param_2 + lVar5 * 2);
        lVar4 = lVar5 + 1;
        lVar5 = lVar5 + -4;
        psVar6[4] = psVar6[4] - *psVar6;
        psVar6[3] = psVar6[3] - psVar6[-1];
        psVar6[2] = psVar6[2] - psVar6[-2];
        psVar6[1] = psVar6[1] - psVar6[-3];
      } while (4 < lVar4);
    }
    else if (lVar3 == 3) {
      do {
        psVar6 = (short *)(param_2 + lVar5 * 2);
        lVar4 = lVar5 + 1;
        lVar5 = lVar5 + -3;
        psVar6[3] = psVar6[3] - *psVar6;
        psVar6[2] = psVar6[2] - psVar6[-1];
        psVar6[1] = psVar6[1] - psVar6[-2];
      } while (3 < lVar4);
    }
    else {
      uVar7 = uVar2 & 0xf;
      psVar6 = (short *)(param_2 + lVar5 * 2);
      do {
        if (lVar3 != 0) {
          if (lVar3 != 1) {
            if (lVar3 != 2) {
              if (4 < lVar3) {
                psVar8 = psVar6;
                uVar10 = uVar2;
                if ((uVar2 < 0x10) || (uVar2 - uVar7 == 0)) {
LAB_00de1d68:
                  lVar5 = uVar10 + 1;
                  do {
                    lVar5 = lVar5 + -1;
                    psVar8[lVar3] = psVar8[lVar3] - *psVar8;
                    psVar8 = psVar8 + -1;
                  } while (1 < lVar5);
                }
                else {
                  psVar8 = psVar6 + (4 - lVar3) + uVar7;
                  psVar9 = psVar6 + -7;
                  lVar5 = uVar2 - uVar7;
                  do {
                    psVar1 = psVar9 + lVar3;
                    uVar14 = *(undefined8 *)(psVar9 + -4);
                    uVar13 = *(undefined8 *)(psVar9 + -8);
                    uVar12 = *(undefined8 *)(psVar9 + 4);
                    uVar11 = *(undefined8 *)psVar9;
                    uVar18 = *(undefined8 *)(psVar1 + -4);
                    uVar17 = *(undefined8 *)(psVar1 + -8);
                    uVar16 = *(undefined8 *)(psVar1 + 4);
                    uVar15 = *(undefined8 *)psVar1;
                    lVar5 = lVar5 + -0x10;
                    psVar9 = psVar9 + -0x10;
                    *(ulong *)(psVar1 + -4) =
                         CONCAT26((short)((ulong)uVar18 >> 0x30) - (short)((ulong)uVar14 >> 0x30),
                                  CONCAT24((short)((ulong)uVar18 >> 0x20) -
                                           (short)((ulong)uVar14 >> 0x20),
                                           CONCAT22((short)((ulong)uVar18 >> 0x10) -
                                                    (short)((ulong)uVar14 >> 0x10),
                                                    (short)uVar18 - (short)uVar14)));
                    *(ulong *)(psVar1 + -8) =
                         CONCAT26((short)((ulong)uVar17 >> 0x30) - (short)((ulong)uVar13 >> 0x30),
                                  CONCAT24((short)((ulong)uVar17 >> 0x20) -
                                           (short)((ulong)uVar13 >> 0x20),
                                           CONCAT22((short)((ulong)uVar17 >> 0x10) -
                                                    (short)((ulong)uVar13 >> 0x10),
                                                    (short)uVar17 - (short)uVar13)));
                    *(ulong *)(psVar1 + 4) =
                         CONCAT26((short)((ulong)uVar16 >> 0x30) - (short)((ulong)uVar12 >> 0x30),
                                  CONCAT24((short)((ulong)uVar16 >> 0x20) -
                                           (short)((ulong)uVar12 >> 0x20),
                                           CONCAT22((short)((ulong)uVar16 >> 0x10) -
                                                    (short)((ulong)uVar12 >> 0x10),
                                                    (short)uVar16 - (short)uVar12)));
                    *(ulong *)psVar1 =
                         CONCAT26((short)((ulong)uVar15 >> 0x30) - (short)((ulong)uVar11 >> 0x30),
                                  CONCAT24((short)((ulong)uVar15 >> 0x20) -
                                           (short)((ulong)uVar11 >> 0x20),
                                           CONCAT22((short)((ulong)uVar15 >> 0x10) -
                                                    (short)((ulong)uVar11 >> 0x10),
                                                    (short)uVar15 - (short)uVar11)));
                  } while (lVar5 != 0);
                  uVar10 = uVar7;
                  if (uVar7 != 0) goto LAB_00de1d68;
                }
                psVar6 = psVar6 + (4 - lVar3);
              }
              psVar6[lVar3] = psVar6[lVar3] - *psVar6;
              psVar8 = psVar6 + -1;
              psVar8[lVar3] = psVar8[lVar3] - *psVar8;
              psVar6 = psVar6 + -2;
            }
            psVar6[lVar3] = psVar6[lVar3] - *psVar6;
            psVar6 = psVar6 + -1;
          }
          psVar6[lVar3] = psVar6[lVar3] - *psVar6;
          psVar6 = psVar6 + -1;
        }
        lVar4 = lVar4 - lVar3;
      } while (0 < lVar4);
    }
  }
  return;
}


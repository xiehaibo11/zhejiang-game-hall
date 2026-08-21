
void FUN_010d2f0c(long param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 == 0) {
    return;
  }
  if (0x1f < uVar1) {
    uVar3 = uVar1 & 0xffffffffffffffe0;
    if (uVar3 == 0) goto LAB_010d2f48;
    if ((param_3 + uVar1 <= param_2) || (param_2 + uVar1 <= param_3)) {
      pcVar4 = param_2 + 0x10;
      pcVar5 = param_3 + 0x10;
      uVar6 = uVar3;
      do {
        uVar8 = *(undefined8 *)(pcVar4 + -8);
        uVar7 = *(undefined8 *)(pcVar4 + -0x10);
        uVar10 = *(undefined8 *)(pcVar4 + 8);
        uVar9 = *(undefined8 *)pcVar4;
        uVar12 = *(undefined8 *)(pcVar5 + -8);
        uVar11 = *(undefined8 *)(pcVar5 + -0x10);
        uVar14 = *(undefined8 *)(pcVar5 + 8);
        uVar13 = *(undefined8 *)pcVar5;
        uVar6 = uVar6 - 0x20;
        pcVar5 = pcVar5 + 0x20;
        *(ulong *)(pcVar4 + -8) =
             CONCAT17((char)((ulong)uVar12 >> 0x38) + (char)((ulong)uVar8 >> 0x38),
                      CONCAT16((char)((ulong)uVar12 >> 0x30) + (char)((ulong)uVar8 >> 0x30),
                               CONCAT15((char)((ulong)uVar12 >> 0x28) + (char)((ulong)uVar8 >> 0x28)
                                        ,CONCAT14((char)((ulong)uVar12 >> 0x20) +
                                                  (char)((ulong)uVar8 >> 0x20),
                                                  CONCAT13((char)((ulong)uVar12 >> 0x18) +
                                                           (char)((ulong)uVar8 >> 0x18),
                                                           CONCAT12((char)((ulong)uVar12 >> 0x10) +
                                                                    (char)((ulong)uVar8 >> 0x10),
                                                                    CONCAT11((char)((ulong)uVar12 >>
                                                                                   8) +
                                                                             (char)((ulong)uVar8 >>
                                                                                   8),(char)uVar12 +
                                                                                      (char)uVar8)))
                                                 ))));
        *(ulong *)(pcVar4 + -0x10) =
             CONCAT17((char)((ulong)uVar11 >> 0x38) + (char)((ulong)uVar7 >> 0x38),
                      CONCAT16((char)((ulong)uVar11 >> 0x30) + (char)((ulong)uVar7 >> 0x30),
                               CONCAT15((char)((ulong)uVar11 >> 0x28) + (char)((ulong)uVar7 >> 0x28)
                                        ,CONCAT14((char)((ulong)uVar11 >> 0x20) +
                                                  (char)((ulong)uVar7 >> 0x20),
                                                  CONCAT13((char)((ulong)uVar11 >> 0x18) +
                                                           (char)((ulong)uVar7 >> 0x18),
                                                           CONCAT12((char)((ulong)uVar11 >> 0x10) +
                                                                    (char)((ulong)uVar7 >> 0x10),
                                                                    CONCAT11((char)((ulong)uVar11 >>
                                                                                   8) +
                                                                             (char)((ulong)uVar7 >>
                                                                                   8),(char)uVar11 +
                                                                                      (char)uVar7)))
                                                 ))));
        *(ulong *)(pcVar4 + 8) =
             CONCAT17((char)((ulong)uVar14 >> 0x38) + (char)((ulong)uVar10 >> 0x38),
                      CONCAT16((char)((ulong)uVar14 >> 0x30) + (char)((ulong)uVar10 >> 0x30),
                               CONCAT15((char)((ulong)uVar14 >> 0x28) +
                                        (char)((ulong)uVar10 >> 0x28),
                                        CONCAT14((char)((ulong)uVar14 >> 0x20) +
                                                 (char)((ulong)uVar10 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar14 >> 0x18) +
                                                          (char)((ulong)uVar10 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar14 >> 0x10) +
                                                                   (char)((ulong)uVar10 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar14 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar10 >>
                                                                                  8),(char)uVar14 +
                                                                                     (char)uVar10)))
                                                ))));
        *(ulong *)pcVar4 =
             CONCAT17((char)((ulong)uVar13 >> 0x38) + (char)((ulong)uVar9 >> 0x38),
                      CONCAT16((char)((ulong)uVar13 >> 0x30) + (char)((ulong)uVar9 >> 0x30),
                               CONCAT15((char)((ulong)uVar13 >> 0x28) + (char)((ulong)uVar9 >> 0x28)
                                        ,CONCAT14((char)((ulong)uVar13 >> 0x20) +
                                                  (char)((ulong)uVar9 >> 0x20),
                                                  CONCAT13((char)((ulong)uVar13 >> 0x18) +
                                                           (char)((ulong)uVar9 >> 0x18),
                                                           CONCAT12((char)((ulong)uVar13 >> 0x10) +
                                                                    (char)((ulong)uVar9 >> 0x10),
                                                                    CONCAT11((char)((ulong)uVar13 >>
                                                                                   8) +
                                                                             (char)((ulong)uVar9 >>
                                                                                   8),(char)uVar13 +
                                                                                      (char)uVar9)))
                                                 ))));
        pcVar4 = pcVar4 + 0x20;
      } while (uVar6 != 0);
      param_3 = param_3 + uVar3;
      param_2 = param_2 + uVar3;
      if (uVar1 == uVar3) {
        return;
      }
      goto LAB_010d2f48;
    }
  }
  uVar3 = 0;
LAB_010d2f48:
  lVar2 = uVar1 - uVar3;
  do {
                    /* try { // try from 010d2f50 to 011d2f57 has its CatchHandler @ 010d3554 */
    lVar2 = lVar2 + -1;
                    /* try { // try from 010d2f58 to 011d2faf has its CatchHandler @ 010d27c8 */
    *param_2 = *param_3 + *param_2;
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  } while (lVar2 != 0);
  return;
}


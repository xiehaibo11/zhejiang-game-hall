
void FUN_0113cf08(long param_1,char *param_2,long param_3)

{
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  if (lVar5 < param_3) {
                    /* try { // try from 0113cf18 to 0123cf1b has its CatchHandler @ 0113cf24 */
    uVar1 = lVar5 - 4;
                    /* try { // try from 0113cf1c to 0123cf27 has its CatchHandler @ 0113cd70 */
    if (uVar1 == 0) {
      if (4 < param_3) {
        cVar4 = param_2[3];
        cVar3 = param_2[2];
        cVar6 = param_2[1];
        cVar7 = *param_2;
        param_3 = param_3 + 4;
        pcVar2 = param_2 + 7;
        do {
          param_3 = param_3 + -4;
          cVar7 = cVar7 + pcVar2[-3];
          cVar6 = cVar6 + pcVar2[-2];
          cVar3 = cVar3 + pcVar2[-1];
          cVar4 = cVar4 + *pcVar2;
          pcVar2[-3] = cVar7;
          pcVar2[-2] = cVar6;
          pcVar2[-1] = cVar3;
          *pcVar2 = cVar4;
          pcVar2 = pcVar2 + 4;
        } while (8 < param_3);
      }
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113cf18 with catch @ 0113cf24
                        */
      if (lVar5 == 3) {
                    /* try { // try from 0113cf28 to 0123cf2b has its CatchHandler @ 0113cf34 */
                    /* try { // try from 0113cf2c to 0123cf37 has its CatchHandler @ 0113cd70 */
        if (3 < param_3) {
          cVar3 = param_2[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113cf28 with catch @ 0113cf34
                        */
          cVar6 = param_2[1];
          cVar7 = *param_2;
          param_3 = param_3 + 3;
          pcVar2 = param_2 + 5;
          do {
            param_3 = param_3 + -3;
            cVar7 = cVar7 + pcVar2[-2];
            cVar6 = cVar6 + pcVar2[-1];
            cVar3 = cVar3 + *pcVar2;
            pcVar2[-2] = cVar7;
            pcVar2[-1] = cVar6;
            *pcVar2 = cVar3;
            pcVar2 = pcVar2 + 3;
          } while (6 < param_3);
        }
      }
      else {
        uVar8 = uVar1 & 0xfffffffffffffff0;
        param_3 = param_3 - lVar5;
        do {
          if (lVar5 != 0) {
            if (lVar5 != 1) {
              if (lVar5 != 2) {
                if (4 < lVar5) {
                  pcVar2 = param_2;
                  uVar9 = uVar1;
                  if ((uVar1 < 0x10) || (uVar8 == 0)) {
LAB_0113d050:
                    lVar10 = uVar9 + 1;
                    do {
                      lVar10 = lVar10 + -1;
                      pcVar2[lVar5] = *pcVar2 + pcVar2[lVar5];
                      pcVar2 = pcVar2 + 1;
                    } while (1 < lVar10);
                  }
                  else {
                    pcVar2 = param_2 + uVar8;
                    uVar9 = uVar8;
                    pcVar11 = param_2;
                    do {
                      uVar13 = *(undefined8 *)(pcVar11 + lVar5 + 8);
                      uVar12 = *(undefined8 *)(pcVar11 + lVar5);
                      uVar15 = *(undefined8 *)(pcVar11 + 8);
                      uVar14 = *(undefined8 *)pcVar11;
                      uVar9 = uVar9 - 0x10;
                      *(ulong *)(pcVar11 + lVar5 + 8) =
                           CONCAT17((char)((ulong)uVar15 >> 0x38) + (char)((ulong)uVar13 >> 0x38),
                                    CONCAT16((char)((ulong)uVar15 >> 0x30) +
                                             (char)((ulong)uVar13 >> 0x30),
                                             CONCAT15((char)((ulong)uVar15 >> 0x28) +
                                                      (char)((ulong)uVar13 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar15 >> 0x20) +
                                                               (char)((ulong)uVar13 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar15 >> 0x18
                                                                              ) + (char)((ulong)
                                                  uVar13 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar15 >> 0x10) +
                                                           (char)((ulong)uVar13 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar15 >> 8) +
                                                                    (char)((ulong)uVar13 >> 8),
                                                                    (char)uVar15 + (char)uVar13)))))
                                            ));
                      *(ulong *)(pcVar11 + lVar5) =
                           CONCAT17((char)((ulong)uVar14 >> 0x38) + (char)((ulong)uVar12 >> 0x38),
                                    CONCAT16((char)((ulong)uVar14 >> 0x30) +
                                             (char)((ulong)uVar12 >> 0x30),
                                             CONCAT15((char)((ulong)uVar14 >> 0x28) +
                                                      (char)((ulong)uVar12 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar14 >> 0x20) +
                                                               (char)((ulong)uVar12 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar14 >> 0x18
                                                                              ) + (char)((ulong)
                                                  uVar12 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar14 >> 0x10) +
                                                           (char)((ulong)uVar12 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar14 >> 8) +
                                                                    (char)((ulong)uVar12 >> 8),
                                                                    (char)uVar14 + (char)uVar12)))))
                                            ));
                      pcVar11 = pcVar11 + 0x10;
                    } while (uVar9 != 0);
                    uVar9 = uVar1 - uVar8;
                    if (uVar1 != uVar8) goto LAB_0113d050;
                  }
                  param_2 = param_2 + uVar1;
                }
                param_2[lVar5] = *param_2 + param_2[lVar5];
                pcVar2 = param_2 + 1;
                pcVar2[lVar5] = *pcVar2 + pcVar2[lVar5];
                param_2 = param_2 + 2;
              }
              param_2[lVar5] = *param_2 + param_2[lVar5];
              param_2 = param_2 + 1;
            }
            param_2[lVar5] = *param_2 + param_2[lVar5];
            param_2 = param_2 + 1;
          }
          param_3 = param_3 - lVar5;
        } while (0 < param_3);
      }
    }
  }
  return;
}


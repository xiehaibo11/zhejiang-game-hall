
void FUN_011618dc(char *param_1,int param_2,int param_3,int param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  pcVar11 = param_1 + 1;
  pcVar12 = param_5 + 1;
  *param_5 = *param_1;
  uVar4 = param_2 - 1;
  if (param_2 < 2) goto LAB_0116195c;
  uVar9 = (ulong)uVar4;
  if (uVar4 < 0x10) {
LAB_0116192c:
    lVar14 = 0;
  }
  else {
    lVar14 = uVar9 - (uVar4 & 0xf);
    if (lVar14 != 0) {
      lVar10 = lVar14;
      if ((pcVar12 < param_1 + uVar9 + 1) && (param_1 < param_5 + uVar9 + 1)) goto LAB_0116192c;
      do {
        uVar17 = *(undefined8 *)(pcVar11 + 8);
        uVar16 = *(undefined8 *)pcVar11;
        uVar19 = *(undefined8 *)(pcVar11 + 7);
        uVar18 = *(undefined8 *)(pcVar11 + -1);
        lVar10 = lVar10 + -0x10;
        pcVar11 = pcVar11 + 0x10;
        *(ulong *)(pcVar12 + 8) =
             CONCAT17((char)((ulong)uVar17 >> 0x38) - (char)((ulong)uVar19 >> 0x38),
                      CONCAT16((char)((ulong)uVar17 >> 0x30) - (char)((ulong)uVar19 >> 0x30),
                               CONCAT15((char)((ulong)uVar17 >> 0x28) -
                                        (char)((ulong)uVar19 >> 0x28),
                                        CONCAT14((char)((ulong)uVar17 >> 0x20) -
                                                 (char)((ulong)uVar19 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar17 >> 0x18) -
                                                          (char)((ulong)uVar19 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar17 >> 0x10) -
                                                                   (char)((ulong)uVar19 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar17 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar19 >>
                                                                                  8),(char)uVar17 -
                                                                                     (char)uVar19)))
                                                ))));
        *(ulong *)pcVar12 =
             CONCAT17((char)((ulong)uVar16 >> 0x38) - (char)((ulong)uVar18 >> 0x38),
                      CONCAT16((char)((ulong)uVar16 >> 0x30) - (char)((ulong)uVar18 >> 0x30),
                               CONCAT15((char)((ulong)uVar16 >> 0x28) -
                                        (char)((ulong)uVar18 >> 0x28),
                                        CONCAT14((char)((ulong)uVar16 >> 0x20) -
                                                 (char)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar16 >> 0x18) -
                                                          (char)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar16 >> 0x10) -
                                                                   (char)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar16 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar18 >>
                                                                                  8),(char)uVar16 -
                                                                                     (char)uVar18)))
                                                ))));
        pcVar12 = pcVar12 + 0x10;
      } while (lVar10 != 0);
      if ((uVar4 & 0xf) == 0) goto LAB_0116195c;
    }
  }
  lVar10 = uVar9 - lVar14;
  pcVar11 = param_1 + lVar14 + 1;
  pcVar12 = param_5 + lVar14 + 1;
  do {
    cVar3 = *pcVar11;
    pcVar6 = pcVar11 + -1;
    lVar10 = lVar10 + -1;
    pcVar11 = pcVar11 + 1;
    *pcVar12 = cVar3 - *pcVar6;
    pcVar12 = pcVar12 + 1;
  } while (lVar10 != 0);
LAB_0116195c:
  if (1 < param_3) {
    lVar14 = (long)param_4;
    if (param_2 < 2) {
      param_3 = param_3 + -1;
      do {
        cVar3 = *param_1;
        param_1 = param_1 + lVar14;
        param_5 = param_5 + lVar14;
        param_3 = param_3 + -1;
        *param_5 = *param_1 - cVar3;
      } while (param_3 != 0);
    }
    else {
      uVar9 = (ulong)uVar4;
      lVar10 = 0;
      uVar15 = uVar9 - (uVar4 & 0x1f);
      pcVar11 = param_5 + lVar14 + 0x11;
      pcVar12 = param_5 + lVar14 + 1;
      iVar5 = 1;
      pcVar6 = param_5;
      pcVar13 = param_1;
      do {
        pcVar13 = pcVar13 + lVar14;
        pcVar6 = pcVar6 + lVar14;
        *pcVar6 = *pcVar13 - pcVar13[-lVar14];
        uVar8 = 0;
        if ((uVar4 < 0x20) || (uVar15 == 0)) {
LAB_01161a40:
          do {
            pcVar12[uVar8] = (pcVar13 + uVar8)[1] - pcVar13[uVar8];
            uVar8 = uVar8 + 1;
          } while (uVar9 != uVar8);
        }
        else {
          lVar7 = lVar10 * lVar14;
          lVar1 = lVar14 + uVar9 + 1 + lVar7;
          if ((param_5 + lVar14 + 1 + lVar7 < param_1 + lVar1) &&
             (param_1 + lVar7 + lVar14 < param_5 + lVar1)) {
            uVar8 = 0;
            goto LAB_01161a40;
          }
          uVar8 = 0;
          do {
            pcVar2 = pcVar13 + uVar8;
            uVar17 = *(undefined8 *)(pcVar2 + 9);
            uVar16 = *(undefined8 *)(pcVar2 + 1);
            uVar19 = *(undefined8 *)(pcVar2 + 0x19);
            uVar18 = *(undefined8 *)(pcVar2 + 0x11);
            uVar21 = *(undefined8 *)(pcVar2 + 8);
            uVar20 = *(undefined8 *)pcVar2;
            uVar23 = *(undefined8 *)(pcVar2 + 0x18);
            uVar22 = *(undefined8 *)(pcVar2 + 0x10);
            pcVar2 = pcVar11 + uVar8;
            uVar8 = uVar8 + 0x20;
            *(ulong *)(pcVar2 + -8) =
                 CONCAT17((char)((ulong)uVar17 >> 0x38) - (char)((ulong)uVar21 >> 0x38),
                          CONCAT16((char)((ulong)uVar17 >> 0x30) - (char)((ulong)uVar21 >> 0x30),
                                   CONCAT15((char)((ulong)uVar17 >> 0x28) -
                                            (char)((ulong)uVar21 >> 0x28),
                                            CONCAT14((char)((ulong)uVar17 >> 0x20) -
                                                     (char)((ulong)uVar21 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar17 >> 0x18) -
                                                              (char)((ulong)uVar21 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar17 >> 0x10)
                                                                       - (char)((ulong)uVar21 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar17
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar21
                                                                                      >> 8),
                                                                                (char)uVar17 -
                                                                                (char)uVar21)))))));
            *(ulong *)(pcVar2 + -0x10) =
                 CONCAT17((char)((ulong)uVar16 >> 0x38) - (char)((ulong)uVar20 >> 0x38),
                          CONCAT16((char)((ulong)uVar16 >> 0x30) - (char)((ulong)uVar20 >> 0x30),
                                   CONCAT15((char)((ulong)uVar16 >> 0x28) -
                                            (char)((ulong)uVar20 >> 0x28),
                                            CONCAT14((char)((ulong)uVar16 >> 0x20) -
                                                     (char)((ulong)uVar20 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar16 >> 0x18) -
                                                              (char)((ulong)uVar20 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar16 >> 0x10)
                                                                       - (char)((ulong)uVar20 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar16
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar20
                                                                                      >> 8),
                                                                                (char)uVar16 -
                                                                                (char)uVar20)))))));
            *(ulong *)(pcVar2 + 8) =
                 CONCAT17((char)((ulong)uVar19 >> 0x38) - (char)((ulong)uVar23 >> 0x38),
                          CONCAT16((char)((ulong)uVar19 >> 0x30) - (char)((ulong)uVar23 >> 0x30),
                                   CONCAT15((char)((ulong)uVar19 >> 0x28) -
                                            (char)((ulong)uVar23 >> 0x28),
                                            CONCAT14((char)((ulong)uVar19 >> 0x20) -
                                                     (char)((ulong)uVar23 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar19 >> 0x18) -
                                                              (char)((ulong)uVar23 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar19 >> 0x10)
                                                                       - (char)((ulong)uVar23 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar19
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar23
                                                                                      >> 8),
                                                                                (char)uVar19 -
                                                                                (char)uVar23)))))));
            *(ulong *)pcVar2 =
                 CONCAT17((char)((ulong)uVar18 >> 0x38) - (char)((ulong)uVar22 >> 0x38),
                          CONCAT16((char)((ulong)uVar18 >> 0x30) - (char)((ulong)uVar22 >> 0x30),
                                   CONCAT15((char)((ulong)uVar18 >> 0x28) -
                                            (char)((ulong)uVar22 >> 0x28),
                                            CONCAT14((char)((ulong)uVar18 >> 0x20) -
                                                     (char)((ulong)uVar22 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar18 >> 0x18) -
                                                              (char)((ulong)uVar22 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar18 >> 0x10)
                                                                       - (char)((ulong)uVar22 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar18
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar22
                                                                                      >> 8),
                                                                                (char)uVar18 -
                                                                                (char)uVar22)))))));
          } while (uVar15 != uVar8);
          uVar8 = uVar15;
          if ((uVar4 & 0x1f) != 0) goto LAB_01161a40;
        }
        iVar5 = iVar5 + 1;
        lVar10 = lVar10 + 1;
        pcVar11 = pcVar11 + lVar14;
        pcVar12 = pcVar12 + lVar14;
      } while (iVar5 != param_3);
    }
  }
  return;
}


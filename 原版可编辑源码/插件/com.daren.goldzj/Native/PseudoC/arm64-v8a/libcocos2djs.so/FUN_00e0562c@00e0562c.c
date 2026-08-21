
void FUN_00e0562c(undefined1 *param_1,uint param_2,int param_3,int param_4,undefined1 *param_5)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  puVar10 = (undefined8 *)(param_1 + 1);
  puVar12 = (undefined8 *)(param_5 + 1);
  *param_5 = *param_1;
  if ((int)param_2 < 2) goto LAB_00e056a8;
  uVar4 = param_2 - 1;
  uVar8 = (ulong)uVar4;
  if (uVar4 < 0x10) {
LAB_00e05678:
    lVar14 = 0;
  }
  else {
    lVar14 = uVar8 - (uVar4 & 0xf);
    if (lVar14 != 0) {
      lVar9 = lVar14;
      if ((puVar12 < param_1 + uVar8 + 1) && (param_1 < param_5 + uVar8 + 1)) goto LAB_00e05678;
      do {
        uVar21 = puVar10[1];
        uVar20 = *puVar10;
        uVar23 = *(undefined8 *)((long)puVar10 + 7);
        uVar22 = *(undefined8 *)((long)puVar10 + -1);
        lVar9 = lVar9 + -0x10;
        puVar10 = puVar10 + 2;
        puVar12[1] = CONCAT17((char)((ulong)uVar21 >> 0x38) - (char)((ulong)uVar23 >> 0x38),
                              CONCAT16((char)((ulong)uVar21 >> 0x30) - (char)((ulong)uVar23 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar21 >> 0x28) -
                                                 (char)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar21 >> 0x20) -
                                                          (char)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar21 >> 0x18) -
                                                                   (char)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar21 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar21 >> 8) - (char)((ulong)uVar23 >> 8),
                                                  (char)uVar21 - (char)uVar23)))))));
        *puVar12 = CONCAT17((char)((ulong)uVar20 >> 0x38) - (char)((ulong)uVar22 >> 0x38),
                            CONCAT16((char)((ulong)uVar20 >> 0x30) - (char)((ulong)uVar22 >> 0x30),
                                     CONCAT15((char)((ulong)uVar20 >> 0x28) -
                                              (char)((ulong)uVar22 >> 0x28),
                                              CONCAT14((char)((ulong)uVar20 >> 0x20) -
                                                       (char)((ulong)uVar22 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar20 >> 0x18) -
                                                                (char)((ulong)uVar22 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar20 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar22 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar20 >> 8) - (char)((ulong)uVar22 >> 8),
                                                  (char)uVar20 - (char)uVar22)))))));
        puVar12 = puVar12 + 2;
      } while (lVar9 != 0);
      if ((uVar4 & 0xf) == 0) goto LAB_00e056a8;
    }
  }
  lVar9 = uVar8 - lVar14;
  pcVar13 = param_1 + lVar14 + 1;
  pcVar11 = param_5 + lVar14 + 1;
  do {
    cVar3 = *pcVar13;
    pcVar1 = pcVar13 + -1;
    lVar9 = lVar9 + -1;
    pcVar13 = pcVar13 + 1;
    *pcVar11 = cVar3 - *pcVar1;
    pcVar11 = pcVar11 + 1;
  } while (lVar9 != 0);
LAB_00e056a8:
  if ((1 < param_3) && (0 < (int)param_2)) {
    lVar9 = (long)param_4;
    uVar8 = (ulong)param_2;
    lVar14 = 0;
    uVar15 = uVar8 - (param_2 & 0x1f);
    iVar18 = 1;
    puVar6 = param_5;
    puVar19 = param_1;
    puVar16 = param_5;
    puVar17 = param_1;
    do {
      puVar17 = puVar17 + lVar9;
      puVar16 = puVar16 + lVar9;
      uVar5 = 0;
      if ((param_2 < 0x20) || (uVar15 == 0)) {
LAB_00e057ac:
        do {
          puVar16[uVar5] = puVar17[uVar5] - puVar19[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
      }
      else {
        lVar7 = lVar14 * lVar9;
        lVar2 = lVar9 + uVar8 + lVar7;
        uVar5 = 0;
        if ((param_5 + lVar7 + lVar9 < param_1 + lVar7 + uVar8 && param_1 + lVar7 < param_5 + lVar2)
           || (param_5 + lVar7 + lVar9 < param_1 + lVar2 &&
               param_1 + lVar7 + lVar9 < param_5 + lVar2)) goto LAB_00e057ac;
        uVar5 = 0;
        do {
          puVar10 = (undefined8 *)(puVar19 + uVar5);
          uVar21 = *(undefined8 *)((long)(puVar19 + uVar5 + lVar9) + 8);
          uVar20 = *(undefined8 *)(puVar19 + uVar5 + lVar9);
          uVar25 = puVar10[1];
          uVar24 = *puVar10;
          uVar27 = puVar10[3];
          uVar26 = puVar10[2];
          uVar23 = *(undefined8 *)(puVar19 + uVar5 + lVar9 + 0x18);
          uVar22 = *(undefined8 *)(puVar19 + uVar5 + lVar9 + 0x10);
          lVar2 = uVar5 + lVar9;
          *(ulong *)((long)(puVar6 + uVar5 + lVar9) + 8) =
               CONCAT17((char)((ulong)uVar21 >> 0x38) - (char)((ulong)uVar25 >> 0x38),
                        CONCAT16((char)((ulong)uVar21 >> 0x30) - (char)((ulong)uVar25 >> 0x30),
                                 CONCAT15((char)((ulong)uVar21 >> 0x28) -
                                          (char)((ulong)uVar25 >> 0x28),
                                          CONCAT14((char)((ulong)uVar21 >> 0x20) -
                                                   (char)((ulong)uVar25 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar21 >> 0x18) -
                                                            (char)((ulong)uVar25 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar21 >> 0x10) -
                                                                     (char)((ulong)uVar25 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar21
                                                                                    >> 8) -
                                                                              (char)((ulong)uVar25
                                                                                    >> 8),
                                                                              (char)uVar21 -
                                                                              (char)uVar25)))))));
          *(ulong *)(puVar6 + uVar5 + lVar9) =
               CONCAT17((char)((ulong)uVar20 >> 0x38) - (char)((ulong)uVar24 >> 0x38),
                        CONCAT16((char)((ulong)uVar20 >> 0x30) - (char)((ulong)uVar24 >> 0x30),
                                 CONCAT15((char)((ulong)uVar20 >> 0x28) -
                                          (char)((ulong)uVar24 >> 0x28),
                                          CONCAT14((char)((ulong)uVar20 >> 0x20) -
                                                   (char)((ulong)uVar24 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar20 >> 0x18) -
                                                            (char)((ulong)uVar24 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar20 >> 0x10) -
                                                                     (char)((ulong)uVar24 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar20
                                                                                    >> 8) -
                                                                              (char)((ulong)uVar24
                                                                                    >> 8),
                                                                              (char)uVar20 -
                                                                              (char)uVar24)))))));
          uVar5 = uVar5 + 0x20;
          *(ulong *)(puVar6 + lVar2 + 0x18) =
               CONCAT17((char)((ulong)uVar23 >> 0x38) - (char)((ulong)uVar27 >> 0x38),
                        CONCAT16((char)((ulong)uVar23 >> 0x30) - (char)((ulong)uVar27 >> 0x30),
                                 CONCAT15((char)((ulong)uVar23 >> 0x28) -
                                          (char)((ulong)uVar27 >> 0x28),
                                          CONCAT14((char)((ulong)uVar23 >> 0x20) -
                                                   (char)((ulong)uVar27 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar23 >> 0x18) -
                                                            (char)((ulong)uVar27 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar23 >> 0x10) -
                                                                     (char)((ulong)uVar27 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar23
                                                                                    >> 8) -
                                                                              (char)((ulong)uVar27
                                                                                    >> 8),
                                                                              (char)uVar23 -
                                                                              (char)uVar27)))))));
          *(ulong *)(puVar6 + lVar2 + 0x10) =
               CONCAT17((char)((ulong)uVar22 >> 0x38) - (char)((ulong)uVar26 >> 0x38),
                        CONCAT16((char)((ulong)uVar22 >> 0x30) - (char)((ulong)uVar26 >> 0x30),
                                 CONCAT15((char)((ulong)uVar22 >> 0x28) -
                                          (char)((ulong)uVar26 >> 0x28),
                                          CONCAT14((char)((ulong)uVar22 >> 0x20) -
                                                   (char)((ulong)uVar26 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar22 >> 0x18) -
                                                            (char)((ulong)uVar26 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar22 >> 0x10) -
                                                                     (char)((ulong)uVar26 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar22
                                                                                    >> 8) -
                                                                              (char)((ulong)uVar26
                                                                                    >> 8),
                                                                              (char)uVar22 -
                                                                              (char)uVar26)))))));
        } while (uVar15 != uVar5);
        uVar5 = uVar15;
        if ((param_2 & 0x1f) != 0) goto LAB_00e057ac;
      }
      iVar18 = iVar18 + 1;
      lVar14 = lVar14 + 1;
      puVar6 = puVar6 + lVar9;
      puVar19 = puVar19 + lVar9;
    } while (iVar18 != param_3);
  }
  return;
}


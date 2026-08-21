
void FUN_00d769bc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar6 = (ulong)*(byte *)(param_1 + 0x13) + 7 >> 3;
  uVar2 = uVar4 - uVar6;
  if (uVar6 <= uVar4 && uVar2 != 0) {
    pcVar3 = (char *)((long)param_2 + uVar6);
    uVar8 = uVar6;
    if (((0x1f < uVar2) && (uVar7 = uVar2 & 0xffffffffffffffe0, uVar7 != 0)) &&
       (((char *)((long)param_2 + uVar2) <= pcVar3 ||
        ((undefined8 *)((long)param_2 + uVar4) <= param_2)))) {
      pcVar3 = pcVar3 + uVar7;
      uVar8 = uVar7;
      do {
        puVar1 = (undefined8 *)(uVar6 + (long)param_2);
        uVar10 = param_2[1];
        uVar9 = *param_2;
        uVar12 = param_2[3];
        uVar11 = param_2[2];
        uVar14 = puVar1[1];
        uVar13 = *puVar1;
        uVar16 = puVar1[3];
        uVar15 = puVar1[2];
        uVar8 = uVar8 - 0x20;
        puVar1[1] = CONCAT17((char)((ulong)uVar10 >> 0x38) + (char)((ulong)uVar14 >> 0x38),
                             CONCAT16((char)((ulong)uVar10 >> 0x30) + (char)((ulong)uVar14 >> 0x30),
                                      CONCAT15((char)((ulong)uVar10 >> 0x28) +
                                               (char)((ulong)uVar14 >> 0x28),
                                               CONCAT14((char)((ulong)uVar10 >> 0x20) +
                                                        (char)((ulong)uVar14 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar10 >> 0x18) +
                                                                 (char)((ulong)uVar14 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar10 >>
                                                                                0x10) +
                                                                          (char)((ulong)uVar14 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar10 >> 8) + (char)((ulong)uVar14 >> 8),
                                                  (char)uVar10 + (char)uVar14)))))));
        *puVar1 = CONCAT17((char)((ulong)uVar9 >> 0x38) + (char)((ulong)uVar13 >> 0x38),
                           CONCAT16((char)((ulong)uVar9 >> 0x30) + (char)((ulong)uVar13 >> 0x30),
                                    CONCAT15((char)((ulong)uVar9 >> 0x28) +
                                             (char)((ulong)uVar13 >> 0x28),
                                             CONCAT14((char)((ulong)uVar9 >> 0x20) +
                                                      (char)((ulong)uVar13 >> 0x20),
                                                      CONCAT13((char)((ulong)uVar9 >> 0x18) +
                                                               (char)((ulong)uVar13 >> 0x18),
                                                               CONCAT12((char)((ulong)uVar9 >> 0x10)
                                                                        + (char)((ulong)uVar13 >>
                                                                                0x10),
                                                                        CONCAT11((char)((ulong)uVar9
                                                                                       >> 8) +
                                                                                 (char)((ulong)
                                                  uVar13 >> 8),(char)uVar9 + (char)uVar13)))))));
        puVar1[3] = CONCAT17((char)((ulong)uVar12 >> 0x38) + (char)((ulong)uVar16 >> 0x38),
                             CONCAT16((char)((ulong)uVar12 >> 0x30) + (char)((ulong)uVar16 >> 0x30),
                                      CONCAT15((char)((ulong)uVar12 >> 0x28) +
                                               (char)((ulong)uVar16 >> 0x28),
                                               CONCAT14((char)((ulong)uVar12 >> 0x20) +
                                                        (char)((ulong)uVar16 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar12 >> 0x18) +
                                                                 (char)((ulong)uVar16 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar12 >>
                                                                                0x10) +
                                                                          (char)((ulong)uVar16 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar12 >> 8) + (char)((ulong)uVar16 >> 8),
                                                  (char)uVar12 + (char)uVar16)))))));
        puVar1[2] = CONCAT17((char)((ulong)uVar11 >> 0x38) + (char)((ulong)uVar15 >> 0x38),
                             CONCAT16((char)((ulong)uVar11 >> 0x30) + (char)((ulong)uVar15 >> 0x30),
                                      CONCAT15((char)((ulong)uVar11 >> 0x28) +
                                               (char)((ulong)uVar15 >> 0x28),
                                               CONCAT14((char)((ulong)uVar11 >> 0x20) +
                                                        (char)((ulong)uVar15 >> 0x20),
                                                        CONCAT13((char)((ulong)uVar11 >> 0x18) +
                                                                 (char)((ulong)uVar15 >> 0x18),
                                                                 CONCAT12((char)((ulong)uVar11 >>
                                                                                0x10) +
                                                                          (char)((ulong)uVar15 >>
                                                                                0x10),
                                                                          CONCAT11((char)((ulong)
                                                  uVar11 >> 8) + (char)((ulong)uVar15 >> 8),
                                                  (char)uVar11 + (char)uVar15)))))));
        param_2 = param_2 + 4;
      } while (uVar8 != 0);
      uVar8 = uVar6 + uVar7;
      if (uVar2 == uVar7) {
        return;
      }
    }
    lVar5 = uVar4 - uVar8;
    do {
      lVar5 = lVar5 + -1;
      *pcVar3 = pcVar3[-uVar6] + *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}


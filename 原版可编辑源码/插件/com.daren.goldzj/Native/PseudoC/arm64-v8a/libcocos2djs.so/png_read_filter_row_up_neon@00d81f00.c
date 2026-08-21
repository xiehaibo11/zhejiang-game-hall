
void png_read_filter_row_up_neon(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_1 + 8);
  if (0 < lVar3) {
    puVar1 = param_2;
    do {
      uVar5 = puVar1[1];
      uVar4 = *puVar1;
      uVar7 = param_3[1];
      uVar6 = *param_3;
      puVar2 = puVar1 + 2;
      puVar1[1] = CONCAT17((char)((ulong)uVar7 >> 0x38) + (char)((ulong)uVar5 >> 0x38),
                           CONCAT16((char)((ulong)uVar7 >> 0x30) + (char)((ulong)uVar5 >> 0x30),
                                    CONCAT15((char)((ulong)uVar7 >> 0x28) +
                                             (char)((ulong)uVar5 >> 0x28),
                                             CONCAT14((char)((ulong)uVar7 >> 0x20) +
                                                      (char)((ulong)uVar5 >> 0x20),
                                                      CONCAT13((char)((ulong)uVar7 >> 0x18) +
                                                               (char)((ulong)uVar5 >> 0x18),
                                                               CONCAT12((char)((ulong)uVar7 >> 0x10)
                                                                        + (char)((ulong)uVar5 >>
                                                                                0x10),
                                                                        CONCAT11((char)((ulong)uVar7
                                                                                       >> 8) +
                                                                                 (char)((ulong)uVar5
                                                                                       >> 8),
                                                                                 (char)uVar7 +
                                                                                 (char)uVar5)))))));
      *puVar1 = CONCAT17((char)((ulong)uVar6 >> 0x38) + (char)((ulong)uVar4 >> 0x38),
                         CONCAT16((char)((ulong)uVar6 >> 0x30) + (char)((ulong)uVar4 >> 0x30),
                                  CONCAT15((char)((ulong)uVar6 >> 0x28) +
                                           (char)((ulong)uVar4 >> 0x28),
                                           CONCAT14((char)((ulong)uVar6 >> 0x20) +
                                                    (char)((ulong)uVar4 >> 0x20),
                                                    CONCAT13((char)((ulong)uVar6 >> 0x18) +
                                                             (char)((ulong)uVar4 >> 0x18),
                                                             CONCAT12((char)((ulong)uVar6 >> 0x10) +
                                                                      (char)((ulong)uVar4 >> 0x10),
                                                                      CONCAT11((char)((ulong)uVar6
                                                                                     >> 8) +
                                                                               (char)((ulong)uVar4
                                                                                     >> 8),
                                                                               (char)uVar6 +
                                                                               (char)uVar4)))))));
      puVar1 = puVar2;
      param_3 = param_3 + 2;
    } while (puVar2 < (undefined8 *)((long)param_2 + lVar3));
  }
  return;
}


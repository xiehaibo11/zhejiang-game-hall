
void png_read_filter_row_avg4_neon(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (0 < *(long *)(param_1 + 8)) {
    puVar1 = (undefined4 *)((long)param_2 + *(long *)(param_1 + 8));
    uVar17 = 0;
    do {
      uVar18 = *param_3;
      puVar2 = param_3 + 1;
      puVar3 = param_3 + 2;
      puVar4 = param_3 + 3;
      puVar5 = param_3 + 4;
      puVar6 = param_3 + 5;
      puVar7 = param_3 + 6;
      puVar8 = param_3 + 7;
      uVar19 = *param_2;
      uVar21 = param_2[1];
      uVar23 = param_2[2];
      uVar25 = param_2[3];
      uVar20 = param_2[4];
      uVar22 = param_2[5];
      uVar24 = param_2[6];
      uVar26 = param_2[7];
      param_3 = param_3 + 4;
      uVar17 = NEON_uhadd(uVar17,CONCAT44(*puVar5,uVar18),1);
      uVar18 = CONCAT13((char)((ulong)uVar17 >> 0x18) + (char)((uint)uVar19 >> 0x18),
                        CONCAT12((char)((ulong)uVar17 >> 0x10) + (char)((uint)uVar19 >> 0x10),
                                 CONCAT11((char)((ulong)uVar17 >> 8) + (char)((uint)uVar19 >> 8),
                                          (char)uVar17 + (char)uVar19)));
      uVar17 = NEON_uhadd(CONCAT17((char)((ulong)uVar17 >> 0x38) + (char)((uint)uVar20 >> 0x18),
                                   CONCAT16((char)((ulong)uVar17 >> 0x30) +
                                            (char)((uint)uVar20 >> 0x10),
                                            CONCAT15((char)((ulong)uVar17 >> 0x28) +
                                                     (char)((uint)uVar20 >> 8),
                                                     CONCAT14((char)((ulong)uVar17 >> 0x20) +
                                                              (char)uVar20,uVar18)))),
                          CONCAT44(*puVar6,*puVar2),1);
      cVar9 = (char)uVar17 + (char)uVar21;
      cVar10 = (char)((ulong)uVar17 >> 8) + (char)((uint)uVar21 >> 8);
      cVar11 = (char)((ulong)uVar17 >> 0x10) + (char)((uint)uVar21 >> 0x10);
      cVar12 = (char)((ulong)uVar17 >> 0x18) + (char)((uint)uVar21 >> 0x18);
      uVar17 = NEON_uhadd(CONCAT17((char)((ulong)uVar17 >> 0x38) + (char)((uint)uVar22 >> 0x18),
                                   CONCAT16((char)((ulong)uVar17 >> 0x30) +
                                            (char)((uint)uVar22 >> 0x10),
                                            CONCAT15((char)((ulong)uVar17 >> 0x28) +
                                                     (char)((uint)uVar22 >> 8),
                                                     CONCAT14((char)((ulong)uVar17 >> 0x20) +
                                                              (char)uVar22,
                                                              CONCAT13(cVar12,CONCAT12(cVar11,
                                                  CONCAT11(cVar10,cVar9))))))),
                          CONCAT44(*puVar7,*puVar3),1);
      cVar13 = (char)uVar17 + (char)uVar23;
      cVar14 = (char)((ulong)uVar17 >> 8) + (char)((uint)uVar23 >> 8);
      cVar15 = (char)((ulong)uVar17 >> 0x10) + (char)((uint)uVar23 >> 0x10);
      cVar16 = (char)((ulong)uVar17 >> 0x18) + (char)((uint)uVar23 >> 0x18);
      uVar17 = NEON_uhadd(CONCAT17((char)((ulong)uVar17 >> 0x38) + (char)((uint)uVar24 >> 0x18),
                                   CONCAT16((char)((ulong)uVar17 >> 0x30) +
                                            (char)((uint)uVar24 >> 0x10),
                                            CONCAT15((char)((ulong)uVar17 >> 0x28) +
                                                     (char)((uint)uVar24 >> 8),
                                                     CONCAT14((char)((ulong)uVar17 >> 0x20) +
                                                              (char)uVar24,
                                                              CONCAT13(cVar16,CONCAT12(cVar15,
                                                  CONCAT11(cVar14,cVar13))))))),
                          CONCAT44(*puVar8,*puVar4),1);
      uVar19 = CONCAT13((char)((ulong)uVar17 >> 0x18) + (char)((uint)uVar25 >> 0x18),
                        CONCAT12((char)((ulong)uVar17 >> 0x10) + (char)((uint)uVar25 >> 0x10),
                                 CONCAT11((char)((ulong)uVar17 >> 8) + (char)((uint)uVar25 >> 8),
                                          (char)uVar17 + (char)uVar25)));
      uVar17 = CONCAT17((char)((ulong)uVar17 >> 0x38) + (char)((uint)uVar26 >> 0x18),
                        CONCAT16((char)((ulong)uVar17 >> 0x30) + (char)((uint)uVar26 >> 0x10),
                                 CONCAT15((char)((ulong)uVar17 >> 0x28) + (char)((uint)uVar26 >> 8),
                                          CONCAT14((char)((ulong)uVar17 >> 0x20) + (char)uVar26,
                                                   uVar19))));
      *param_2 = uVar18;
      param_2[1] = CONCAT13(cVar12,CONCAT12(cVar11,CONCAT11(cVar10,cVar9)));
      param_2[2] = CONCAT13(cVar16,CONCAT12(cVar15,CONCAT11(cVar14,cVar13)));
      param_2[3] = uVar19;
      param_2 = param_2 + 4;
    } while (param_2 < puVar1);
  }
  return;
}


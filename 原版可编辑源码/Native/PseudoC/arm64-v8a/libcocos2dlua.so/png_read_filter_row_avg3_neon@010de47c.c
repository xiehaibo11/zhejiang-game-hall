
void png_read_filter_row_avg3_neon
               (long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar2 = *(long *)(param_1 + 8);
  if (0 < lVar2) {
                    /* try { // try from 010de488 to 011de51f has its CatchHandler @ 010de3bc */
    uVar14 = *(undefined8 *)*param_2;
    cVar5 = (char)uVar14;
    cVar6 = (char)((ulong)uVar14 >> 8);
    cVar7 = (char)((ulong)uVar14 >> 0x10);
    cVar8 = (char)((ulong)uVar14 >> 0x18);
    cVar9 = (char)((ulong)uVar14 >> 0x20);
    cVar10 = (char)((ulong)uVar14 >> 0x28);
    cVar11 = (char)((ulong)uVar14 >> 0x30);
    cVar12 = (char)((ulong)uVar14 >> 0x38);
    uVar14 = 0;
    auVar16 = NEON_ext(*param_2,*param_2,8,1);
    pauVar3 = param_2;
    do {
      uVar18 = *(undefined8 *)*param_3;
      uVar15 = auVar16._0_8_;
      uVar17 = NEON_ext(CONCAT17(cVar12,CONCAT16(cVar11,CONCAT15(cVar10,CONCAT14(cVar9,CONCAT13(
                                                  cVar8,CONCAT12(cVar7,CONCAT11(cVar6,cVar5))))))),
                        uVar15,3,1);
      uVar19 = NEON_ext(CONCAT17(cVar12,CONCAT16(cVar11,CONCAT15(cVar10,CONCAT14(cVar9,CONCAT13(
                                                  cVar8,CONCAT12(cVar7,CONCAT11(cVar6,cVar5))))))),
                        uVar15,6,1);
      uVar20 = NEON_ext(uVar15,uVar15,1,1);
      auVar16 = NEON_ext(*param_3,*param_3,8,1);
      uVar14 = NEON_uhadd(uVar14,uVar18,1);
      uVar13 = CONCAT13((char)((ulong)uVar14 >> 0x18) + cVar8,
                        CONCAT12((char)((ulong)uVar14 >> 0x10) + cVar7,
                                 CONCAT11((char)((ulong)uVar14 >> 8) + cVar6,(char)uVar14 + cVar5)))
      ;
      uVar15 = auVar16._0_8_;
      uVar21 = NEON_ext(uVar18,uVar15,3,1);
      uVar21 = NEON_uhadd(CONCAT17((char)((ulong)uVar14 >> 0x38) + cVar12,
                                   CONCAT16((char)((ulong)uVar14 >> 0x30) + cVar11,
                                            CONCAT15((char)((ulong)uVar14 >> 0x28) + cVar10,
                                                     CONCAT14((char)((ulong)uVar14 >> 0x20) + cVar9,
                                                              uVar13)))),uVar21,1);
      pauVar4 = (undefined1 (*) [16])(*pauVar3 + 0xc);
      uVar14 = *(undefined8 *)*pauVar4;
      auVar1 = *pauVar4;
      auVar16 = *pauVar4;
      cVar5 = (char)uVar14;
      cVar6 = (char)((ulong)uVar14 >> 8);
      cVar7 = (char)((ulong)uVar14 >> 0x10);
      cVar8 = (char)((ulong)uVar14 >> 0x18);
      cVar9 = (char)((ulong)uVar14 >> 0x20);
      cVar10 = (char)((ulong)uVar14 >> 0x28);
      cVar11 = (char)((ulong)uVar14 >> 0x30);
      cVar12 = (char)((ulong)uVar14 >> 0x38);
      *(undefined4 *)*pauVar3 = uVar13;
      uVar13 = CONCAT13((char)((ulong)uVar21 >> 0x18) + (char)((ulong)uVar17 >> 0x18),
                        CONCAT12((char)((ulong)uVar21 >> 0x10) + (char)((ulong)uVar17 >> 0x10),
                                 CONCAT11((char)((ulong)uVar21 >> 8) + (char)((ulong)uVar17 >> 8),
                                          (char)uVar21 + (char)uVar17)));
      uVar14 = NEON_ext(uVar18,uVar15,6,1);
                    /* catch() { ... } // from try @ 010de448 with catch @ 010de4d4 */
      *(undefined4 *)(*pauVar3 + 3) = uVar13;
      uVar14 = NEON_uhadd(CONCAT17((char)((ulong)uVar21 >> 0x38) + (char)((ulong)uVar17 >> 0x38),
                                   CONCAT16((char)((ulong)uVar21 >> 0x30) +
                                            (char)((ulong)uVar17 >> 0x30),
                                            CONCAT15((char)((ulong)uVar21 >> 0x28) +
                                                     (char)((ulong)uVar17 >> 0x28),
                                                     CONCAT14((char)((ulong)uVar21 >> 0x20) +
                                                              (char)((ulong)uVar17 >> 0x20),uVar13))
                                           )),uVar14,1);
      uVar18 = NEON_ext(uVar15,uVar15,1,1);
      uVar13 = CONCAT13((char)((ulong)uVar14 >> 0x18) + (char)((ulong)uVar19 >> 0x18),
                        CONCAT12((char)((ulong)uVar14 >> 0x10) + (char)((ulong)uVar19 >> 0x10),
                                 CONCAT11((char)((ulong)uVar14 >> 8) + (char)((ulong)uVar19 >> 8),
                                          (char)uVar14 + (char)uVar19)));
                    /* catch() { ... } // from try @ 010de42c with catch @ 010de4e4 */
      uVar14 = NEON_uhadd(CONCAT17((char)((ulong)uVar14 >> 0x38) + (char)((ulong)uVar19 >> 0x38),
                                   CONCAT16((char)((ulong)uVar14 >> 0x30) +
                                            (char)((ulong)uVar19 >> 0x30),
                                            CONCAT15((char)((ulong)uVar14 >> 0x28) +
                                                     (char)((ulong)uVar19 >> 0x28),
                                                     CONCAT14((char)((ulong)uVar14 >> 0x20) +
                                                              (char)((ulong)uVar19 >> 0x20),uVar13))
                                           )),uVar18,1);
      auVar16 = NEON_ext(auVar16,auVar1,8,1);
      *(undefined4 *)(*pauVar3 + 6) = uVar13;
      uVar13 = CONCAT13((char)((ulong)uVar14 >> 0x18) + (char)((ulong)uVar20 >> 0x18),
                        CONCAT12((char)((ulong)uVar14 >> 0x10) + (char)((ulong)uVar20 >> 0x10),
                                 CONCAT11((char)((ulong)uVar14 >> 8) + (char)((ulong)uVar20 >> 8),
                                          (char)uVar14 + (char)uVar20)));
      uVar14 = CONCAT17((char)((ulong)uVar14 >> 0x38) + (char)((ulong)uVar20 >> 0x38),
                        CONCAT16((char)((ulong)uVar14 >> 0x30) + (char)((ulong)uVar20 >> 0x30),
                                 CONCAT15((char)((ulong)uVar14 >> 0x28) +
                                          (char)((ulong)uVar20 >> 0x28),
                                          CONCAT14((char)((ulong)uVar14 >> 0x20) +
                                                   (char)((ulong)uVar20 >> 0x20),uVar13))));
                    /* catch() { ... } // from try @ 010de474 with catch @ 010de504 */
      *(undefined4 *)(*pauVar3 + 9) = uVar13;
      param_3 = (undefined1 (*) [16])(*param_3 + 0xc);
      pauVar3 = pauVar4;
    } while (pauVar4 < (undefined1 (*) [16])(*param_2 + lVar2));
  }
  return;
}


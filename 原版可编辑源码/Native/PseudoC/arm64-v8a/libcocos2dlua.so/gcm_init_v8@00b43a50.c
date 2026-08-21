
void gcm_init_v8(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  
  auVar8 = *param_2;
  auVar5 = NEON_ext(auVar8,auVar8,8,1);
  auVar12._8_8_ = 1;
  auVar12._0_8_ = 1;
  auVar7._9_6_ = 0;
  auVar7._0_9_ = (unkuint9)0xc200000000000000;
  auVar7[0xf] = 0xc2;
  auVar7 = NEON_ext(auVar12,auVar7,8,1);
  auVar13[0] = auVar5[7] >> 7 & auVar7[0];
  auVar13._1_7_ = 0;
  auVar13[8] = auVar5[0xf] >> 7 & auVar7[8];
  auVar13._9_7_ = 0;
  lVar4 = auVar5._0_8_ << 1;
  lVar6 = auVar5._8_8_ << 1;
  auVar5 = NEON_ext(auVar13,auVar13,8,1);
  bVar30 = auVar8[7] >> 7;
  bVar15 = ((byte)lVar4 | auVar5[0]) ^ auVar7[0] & bVar30;
  bVar16 = ((byte)((ulong)lVar4 >> 8) | auVar5[1]) ^ auVar7[1] & bVar30;
  bVar17 = ((byte)((ulong)lVar4 >> 0x10) | auVar5[2]) ^ auVar7[2] & bVar30;
  bVar18 = ((byte)((ulong)lVar4 >> 0x18) | auVar5[3]) ^ auVar7[3] & bVar30;
  bVar19 = ((byte)((ulong)lVar4 >> 0x20) | auVar5[4]) ^ auVar7[4] & bVar30;
  bVar20 = ((byte)((ulong)lVar4 >> 0x28) | auVar5[5]) ^ auVar7[5] & bVar30;
  bVar21 = ((byte)((ulong)lVar4 >> 0x30) | auVar5[6]) ^ auVar7[6] & bVar30;
  bVar22 = ((byte)((ulong)lVar4 >> 0x38) | auVar5[7]) ^ auVar7[7] & bVar30;
  bVar23 = ((byte)lVar6 | auVar5[8]) ^ auVar7[8] & bVar30;
  bVar24 = ((byte)((ulong)lVar6 >> 8) | auVar5[9]) ^ auVar7[9] & bVar30;
  bVar25 = ((byte)((ulong)lVar6 >> 0x10) | auVar5[10]) ^ auVar7[10] & bVar30;
  bVar26 = ((byte)((ulong)lVar6 >> 0x18) | auVar5[0xb]) ^ auVar7[0xb] & bVar30;
  bVar27 = ((byte)((ulong)lVar6 >> 0x20) | auVar5[0xc]) ^ auVar7[0xc] & bVar30;
  bVar28 = ((byte)((ulong)lVar6 >> 0x28) | auVar5[0xd]) ^ auVar7[0xd] & bVar30;
  bVar29 = ((byte)((ulong)lVar6 >> 0x30) | auVar5[0xe]) ^ auVar7[0xe] & bVar30;
  bVar30 = ((byte)((ulong)lVar6 >> 0x38) | auVar5[0xf]) ^ auVar7[0xf] & bVar30;
  *param_1 = CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,CONCAT13(bVar18,
                                                  CONCAT12(bVar17,CONCAT11(bVar16,bVar15)))))));
  param_1[1] = CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,CONCAT13(bVar26,
                                                  CONCAT12(bVar25,CONCAT11(bVar24,bVar23)))))));
  auVar8[1] = bVar16;
  auVar8[0] = bVar15;
  auVar8[2] = bVar17;
  auVar8[3] = bVar18;
  auVar8[4] = bVar19;
  auVar8[5] = bVar20;
  auVar8[6] = bVar21;
  auVar8[7] = bVar22;
  auVar8[8] = bVar23;
  auVar8[9] = bVar24;
  auVar8[10] = bVar25;
  auVar8[0xb] = bVar26;
  auVar8[0xc] = bVar27;
  auVar8[0xd] = bVar28;
  auVar8[0xe] = bVar29;
  auVar8[0xf] = bVar30;
  auVar5[1] = bVar16;
  auVar5[0] = bVar15;
  auVar5[2] = bVar17;
  auVar5[3] = bVar18;
  auVar5[4] = bVar19;
  auVar5[5] = bVar20;
  auVar5[6] = bVar21;
  auVar5[7] = bVar22;
  auVar5[8] = bVar23;
  auVar5[9] = bVar24;
  auVar5[10] = bVar25;
  auVar5[0xb] = bVar26;
  auVar5[0xc] = bVar27;
  auVar5[0xd] = bVar28;
  auVar5[0xe] = bVar29;
  auVar5[0xf] = bVar30;
  auVar8 = NEON_ext(auVar8,auVar5,8,1);
  auVar7 = NEON_pmull(CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,CONCAT13(
                                                  bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15)))))
                                              )),
                      CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,CONCAT13(
                                                  bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15)))))
                                              )),8);
  auVar9._0_8_ = CONCAT17(auVar8[7] ^ bVar22,
                          CONCAT16(auVar8[6] ^ bVar21,
                                   CONCAT15(auVar8[5] ^ bVar20,
                                            CONCAT14(auVar8[4] ^ bVar19,
                                                     CONCAT13(auVar8[3] ^ bVar18,
                                                              CONCAT12(auVar8[2] ^ bVar17,
                                                                       CONCAT11(auVar8[1] ^ bVar16,
                                                                                auVar8[0] ^ bVar15))
                                                             )))));
  auVar9[8] = auVar8[8] ^ bVar23;
  auVar9[9] = auVar8[9] ^ bVar24;
  auVar9[10] = auVar8[10] ^ bVar25;
  auVar9[0xb] = auVar8[0xb] ^ bVar26;
  auVar9[0xc] = auVar8[0xc] ^ bVar27;
  auVar9[0xd] = auVar8[0xd] ^ bVar28;
  auVar9[0xe] = auVar8[0xe] ^ bVar29;
  auVar9[0xf] = auVar8[0xf] ^ bVar30;
  auVar3[1] = bVar16;
  auVar3[0] = bVar15;
  auVar3[2] = bVar17;
  auVar3[3] = bVar18;
  auVar3[4] = bVar19;
  auVar3[5] = bVar20;
  auVar3[6] = bVar21;
  auVar3[7] = bVar22;
  auVar3[8] = bVar23;
  auVar3[9] = bVar24;
  auVar3[10] = bVar25;
  auVar3[0xb] = bVar26;
  auVar3[0xc] = bVar27;
  auVar3[0xd] = bVar28;
  auVar3[0xe] = bVar29;
  auVar3[0xf] = bVar30;
  auVar10[1] = bVar16;
  auVar10[0] = bVar15;
  auVar10[2] = bVar17;
  auVar10[3] = bVar18;
  auVar10[4] = bVar19;
  auVar10[5] = bVar20;
  auVar10[6] = bVar21;
  auVar10[7] = bVar22;
  auVar10[8] = bVar23;
  auVar10[9] = bVar24;
  auVar10[10] = bVar25;
  auVar10[0xb] = bVar26;
  auVar10[0xc] = bVar27;
  auVar10[0xd] = bVar28;
  auVar10[0xe] = bVar29;
  auVar10[0xf] = bVar30;
  auVar3 = NEON_pmull2(auVar3,auVar10,8);
  auVar5 = NEON_pmull(auVar9._0_8_,auVar9._0_8_,8);
  auVar10 = NEON_ext(auVar7,auVar3,8,1);
  auVar8 = NEON_pmull(auVar7._0_8_,0xc200000000000000,8);
  auVar2._0_8_ = CONCAT17(auVar5[7] ^ auVar10[7] ^ auVar7[7] ^ auVar3[7] ^ auVar8[7],
                          CONCAT16(auVar5[6] ^ auVar10[6] ^ auVar7[6] ^ auVar3[6] ^ auVar8[6],
                                   CONCAT15(auVar5[5] ^ auVar10[5] ^ auVar7[5] ^ auVar3[5] ^
                                            auVar8[5],
                                            CONCAT14(auVar5[4] ^ auVar10[4] ^ auVar7[4] ^ auVar3[4]
                                                     ^ auVar8[4],
                                                     CONCAT13(auVar5[3] ^ auVar10[3] ^
                                                              auVar7[3] ^ auVar3[3] ^ auVar8[3],
                                                              CONCAT12(auVar5[2] ^ auVar10[2] ^
                                                                       auVar7[2] ^ auVar3[2] ^
                                                                       auVar8[2],
                                                                       CONCAT11(auVar5[1] ^
                                                                                auVar10[1] ^
                                                                                auVar7[1] ^
                                                                                auVar3[1] ^
                                                                                auVar8[1],
                                                                                auVar5[0] ^
                                                                                auVar10[0] ^
                                                                                auVar7[0] ^
                                                                                auVar3[0] ^
                                                                                auVar8[0])))))));
  auVar2[8] = auVar7[0] ^ auVar8[8];
  auVar2[9] = auVar7[1] ^ auVar8[9];
  auVar2[10] = auVar7[2] ^ auVar8[10];
  auVar2[0xb] = auVar7[3] ^ auVar8[0xb];
  auVar2[0xc] = auVar7[4] ^ auVar8[0xc];
  auVar2[0xd] = auVar7[5] ^ auVar8[0xd];
  auVar2[0xe] = auVar7[6] ^ auVar8[0xe];
  auVar2[0xf] = auVar7[7] ^ auVar8[0xf];
  auVar14 = NEON_ext(auVar2,auVar2,8,1);
  auVar8 = NEON_pmull(auVar2._0_8_,0xc200000000000000,8);
  bVar30 = auVar8[0] ^ auVar14[0] ^ auVar5[8] ^ auVar10[8] ^ auVar7[8] ^ auVar3[8];
  bVar15 = auVar8[1] ^ auVar14[1] ^ auVar5[9] ^ auVar10[9] ^ auVar7[9] ^ auVar3[9];
  bVar16 = auVar8[2] ^ auVar14[2] ^ auVar5[10] ^ auVar10[10] ^ auVar7[10] ^ auVar3[10];
  bVar17 = auVar8[3] ^ auVar14[3] ^ auVar5[0xb] ^ auVar10[0xb] ^ auVar7[0xb] ^ auVar3[0xb];
  bVar18 = auVar8[4] ^ auVar14[4] ^ auVar5[0xc] ^ auVar10[0xc] ^ auVar7[0xc] ^ auVar3[0xc];
  bVar19 = auVar8[5] ^ auVar14[5] ^ auVar5[0xd] ^ auVar10[0xd] ^ auVar7[0xd] ^ auVar3[0xd];
  bVar20 = auVar8[6] ^ auVar14[6] ^ auVar5[0xe] ^ auVar10[0xe] ^ auVar7[0xe] ^ auVar3[0xe];
  bVar21 = auVar8[7] ^ auVar14[7] ^ auVar5[0xf] ^ auVar10[0xf] ^ auVar7[0xf] ^ auVar3[0xf];
  bVar22 = auVar8[8] ^ auVar14[8] ^ auVar3[8];
  bVar23 = auVar8[9] ^ auVar14[9] ^ auVar3[9];
  bVar24 = auVar8[10] ^ auVar14[10] ^ auVar3[10];
  bVar25 = auVar8[0xb] ^ auVar14[0xb] ^ auVar3[0xb];
  bVar26 = auVar8[0xc] ^ auVar14[0xc] ^ auVar3[0xc];
  bVar27 = auVar8[0xd] ^ auVar14[0xd] ^ auVar3[0xd];
  bVar28 = auVar8[0xe] ^ auVar14[0xe] ^ auVar3[0xe];
  bVar29 = auVar8[0xf] ^ auVar14[0xf] ^ auVar3[0xf];
  auVar14[1] = bVar15;
  auVar14[0] = bVar30;
  auVar14[2] = bVar16;
  auVar14[3] = bVar17;
  auVar14[4] = bVar18;
  auVar14[5] = bVar19;
  auVar14[6] = bVar20;
  auVar14[7] = bVar21;
  auVar14[8] = bVar22;
  auVar14[9] = bVar23;
  auVar14[10] = bVar24;
  auVar14[0xb] = bVar25;
  auVar14[0xc] = bVar26;
  auVar14[0xd] = bVar27;
  auVar14[0xe] = bVar28;
  auVar14[0xf] = bVar29;
  auVar1[1] = bVar15;
  auVar1[0] = bVar30;
  auVar1[2] = bVar16;
  auVar1[3] = bVar17;
  auVar1[4] = bVar18;
  auVar1[5] = bVar19;
  auVar1[6] = bVar20;
  auVar1[7] = bVar21;
  auVar1[8] = bVar22;
  auVar1[9] = bVar23;
  auVar1[10] = bVar24;
  auVar1[0xb] = bVar25;
  auVar1[0xc] = bVar26;
  auVar1[0xd] = bVar27;
  auVar1[0xe] = bVar28;
  auVar1[0xf] = bVar29;
  auVar7 = NEON_ext(auVar14,auVar1,8,1);
  auVar11[0] = auVar7[0] ^ bVar30;
  auVar11[1] = auVar7[1] ^ bVar15;
  auVar11[2] = auVar7[2] ^ bVar16;
  auVar11[3] = auVar7[3] ^ bVar17;
  auVar11[4] = auVar7[4] ^ bVar18;
  auVar11[5] = auVar7[5] ^ bVar19;
  auVar11[6] = auVar7[6] ^ bVar20;
  auVar11[7] = auVar7[7] ^ bVar21;
  auVar11[8] = auVar7[8] ^ bVar22;
  auVar11[9] = auVar7[9] ^ bVar23;
  auVar11[10] = auVar7[10] ^ bVar24;
  auVar11[0xb] = auVar7[0xb] ^ bVar25;
  auVar11[0xc] = auVar7[0xc] ^ bVar26;
  auVar11[0xd] = auVar7[0xd] ^ bVar27;
  auVar11[0xe] = auVar7[0xe] ^ bVar28;
  auVar11[0xf] = auVar7[0xf] ^ bVar29;
  auVar7 = NEON_ext(auVar9,auVar11,8,1);
  param_1[2] = auVar7._0_8_;
  param_1[3] = auVar7._8_8_;
  param_1[4] = CONCAT17(bVar21,CONCAT16(bVar20,CONCAT15(bVar19,CONCAT14(bVar18,CONCAT13(bVar17,
                                                  CONCAT12(bVar16,CONCAT11(bVar15,bVar30)))))));
  param_1[5] = CONCAT17(bVar29,CONCAT16(bVar28,CONCAT15(bVar27,CONCAT14(bVar26,CONCAT13(bVar25,
                                                  CONCAT12(bVar24,CONCAT11(bVar23,bVar22)))))));
  return;
}


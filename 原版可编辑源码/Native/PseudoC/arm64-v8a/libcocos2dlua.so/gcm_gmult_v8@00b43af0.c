
void gcm_gmult_v8(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar5 = NEON_rev64(*param_1,1);
  auVar4 = NEON_ext(auVar5,auVar5,8,1);
  auVar1 = NEON_pmull(*(undefined8 *)*param_2,auVar4._0_8_,8);
  auVar3 = NEON_pmull2(*param_2,auVar4,8);
  auVar2 = NEON_pmull(*(undefined8 *)param_2[1],
                      CONCAT17(auVar5[7] ^ auVar4[7],
                               CONCAT16(auVar5[6] ^ auVar4[6],
                                        CONCAT15(auVar5[5] ^ auVar4[5],
                                                 CONCAT14(auVar5[4] ^ auVar4[4],
                                                          CONCAT13(auVar5[3] ^ auVar4[3],
                                                                   CONCAT12(auVar5[2] ^ auVar4[2],
                                                                            CONCAT11(auVar5[1] ^
                                                                                     auVar4[1],
                                                                                     auVar5[0] ^
                                                                                     auVar4[0]))))))
                              ),8);
  auVar6 = NEON_ext(auVar1,auVar3,8,1);
  auVar5 = NEON_pmull(auVar1._0_8_,0xc200000000000000,8);
  auVar4._0_8_ = CONCAT17(auVar2[7] ^ auVar6[7] ^ auVar1[7] ^ auVar3[7] ^ auVar5[7],
                          CONCAT16(auVar2[6] ^ auVar6[6] ^ auVar1[6] ^ auVar3[6] ^ auVar5[6],
                                   CONCAT15(auVar2[5] ^ auVar6[5] ^ auVar1[5] ^ auVar3[5] ^
                                            auVar5[5],
                                            CONCAT14(auVar2[4] ^ auVar6[4] ^ auVar1[4] ^ auVar3[4] ^
                                                     auVar5[4],
                                                     CONCAT13(auVar2[3] ^ auVar6[3] ^
                                                              auVar1[3] ^ auVar3[3] ^ auVar5[3],
                                                              CONCAT12(auVar2[2] ^ auVar6[2] ^
                                                                       auVar1[2] ^ auVar3[2] ^
                                                                       auVar5[2],
                                                                       CONCAT11(auVar2[1] ^
                                                                                auVar6[1] ^
                                                                                auVar1[1] ^
                                                                                auVar3[1] ^
                                                                                auVar5[1],
                                                                                auVar2[0] ^
                                                                                auVar6[0] ^
                                                                                auVar1[0] ^
                                                                                auVar3[0] ^
                                                                                auVar5[0])))))));
  auVar4[8] = auVar1[0] ^ auVar5[8];
  auVar4[9] = auVar1[1] ^ auVar5[9];
  auVar4[10] = auVar1[2] ^ auVar5[10];
  auVar4[0xb] = auVar1[3] ^ auVar5[0xb];
  auVar4[0xc] = auVar1[4] ^ auVar5[0xc];
  auVar4[0xd] = auVar1[5] ^ auVar5[0xd];
  auVar4[0xe] = auVar1[6] ^ auVar5[0xe];
  auVar4[0xf] = auVar1[7] ^ auVar5[0xf];
  auVar7 = NEON_ext(auVar4,auVar4,8,1);
  auVar4 = NEON_pmull(auVar4._0_8_,0xc200000000000000,8);
  auVar5[0] = auVar4[0] ^ auVar7[0] ^ auVar2[8] ^ auVar6[8] ^ auVar1[8] ^ auVar3[8];
  auVar5[1] = auVar4[1] ^ auVar7[1] ^ auVar2[9] ^ auVar6[9] ^ auVar1[9] ^ auVar3[9];
  auVar5[2] = auVar4[2] ^ auVar7[2] ^ auVar2[10] ^ auVar6[10] ^ auVar1[10] ^ auVar3[10];
  auVar5[3] = auVar4[3] ^ auVar7[3] ^ auVar2[0xb] ^ auVar6[0xb] ^ auVar1[0xb] ^ auVar3[0xb];
  auVar5[4] = auVar4[4] ^ auVar7[4] ^ auVar2[0xc] ^ auVar6[0xc] ^ auVar1[0xc] ^ auVar3[0xc];
  auVar5[5] = auVar4[5] ^ auVar7[5] ^ auVar2[0xd] ^ auVar6[0xd] ^ auVar1[0xd] ^ auVar3[0xd];
  auVar5[6] = auVar4[6] ^ auVar7[6] ^ auVar2[0xe] ^ auVar6[0xe] ^ auVar1[0xe] ^ auVar3[0xe];
  auVar5[7] = auVar4[7] ^ auVar7[7] ^ auVar2[0xf] ^ auVar6[0xf] ^ auVar1[0xf] ^ auVar3[0xf];
  auVar5[8] = auVar4[8] ^ auVar7[8] ^ auVar3[8];
  auVar5[9] = auVar4[9] ^ auVar7[9] ^ auVar3[9];
  auVar5[10] = auVar4[10] ^ auVar7[10] ^ auVar3[10];
  auVar5[0xb] = auVar4[0xb] ^ auVar7[0xb] ^ auVar3[0xb];
  auVar5[0xc] = auVar4[0xc] ^ auVar7[0xc] ^ auVar3[0xc];
  auVar5[0xd] = auVar4[0xd] ^ auVar7[0xd] ^ auVar3[0xd];
  auVar5[0xe] = auVar4[0xe] ^ auVar7[0xe] ^ auVar3[0xe];
  auVar5[0xf] = auVar4[0xf] ^ auVar7[0xf] ^ auVar3[0xf];
  auVar1 = NEON_rev64(auVar5,1);
  auVar1 = NEON_ext(auVar1,auVar1,8,1);
  *(long *)*param_1 = auVar1._0_8_;
  *(long *)(*param_1 + 8) = auVar1._8_8_;
  return;
}


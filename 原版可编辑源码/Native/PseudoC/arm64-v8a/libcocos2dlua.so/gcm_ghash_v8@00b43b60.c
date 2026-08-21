
void gcm_ghash_v8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 ulong param_4)

{
  long lVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  long lVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined1 auVar8 [16];
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 auVar16 [16];
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar30;
  
  uVar5 = param_4 - 0x20;
  uVar35 = *(undefined8 *)*param_2;
  uVar36 = *(undefined8 *)param_2[1];
  lVar6 = 0;
  if (uVar5 != 0) {
    lVar6 = 0x10;
  }
  auVar8 = NEON_ext(*param_1,*param_1,8,1);
  auVar31 = NEON_rev64(*param_3,1);
  uVar30 = auVar31._0_8_;
  auVar8 = NEON_rev64(auVar8,1);
  auVar31 = NEON_ext(auVar31,auVar31,8,1);
  if (0x1f < param_4) {
    pauVar4 = (undefined1 (*) [16])(param_3[1] + lVar6);
    auVar33 = NEON_rev64(param_3[1],1);
    auVar28 = NEON_ext(auVar33,auVar33,8,1);
    auVar16[0] = auVar31[0] ^ auVar8[0];
    auVar16[1] = auVar31[1] ^ auVar8[1];
    auVar16[2] = auVar31[2] ^ auVar8[2];
    auVar16[3] = auVar31[3] ^ auVar8[3];
    auVar16[4] = auVar31[4] ^ auVar8[4];
    auVar16[5] = auVar31[5] ^ auVar8[5];
    auVar16[6] = auVar31[6] ^ auVar8[6];
    auVar16[7] = auVar31[7] ^ auVar8[7];
    auVar16[8] = auVar31[8] ^ auVar8[8];
    auVar16[9] = auVar31[9] ^ auVar8[9];
    auVar16[10] = auVar31[10] ^ auVar8[10];
    auVar16[0xb] = auVar31[0xb] ^ auVar8[0xb];
    auVar16[0xc] = auVar31[0xc] ^ auVar8[0xc];
    auVar16[0xd] = auVar31[0xd] ^ auVar8[0xd];
    auVar16[0xe] = auVar31[0xe] ^ auVar8[0xe];
    auVar16[0xf] = auVar31[0xf] ^ auVar8[0xf];
    auVar8 = NEON_pmull(uVar35,auVar28._0_8_,8);
    auVar25[0] = auVar33[0] ^ auVar28[0];
    auVar25[1] = auVar33[1] ^ auVar28[1];
    auVar25[2] = auVar33[2] ^ auVar28[2];
    auVar25[3] = auVar33[3] ^ auVar28[3];
    auVar25[4] = auVar33[4] ^ auVar28[4];
    auVar25[5] = auVar33[5] ^ auVar28[5];
    auVar25[6] = auVar33[6] ^ auVar28[6];
    auVar25[7] = auVar33[7] ^ auVar28[7];
    auVar25[8] = auVar33[8] ^ auVar28[8];
    auVar25[9] = auVar33[9] ^ auVar28[9];
    auVar25[10] = auVar33[10] ^ auVar28[10];
    auVar25[0xb] = auVar33[0xb] ^ auVar28[0xb];
    auVar25[0xc] = auVar33[0xc] ^ auVar28[0xc];
    auVar25[0xd] = auVar33[0xd] ^ auVar28[0xd];
    auVar25[0xe] = auVar33[0xe] ^ auVar28[0xe];
    auVar25[0xf] = auVar33[0xf] ^ auVar28[0xf];
    auVar31 = NEON_pmull2(*param_2,auVar28,8);
    do {
      auVar33 = NEON_ext(auVar16,auVar16,8,1);
      bVar3 = 0x1f < uVar5;
      uVar5 = uVar5 - 0x20;
      auVar28 = NEON_pmull(*(undefined8 *)param_2[2],auVar16._0_8_,8);
      lVar1 = 0;
      if (bVar3) {
        lVar1 = lVar6;
      }
      auVar27 = NEON_pmull(uVar36,auVar25._0_8_,8);
      auVar26[0] = auVar33[0] ^ auVar16[0];
      auVar26[1] = auVar33[1] ^ auVar16[1];
      auVar26[2] = auVar33[2] ^ auVar16[2];
      auVar26[3] = auVar33[3] ^ auVar16[3];
      auVar26[4] = auVar33[4] ^ auVar16[4];
      auVar26[5] = auVar33[5] ^ auVar16[5];
      auVar26[6] = auVar33[6] ^ auVar16[6];
      auVar26[7] = auVar33[7] ^ auVar16[7];
      auVar26[8] = auVar33[8] ^ auVar16[8];
      auVar26[9] = auVar33[9] ^ auVar16[9];
      auVar26[10] = auVar33[10] ^ auVar16[10];
      auVar26[0xb] = auVar33[0xb] ^ auVar16[0xb];
      auVar26[0xc] = auVar33[0xc] ^ auVar16[0xc];
      auVar26[0xd] = auVar33[0xd] ^ auVar16[0xd];
      auVar26[0xe] = auVar33[0xe] ^ auVar16[0xe];
      auVar26[0xf] = auVar33[0xf] ^ auVar16[0xf];
      auVar25 = NEON_pmull2(param_2[2],auVar16,8);
      bVar7 = auVar28[0] ^ auVar8[0];
      bVar9 = auVar28[1] ^ auVar8[1];
      bVar10 = auVar28[2] ^ auVar8[2];
      bVar11 = auVar28[3] ^ auVar8[3];
      bVar12 = auVar28[4] ^ auVar8[4];
      bVar13 = auVar28[5] ^ auVar8[5];
      bVar14 = auVar28[6] ^ auVar8[6];
      bVar15 = auVar28[7] ^ auVar8[7];
      auVar33._0_8_ =
           CONCAT17(bVar15,CONCAT16(bVar14,CONCAT15(bVar13,CONCAT14(bVar12,CONCAT13(bVar11,CONCAT12(
                                                  bVar10,CONCAT11(bVar9,bVar7)))))));
      auVar33[8] = auVar28[8] ^ auVar8[8];
      auVar33[9] = auVar28[9] ^ auVar8[9];
      auVar33[10] = auVar28[10] ^ auVar8[10];
      auVar33[0xb] = auVar28[0xb] ^ auVar8[0xb];
      auVar33[0xc] = auVar28[0xc] ^ auVar8[0xc];
      auVar33[0xd] = auVar28[0xd] ^ auVar8[0xd];
      auVar33[0xe] = auVar28[0xe] ^ auVar8[0xe];
      auVar33[0xf] = auVar28[0xf] ^ auVar8[0xf];
      auVar16 = NEON_pmull2(param_2[1],auVar26,8);
      auVar8 = *pauVar4;
      puVar2 = *pauVar4;
      auVar28[0] = auVar25[0] ^ auVar31[0];
      auVar28[1] = auVar25[1] ^ auVar31[1];
      auVar28[2] = auVar25[2] ^ auVar31[2];
      auVar28[3] = auVar25[3] ^ auVar31[3];
      auVar28[4] = auVar25[4] ^ auVar31[4];
      auVar28[5] = auVar25[5] ^ auVar31[5];
      auVar28[6] = auVar25[6] ^ auVar31[6];
      auVar28[7] = auVar25[7] ^ auVar31[7];
      auVar28[8] = auVar25[8] ^ auVar31[8];
      auVar28[9] = auVar25[9] ^ auVar31[9];
      auVar28[10] = auVar25[10] ^ auVar31[10];
      auVar28[0xb] = auVar25[0xb] ^ auVar31[0xb];
      auVar28[0xc] = auVar25[0xc] ^ auVar31[0xc];
      auVar28[0xd] = auVar25[0xd] ^ auVar31[0xd];
      auVar28[0xe] = auVar25[0xe] ^ auVar31[0xe];
      auVar28[0xf] = auVar25[0xf] ^ auVar31[0xf];
      lVar6 = 0;
      if (uVar5 != 0) {
        lVar6 = lVar1;
      }
      auVar31 = NEON_ext(auVar33,auVar28,8,1);
      pauVar4 = (undefined1 (*) [16])(*(undefined1 (*) [16])(puVar2 + lVar1) + lVar6);
      auVar32 = NEON_rev64(auVar8,1);
      uVar30 = auVar32._0_8_;
      bVar17 = auVar16[8] ^ auVar27[8] ^ auVar31[8] ^ auVar33[8] ^ auVar28[8];
      bVar18 = auVar16[9] ^ auVar27[9] ^ auVar31[9] ^ auVar33[9] ^ auVar28[9];
      bVar19 = auVar16[10] ^ auVar27[10] ^ auVar31[10] ^ auVar33[10] ^ auVar28[10];
      bVar20 = auVar16[0xb] ^ auVar27[0xb] ^ auVar31[0xb] ^ auVar33[0xb] ^ auVar28[0xb];
      bVar21 = auVar16[0xc] ^ auVar27[0xc] ^ auVar31[0xc] ^ auVar33[0xc] ^ auVar28[0xc];
      bVar22 = auVar16[0xd] ^ auVar27[0xd] ^ auVar31[0xd] ^ auVar33[0xd] ^ auVar28[0xd];
      bVar23 = auVar16[0xe] ^ auVar27[0xe] ^ auVar31[0xe] ^ auVar33[0xe] ^ auVar28[0xe];
      bVar24 = auVar16[0xf] ^ auVar27[0xf] ^ auVar31[0xf] ^ auVar33[0xf] ^ auVar28[0xf];
      auVar8 = NEON_pmull(auVar33._0_8_,0xc200000000000000,8);
      auVar34 = NEON_rev64(*(undefined1 (*) [16])(puVar2 + lVar1),1);
      auVar29 = NEON_ext(auVar34,auVar34,8,1);
      auVar26 = NEON_ext(auVar32,auVar32,8,1);
      auVar31._0_8_ =
           CONCAT17(auVar16[7] ^ auVar27[7] ^ auVar31[7] ^ bVar15 ^ auVar28[7] ^ auVar8[7],
                    CONCAT16(auVar16[6] ^ auVar27[6] ^ auVar31[6] ^ bVar14 ^ auVar28[6] ^ auVar8[6],
                             CONCAT15(auVar16[5] ^ auVar27[5] ^ auVar31[5] ^ bVar13 ^ auVar28[5] ^
                                      auVar8[5],
                                      CONCAT14(auVar16[4] ^ auVar27[4] ^ auVar31[4] ^
                                               bVar12 ^ auVar28[4] ^ auVar8[4],
                                               CONCAT13(auVar16[3] ^ auVar27[3] ^ auVar31[3] ^
                                                        bVar11 ^ auVar28[3] ^ auVar8[3],
                                                        CONCAT12(auVar16[2] ^ auVar27[2] ^
                                                                 auVar31[2] ^ bVar10 ^ auVar28[2] ^
                                                                 auVar8[2],
                                                                 CONCAT11(auVar16[1] ^ auVar27[1] ^
                                                                          auVar31[1] ^
                                                                          bVar9 ^ auVar28[1] ^
                                                                          auVar8[1],
                                                                          auVar16[0] ^ auVar27[0] ^
                                                                          auVar31[0] ^
                                                                          bVar7 ^ auVar28[0] ^
                                                                          auVar8[0])))))));
      auVar31[8] = bVar7 ^ auVar8[8];
      auVar31[9] = bVar9 ^ auVar8[9];
      auVar31[10] = bVar10 ^ auVar8[10];
      auVar31[0xb] = bVar11 ^ auVar8[0xb];
      auVar31[0xc] = bVar12 ^ auVar8[0xc];
      auVar31[0xd] = bVar13 ^ auVar8[0xd];
      auVar31[0xe] = bVar14 ^ auVar8[0xe];
      auVar31[0xf] = bVar15 ^ auVar8[0xf];
      auVar8 = NEON_pmull(uVar35,auVar29._0_8_,8);
      auVar27 = NEON_ext(auVar31,auVar31,8,1);
      auVar33 = NEON_pmull(auVar31._0_8_,0xc200000000000000,8);
      auVar25[0] = auVar34[0] ^ auVar29[0];
      auVar25[1] = auVar34[1] ^ auVar29[1];
      auVar25[2] = auVar34[2] ^ auVar29[2];
      auVar25[3] = auVar34[3] ^ auVar29[3];
      auVar25[4] = auVar34[4] ^ auVar29[4];
      auVar25[5] = auVar34[5] ^ auVar29[5];
      auVar25[6] = auVar34[6] ^ auVar29[6];
      auVar25[7] = auVar34[7] ^ auVar29[7];
      auVar25[8] = auVar34[8] ^ auVar29[8];
      auVar25[9] = auVar34[9] ^ auVar29[9];
      auVar25[10] = auVar34[10] ^ auVar29[10];
      auVar25[0xb] = auVar34[0xb] ^ auVar29[0xb];
      auVar25[0xc] = auVar34[0xc] ^ auVar29[0xc];
      auVar25[0xd] = auVar34[0xd] ^ auVar29[0xd];
      auVar25[0xe] = auVar34[0xe] ^ auVar29[0xe];
      auVar25[0xf] = auVar34[0xf] ^ auVar29[0xf];
      auVar16[0] = auVar26[0] ^ bVar17 ^ auVar27[0] ^ auVar33[0];
      auVar16[1] = auVar26[1] ^ bVar18 ^ auVar27[1] ^ auVar33[1];
      auVar16[2] = auVar26[2] ^ bVar19 ^ auVar27[2] ^ auVar33[2];
      auVar16[3] = auVar26[3] ^ bVar20 ^ auVar27[3] ^ auVar33[3];
      auVar16[4] = auVar26[4] ^ bVar21 ^ auVar27[4] ^ auVar33[4];
      auVar16[5] = auVar26[5] ^ bVar22 ^ auVar27[5] ^ auVar33[5];
      auVar16[6] = auVar26[6] ^ bVar23 ^ auVar27[6] ^ auVar33[6];
      auVar16[7] = auVar26[7] ^ bVar24 ^ auVar27[7] ^ auVar33[7];
      auVar16[8] = auVar26[8] ^ auVar28[8] ^ auVar27[8] ^ auVar33[8];
      auVar16[9] = auVar26[9] ^ auVar28[9] ^ auVar27[9] ^ auVar33[9];
      auVar16[10] = auVar26[10] ^ auVar28[10] ^ auVar27[10] ^ auVar33[10];
      auVar16[0xb] = auVar26[0xb] ^ auVar28[0xb] ^ auVar27[0xb] ^ auVar33[0xb];
      auVar16[0xc] = auVar26[0xc] ^ auVar28[0xc] ^ auVar27[0xc] ^ auVar33[0xc];
      auVar16[0xd] = auVar26[0xd] ^ auVar28[0xd] ^ auVar27[0xd] ^ auVar33[0xd];
      auVar16[0xe] = auVar26[0xe] ^ auVar28[0xe] ^ auVar27[0xe] ^ auVar33[0xe];
      auVar16[0xf] = auVar26[0xf] ^ auVar28[0xf] ^ auVar27[0xf] ^ auVar33[0xf];
      auVar31 = NEON_pmull2(*param_2,auVar29,8);
    } while (bVar3);
    auVar31 = NEON_ext(auVar32,auVar32,8,1);
    auVar8[0] = auVar33[0] ^ bVar17 ^ auVar27[0];
    auVar8[1] = auVar33[1] ^ bVar18 ^ auVar27[1];
    auVar8[2] = auVar33[2] ^ bVar19 ^ auVar27[2];
    auVar8[3] = auVar33[3] ^ bVar20 ^ auVar27[3];
    auVar8[4] = auVar33[4] ^ bVar21 ^ auVar27[4];
    auVar8[5] = auVar33[5] ^ bVar22 ^ auVar27[5];
    auVar8[6] = auVar33[6] ^ bVar23 ^ auVar27[6];
    auVar8[7] = auVar33[7] ^ bVar24 ^ auVar27[7];
    auVar8[8] = auVar33[8] ^ auVar28[8] ^ auVar27[8];
    auVar8[9] = auVar33[9] ^ auVar28[9] ^ auVar27[9];
    auVar8[10] = auVar33[10] ^ auVar28[10] ^ auVar27[10];
    auVar8[0xb] = auVar33[0xb] ^ auVar28[0xb] ^ auVar27[0xb];
    auVar8[0xc] = auVar33[0xc] ^ auVar28[0xc] ^ auVar27[0xc];
    auVar8[0xd] = auVar33[0xd] ^ auVar28[0xd] ^ auVar27[0xd];
    auVar8[0xe] = auVar33[0xe] ^ auVar28[0xe] ^ auVar27[0xe];
    auVar8[0xf] = auVar33[0xf] ^ auVar28[0xf] ^ auVar27[0xf];
    if (uVar5 == 0xffffffffffffffe0) goto LAB_00b43cac;
  }
  auVar16 = NEON_ext(auVar8,auVar8,8,1);
  bVar7 = auVar31[0] ^ auVar8[0];
  bVar9 = auVar31[1] ^ auVar8[1];
  bVar10 = auVar31[2] ^ auVar8[2];
  bVar11 = auVar31[3] ^ auVar8[3];
  bVar12 = auVar31[4] ^ auVar8[4];
  bVar13 = auVar31[5] ^ auVar8[5];
  bVar14 = auVar31[6] ^ auVar8[6];
  bVar15 = auVar31[7] ^ auVar8[7];
  auVar29._0_8_ =
       CONCAT17(bVar15,CONCAT16(bVar14,CONCAT15(bVar13,CONCAT14(bVar12,CONCAT13(bVar11,CONCAT12(
                                                  bVar10,CONCAT11(bVar9,bVar7)))))));
  auVar29[8] = auVar31[8] ^ auVar8[8];
  auVar29[9] = auVar31[9] ^ auVar8[9];
  auVar29[10] = auVar31[10] ^ auVar8[10];
  auVar29[0xb] = auVar31[0xb] ^ auVar8[0xb];
  auVar29[0xc] = auVar31[0xc] ^ auVar8[0xc];
  auVar29[0xd] = auVar31[0xd] ^ auVar8[0xd];
  auVar29[0xe] = auVar31[0xe] ^ auVar8[0xe];
  auVar29[0xf] = auVar31[0xf] ^ auVar8[0xf];
  auVar31 = NEON_pmull(uVar35,auVar29._0_8_,8);
  auVar33 = NEON_pmull2(*param_2,auVar29,8);
  auVar28 = NEON_pmull(uVar36,CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ auVar16[7] ^ bVar15,
                                       CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ auVar16[6] ^ bVar14,
                                                CONCAT15((byte)((ulong)uVar30 >> 0x28) ^ auVar16[5]
                                                         ^ bVar13,CONCAT14((byte)((ulong)uVar30 >>
                                                                                 0x20) ^ auVar16[4]
                                                                           ^ bVar12,CONCAT13((byte)(
                                                  (ulong)uVar30 >> 0x18) ^ auVar16[3] ^ bVar11,
                                                  CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                           auVar16[2] ^ bVar10,
                                                           CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                                    auVar16[1] ^ bVar9,
                                                                    (byte)uVar30 ^ auVar16[0] ^
                                                                    bVar7))))))),8);
  auVar25 = NEON_ext(auVar31,auVar33,8,1);
  auVar8 = NEON_pmull(auVar31._0_8_,0xc200000000000000,8);
  auVar27._0_8_ =
       CONCAT17(auVar28[7] ^ auVar25[7] ^ auVar31[7] ^ auVar33[7] ^ auVar8[7],
                CONCAT16(auVar28[6] ^ auVar25[6] ^ auVar31[6] ^ auVar33[6] ^ auVar8[6],
                         CONCAT15(auVar28[5] ^ auVar25[5] ^ auVar31[5] ^ auVar33[5] ^ auVar8[5],
                                  CONCAT14(auVar28[4] ^ auVar25[4] ^ auVar31[4] ^ auVar33[4] ^
                                           auVar8[4],
                                           CONCAT13(auVar28[3] ^ auVar25[3] ^
                                                    auVar31[3] ^ auVar33[3] ^ auVar8[3],
                                                    CONCAT12(auVar28[2] ^ auVar25[2] ^
                                                             auVar31[2] ^ auVar33[2] ^ auVar8[2],
                                                             CONCAT11(auVar28[1] ^ auVar25[1] ^
                                                                      auVar31[1] ^ auVar33[1] ^
                                                                      auVar8[1],
                                                                      auVar28[0] ^ auVar25[0] ^
                                                                      auVar31[0] ^ auVar33[0] ^
                                                                      auVar8[0])))))));
  auVar27[8] = auVar31[0] ^ auVar8[8];
  auVar27[9] = auVar31[1] ^ auVar8[9];
  auVar27[10] = auVar31[2] ^ auVar8[10];
  auVar27[0xb] = auVar31[3] ^ auVar8[0xb];
  auVar27[0xc] = auVar31[4] ^ auVar8[0xc];
  auVar27[0xd] = auVar31[5] ^ auVar8[0xd];
  auVar27[0xe] = auVar31[6] ^ auVar8[0xe];
  auVar27[0xf] = auVar31[7] ^ auVar8[0xf];
  auVar26 = NEON_ext(auVar27,auVar27,8,1);
  auVar16 = NEON_pmull(auVar27._0_8_,0xc200000000000000,8);
  auVar8[0] = auVar16[0] ^ auVar26[0] ^ auVar28[8] ^ auVar25[8] ^ auVar31[8] ^ auVar33[8];
  auVar8[1] = auVar16[1] ^ auVar26[1] ^ auVar28[9] ^ auVar25[9] ^ auVar31[9] ^ auVar33[9];
  auVar8[2] = auVar16[2] ^ auVar26[2] ^ auVar28[10] ^ auVar25[10] ^ auVar31[10] ^ auVar33[10];
  auVar8[3] = auVar16[3] ^ auVar26[3] ^ auVar28[0xb] ^ auVar25[0xb] ^ auVar31[0xb] ^ auVar33[0xb];
  auVar8[4] = auVar16[4] ^ auVar26[4] ^ auVar28[0xc] ^ auVar25[0xc] ^ auVar31[0xc] ^ auVar33[0xc];
  auVar8[5] = auVar16[5] ^ auVar26[5] ^ auVar28[0xd] ^ auVar25[0xd] ^ auVar31[0xd] ^ auVar33[0xd];
  auVar8[6] = auVar16[6] ^ auVar26[6] ^ auVar28[0xe] ^ auVar25[0xe] ^ auVar31[0xe] ^ auVar33[0xe];
  auVar8[7] = auVar16[7] ^ auVar26[7] ^ auVar28[0xf] ^ auVar25[0xf] ^ auVar31[0xf] ^ auVar33[0xf];
  auVar8[8] = auVar16[8] ^ auVar26[8] ^ auVar33[8];
  auVar8[9] = auVar16[9] ^ auVar26[9] ^ auVar33[9];
  auVar8[10] = auVar16[10] ^ auVar26[10] ^ auVar33[10];
  auVar8[0xb] = auVar16[0xb] ^ auVar26[0xb] ^ auVar33[0xb];
  auVar8[0xc] = auVar16[0xc] ^ auVar26[0xc] ^ auVar33[0xc];
  auVar8[0xd] = auVar16[0xd] ^ auVar26[0xd] ^ auVar33[0xd];
  auVar8[0xe] = auVar16[0xe] ^ auVar26[0xe] ^ auVar33[0xe];
  auVar8[0xf] = auVar16[0xf] ^ auVar26[0xf] ^ auVar33[0xf];
LAB_00b43cac:
  auVar8 = NEON_rev64(auVar8,1);
  auVar8 = NEON_ext(auVar8,auVar8,8,1);
  *(long *)*param_1 = auVar8._0_8_;
  *(long *)(*param_1 + 8) = auVar8._8_8_;
  return;
}


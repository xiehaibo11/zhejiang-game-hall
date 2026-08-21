
void FUN_00df235c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  unkbyte9 Var5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  
  uVar26 = param_1[-3];
  Var5 = *(unkbyte9 *)(param_1 + -4);
  uVar23 = *(undefined8 *)((long)param_1 + -1);
  uVar24 = *(undefined8 *)((long)param_1 + 0x1f);
  uVar25 = *(undefined8 *)((long)param_1 + 0x3f);
  sVar10 = (ushort)(byte)Var5 + (ushort)(byte)((unkuint9)Var5 >> 8);
  sVar4 = (ushort)(byte)((unkuint9)Var5 >> 0x10) + (ushort)(byte)((unkuint9)Var5 >> 0x18);
  uVar12 = (undefined1)((ushort)sVar4 >> 8);
  sVar11 = (ushort)(byte)((unkuint9)Var5 >> 0x20) + (ushort)(byte)((unkuint9)Var5 >> 0x28);
  uVar13 = (undefined1)((ushort)sVar11 >> 8);
  sVar7 = (ushort)(byte)((unkuint9)Var5 >> 0x30) + (ushort)(byte)((unkuint9)Var5 >> 0x38);
  uVar14 = (undefined1)((ushort)sVar7 >> 8);
  sVar6 = (ushort)(byte)((unkuint9)Var5 >> 0x40) + (ushort)(byte)((ulong)uVar26 >> 8);
  uVar15 = (undefined1)sVar6;
  uVar16 = (undefined1)((ushort)sVar6 >> 8);
  sVar6 = (ushort)(byte)((ulong)uVar26 >> 0x10) + (ushort)(byte)((ulong)uVar26 >> 0x18);
  uVar17 = (undefined1)sVar6;
  uVar18 = (undefined1)((ushort)sVar6 >> 8);
  sVar6 = (ushort)(byte)((ulong)uVar26 >> 0x20) + (ushort)(byte)((ulong)uVar26 >> 0x28);
  uVar19 = (undefined1)sVar6;
  uVar20 = (undefined1)((ushort)sVar6 >> 8);
  sVar6 = (ushort)(byte)((ulong)uVar26 >> 0x30) + (ushort)(byte)((ulong)uVar26 >> 0x38);
  uVar21 = (undefined1)sVar6;
  uVar22 = (undefined1)((ushort)sVar6 >> 8);
  auVar39[2] = (char)sVar4;
  auVar39._0_2_ = sVar10;
  auVar39[3] = uVar12;
  auVar39[4] = (char)sVar11;
  auVar39[5] = uVar13;
  auVar39[6] = (char)sVar7;
  auVar39[7] = uVar14;
  auVar39[8] = uVar15;
  auVar39[9] = uVar16;
  auVar39[10] = uVar17;
  auVar39[0xb] = uVar18;
  auVar39[0xc] = uVar19;
  auVar39[0xd] = uVar20;
  auVar39[0xe] = uVar21;
  auVar39[0xf] = uVar22;
  auVar2[2] = (char)sVar4;
  auVar2._0_2_ = sVar10;
  auVar2[3] = uVar12;
  auVar2[4] = (char)sVar11;
  auVar2[5] = uVar13;
  auVar2[6] = (char)sVar7;
  auVar2[7] = uVar14;
  auVar2[8] = uVar15;
  auVar2[9] = uVar16;
  auVar2[10] = uVar17;
  auVar2[0xb] = uVar18;
  auVar2[0xc] = uVar19;
  auVar2[0xd] = uVar20;
  auVar2[0xe] = uVar21;
  auVar2[0xf] = uVar22;
  auVar39 = NEON_ext(auVar39,auVar2,8,1);
  sVar10 = auVar39._0_2_ + sVar10;
  sVar4 = auVar39._2_2_ + sVar4;
  sVar11 = auVar39._4_2_ + sVar11;
  sVar7 = auVar39._6_2_ + sVar7;
  sVar6 = sVar10 + sVar4;
  sVar8 = sVar11 + sVar7;
  sVar10 = sVar10 + sVar4;
  sVar11 = sVar11 + sVar7;
  sVar7 = sVar6 + sVar8;
  sVar9 = sVar10 + sVar11;
  sVar6 = sVar6 + sVar8;
  sVar10 = sVar10 + sVar11;
  uVar26 = *(undefined8 *)((long)param_1 + 0x5f);
  uVar1 = CONCAT13((char)((ushort)sVar9 >> 8),CONCAT12((char)sVar9,sVar7));
  uVar27 = *(undefined8 *)((long)param_1 + 0x7f);
  uVar28 = *(undefined8 *)((long)param_1 + 0x9f);
  uVar29 = *(undefined8 *)((long)param_1 + 0xbf);
  uVar30 = *(undefined8 *)((long)param_1 + 0xdf);
  uVar31 = *(undefined8 *)((long)param_1 + 0xff);
  uVar32 = *(undefined8 *)((long)param_1 + 0x11f);
  uVar33 = *(undefined8 *)((long)param_1 + 0x13f);
  uVar34 = *(undefined8 *)((long)param_1 + 0x15f);
  uVar35 = *(undefined8 *)((long)param_1 + 0x17f);
  uVar36 = *(undefined8 *)((long)param_1 + 0x19f);
  uVar37 = *(undefined8 *)((long)param_1 + 0x1bf);
  uVar38 = *(undefined8 *)((long)param_1 + 0x1df);
  sVar4 = sVar7 + (ushort)(byte)uVar23 + (ushort)(byte)uVar24 + (ushort)(byte)uVar25 +
          (ushort)(byte)uVar26 + (ushort)(byte)uVar27 + (ushort)(byte)uVar28 + (ushort)(byte)uVar29
          + (ushort)(byte)uVar30 + (ushort)(byte)uVar31 + (ushort)(byte)uVar32 +
          (ushort)(byte)uVar33 + (ushort)(byte)uVar34 + (ushort)(byte)uVar35 + (ushort)(byte)uVar36
          + (ushort)(byte)uVar37 + (ushort)(byte)uVar38;
  sVar11 = sVar9 + (ushort)(byte)((ulong)uVar23 >> 8) + (ushort)(byte)((ulong)uVar24 >> 8) +
           (ushort)(byte)((ulong)uVar25 >> 8) + (ushort)(byte)((ulong)uVar26 >> 8) +
           (ushort)(byte)((ulong)uVar27 >> 8) + (ushort)(byte)((ulong)uVar28 >> 8) +
           (ushort)(byte)((ulong)uVar29 >> 8) + (ushort)(byte)((ulong)uVar30 >> 8) +
           (ushort)(byte)((ulong)uVar31 >> 8) + (ushort)(byte)((ulong)uVar32 >> 8) +
           (ushort)(byte)((ulong)uVar33 >> 8) + (ushort)(byte)((ulong)uVar34 >> 8) +
           (ushort)(byte)((ulong)uVar35 >> 8) + (ushort)(byte)((ulong)uVar36 >> 8) +
           (ushort)(byte)((ulong)uVar37 >> 8) + (ushort)(byte)((ulong)uVar38 >> 8);
  uVar12 = (undefined1)sVar11;
  uVar13 = (undefined1)((ushort)sVar11 >> 8);
  sVar11 = sVar6 + (ushort)(byte)((ulong)uVar23 >> 0x10) + (ushort)(byte)((ulong)uVar24 >> 0x10) +
           (ushort)(byte)((ulong)uVar25 >> 0x10) + (ushort)(byte)((ulong)uVar26 >> 0x10) +
           (ushort)(byte)((ulong)uVar27 >> 0x10) + (ushort)(byte)((ulong)uVar28 >> 0x10) +
           (ushort)(byte)((ulong)uVar29 >> 0x10) + (ushort)(byte)((ulong)uVar30 >> 0x10) +
           (ushort)(byte)((ulong)uVar31 >> 0x10) + (ushort)(byte)((ulong)uVar32 >> 0x10) +
           (ushort)(byte)((ulong)uVar33 >> 0x10) + (ushort)(byte)((ulong)uVar34 >> 0x10) +
           (ushort)(byte)((ulong)uVar35 >> 0x10) + (ushort)(byte)((ulong)uVar36 >> 0x10) +
           (ushort)(byte)((ulong)uVar37 >> 0x10) + (ushort)(byte)((ulong)uVar38 >> 0x10);
  uVar14 = (undefined1)sVar11;
  uVar15 = (undefined1)((ushort)sVar11 >> 8);
  sVar11 = sVar10 + (ushort)(byte)((ulong)uVar23 >> 0x18) + (ushort)(byte)((ulong)uVar24 >> 0x18) +
           (ushort)(byte)((ulong)uVar25 >> 0x18) + (ushort)(byte)((ulong)uVar26 >> 0x18) +
           (ushort)(byte)((ulong)uVar27 >> 0x18) + (ushort)(byte)((ulong)uVar28 >> 0x18) +
           (ushort)(byte)((ulong)uVar29 >> 0x18) + (ushort)(byte)((ulong)uVar30 >> 0x18) +
           (ushort)(byte)((ulong)uVar31 >> 0x18) + (ushort)(byte)((ulong)uVar32 >> 0x18) +
           (ushort)(byte)((ulong)uVar33 >> 0x18) + (ushort)(byte)((ulong)uVar34 >> 0x18) +
           (ushort)(byte)((ulong)uVar35 >> 0x18) + (ushort)(byte)((ulong)uVar36 >> 0x18) +
           (ushort)(byte)((ulong)uVar37 >> 0x18) + (ushort)(byte)((ulong)uVar38 >> 0x18);
  uVar16 = (undefined1)sVar11;
  uVar17 = (undefined1)((ushort)sVar11 >> 8);
  sVar11 = sVar7 + (ushort)(byte)((ulong)uVar23 >> 0x20) + (ushort)(byte)((ulong)uVar24 >> 0x20) +
           (ushort)(byte)((ulong)uVar25 >> 0x20) + (ushort)(byte)((ulong)uVar26 >> 0x20) +
           (ushort)(byte)((ulong)uVar27 >> 0x20) + (ushort)(byte)((ulong)uVar28 >> 0x20) +
           (ushort)(byte)((ulong)uVar29 >> 0x20) + (ushort)(byte)((ulong)uVar30 >> 0x20) +
           (ushort)(byte)((ulong)uVar31 >> 0x20) + (ushort)(byte)((ulong)uVar32 >> 0x20) +
           (ushort)(byte)((ulong)uVar33 >> 0x20) + (ushort)(byte)((ulong)uVar34 >> 0x20) +
           (ushort)(byte)((ulong)uVar35 >> 0x20) + (ushort)(byte)((ulong)uVar36 >> 0x20) +
           (ushort)(byte)((ulong)uVar37 >> 0x20) + (ushort)(byte)((ulong)uVar38 >> 0x20);
  sVar7 = (short)((uint)uVar1 >> 0x10) + (ushort)(byte)((ulong)uVar23 >> 0x28) +
          (ushort)(byte)((ulong)uVar24 >> 0x28) + (ushort)(byte)((ulong)uVar25 >> 0x28) +
          (ushort)(byte)((ulong)uVar26 >> 0x28) + (ushort)(byte)((ulong)uVar27 >> 0x28) +
          (ushort)(byte)((ulong)uVar28 >> 0x28) + (ushort)(byte)((ulong)uVar29 >> 0x28) +
          (ushort)(byte)((ulong)uVar30 >> 0x28) + (ushort)(byte)((ulong)uVar31 >> 0x28) +
          (ushort)(byte)((ulong)uVar32 >> 0x28) + (ushort)(byte)((ulong)uVar33 >> 0x28) +
          (ushort)(byte)((ulong)uVar34 >> 0x28) + (ushort)(byte)((ulong)uVar35 >> 0x28) +
          (ushort)(byte)((ulong)uVar36 >> 0x28) + (ushort)(byte)((ulong)uVar37 >> 0x28) +
          (ushort)(byte)((ulong)uVar38 >> 0x28);
  sVar6 = (short)(CONCAT15((char)((ushort)sVar6 >> 8),CONCAT14((char)sVar6,uVar1)) >> 0x20) +
          (ushort)(byte)((ulong)uVar23 >> 0x30) + (ushort)(byte)((ulong)uVar24 >> 0x30) +
          (ushort)(byte)((ulong)uVar25 >> 0x30) + (ushort)(byte)((ulong)uVar26 >> 0x30) +
          (ushort)(byte)((ulong)uVar27 >> 0x30) + (ushort)(byte)((ulong)uVar28 >> 0x30) +
          (ushort)(byte)((ulong)uVar29 >> 0x30) + (ushort)(byte)((ulong)uVar30 >> 0x30) +
          (ushort)(byte)((ulong)uVar31 >> 0x30) + (ushort)(byte)((ulong)uVar32 >> 0x30) +
          (ushort)(byte)((ulong)uVar33 >> 0x30) + (ushort)(byte)((ulong)uVar34 >> 0x30) +
          (ushort)(byte)((ulong)uVar35 >> 0x30) + (ushort)(byte)((ulong)uVar36 >> 0x30) +
          (ushort)(byte)((ulong)uVar37 >> 0x30) + (ushort)(byte)((ulong)uVar38 >> 0x30);
  sVar10 = sVar10 + (ushort)(byte)((ulong)uVar23 >> 0x38) + (ushort)(byte)((ulong)uVar24 >> 0x38) +
           (ushort)(byte)((ulong)uVar25 >> 0x38) + (ushort)(byte)((ulong)uVar26 >> 0x38) +
           (ushort)(byte)((ulong)uVar27 >> 0x38) + (ushort)(byte)((ulong)uVar28 >> 0x38) +
           (ushort)(byte)((ulong)uVar29 >> 0x38) + (ushort)(byte)((ulong)uVar30 >> 0x38) +
           (ushort)(byte)((ulong)uVar31 >> 0x38) + (ushort)(byte)((ulong)uVar32 >> 0x38) +
           (ushort)(byte)((ulong)uVar33 >> 0x38) + (ushort)(byte)((ulong)uVar34 >> 0x38) +
           (ushort)(byte)((ulong)uVar35 >> 0x38) + (ushort)(byte)((ulong)uVar36 >> 0x38) +
           (ushort)(byte)((ulong)uVar37 >> 0x38) + (ushort)(byte)((ulong)uVar38 >> 0x38);
  auVar3[2] = uVar12;
  auVar3._0_2_ = sVar4;
  auVar3[3] = uVar13;
  auVar3[4] = uVar14;
  auVar3[5] = uVar15;
  auVar3[6] = uVar16;
  auVar3[7] = uVar17;
  auVar3[8] = (char)sVar11;
  auVar3[9] = (char)((ushort)sVar11 >> 8);
  auVar3[10] = (char)sVar7;
  auVar3[0xb] = (char)((ushort)sVar7 >> 8);
  auVar3[0xc] = (char)sVar6;
  auVar3[0xd] = (char)((ushort)sVar6 >> 8);
  auVar3[0xe] = (char)sVar10;
  auVar3[0xf] = (char)((ushort)sVar10 >> 8);
  uVar26 = NEON_rshrn(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(
                                                  uVar13,CONCAT12(uVar12,sVar4)))))),auVar3,5,2);
  uVar12 = (undefined1)uVar26;
  param_1[1] = CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,
                                                  CONCAT12(uVar12,CONCAT11(uVar12,uVar12)))))));
  *param_1 = CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,
                                                  CONCAT12(uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[5] = CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,
                                                  CONCAT12(uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[4] = CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,
                                                  CONCAT12(uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[9] = CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,
                                                  CONCAT12(uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[8] = CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,
                                                  CONCAT12(uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0xd] = CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,
                                                  CONCAT12(uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0xc] = CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,
                                                  CONCAT12(uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x11] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x10] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x15] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x14] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x19] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x18] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x1d] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x1c] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x21] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x20] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x25] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x24] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x29] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x28] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x2d] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x2c] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x31] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x30] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x35] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x34] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x39] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x38] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x3d] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  param_1[0x3c] =
       CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,CONCAT13(uVar12,CONCAT12(
                                                  uVar12,CONCAT11(uVar12,uVar12)))))));
  return;
}



void FUN_0114ecd4(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  unkbyte9 Var4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined1 uVar11;
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
  undefined1 auVar22 [16];
  
  uVar3 = param_1[-3];
  Var4 = *(unkbyte9 *)(param_1 + -4);
  sVar9 = (ushort)(byte)Var4 + (ushort)(byte)((unkuint9)Var4 >> 8);
  sVar6 = (ushort)(byte)((unkuint9)Var4 >> 0x10) + (ushort)(byte)((unkuint9)Var4 >> 0x18);
  uVar11 = (undefined1)((ushort)sVar6 >> 8);
  sVar10 = (ushort)(byte)((unkuint9)Var4 >> 0x20) + (ushort)(byte)((unkuint9)Var4 >> 0x28);
  uVar12 = (undefined1)((ushort)sVar10 >> 8);
  sVar8 = (ushort)(byte)((unkuint9)Var4 >> 0x30) + (ushort)(byte)((unkuint9)Var4 >> 0x38);
  uVar13 = (undefined1)((ushort)sVar8 >> 8);
  sVar5 = (ushort)(byte)((unkuint9)Var4 >> 0x40) + (ushort)(byte)((ulong)uVar3 >> 8);
  uVar14 = (undefined1)sVar5;
  uVar15 = (undefined1)((ushort)sVar5 >> 8);
  sVar5 = (ushort)(byte)((ulong)uVar3 >> 0x10) + (ushort)(byte)((ulong)uVar3 >> 0x18);
  uVar16 = (undefined1)sVar5;
  uVar17 = (undefined1)((ushort)sVar5 >> 8);
  sVar5 = (ushort)(byte)((ulong)uVar3 >> 0x20) + (ushort)(byte)((ulong)uVar3 >> 0x28);
  uVar18 = (undefined1)sVar5;
  uVar19 = (undefined1)((ushort)sVar5 >> 8);
  sVar5 = (ushort)(byte)((ulong)uVar3 >> 0x30) + (ushort)(byte)((ulong)uVar3 >> 0x38);
  uVar20 = (undefined1)sVar5;
  uVar21 = (undefined1)((ushort)sVar5 >> 8);
  auVar22[2] = (char)sVar6;
  auVar22._0_2_ = sVar9;
  auVar22[3] = uVar11;
  auVar22[4] = (char)sVar10;
  auVar22[5] = uVar12;
  auVar22[6] = (char)sVar8;
  auVar22[7] = uVar13;
  auVar22[8] = uVar14;
  auVar22[9] = uVar15;
  auVar22[10] = uVar16;
  auVar22[0xb] = uVar17;
  auVar22[0xc] = uVar18;
  auVar22[0xd] = uVar19;
  auVar22[0xe] = uVar20;
  auVar22[0xf] = uVar21;
  auVar1[2] = (char)sVar6;
  auVar1._0_2_ = sVar9;
  auVar1[3] = uVar11;
  auVar1[4] = (char)sVar10;
  auVar1[5] = uVar12;
  auVar1[6] = (char)sVar8;
  auVar1[7] = uVar13;
  auVar1[8] = uVar14;
  auVar1[9] = uVar15;
  auVar1[10] = uVar16;
  auVar1[0xb] = uVar17;
  auVar1[0xc] = uVar18;
  auVar1[0xd] = uVar19;
  auVar1[0xe] = uVar20;
  auVar1[0xf] = uVar21;
  auVar22 = NEON_ext(auVar22,auVar1,8,1);
  sVar9 = auVar22._0_2_ + sVar9;
  sVar6 = auVar22._2_2_ + sVar6;
  sVar10 = auVar22._4_2_ + sVar10;
  sVar8 = auVar22._6_2_ + sVar8;
  sVar5 = sVar9 + sVar6;
  sVar7 = sVar10 + sVar8;
  sVar9 = sVar9 + sVar6;
  sVar10 = sVar10 + sVar8;
  sVar6 = sVar5 + sVar7;
  sVar8 = sVar9 + sVar10;
  sVar5 = sVar5 + sVar7;
  sVar9 = sVar9 + sVar10;
  uVar11 = (undefined1)sVar8;
  uVar12 = (undefined1)((ushort)sVar8 >> 8);
  uVar13 = (undefined1)sVar5;
  uVar14 = (undefined1)((ushort)sVar5 >> 8);
  uVar15 = (undefined1)sVar9;
  uVar16 = (undefined1)((ushort)sVar9 >> 8);
  auVar2[2] = uVar11;
  auVar2._0_2_ = sVar6;
  auVar2[3] = uVar12;
  auVar2[4] = uVar13;
  auVar2[5] = uVar14;
  auVar2[6] = uVar15;
  auVar2[7] = uVar16;
  auVar2[8] = (char)sVar6;
  auVar2[9] = (char)((ushort)sVar6 >> 8);
  auVar2[10] = uVar11;
  auVar2[0xb] = uVar12;
  auVar2[0xc] = uVar13;
  auVar2[0xd] = uVar14;
  auVar2[0xe] = uVar15;
  auVar2[0xf] = uVar16;
  uVar3 = NEON_rshrn(CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12
                                                  ,CONCAT12(uVar11,sVar6)))))),auVar2,4,2);
  uVar11 = (undefined1)uVar3;
  param_1[1] = CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,
                                                  CONCAT12(uVar11,CONCAT11(uVar11,uVar11)))))));
  *param_1 = CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,
                                                  CONCAT12(uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[5] = CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,
                                                  CONCAT12(uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[4] = CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,
                                                  CONCAT12(uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[9] = CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,
                                                  CONCAT12(uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[8] = CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,
                                                  CONCAT12(uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0xd] = CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,
                                                  CONCAT12(uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0xc] = CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,
                                                  CONCAT12(uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x11] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x10] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x15] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x14] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x19] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x18] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x1d] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x1c] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x21] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x20] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x25] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x24] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x29] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x28] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x2d] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x2c] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x31] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x30] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x35] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x34] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x39] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x38] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x3d] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  param_1[0x3c] =
       CONCAT17(uVar11,CONCAT16(uVar11,CONCAT15(uVar11,CONCAT14(uVar11,CONCAT13(uVar11,CONCAT12(
                                                  uVar11,CONCAT11(uVar11,uVar11)))))));
  return;
}



void FUN_00df2200(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  short sVar6;
  undefined8 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  undefined8 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  
  uVar7 = *(undefined8 *)(param_1 + -8);
  bVar1 = *(byte *)((long)param_1 + -0x21);
  bVar2 = *(byte *)((long)param_1 + -1);
  bVar3 = *(byte *)((long)param_1 + 0x3f);
  bVar4 = *(byte *)((long)param_1 + 0x1f);
  sVar6 = (ushort)(byte)uVar7 - (ushort)bVar1;
  sVar8 = (ushort)(byte)((ulong)uVar7 >> 8) - (ushort)bVar1;
  sVar9 = (ushort)(byte)((ulong)uVar7 >> 0x10) - (ushort)bVar1;
  sVar10 = (ushort)(byte)((ulong)uVar7 >> 0x18) - (ushort)bVar1;
  sVar22 = (ushort)(byte)((ulong)uVar7 >> 0x20) - (ushort)bVar1;
  sVar23 = (ushort)(byte)((ulong)uVar7 >> 0x28) - (ushort)bVar1;
  sVar24 = (ushort)(byte)((ulong)uVar7 >> 0x30) - (ushort)bVar1;
  sVar25 = (ushort)(byte)((ulong)uVar7 >> 0x38) - (ushort)bVar1;
  bVar1 = *(byte *)((long)param_1 + 0x5f);
  uVar27 = (undefined1)(sVar8 + (ushort)bVar2);
  uVar28 = (undefined1)((ushort)(sVar8 + (ushort)bVar2) >> 8);
  uVar29 = (undefined1)(sVar9 + (ushort)bVar2);
  uVar30 = (undefined1)((ushort)(sVar9 + (ushort)bVar2) >> 8);
  uVar31 = (undefined1)(sVar10 + (ushort)bVar2);
  uVar32 = (undefined1)((ushort)(sVar10 + (ushort)bVar2) >> 8);
  uVar33 = (undefined1)(sVar8 + (ushort)bVar4);
  uVar34 = (undefined1)((ushort)(sVar8 + (ushort)bVar4) >> 8);
  uVar35 = (undefined1)(sVar9 + (ushort)bVar4);
  uVar36 = (undefined1)((ushort)(sVar9 + (ushort)bVar4) >> 8);
  uVar37 = (undefined1)(sVar10 + (ushort)bVar4);
  uVar38 = (undefined1)((ushort)(sVar10 + (ushort)bVar4) >> 8);
  uVar16 = (undefined1)(sVar8 + (ushort)bVar1);
  uVar17 = (undefined1)((ushort)(sVar8 + (ushort)bVar1) >> 8);
  uVar18 = (undefined1)(sVar9 + (ushort)bVar1);
  uVar19 = (undefined1)((ushort)(sVar9 + (ushort)bVar1) >> 8);
  uVar20 = (undefined1)(sVar10 + (ushort)bVar1);
  uVar21 = (undefined1)((ushort)(sVar10 + (ushort)bVar1) >> 8);
  auVar11[2] = uVar27;
  auVar11._0_2_ = sVar6 + (ushort)bVar2;
  auVar11[3] = uVar28;
  auVar11[4] = uVar29;
  auVar11[5] = uVar30;
  auVar11[6] = uVar31;
  auVar11[7] = uVar32;
  auVar11._8_2_ = sVar22 + (ushort)bVar2;
  auVar11._10_2_ = sVar23 + (ushort)bVar2;
  auVar11._12_2_ = sVar24 + (ushort)bVar2;
  auVar11._14_2_ = sVar25 + (ushort)bVar2;
  uVar26 = NEON_sqxtun(CONCAT17(bVar1,CONCAT16(bVar1,CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,
                                                  CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))))),auVar11
                       ,2);
  auVar13[2] = uVar33;
  auVar13._0_2_ = sVar6 + (ushort)bVar4;
  auVar13[3] = uVar34;
  auVar13[4] = uVar35;
  auVar13[5] = uVar36;
  auVar13[6] = uVar37;
  auVar13[7] = uVar38;
  auVar13._8_2_ = sVar22 + (ushort)bVar4;
  auVar13._10_2_ = sVar23 + (ushort)bVar4;
  auVar13._12_2_ = sVar24 + (ushort)bVar4;
  auVar13._14_2_ = sVar25 + (ushort)bVar4;
  uVar12 = NEON_sqxtun(CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(
                                                  uVar28,CONCAT12(uVar27,sVar6 + (ushort)bVar2))))))
                       ,auVar13,2);
  auVar15[2] = (char)(sVar8 + (ushort)bVar3);
  auVar15._0_2_ = sVar6 + (ushort)bVar3;
  auVar15[3] = (char)((ushort)(sVar8 + (ushort)bVar3) >> 8);
  auVar15[4] = (char)(sVar9 + (ushort)bVar3);
  auVar15[5] = (char)((ushort)(sVar9 + (ushort)bVar3) >> 8);
  auVar15[6] = (char)(sVar10 + (ushort)bVar3);
  auVar15[7] = (char)((ushort)(sVar10 + (ushort)bVar3) >> 8);
  auVar15._8_2_ = sVar22 + (ushort)bVar3;
  auVar15._10_2_ = sVar23 + (ushort)bVar3;
  auVar15._12_2_ = sVar24 + (ushort)bVar3;
  auVar15._14_2_ = sVar25 + (ushort)bVar3;
  uVar14 = NEON_sqxtun(CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar34,CONCAT12(uVar33,sVar6 + (ushort)bVar4))))))
                       ,auVar15,2);
  auVar5[2] = uVar16;
  auVar5._0_2_ = sVar6 + (ushort)bVar1;
  auVar5[3] = uVar17;
  auVar5[4] = uVar18;
  auVar5[5] = uVar19;
  auVar5[6] = uVar20;
  auVar5[7] = uVar21;
  auVar5._8_2_ = sVar22 + (ushort)bVar1;
  auVar5._10_2_ = sVar23 + (ushort)bVar1;
  auVar5._12_2_ = sVar24 + (ushort)bVar1;
  auVar5._14_2_ = sVar25 + (ushort)bVar1;
  uVar7 = NEON_sqxtun(CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(
                                                  uVar17,CONCAT12(uVar16,sVar6 + (ushort)bVar1))))))
                      ,auVar5,2);
  *param_1 = (int)uVar26;
  param_1[8] = (int)uVar12;
  param_1[0x10] = (int)uVar14;
  param_1[0x18] = (int)uVar7;
  return;
}


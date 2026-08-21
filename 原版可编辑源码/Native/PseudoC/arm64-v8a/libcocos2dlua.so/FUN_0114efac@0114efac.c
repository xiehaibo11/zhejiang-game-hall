
void FUN_0114efac(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  uVar2 = param_1[-4];
  sVar7 = (ushort)(byte)uVar2 + (ushort)(byte)((ulong)uVar2 >> 8);
  sVar4 = (ushort)(byte)((ulong)uVar2 >> 0x10) + (ushort)(byte)((ulong)uVar2 >> 0x18);
  sVar8 = (ushort)(byte)((ulong)uVar2 >> 0x20) + (ushort)(byte)((ulong)uVar2 >> 0x28);
  sVar6 = (ushort)(byte)((ulong)uVar2 >> 0x30) + (ushort)(byte)((ulong)uVar2 >> 0x38);
  sVar3 = sVar7 + sVar4;
  sVar5 = sVar8 + sVar6;
  sVar7 = sVar7 + sVar4;
  sVar8 = sVar8 + sVar6;
  sVar4 = sVar3 + sVar5;
  sVar6 = sVar7 + sVar8;
  sVar3 = sVar3 + sVar5;
  sVar7 = sVar7 + sVar8;
  uVar9 = (undefined1)sVar6;
  uVar10 = (undefined1)((ushort)sVar6 >> 8);
  uVar11 = (undefined1)sVar3;
  uVar12 = (undefined1)((ushort)sVar3 >> 8);
  uVar13 = (undefined1)sVar7;
  uVar14 = (undefined1)((ushort)sVar7 >> 8);
  auVar1[10] = uVar9;
  auVar1._8_2_ = sVar4;
  auVar1[0xb] = uVar10;
  auVar1[0xc] = uVar11;
  auVar1[0xd] = uVar12;
  auVar1[0xe] = uVar13;
  auVar1[0xf] = uVar14;
  auVar1[2] = uVar9;
  auVar1._0_2_ = sVar4;
  auVar1[3] = uVar10;
  auVar1[4] = uVar11;
  auVar1[5] = uVar12;
  auVar1[6] = uVar13;
  auVar1[7] = uVar14;
  uVar2 = NEON_rshrn(CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,sVar4)))))),auVar1,3,2);
  uVar9 = (undefined1)uVar2;
  *param_1 = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(
                                                  uVar9,CONCAT11(uVar9,uVar9)))))));
  param_1[4] = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(
                                                  uVar9,CONCAT11(uVar9,uVar9)))))));
  param_1[8] = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(
                                                  uVar9,CONCAT11(uVar9,uVar9)))))));
  param_1[0xc] = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12
                                                  (uVar9,CONCAT11(uVar9,uVar9)))))));
  param_1[0x10] =
       CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(uVar9,
                                                  CONCAT11(uVar9,uVar9)))))));
  param_1[0x14] =
       CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(uVar9,
                                                  CONCAT11(uVar9,uVar9)))))));
  param_1[0x18] =
       CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(uVar9,
                                                  CONCAT11(uVar9,uVar9)))))));
  param_1[0x1c] =
       CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,CONCAT12(uVar9,
                                                  CONCAT11(uVar9,uVar9)))))));
  return;
}


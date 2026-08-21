
void FUN_00df2a9c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  short sVar2;
  undefined8 uVar3;
  short sVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar3 = *(undefined8 *)((long)param_1 + -1);
  uVar11 = *(undefined8 *)((long)param_1 + 0x1f);
  uVar12 = *(undefined8 *)((long)param_1 + 0x3f);
  uVar13 = *(undefined8 *)((long)param_1 + 0x5f);
  uVar14 = *(undefined8 *)((long)param_1 + 0x7f);
  uVar15 = *(undefined8 *)((long)param_1 + 0x9f);
  uVar16 = *(undefined8 *)((long)param_1 + 0xbf);
  uVar17 = *(undefined8 *)((long)param_1 + 0xdf);
  sVar2 = (ushort)(byte)uVar11 + (ushort)(byte)uVar3 + (ushort)(byte)uVar12 + (ushort)(byte)uVar13 +
          (ushort)(byte)uVar14 + (ushort)(byte)uVar15 + (ushort)(byte)uVar16 + (ushort)(byte)uVar17;
  sVar4 = (ushort)(byte)((ulong)uVar11 >> 8) + (ushort)(byte)((ulong)uVar3 >> 8) +
          (ushort)(byte)((ulong)uVar12 >> 8) + (ushort)(byte)((ulong)uVar13 >> 8) +
          (ushort)(byte)((ulong)uVar14 >> 8) + (ushort)(byte)((ulong)uVar15 >> 8) +
          (ushort)(byte)((ulong)uVar16 >> 8) + (ushort)(byte)((ulong)uVar17 >> 8);
  uVar5 = (undefined1)sVar4;
  uVar6 = (undefined1)((ushort)sVar4 >> 8);
  sVar4 = (ushort)(byte)((ulong)uVar11 >> 0x10) + (ushort)(byte)((ulong)uVar3 >> 0x10) +
          (ushort)(byte)((ulong)uVar12 >> 0x10) + (ushort)(byte)((ulong)uVar13 >> 0x10) +
          (ushort)(byte)((ulong)uVar14 >> 0x10) + (ushort)(byte)((ulong)uVar15 >> 0x10) +
          (ushort)(byte)((ulong)uVar16 >> 0x10) + (ushort)(byte)((ulong)uVar17 >> 0x10);
  uVar7 = (undefined1)sVar4;
  uVar8 = (undefined1)((ushort)sVar4 >> 8);
  sVar4 = (ushort)(byte)((ulong)uVar11 >> 0x18) + (ushort)(byte)((ulong)uVar3 >> 0x18) +
          (ushort)(byte)((ulong)uVar12 >> 0x18) + (ushort)(byte)((ulong)uVar13 >> 0x18) +
          (ushort)(byte)((ulong)uVar14 >> 0x18) + (ushort)(byte)((ulong)uVar15 >> 0x18) +
          (ushort)(byte)((ulong)uVar16 >> 0x18) + (ushort)(byte)((ulong)uVar17 >> 0x18);
  uVar9 = (undefined1)sVar4;
  uVar10 = (undefined1)((ushort)sVar4 >> 8);
  auVar1[2] = uVar5;
  auVar1._0_2_ = sVar2;
  auVar1[3] = uVar6;
  auVar1[4] = uVar7;
  auVar1[5] = uVar8;
  auVar1[6] = uVar9;
  auVar1[7] = uVar10;
  auVar1._8_2_ = (ushort)(byte)((ulong)uVar11 >> 0x20) + (ushort)(byte)((ulong)uVar3 >> 0x20) +
                 (ushort)(byte)((ulong)uVar12 >> 0x20) + (ushort)(byte)((ulong)uVar13 >> 0x20) +
                 (ushort)(byte)((ulong)uVar14 >> 0x20) + (ushort)(byte)((ulong)uVar15 >> 0x20) +
                 (ushort)(byte)((ulong)uVar16 >> 0x20) + (ushort)(byte)((ulong)uVar17 >> 0x20);
  auVar1._10_2_ =
       (ushort)(byte)((ulong)uVar11 >> 0x28) + (ushort)(byte)((ulong)uVar3 >> 0x28) +
       (ushort)(byte)((ulong)uVar12 >> 0x28) + (ushort)(byte)((ulong)uVar13 >> 0x28) +
       (ushort)(byte)((ulong)uVar14 >> 0x28) + (ushort)(byte)((ulong)uVar15 >> 0x28) +
       (ushort)(byte)((ulong)uVar16 >> 0x28) + (ushort)(byte)((ulong)uVar17 >> 0x28);
  auVar1._12_2_ =
       (ushort)(byte)((ulong)uVar11 >> 0x30) + (ushort)(byte)((ulong)uVar3 >> 0x30) +
       (ushort)(byte)((ulong)uVar12 >> 0x30) + (ushort)(byte)((ulong)uVar13 >> 0x30) +
       (ushort)(byte)((ulong)uVar14 >> 0x30) + (ushort)(byte)((ulong)uVar15 >> 0x30) +
       (ushort)(byte)((ulong)uVar16 >> 0x30) + (ushort)(byte)((ulong)uVar17 >> 0x30);
  auVar1._14_2_ =
       (ushort)(byte)((ulong)uVar11 >> 0x38) + (ushort)(byte)((ulong)uVar3 >> 0x38) +
       (ushort)(byte)((ulong)uVar12 >> 0x38) + (ushort)(byte)((ulong)uVar13 >> 0x38) +
       (ushort)(byte)((ulong)uVar14 >> 0x38) + (ushort)(byte)((ulong)uVar15 >> 0x38) +
       (ushort)(byte)((ulong)uVar16 >> 0x38) + (ushort)(byte)((ulong)uVar17 >> 0x38);
  uVar3 = NEON_rshrn(CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(uVar7,CONCAT13(uVar6,
                                                  CONCAT12(uVar5,sVar2)))))),auVar1,3,2);
  uVar5 = (undefined1)uVar3;
  *param_1 = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(
                                                  uVar5,CONCAT11(uVar5,uVar5)))))));
  param_1[4] = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(
                                                  uVar5,CONCAT11(uVar5,uVar5)))))));
  param_1[8] = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(
                                                  uVar5,CONCAT11(uVar5,uVar5)))))));
  param_1[0xc] = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12
                                                  (uVar5,CONCAT11(uVar5,uVar5)))))));
  param_1[0x10] =
       CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(uVar5,
                                                  CONCAT11(uVar5,uVar5)))))));
  param_1[0x14] =
       CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(uVar5,
                                                  CONCAT11(uVar5,uVar5)))))));
  param_1[0x18] =
       CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(uVar5,
                                                  CONCAT11(uVar5,uVar5)))))));
  param_1[0x1c] =
       CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(uVar5,
                                                  CONCAT11(uVar5,uVar5)))))));
  return;
}


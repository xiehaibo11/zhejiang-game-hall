
void FUN_00df0128(short *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined8 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  ushort uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  ushort uVar17;
  short sVar18;
  ushort uVar19;
  short sVar20;
  
  uVar2 = *param_2;
  uVar6 = param_2[0x10];
  uVar4 = param_2[8];
  uVar11 = (ushort)uVar4;
  uVar13 = (ushort)((uint)uVar4 >> 0x10);
  uVar4 = param_2[0x18];
  uVar17 = (ushort)uVar4;
  uVar19 = (ushort)((uint)uVar4 >> 0x10);
  sVar8 = *param_1 >> 3;
  sVar9 = (ushort)(byte)uVar2 + sVar8;
  sVar10 = (ushort)(byte)((uint)uVar2 >> 8) + sVar8;
  sVar12 = (ushort)(byte)((uint)uVar2 >> 0x10) + sVar8;
  sVar14 = (ushort)(byte)((uint)uVar2 >> 0x18) + sVar8;
  sVar15 = (ushort)(byte)uVar6 + sVar8;
  sVar16 = (ushort)(byte)((uint)uVar6 >> 8) + sVar8;
  sVar18 = (ushort)(byte)((uint)uVar6 >> 0x10) + sVar8;
  sVar20 = (ushort)(byte)((uint)uVar6 >> 0x18) + sVar8;
  auVar1._2_2_ = sVar10;
  auVar1._0_2_ = sVar9;
  auVar1._4_2_ = sVar12;
  auVar1._6_2_ = sVar14;
  auVar1._8_2_ = (uVar11 & 0xff) + sVar8;
  auVar1._10_2_ = (uVar11 >> 8) + sVar8;
  auVar1._12_2_ = (uVar13 & 0xff) + sVar8;
  auVar1._14_2_ = (uVar13 >> 8) + sVar8;
  uVar3 = NEON_sqxtun(CONCAT26(sVar14,CONCAT24(sVar12,CONCAT22(sVar10,sVar9))),auVar1,2);
  auVar5._2_2_ = sVar16;
  auVar5._0_2_ = sVar15;
  auVar5._4_2_ = sVar18;
  auVar5._6_2_ = sVar20;
  auVar5._8_2_ = (uVar17 & 0xff) + sVar8;
  auVar5._10_2_ = (uVar17 >> 8) + sVar8;
  auVar5._12_2_ = (uVar19 & 0xff) + sVar8;
  auVar5._14_2_ = (uVar19 >> 8) + sVar8;
  uVar7 = NEON_sqxtun(CONCAT26(sVar20,CONCAT24(sVar18,CONCAT22(sVar16,sVar15))),auVar5,2);
  *param_2 = (int)uVar3;
  param_2[8] = (int)((ulong)uVar3 >> 0x20);
  param_2[0x10] = (int)uVar7;
  param_2[0x18] = (int)((ulong)uVar7 >> 0x20);
  return;
}


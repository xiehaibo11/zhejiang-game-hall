
void FUN_00df0068(undefined2 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar3 = *param_1;
  uVar5 = *param_2;
  uVar9 = (undefined2)((uint)((short)param_1[4] * 0x8a8c) >> 0x10);
  uVar11 = CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9)));
  uVar2 = (short)param_1[1] * 0x8a8c;
  uVar1 = (short)param_1[1] * 0x14e7b >> 0x10;
  uVar9 = (undefined2)((uint)((short)param_1[4] * 0x14e7b) >> 0x10);
  uVar10 = NEON_sqadd(CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3))),
                      (ulong)-uVar1 << 0x30 |
                      CONCAT44(-(uVar2 >> 0x10),uVar2 & 0xffff0000 | uVar1 & 0xffff) &
                      0xffffffffffff,2);
  uVar17 = NEON_sqadd(uVar10,CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9))),2);
  uVar18 = NEON_sqadd(uVar10,uVar11,2);
  uVar12 = NEON_sqsub(uVar10,uVar11,2);
  uVar10 = NEON_sqsub(uVar10,CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9))),2);
  uVar8 = param_2[0x10];
  uVar6 = param_2[8];
  uVar13 = (ushort)uVar6;
  uVar14 = (ushort)((uint)uVar6 >> 0x10);
  uVar6 = param_2[0x18];
  uVar15 = (ushort)uVar6;
  uVar16 = (ushort)((uint)uVar6 >> 0x10);
  auVar4._2_2_ = (ushort)(byte)((uint)uVar5 >> 8) + ((short)((ulong)uVar17 >> 0x10) >> 3);
  auVar4._0_2_ = (ushort)(byte)uVar5 + ((short)uVar17 >> 3);
  auVar4._4_2_ = (ushort)(byte)((uint)uVar5 >> 0x10) + ((short)((ulong)uVar17 >> 0x20) >> 3);
  auVar4._6_2_ = (ushort)(byte)((uint)uVar5 >> 0x18) + (short)((long)uVar17 >> 0x33);
  auVar4._8_2_ = (uVar13 & 0xff) + ((short)uVar18 >> 3);
  auVar4._10_2_ = (uVar13 >> 8) + ((short)((ulong)uVar18 >> 0x10) >> 3);
  auVar4._12_2_ = (uVar14 & 0xff) + ((short)((ulong)uVar18 >> 0x20) >> 3);
  auVar4._14_2_ = (uVar14 >> 8) + (short)((long)uVar18 >> 0x33);
  uVar11 = NEON_sqxtun(uVar10,auVar4,2);
  auVar7._2_2_ = (ushort)(byte)((uint)uVar8 >> 8) + ((short)((ulong)uVar12 >> 0x10) >> 3);
  auVar7._0_2_ = (ushort)(byte)uVar8 + ((short)uVar12 >> 3);
  auVar7._4_2_ = (ushort)(byte)((uint)uVar8 >> 0x10) + ((short)((ulong)uVar12 >> 0x20) >> 3);
  auVar7._6_2_ = (ushort)(byte)((uint)uVar8 >> 0x18) + (short)((long)uVar12 >> 0x33);
  auVar7._8_2_ = (uVar15 & 0xff) + ((short)uVar10 >> 3);
  auVar7._10_2_ = (uVar15 >> 8) + ((short)((ulong)uVar10 >> 0x10) >> 3);
  auVar7._12_2_ = (uVar16 & 0xff) + ((short)((ulong)uVar10 >> 0x20) >> 3);
  auVar7._14_2_ = (uVar16 >> 8) + (short)((long)uVar10 >> 0x33);
  uVar10 = NEON_sqxtun(uVar12,auVar7,2);
  *param_2 = (int)uVar11;
  param_2[8] = (int)((ulong)uVar11 >> 0x20);
  param_2[0x10] = (int)uVar10;
  param_2[0x18] = (int)((ulong)uVar10 >> 0x20);
  return;
}


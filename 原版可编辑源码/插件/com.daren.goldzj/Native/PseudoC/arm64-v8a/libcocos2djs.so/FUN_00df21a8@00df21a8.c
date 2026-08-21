
void FUN_00df21a8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined6 uVar2;
  undefined1 auVar3 [16];
  short sVar4;
  short sVar5;
  uint3 uVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint3 uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar23 = *(undefined8 *)(param_1 + -8);
  uVar20 = *(undefined8 *)((long)param_1 + -1);
  uVar21 = *(undefined8 *)((long)param_1 + 0x1f);
  uVar22 = *(undefined8 *)((long)param_1 + 0x3f);
  sVar12 = (ushort)(byte)uVar23 + (ushort)(byte)((ulong)uVar23 >> 8);
  sVar4 = (ushort)(byte)((ulong)uVar23 >> 0x10) + (ushort)(byte)((ulong)uVar23 >> 0x18);
  sVar13 = (ushort)(byte)((ulong)uVar23 >> 0x20) + (ushort)(byte)((ulong)uVar23 >> 0x28);
  sVar5 = (ushort)(byte)((ulong)uVar23 >> 0x30) + (ushort)(byte)((ulong)uVar23 >> 0x38);
  sVar10 = sVar12 + sVar4;
  sVar11 = sVar13 + sVar5;
  sVar12 = sVar12 + sVar4;
  sVar13 = sVar13 + sVar5;
  uVar23 = *(undefined8 *)((long)param_1 + 0x5f);
  uVar1 = CONCAT13((char)((ushort)sVar11 >> 8),CONCAT12((char)sVar11,sVar10));
  uVar2 = CONCAT15((char)((ushort)sVar12 >> 8),CONCAT14((char)sVar12,uVar1));
  uVar6 = CONCAT12((char)((ulong)uVar20 >> 8),(short)uVar20) & 0xff00ff;
  uVar7 = CONCAT12((char)((ulong)uVar21 >> 8),(short)uVar21) & 0xff00ff;
  uVar8 = CONCAT12((char)((ulong)uVar22 >> 8),(short)uVar22) & 0xff00ff;
  uVar9 = CONCAT12((char)((ulong)uVar23 >> 8),(short)uVar23) & 0xff00ff;
  sVar4 = sVar10 + (short)uVar6 + (short)uVar7 + (short)uVar8 + (short)uVar9;
  sVar5 = sVar11 + (ushort)(byte)(uVar6 >> 0x10) + (ushort)(byte)(uVar7 >> 0x10) +
          (ushort)(byte)(uVar8 >> 0x10) + (ushort)(byte)(uVar9 >> 0x10);
  uVar14 = (undefined1)sVar5;
  uVar15 = (undefined1)((ushort)sVar5 >> 8);
  sVar12 = sVar12 + (ushort)(byte)((ulong)uVar20 >> 0x10) + (ushort)(byte)((ulong)uVar21 >> 0x10) +
           (ushort)(byte)((ulong)uVar22 >> 0x10) + (ushort)(byte)((ulong)uVar23 >> 0x10);
  uVar16 = (undefined1)sVar12;
  uVar17 = (undefined1)((ushort)sVar12 >> 8);
  sVar12 = sVar13 + (ushort)(byte)((ulong)uVar20 >> 0x18) + (ushort)(byte)((ulong)uVar21 >> 0x18) +
           (ushort)(byte)((ulong)uVar22 >> 0x18) + (ushort)(byte)((ulong)uVar23 >> 0x18);
  uVar18 = (undefined1)sVar12;
  uVar19 = (undefined1)((ushort)sVar12 >> 8);
  auVar3[2] = uVar14;
  auVar3._0_2_ = sVar4;
  auVar3[3] = uVar15;
  auVar3[4] = uVar16;
  auVar3[5] = uVar17;
  auVar3[6] = uVar18;
  auVar3[7] = uVar19;
  auVar3._8_2_ = sVar10 + (ushort)(byte)((ulong)uVar20 >> 0x20) +
                 (ushort)(byte)((ulong)uVar21 >> 0x20) + (ushort)(byte)((ulong)uVar22 >> 0x20) +
                 (ushort)(byte)((ulong)uVar23 >> 0x20);
  auVar3._10_2_ =
       (short)((uint)uVar1 >> 0x10) + (ushort)(byte)((ulong)uVar20 >> 0x28) +
       (ushort)(byte)((ulong)uVar21 >> 0x28) + (ushort)(byte)((ulong)uVar22 >> 0x28) +
       (ushort)(byte)((ulong)uVar23 >> 0x28);
  auVar3._12_2_ =
       (short)((uint6)uVar2 >> 0x20) + (ushort)(byte)((ulong)uVar20 >> 0x30) +
       (ushort)(byte)((ulong)uVar21 >> 0x30) + (ushort)(byte)((ulong)uVar22 >> 0x30) +
       (ushort)(byte)((ulong)uVar23 >> 0x30);
  auVar3._14_2_ =
       (short)(CONCAT17((char)((ushort)sVar13 >> 8),CONCAT16((char)sVar13,uVar2)) >> 0x30) +
       (ushort)(byte)((ulong)uVar20 >> 0x38) + (ushort)(byte)((ulong)uVar21 >> 0x38) +
       (ushort)(byte)((ulong)uVar22 >> 0x38) + (ushort)(byte)((ulong)uVar23 >> 0x38);
  uVar23 = NEON_rshrn(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,sVar4)))))),auVar3,3,2);
  uVar14 = (undefined1)uVar23;
  *param_1 = CONCAT13(uVar14,CONCAT12(uVar14,CONCAT11(uVar14,uVar14)));
  param_1[8] = CONCAT13(uVar14,CONCAT12(uVar14,CONCAT11(uVar14,uVar14)));
  param_1[0x10] = CONCAT13(uVar14,CONCAT12(uVar14,CONCAT11(uVar14,uVar14)));
  param_1[0x18] = CONCAT13(uVar14,CONCAT12(uVar14,CONCAT11(uVar14,uVar14)));
  return;
}


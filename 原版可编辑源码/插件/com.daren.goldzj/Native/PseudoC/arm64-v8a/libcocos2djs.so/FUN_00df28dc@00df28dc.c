
void FUN_00df28dc(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined6 uVar2;
  undefined1 auVar3 [16];
  short sVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar28 = param_1[-4];
  uVar25 = *(undefined8 *)((long)param_1 + -1);
  uVar26 = *(undefined8 *)((long)param_1 + 0x1f);
  uVar27 = *(undefined8 *)((long)param_1 + 0x3f);
  sVar17 = (ushort)(byte)uVar28 + (ushort)(byte)((ulong)uVar28 >> 8);
  sVar4 = (ushort)(byte)((ulong)uVar28 >> 0x10) + (ushort)(byte)((ulong)uVar28 >> 0x18);
  sVar18 = (ushort)(byte)((ulong)uVar28 >> 0x20) + (ushort)(byte)((ulong)uVar28 >> 0x28);
  sVar14 = (ushort)(byte)((ulong)uVar28 >> 0x30) + (ushort)(byte)((ulong)uVar28 >> 0x38);
  sVar13 = sVar17 + sVar4;
  sVar15 = sVar18 + sVar14;
  sVar17 = sVar17 + sVar4;
  sVar18 = sVar18 + sVar14;
  sVar14 = sVar13 + sVar15;
  sVar16 = sVar17 + sVar18;
  sVar13 = sVar13 + sVar15;
  sVar17 = sVar17 + sVar18;
  uVar28 = *(undefined8 *)((long)param_1 + 0x5f);
  uVar1 = CONCAT13((char)((ushort)sVar16 >> 8),CONCAT12((char)sVar16,sVar14));
  uVar2 = CONCAT15((char)((ushort)sVar13 >> 8),CONCAT14((char)sVar13,uVar1));
  uVar29 = *(undefined8 *)((long)param_1 + 0x7f);
  uVar5 = CONCAT12((char)((ulong)uVar25 >> 8),(short)uVar25) & 0xff00ff;
  uVar30 = *(undefined8 *)((long)param_1 + 0x9f);
  uVar6 = CONCAT12((char)((ulong)uVar26 >> 8),(short)uVar26) & 0xff00ff;
  uVar31 = *(undefined8 *)((long)param_1 + 0xbf);
  uVar7 = CONCAT12((char)((ulong)uVar27 >> 8),(short)uVar27) & 0xff00ff;
  uVar32 = *(undefined8 *)((long)param_1 + 0xdf);
  uVar8 = CONCAT12((char)((ulong)uVar28 >> 8),(short)uVar28) & 0xff00ff;
  uVar9 = CONCAT12((char)((ulong)uVar29 >> 8),(short)uVar29) & 0xff00ff;
  uVar10 = CONCAT12((char)((ulong)uVar30 >> 8),(short)uVar30) & 0xff00ff;
  uVar11 = CONCAT12((char)((ulong)uVar31 >> 8),(short)uVar31) & 0xff00ff;
  uVar12 = CONCAT12((char)((ulong)uVar32 >> 8),(short)uVar32) & 0xff00ff;
  sVar4 = sVar14 + (short)uVar5 + (short)uVar6 + (short)uVar7 + (short)uVar8 + (short)uVar9 +
          (short)uVar10 + (short)uVar11 + (short)uVar12;
  sVar18 = sVar16 + (ushort)(byte)(uVar5 >> 0x10) + (ushort)(byte)(uVar6 >> 0x10) +
           (ushort)(byte)(uVar7 >> 0x10) + (ushort)(byte)(uVar8 >> 0x10) +
           (ushort)(byte)(uVar9 >> 0x10) + (ushort)(byte)(uVar10 >> 0x10) +
           (ushort)(byte)(uVar11 >> 0x10) + (ushort)(byte)(uVar12 >> 0x10);
  uVar19 = (undefined1)sVar18;
  uVar20 = (undefined1)((ushort)sVar18 >> 8);
  sVar18 = sVar13 + (ushort)(byte)((ulong)uVar25 >> 0x10) + (ushort)(byte)((ulong)uVar26 >> 0x10) +
           (ushort)(byte)((ulong)uVar27 >> 0x10) + (ushort)(byte)((ulong)uVar28 >> 0x10) +
           (ushort)(byte)((ulong)uVar29 >> 0x10) + (ushort)(byte)((ulong)uVar30 >> 0x10) +
           (ushort)(byte)((ulong)uVar31 >> 0x10) + (ushort)(byte)((ulong)uVar32 >> 0x10);
  uVar21 = (undefined1)sVar18;
  uVar22 = (undefined1)((ushort)sVar18 >> 8);
  sVar18 = sVar17 + (ushort)(byte)((ulong)uVar25 >> 0x18) + (ushort)(byte)((ulong)uVar26 >> 0x18) +
           (ushort)(byte)((ulong)uVar27 >> 0x18) + (ushort)(byte)((ulong)uVar28 >> 0x18) +
           (ushort)(byte)((ulong)uVar29 >> 0x18) + (ushort)(byte)((ulong)uVar30 >> 0x18) +
           (ushort)(byte)((ulong)uVar31 >> 0x18) + (ushort)(byte)((ulong)uVar32 >> 0x18);
  uVar23 = (undefined1)sVar18;
  uVar24 = (undefined1)((ushort)sVar18 >> 8);
  auVar3[2] = uVar19;
  auVar3._0_2_ = sVar4;
  auVar3[3] = uVar20;
  auVar3[4] = uVar21;
  auVar3[5] = uVar22;
  auVar3[6] = uVar23;
  auVar3[7] = uVar24;
  auVar3._8_2_ = sVar14 + (ushort)(byte)((ulong)uVar25 >> 0x20) +
                 (ushort)(byte)((ulong)uVar26 >> 0x20) + (ushort)(byte)((ulong)uVar27 >> 0x20) +
                 (ushort)(byte)((ulong)uVar28 >> 0x20) + (ushort)(byte)((ulong)uVar29 >> 0x20) +
                 (ushort)(byte)((ulong)uVar30 >> 0x20) + (ushort)(byte)((ulong)uVar31 >> 0x20) +
                 (ushort)(byte)((ulong)uVar32 >> 0x20);
  auVar3._10_2_ =
       (short)((uint)uVar1 >> 0x10) + (ushort)(byte)((ulong)uVar25 >> 0x28) +
       (ushort)(byte)((ulong)uVar26 >> 0x28) + (ushort)(byte)((ulong)uVar27 >> 0x28) +
       (ushort)(byte)((ulong)uVar28 >> 0x28) + (ushort)(byte)((ulong)uVar29 >> 0x28) +
       (ushort)(byte)((ulong)uVar30 >> 0x28) + (ushort)(byte)((ulong)uVar31 >> 0x28) +
       (ushort)(byte)((ulong)uVar32 >> 0x28);
  auVar3._12_2_ =
       (short)((uint6)uVar2 >> 0x20) + (ushort)(byte)((ulong)uVar25 >> 0x30) +
       (ushort)(byte)((ulong)uVar26 >> 0x30) + (ushort)(byte)((ulong)uVar27 >> 0x30) +
       (ushort)(byte)((ulong)uVar28 >> 0x30) + (ushort)(byte)((ulong)uVar29 >> 0x30) +
       (ushort)(byte)((ulong)uVar30 >> 0x30) + (ushort)(byte)((ulong)uVar31 >> 0x30) +
       (ushort)(byte)((ulong)uVar32 >> 0x30);
  auVar3._14_2_ =
       (short)(CONCAT17((char)((ushort)sVar17 >> 8),CONCAT16((char)sVar17,uVar2)) >> 0x30) +
       (ushort)(byte)((ulong)uVar25 >> 0x38) + (ushort)(byte)((ulong)uVar26 >> 0x38) +
       (ushort)(byte)((ulong)uVar27 >> 0x38) + (ushort)(byte)((ulong)uVar28 >> 0x38) +
       (ushort)(byte)((ulong)uVar29 >> 0x38) + (ushort)(byte)((ulong)uVar30 >> 0x38) +
       (ushort)(byte)((ulong)uVar31 >> 0x38) + (ushort)(byte)((ulong)uVar32 >> 0x38);
  uVar28 = NEON_rshrn(CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(
                                                  uVar20,CONCAT12(uVar19,sVar4)))))),auVar3,4,2);
  uVar19 = (undefined1)uVar28;
  *param_1 = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
  param_1[4] = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
  param_1[8] = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
  param_1[0xc] = CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,
                                                  CONCAT12(uVar19,CONCAT11(uVar19,uVar19)))))));
  param_1[0x10] =
       CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,CONCAT12(
                                                  uVar19,CONCAT11(uVar19,uVar19)))))));
  param_1[0x14] =
       CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,CONCAT12(
                                                  uVar19,CONCAT11(uVar19,uVar19)))))));
  param_1[0x18] =
       CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,CONCAT12(
                                                  uVar19,CONCAT11(uVar19,uVar19)))))));
  param_1[0x1c] =
       CONCAT17(uVar19,CONCAT16(uVar19,CONCAT15(uVar19,CONCAT14(uVar19,CONCAT13(uVar19,CONCAT12(
                                                  uVar19,CONCAT11(uVar19,uVar19)))))));
  return;
}


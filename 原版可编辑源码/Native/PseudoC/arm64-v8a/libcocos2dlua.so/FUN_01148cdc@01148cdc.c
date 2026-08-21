
void FUN_01148cdc(long param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  byte *pbVar2;
  uint6 uVar3;
  uint6 uVar4;
  uint6 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  int iVar41;
  ulong uVar42;
  int iVar44;
  int iVar45;
  undefined1 auVar43 [16];
  int iVar46;
  int iVar47;
  int iVar49;
  int iVar50;
  undefined1 auVar48 [16];
  int iVar51;
  uint5 uVar52;
  int iVar53;
  int iVar55;
  int iVar56;
  undefined1 auVar54 [16];
  int iVar57;
  int iVar58;
  int iVar60;
  int iVar61;
  undefined1 auVar59 [16];
  int iVar62;
  
  if ((0 < param_3) && (0 < (int)param_2)) {
    lVar6 = (ulong)param_2 - (ulong)(param_2 & 0xf);
    do {
      lVar7 = 0;
      if ((param_2 < 0x10) || (lVar6 == 0)) {
LAB_01148f00:
        lVar8 = (ulong)param_2 - lVar7;
        lVar7 = lVar7 << 1;
        do {
          pbVar2 = (byte *)(param_1 + lVar7);
          bVar9 = *pbVar2;
          bVar10 = pbVar2[1];
          lVar8 = lVar8 + -1;
          lVar7 = lVar7 + 2;
          iVar41 = (bVar10 & 0xf) * 0x1111;
          *pbVar2 = (byte)(iVar41 * (bVar9 & 0xf0 | (uint)(bVar9 >> 4)) >> 0x10) & 0xf0 |
                    (byte)((bVar9 & 0xf | (bVar9 & 0xf) << 4) * iVar41 >> 0x14) & 0xf;
          pbVar2[1] = (byte)((bVar10 & 0xf0 | (uint)(bVar10 >> 4)) * iVar41 >> 0x10) & 0xf0 |
                      bVar10 & 0xf;
        } while (lVar8 != 0);
      }
      else {
        lVar7 = 0;
        lVar8 = lVar6;
        do {
          pbVar2 = (byte *)(param_1 + lVar7);
          bVar9 = *pbVar2;
          bVar25 = pbVar2[1];
          bVar10 = pbVar2[2];
          bVar26 = pbVar2[3];
          bVar11 = pbVar2[4];
          bVar27 = pbVar2[5];
          bVar12 = pbVar2[6];
          bVar28 = pbVar2[7];
          bVar13 = pbVar2[8];
          bVar29 = pbVar2[9];
          bVar14 = pbVar2[10];
          bVar30 = pbVar2[0xb];
          bVar15 = pbVar2[0xc];
          bVar31 = pbVar2[0xd];
          bVar16 = pbVar2[0xe];
          bVar32 = pbVar2[0xf];
          bVar17 = pbVar2[0x10];
          bVar33 = pbVar2[0x11];
          bVar18 = pbVar2[0x12];
          bVar34 = pbVar2[0x13];
          bVar19 = pbVar2[0x14];
          bVar35 = pbVar2[0x15];
          bVar20 = pbVar2[0x16];
          bVar36 = pbVar2[0x17];
          bVar21 = pbVar2[0x18];
          bVar37 = pbVar2[0x19];
          bVar22 = pbVar2[0x1a];
          bVar38 = pbVar2[0x1b];
          bVar23 = pbVar2[0x1c];
          bVar39 = pbVar2[0x1d];
          bVar24 = pbVar2[0x1e];
          bVar40 = pbVar2[0x1f];
          lVar8 = lVar8 + -0x10;
          lVar7 = lVar7 + 0x20;
          uVar3 = (uint6)CONCAT14(bVar10 >> 4,(uint)(uint3)(CONCAT12(bVar10,(ushort)bVar9) >> 4)) &
                  0xffff00000fff;
          uVar4 = (uint6)CONCAT14(bVar22 >> 4,(uint)(uint3)(CONCAT12(bVar22,(ushort)bVar21) >> 4)) &
                  0xffff00000fff;
          uVar42 = CONCAT17(bVar32,CONCAT16(bVar31,CONCAT15(bVar30,CONCAT14(bVar29,CONCAT13(bVar28,
                                                  CONCAT12(bVar27,CONCAT11(bVar26,bVar25))))))) &
                   0xf0f0f0f0f0f0f0f;
          uVar5 = (uint6)CONCAT14(bVar18 >> 4,(uint)(uint3)(CONCAT12(bVar18,(ushort)bVar17) >> 4)) &
                  0xffff00000fff;
          auVar54._0_8_ =
               CONCAT17(0,CONCAT16(bVar36,(uint6)(CONCAT14(bVar35,(uint)(CONCAT12(bVar34,(ushort)(
                                                  bVar33 & 0xf)) & 0xfffff)) & 0xfffffffff)) &
                          0xfffffffffffff);
          auVar54[8] = bVar37 & 0xf;
          auVar54[9] = 0;
          auVar54[10] = bVar38 & 0xf;
          auVar54[0xb] = 0;
          auVar54[0xc] = bVar39 & 0xf;
          auVar54[0xd] = 0;
          auVar54[0xe] = bVar40 & 0xf;
          auVar54[0xf] = 0;
          auVar43._0_8_ =
               CONCAT17(0,CONCAT16((char)(uVar42 >> 0x18),
                                   (uint6)CONCAT14((char)(uVar42 >> 0x10),
                                                   (uint)CONCAT12((char)(uVar42 >> 8),
                                                                  (ushort)(byte)uVar42))));
          auVar43[8] = (char)(uVar42 >> 0x20);
          auVar43[9] = 0;
          auVar43[10] = (char)(uVar42 >> 0x28);
          auVar43[0xb] = 0;
          auVar43[0xc] = (char)(uVar42 >> 0x30);
          auVar43[0xd] = 0;
          auVar43[0xe] = (char)(uVar42 >> 0x38);
          auVar43[0xf] = 0;
          auVar59 = NEON_ext(auVar54,auVar54,8,1);
          auVar48 = NEON_ext(auVar43,auVar43,8,1);
          auVar43 = NEON_umull(auVar43._0_8_,0x1111111111111111,2);
          auVar54 = NEON_umull(auVar54._0_8_,0x1111111111111111,2);
          auVar48 = NEON_umull(auVar48._0_8_,0x1111111111111111,2);
          auVar59 = NEON_umull(auVar59._0_8_,0x1111111111111111,2);
          iVar53 = auVar54._0_4_;
          iVar55 = auVar54._4_4_;
          iVar56 = auVar54._8_4_;
          iVar57 = auVar54._12_4_;
          iVar41 = auVar43._0_4_;
          iVar44 = auVar43._4_4_;
          iVar45 = auVar43._8_4_;
          iVar46 = auVar43._12_4_;
          iVar58 = auVar59._0_4_;
          iVar60 = auVar59._4_4_;
          iVar61 = auVar59._8_4_;
          iVar62 = auVar59._12_4_;
          iVar47 = auVar48._0_4_;
          iVar49 = auVar48._4_4_;
          iVar50 = auVar48._8_4_;
          iVar51 = auVar48._12_4_;
          uVar52 = CONCAT14((char)(iVar60 * (uint)(byte)(bVar22 & 0xf0 | (byte)(uVar4 >> 0x20)) >>
                                  0x10),
                            (uint)((byte)(iVar58 * (uint)(byte)(bVar21 & 0xf0 | (byte)uVar4) >> 0x10
                                         ) & 0xf0)) & 0xf0ffffffff;
          *pbVar2 = (byte)((uint)(byte)(bVar9 << 4 | bVar9 & 0xf) * iVar41 >> 0x14) & 0xf |
                    (byte)(iVar41 * (uint)(byte)(bVar9 & 0xf0 | (byte)uVar3) >> 0x10) & 0xf0;
          pbVar2[1] = bVar25 ^ (bVar25 ^ (byte)((uint)(byte)(bVar25 & 0xf0 | bVar25 >> 4) * iVar41
                                               >> 0x10)) & 0xf0;
          pbVar2[2] = (byte)((uint)(byte)(bVar10 << 4 | bVar10 & 0xf) * iVar44 >> 0x14) & 0xf |
                      (byte)(iVar44 * (uint)(byte)(bVar10 & 0xf0 | (byte)(uVar3 >> 0x20)) >> 0x10) &
                      0xf0;
          pbVar2[3] = bVar26 ^ (bVar26 ^ (byte)((uint)(byte)(bVar26 & 0xf0 | bVar26 >> 4) * iVar44
                                               >> 0x10)) & 0xf0;
          pbVar2[4] = (byte)((uint)(byte)(bVar11 << 4 | bVar11 & 0xf) * iVar45 >> 0x14) & 0xf |
                      (byte)(iVar45 * (uint)(byte)(bVar11 & 0xf0 | bVar11 >> 4) >> 0x10) & 0xf0;
          pbVar2[5] = bVar27 ^ (bVar27 ^ (byte)((uint)(byte)(bVar27 & 0xf0 | bVar27 >> 4) * iVar45
                                               >> 0x10)) & 0xf0;
          pbVar2[6] = (byte)((uint)(byte)(bVar12 << 4 | bVar12 & 0xf) * iVar46 >> 0x14) & 0xf |
                      (byte)(iVar46 * (uint)(byte)(bVar12 & 0xf0 | bVar12 >> 4) >> 0x10) & 0xf0;
          pbVar2[7] = bVar28 ^ (bVar28 ^ (byte)((uint)(byte)(bVar28 & 0xf0 | bVar28 >> 4) * iVar46
                                               >> 0x10)) & 0xf0;
          pbVar2[8] = (byte)((uint)(byte)(bVar13 << 4 | bVar13 & 0xf) * iVar47 >> 0x14) & 0xf |
                      (byte)(iVar47 * (uint)(byte)(bVar13 & 0xf0 | bVar13 >> 4) >> 0x10) & 0xf0;
          pbVar2[9] = bVar29 ^ (bVar29 ^ (byte)((uint)(byte)(bVar29 & 0xf0 | bVar29 >> 4) * iVar47
                                               >> 0x10)) & 0xf0;
          pbVar2[10] = (byte)((uint)(byte)(bVar14 << 4 | bVar14 & 0xf) * iVar49 >> 0x14) & 0xf |
                       (byte)(iVar49 * (uint)(byte)(bVar14 & 0xf0 | bVar14 >> 4) >> 0x10) & 0xf0;
          pbVar2[0xb] = bVar30 ^ (bVar30 ^ (byte)((uint)(byte)(bVar30 & 0xf0 | bVar30 >> 4) * iVar49
                                                 >> 0x10)) & 0xf0;
          pbVar2[0xc] = (byte)((uint)(byte)(bVar15 << 4 | bVar15 & 0xf) * iVar50 >> 0x14) & 0xf |
                        (byte)(iVar50 * (uint)(byte)(bVar15 & 0xf0 | bVar15 >> 4) >> 0x10) & 0xf0;
          pbVar2[0xd] = bVar31 ^ (bVar31 ^ (byte)((uint)(byte)(bVar31 & 0xf0 | bVar31 >> 4) * iVar50
                                                 >> 0x10)) & 0xf0;
          pbVar2[0xe] = (byte)((uint)(byte)(bVar16 << 4 | bVar16 & 0xf) * iVar51 >> 0x14) & 0xf |
                        (byte)(iVar51 * (uint)(byte)(bVar16 & 0xf0 | bVar16 >> 4) >> 0x10) & 0xf0;
          pbVar2[0xf] = bVar32 ^ (bVar32 ^ (byte)((uint)(byte)(bVar32 & 0xf0 | bVar32 >> 4) * iVar51
                                                 >> 0x10)) & 0xf0;
          pbVar2[0x10] = (byte)((uint)(byte)(bVar17 << 4 | bVar17 & 0xf) * iVar53 >> 0x14) & 0xf |
                         (byte)(iVar53 * (uint)(byte)(bVar17 & 0xf0 | (byte)uVar5) >> 0x10) & 0xf0;
          pbVar2[0x11] = bVar33 ^ (bVar33 ^ (byte)((uint)(byte)(bVar33 & 0xf0 | bVar33 >> 4) *
                                                   iVar53 >> 0x10)) & 0xf0;
          pbVar2[0x12] = (byte)((uint)(byte)(bVar18 << 4 | bVar18 & 0xf) * iVar55 >> 0x14) & 0xf |
                         (byte)(iVar55 * (uint)(byte)(bVar18 & 0xf0 | (byte)(uVar5 >> 0x20)) >> 0x10
                               ) & 0xf0;
          pbVar2[0x13] = bVar34 ^ (bVar34 ^ (byte)((uint)(byte)(bVar34 & 0xf0 | bVar34 >> 4) *
                                                   iVar55 >> 0x10)) & 0xf0;
          pbVar2[0x14] = (byte)((uint)(byte)(bVar19 << 4 | bVar19 & 0xf) * iVar56 >> 0x14) & 0xf |
                         (byte)(iVar56 * (uint)(byte)(bVar19 & 0xf0 | bVar19 >> 4) >> 0x10) & 0xf0;
          pbVar2[0x15] = bVar35 ^ (bVar35 ^ (byte)((uint)(byte)(bVar35 & 0xf0 | bVar35 >> 4) *
                                                   iVar56 >> 0x10)) & 0xf0;
          pbVar2[0x16] = (byte)((uint)(byte)(bVar20 << 4 | bVar20 & 0xf) * iVar57 >> 0x14) & 0xf |
                         (byte)(iVar57 * (uint)(byte)(bVar20 & 0xf0 | bVar20 >> 4) >> 0x10) & 0xf0;
          pbVar2[0x17] = bVar36 ^ (bVar36 ^ (byte)((uint)(byte)(bVar36 & 0xf0 | bVar36 >> 4) *
                                                   iVar57 >> 0x10)) & 0xf0;
          pbVar2[0x18] = (byte)((uint)(byte)((byte)((CONCAT12(bVar22,(ushort)bVar21) & 0xffff) << 4)
                                            | bVar21 & 0xf) * iVar58 >> 0x14) & 0xf | (byte)uVar52;
          pbVar2[0x19] = bVar37 ^ (bVar37 ^ (byte)((uint)(byte)(bVar37 & 0xf0 | bVar37 >> 4) *
                                                   iVar58 >> 0x10)) & 0xf0;
          pbVar2[0x1a] = (byte)((uint)(byte)(bVar22 << 4 | bVar22 & 0xf) * iVar60 >> 0x14) & 0xf |
                         (byte)(uVar52 >> 0x20);
          pbVar2[0x1b] = bVar38 ^ (bVar38 ^ (byte)((uint)(byte)(bVar38 & 0xf0 | bVar38 >> 4) *
                                                   iVar60 >> 0x10)) & 0xf0;
          pbVar2[0x1c] = (byte)((uint)(byte)(bVar23 << 4 | bVar23 & 0xf) * iVar61 >> 0x14) & 0xf |
                         (byte)(iVar61 * (uint)(byte)(bVar23 & 0xf0 | bVar23 >> 4) >> 0x10) & 0xf0;
          pbVar2[0x1d] = bVar39 ^ (bVar39 ^ (byte)((uint)(byte)(bVar39 & 0xf0 | bVar39 >> 4) *
                                                   iVar61 >> 0x10)) & 0xf0;
          pbVar2[0x1e] = (byte)((uint)(byte)(bVar24 << 4 | bVar24 & 0xf) * iVar62 >> 0x14) & 0xf |
                         (byte)(iVar62 * (uint)(byte)(bVar24 & 0xf0 | bVar24 >> 4) >> 0x10) & 0xf0;
          pbVar2[0x1f] = bVar40 ^ (bVar40 ^ (byte)((uint)(byte)(bVar40 & 0xf0 | bVar40 >> 4) *
                                                   iVar62 >> 0x10)) & 0xf0;
        } while (lVar8 != 0);
        lVar7 = lVar6;
        if ((param_2 & 0xf) != 0) goto LAB_01148f00;
      }
      iVar41 = param_3 + -1;
      param_1 = param_1 + param_4;
      bVar1 = 0 < param_3;
      param_3 = iVar41;
    } while (iVar41 != 0 && bVar1);
  }
  return;
}



void png_read_filter_row_paeth4_neon(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
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
  undefined4 uVar28;
  ulong uVar29;
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
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined1 in_q7 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined1 auVar61 [16];
  ulong uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  ushort uVar72;
  ushort uVar76;
  ushort uVar77;
  undefined8 uVar73;
  ushort uVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  ushort uVar79;
  ushort uVar80;
  ushort uVar82;
  ushort uVar83;
  ushort uVar84;
  ushort uVar85;
  ushort uVar86;
  ushort uVar87;
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  ushort uVar91;
  undefined1 auVar81 [16];
  
  if (0 < *(long *)(param_1 + 8)) {
    puVar1 = (undefined4 *)((long)param_2 + *(long *)(param_1 + 8));
    auVar75 = ZEXT816(0);
    uVar29 = 0;
    do {
      uVar28 = *param_3;
      bVar20 = (byte)uVar28;
      bVar21 = (byte)((uint)uVar28 >> 8);
      bVar22 = (byte)((uint)uVar28 >> 0x10);
      bVar23 = (byte)((uint)uVar28 >> 0x18);
      uVar2 = param_3[1];
      bVar30 = (byte)uVar2;
      bVar31 = (byte)((uint)uVar2 >> 8);
      bVar32 = (byte)((uint)uVar2 >> 0x10);
      bVar33 = (byte)((uint)uVar2 >> 0x18);
      uVar3 = param_3[2];
      bVar38 = (byte)uVar3;
      bVar39 = (byte)((uint)uVar3 >> 8);
      bVar40 = (byte)((uint)uVar3 >> 0x10);
      bVar41 = (byte)((uint)uVar3 >> 0x18);
      uVar4 = param_3[3];
      bVar46 = (byte)((uint)uVar4 >> 8);
      bVar47 = (byte)((uint)uVar4 >> 0x10);
      bVar48 = (byte)((uint)uVar4 >> 0x18);
      uVar53 = param_3[4];
      bVar24 = (byte)uVar53;
      bVar25 = (byte)((uint)uVar53 >> 8);
      bVar26 = (byte)((uint)uVar53 >> 0x10);
      bVar27 = (byte)((uint)uVar53 >> 0x18);
      uVar53 = param_3[5];
      bVar34 = (byte)uVar53;
      bVar35 = (byte)((uint)uVar53 >> 8);
      bVar36 = (byte)((uint)uVar53 >> 0x10);
      bVar37 = (byte)((uint)uVar53 >> 0x18);
      uVar53 = param_3[6];
      bVar42 = (byte)uVar53;
      bVar43 = (byte)((uint)uVar53 >> 8);
      bVar44 = (byte)((uint)uVar53 >> 0x10);
      bVar45 = (byte)((uint)uVar53 >> 0x18);
      uVar53 = param_3[7];
      bVar49 = (byte)uVar53;
      bVar50 = (byte)((uint)uVar53 >> 8);
      bVar51 = (byte)((uint)uVar53 >> 0x10);
      bVar52 = (byte)((uint)uVar53 >> 0x18);
      bVar19 = auVar75[0];
      bVar62 = auVar75[1];
      bVar63 = auVar75[2];
      bVar64 = auVar75[3];
      bVar65 = auVar75[4];
      bVar66 = auVar75[5];
      bVar67 = auVar75[6];
      bVar68 = auVar75[7];
      auVar70._0_2_ = (ushort)bVar19 << 1;
      auVar70._2_2_ = (ushort)bVar62 << 1;
      auVar70._4_2_ = (ushort)bVar63 << 1;
      auVar70._6_2_ = (ushort)bVar64 << 1;
      auVar70._8_2_ = (ushort)bVar65 << 1;
      auVar70._10_2_ = (ushort)bVar66 << 1;
      auVar70._12_2_ = (ushort)bVar67 << 1;
      auVar70._14_2_ = (ushort)bVar68 << 1;
      bVar12 = (byte)(uVar29 >> 8);
      bVar13 = (byte)(uVar29 >> 0x10);
      bVar14 = (byte)(uVar29 >> 0x18);
      bVar15 = (byte)(uVar29 >> 0x20);
      bVar16 = (byte)(uVar29 >> 0x28);
      bVar17 = (byte)(uVar29 >> 0x30);
      bVar18 = (byte)(uVar29 >> 0x38);
      uVar79 = MP_INT_ABS((ushort)(byte)uVar29 - (ushort)bVar19);
      uVar82 = MP_INT_ABS((ushort)bVar12 - (ushort)bVar62);
      uVar84 = MP_INT_ABS((ushort)bVar13 - (ushort)bVar63);
      uVar86 = MP_INT_ABS((ushort)bVar14 - (ushort)bVar64);
      uVar88 = MP_INT_ABS((ushort)bVar15 - (ushort)bVar65);
      uVar89 = MP_INT_ABS((ushort)bVar16 - (ushort)bVar66);
      uVar90 = MP_INT_ABS((ushort)bVar17 - (ushort)bVar67);
      uVar91 = MP_INT_ABS((ushort)bVar18 - (ushort)bVar68);
      uVar53 = *param_2;
      uVar55 = param_2[1];
      uVar57 = param_2[2];
      uVar59 = param_2[3];
      uVar54 = param_2[4];
      uVar56 = param_2[5];
      uVar58 = param_2[6];
      uVar60 = param_2[7];
      sVar6 = (ushort)bVar21 + (ushort)bVar12;
      sVar7 = (ushort)bVar22 + (ushort)bVar13;
      sVar8 = (ushort)bVar23 + (ushort)bVar14;
      uVar72 = MP_INT_ABS((ushort)bVar20 - (ushort)bVar19);
      uVar76 = MP_INT_ABS((ushort)bVar21 - (ushort)bVar62);
      uVar77 = MP_INT_ABS((ushort)bVar22 - (ushort)bVar63);
      uVar78 = MP_INT_ABS((ushort)bVar23 - (ushort)bVar64);
      uVar80 = MP_INT_ABS((ushort)bVar24 - (ushort)bVar65);
      uVar83 = MP_INT_ABS((ushort)bVar25 - (ushort)bVar66);
      uVar85 = MP_INT_ABS((ushort)bVar26 - (ushort)bVar67);
      uVar87 = MP_INT_ABS((ushort)bVar27 - (ushort)bVar68);
      auVar71[2] = (char)sVar6;
      auVar71._0_2_ = (ushort)bVar20 + (ushort)(byte)uVar29;
      auVar71[3] = (char)((ushort)sVar6 >> 8);
      auVar71[4] = (char)sVar7;
      auVar71[5] = (char)((ushort)sVar7 >> 8);
      auVar71[6] = (char)sVar8;
      auVar71[7] = (char)((ushort)sVar8 >> 8);
      auVar71._8_2_ = (ushort)bVar24 + (ushort)bVar15;
      auVar71._10_2_ = (ushort)bVar25 + (ushort)bVar16;
      auVar71._12_2_ = (ushort)bVar26 + (ushort)bVar17;
      auVar71._14_2_ = (ushort)bVar27 + (ushort)bVar18;
      auVar71 = NEON_uabd(auVar71,auVar70,2);
      uVar69 = auVar75._0_8_;
      uVar73 = NEON_uabd(uVar29,uVar69,1);
      uVar10 = NEON_uabd(CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,uVar28)))),
                         uVar69,1);
      uVar69 = uVar69 ^ (uVar69 ^ CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,
                                                  uVar28))))) &
                        CONCAT17(-(uVar91 <= auVar71._14_2_),
                                 CONCAT16(-(uVar90 <= auVar71._12_2_),
                                          CONCAT15(-(uVar89 <= auVar71._10_2_),
                                                   CONCAT14(-(uVar88 <= auVar71._8_2_),
                                                            CONCAT13(-(uVar86 <= auVar71._6_2_),
                                                                     CONCAT12(-(uVar84 <=
                                                                               auVar71._4_2_),
                                                                              CONCAT11(-(uVar82 <=
                                                                                        auVar71.
                                                  _2_2_),-(uVar79 <= auVar71._0_2_))))))));
      uVar69 = uVar69 ^ (uVar69 ^ uVar29) &
                        CONCAT17(-(uVar87 <= auVar71._14_2_),
                                 CONCAT16(-(uVar85 <= auVar71._12_2_),
                                          CONCAT15(-(uVar83 <= auVar71._10_2_),
                                                   CONCAT14(-(uVar80 <= auVar71._8_2_),
                                                            CONCAT13(-(uVar78 <= auVar71._6_2_),
                                                                     CONCAT12(-(uVar77 <=
                                                                               auVar71._4_2_),
                                                                              CONCAT11(-(uVar76 <=
                                                                                        auVar71.
                                                  _2_2_),-(uVar72 <= auVar71._0_2_)))))))) &
                        CONCAT17(-((byte)((ulong)uVar10 >> 0x38) <= (byte)((ulong)uVar73 >> 0x38)),
                                 CONCAT16(-((byte)((ulong)uVar10 >> 0x30) <=
                                           (byte)((ulong)uVar73 >> 0x30)),
                                          CONCAT15(-((byte)((ulong)uVar10 >> 0x28) <=
                                                    (byte)((ulong)uVar73 >> 0x28)),
                                                   CONCAT14(-((byte)((ulong)uVar10 >> 0x20) <=
                                                             (byte)((ulong)uVar73 >> 0x20)),
                                                            CONCAT13(-((byte)((ulong)uVar10 >> 0x18)
                                                                      <= (byte)((ulong)uVar73 >>
                                                                               0x18)),
                                                                     CONCAT12(-((byte)((ulong)uVar10
                                                                                      >> 0x10) <=
                                                                               (byte)((ulong)uVar73
                                                                                     >> 0x10)),
                                                                              CONCAT11(-((byte)((
                                                  ulong)uVar10 >> 8) <= (byte)((ulong)uVar73 >> 8)),
                                                  -((byte)uVar10 <= (byte)uVar73))))))));
      bVar12 = (char)uVar69 + (char)uVar53;
      bVar13 = (char)(uVar69 >> 8) + (char)((uint)uVar53 >> 8);
      bVar14 = (char)(uVar69 >> 0x10) + (char)((uint)uVar53 >> 0x10);
      bVar15 = (char)(uVar69 >> 0x18) + (char)((uint)uVar53 >> 0x18);
      bVar16 = (char)(uVar69 >> 0x20) + (char)uVar54;
      bVar17 = (char)(uVar69 >> 0x28) + (char)((uint)uVar54 >> 8);
      bVar18 = (char)(uVar69 >> 0x30) + (char)((uint)uVar54 >> 0x10);
      bVar19 = (char)(uVar69 >> 0x38) + (char)((uint)uVar54 >> 0x18);
      auVar74._0_2_ = (ushort)bVar12 + (ushort)bVar30;
      auVar74._2_2_ = (ushort)bVar13 + (ushort)bVar31;
      auVar74._4_2_ = (ushort)bVar14 + (ushort)bVar32;
      auVar74._6_2_ = (ushort)bVar15 + (ushort)bVar33;
      auVar74._8_2_ = (ushort)bVar16 + (ushort)bVar34;
      auVar74._10_2_ = (ushort)bVar17 + (ushort)bVar35;
      auVar74._12_2_ = (ushort)bVar18 + (ushort)bVar36;
      auVar74._14_2_ = (ushort)bVar19 + (ushort)bVar37;
      uVar73 = NEON_uabd(CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,uVar2)))),
                         CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,uVar28)))),
                         1);
      auVar5[2] = (char)((ushort)bVar21 << 1);
      auVar5._0_2_ = (ushort)bVar20 << 1;
      auVar5[3] = (char)((ushort)((ushort)bVar21 << 1) >> 8);
      auVar5[4] = (char)((ushort)bVar22 << 1);
      auVar5[5] = (char)((ushort)((ushort)bVar22 << 1) >> 8);
      auVar5[6] = (char)((ushort)bVar23 << 1);
      auVar5[7] = (char)((ushort)((ushort)bVar23 << 1) >> 8);
      auVar5._8_2_ = (ushort)bVar24 << 1;
      auVar5._10_2_ = (ushort)bVar25 << 1;
      auVar5._12_2_ = (ushort)bVar26 << 1;
      auVar5._14_2_ = (ushort)bVar27 << 1;
      auVar75 = NEON_uabd(auVar74,auVar5,2);
      uVar10 = NEON_uabd(CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(
                                                  bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar12)))))
                                                 )),
                         CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,uVar28)))),
                         1);
      uVar80 = MP_INT_ABS((ushort)bVar30 - (ushort)bVar20);
      uVar83 = MP_INT_ABS((ushort)bVar31 - (ushort)bVar21);
      uVar85 = MP_INT_ABS((ushort)bVar32 - (ushort)bVar22);
      uVar87 = MP_INT_ABS((ushort)bVar33 - (ushort)bVar23);
      uVar79 = MP_INT_ABS((ushort)bVar34 - (ushort)bVar24);
      uVar82 = MP_INT_ABS((ushort)bVar35 - (ushort)bVar25);
      uVar84 = MP_INT_ABS((ushort)bVar36 - (ushort)bVar26);
      uVar86 = MP_INT_ABS((ushort)bVar37 - (ushort)bVar27);
      uVar72 = MP_INT_ABS((ushort)bVar12 - (ushort)bVar20);
      uVar76 = MP_INT_ABS((ushort)bVar13 - (ushort)bVar21);
      uVar77 = MP_INT_ABS((ushort)bVar14 - (ushort)bVar22);
      uVar78 = MP_INT_ABS((ushort)bVar15 - (ushort)bVar23);
      uVar88 = MP_INT_ABS((ushort)bVar16 - (ushort)bVar24);
      uVar89 = MP_INT_ABS((ushort)bVar17 - (ushort)bVar25);
      uVar90 = MP_INT_ABS((ushort)bVar18 - (ushort)bVar26);
      uVar91 = MP_INT_ABS((ushort)bVar19 - (ushort)bVar27);
      uVar29 = CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,uVar28)))) ^
               (CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,uVar28)))) ^
               CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,uVar2))))) &
               CONCAT17(-(uVar91 <= auVar75._14_2_),
                        CONCAT16(-(uVar90 <= auVar75._12_2_),
                                 CONCAT15(-(uVar89 <= auVar75._10_2_),
                                          CONCAT14(-(uVar88 <= auVar75._8_2_),
                                                   CONCAT13(-(uVar78 <= auVar75._6_2_),
                                                            CONCAT12(-(uVar77 <= auVar75._4_2_),
                                                                     CONCAT11(-(uVar76 <=
                                                                               auVar75._2_2_),
                                                                              -(uVar72 <=
                                                                               auVar75._0_2_))))))))
      ;
      uVar29 = uVar29 ^ (uVar29 ^ CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,
                                                  CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,
                                                  bVar12)))))))) &
                        CONCAT17(-(uVar86 <= auVar75._14_2_),
                                 CONCAT16(-(uVar84 <= auVar75._12_2_),
                                          CONCAT15(-(uVar82 <= auVar75._10_2_),
                                                   CONCAT14(-(uVar79 <= auVar75._8_2_),
                                                            CONCAT13(-(uVar87 <= auVar75._6_2_),
                                                                     CONCAT12(-(uVar85 <=
                                                                               auVar75._4_2_),
                                                                              CONCAT11(-(uVar83 <=
                                                                                        auVar75.
                                                  _2_2_),-(uVar80 <= auVar75._0_2_)))))))) &
                        CONCAT17(-((byte)((ulong)uVar73 >> 0x38) <= (byte)((ulong)uVar10 >> 0x38)),
                                 CONCAT16(-((byte)((ulong)uVar73 >> 0x30) <=
                                           (byte)((ulong)uVar10 >> 0x30)),
                                          CONCAT15(-((byte)((ulong)uVar73 >> 0x28) <=
                                                    (byte)((ulong)uVar10 >> 0x28)),
                                                   CONCAT14(-((byte)((ulong)uVar73 >> 0x20) <=
                                                             (byte)((ulong)uVar10 >> 0x20)),
                                                            CONCAT13(-((byte)((ulong)uVar73 >> 0x18)
                                                                      <= (byte)((ulong)uVar10 >>
                                                                               0x18)),
                                                                     CONCAT12(-((byte)((ulong)uVar73
                                                                                      >> 0x10) <=
                                                                               (byte)((ulong)uVar10
                                                                                     >> 0x10)),
                                                                              CONCAT11(-((byte)((
                                                  ulong)uVar73 >> 8) <= (byte)((ulong)uVar10 >> 8)),
                                                  -((byte)uVar73 <= (byte)uVar10))))))));
      bVar16 = (char)uVar29 + (char)uVar55;
      bVar17 = (char)(uVar29 >> 8) + (char)((uint)uVar55 >> 8);
      bVar18 = (char)(uVar29 >> 0x10) + (char)((uint)uVar55 >> 0x10);
      bVar19 = (char)(uVar29 >> 0x18) + (char)((uint)uVar55 >> 0x18);
      bVar20 = (char)(uVar29 >> 0x20) + (char)uVar56;
      bVar21 = (char)(uVar29 >> 0x28) + (char)((uint)uVar56 >> 8);
      bVar22 = (char)(uVar29 >> 0x30) + (char)((uint)uVar56 >> 0x10);
      bVar23 = (char)(uVar29 >> 0x38) + (char)((uint)uVar56 >> 0x18);
      auVar81._0_2_ = (ushort)bVar16 + (ushort)bVar38;
      auVar81._2_2_ = (ushort)bVar17 + (ushort)bVar39;
      auVar81._4_2_ = (ushort)bVar18 + (ushort)bVar40;
      auVar81._6_2_ = (ushort)bVar19 + (ushort)bVar41;
      auVar81._8_2_ = (ushort)bVar20 + (ushort)bVar42;
      auVar81._10_2_ = (ushort)bVar21 + (ushort)bVar43;
      auVar81._12_2_ = (ushort)bVar22 + (ushort)bVar44;
      auVar81._14_2_ = (ushort)bVar23 + (ushort)bVar45;
      uVar73 = NEON_uabd(CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,uVar3)))),
                         CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,uVar2)))),1
                        );
      auVar11[2] = (char)((ushort)bVar31 << 1);
      auVar11._0_2_ = (ushort)bVar30 << 1;
      auVar11[3] = (char)((ushort)((ushort)bVar31 << 1) >> 8);
      auVar11[4] = (char)((ushort)bVar32 << 1);
      auVar11[5] = (char)((ushort)((ushort)bVar32 << 1) >> 8);
      auVar11[6] = (char)((ushort)bVar33 << 1);
      auVar11[7] = (char)((ushort)((ushort)bVar33 << 1) >> 8);
      auVar11[8] = (char)((ushort)bVar34 << 1);
      auVar11[9] = (char)((ushort)((ushort)bVar34 << 1) >> 8);
      auVar11[10] = (char)((ushort)bVar35 << 1);
      auVar11[0xb] = (char)((ushort)((ushort)bVar35 << 1) >> 8);
      auVar11[0xc] = (char)((ushort)bVar36 << 1);
      auVar11[0xd] = (char)((ushort)((ushort)bVar36 << 1) >> 8);
      auVar11[0xe] = (char)((ushort)bVar37 << 1);
      auVar11[0xf] = (char)((ushort)((ushort)bVar37 << 1) >> 8);
      auVar75 = NEON_uabd(auVar81,auVar11,2);
      uVar10 = NEON_uabd(CONCAT17(bVar23,CONCAT16(bVar22,CONCAT15(bVar21,CONCAT14(bVar20,CONCAT13(
                                                  bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)))))
                                                 )),
                         CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,uVar2)))),1
                        );
      uVar79 = MP_INT_ABS((ushort)bVar38 - (ushort)bVar30);
      uVar82 = MP_INT_ABS((ushort)bVar39 - (ushort)bVar31);
      uVar84 = MP_INT_ABS((ushort)bVar40 - (ushort)bVar32);
      uVar86 = MP_INT_ABS((ushort)bVar41 - (ushort)bVar33);
      uVar88 = MP_INT_ABS((ushort)bVar42 - (ushort)bVar34);
      uVar89 = MP_INT_ABS((ushort)bVar43 - (ushort)bVar35);
      uVar90 = MP_INT_ABS((ushort)bVar44 - (ushort)bVar36);
      uVar91 = MP_INT_ABS((ushort)bVar45 - (ushort)bVar37);
      uVar72 = MP_INT_ABS((ushort)bVar16 - (ushort)bVar30);
      uVar76 = MP_INT_ABS((ushort)bVar17 - (ushort)bVar31);
      uVar77 = MP_INT_ABS((ushort)bVar18 - (ushort)bVar32);
      uVar78 = MP_INT_ABS((ushort)bVar19 - (ushort)bVar33);
      uVar80 = MP_INT_ABS((ushort)bVar20 - (ushort)bVar34);
      uVar83 = MP_INT_ABS((ushort)bVar21 - (ushort)bVar35);
      uVar85 = MP_INT_ABS((ushort)bVar22 - (ushort)bVar36);
      uVar87 = MP_INT_ABS((ushort)bVar23 - (ushort)bVar37);
      uVar29 = CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,uVar2)))) ^
               (CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,uVar2)))) ^
               CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,uVar3))))) &
               CONCAT17(-(uVar87 <= auVar75._14_2_),
                        CONCAT16(-(uVar85 <= auVar75._12_2_),
                                 CONCAT15(-(uVar83 <= auVar75._10_2_),
                                          CONCAT14(-(uVar80 <= auVar75._8_2_),
                                                   CONCAT13(-(uVar78 <= auVar75._6_2_),
                                                            CONCAT12(-(uVar77 <= auVar75._4_2_),
                                                                     CONCAT11(-(uVar76 <=
                                                                               auVar75._2_2_),
                                                                              -(uVar72 <=
                                                                               auVar75._0_2_))))))))
      ;
      uVar29 = uVar29 ^ (uVar29 ^ CONCAT17(bVar23,CONCAT16(bVar22,CONCAT15(bVar21,CONCAT14(bVar20,
                                                  CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,
                                                  bVar16)))))))) &
                        CONCAT17(-(uVar91 <= auVar75._14_2_),
                                 CONCAT16(-(uVar90 <= auVar75._12_2_),
                                          CONCAT15(-(uVar89 <= auVar75._10_2_),
                                                   CONCAT14(-(uVar88 <= auVar75._8_2_),
                                                            CONCAT13(-(uVar86 <= auVar75._6_2_),
                                                                     CONCAT12(-(uVar84 <=
                                                                               auVar75._4_2_),
                                                                              CONCAT11(-(uVar82 <=
                                                                                        auVar75.
                                                  _2_2_),-(uVar79 <= auVar75._0_2_)))))))) &
                        CONCAT17(-((byte)((ulong)uVar73 >> 0x38) <= (byte)((ulong)uVar10 >> 0x38)),
                                 CONCAT16(-((byte)((ulong)uVar73 >> 0x30) <=
                                           (byte)((ulong)uVar10 >> 0x30)),
                                          CONCAT15(-((byte)((ulong)uVar73 >> 0x28) <=
                                                    (byte)((ulong)uVar10 >> 0x28)),
                                                   CONCAT14(-((byte)((ulong)uVar73 >> 0x20) <=
                                                             (byte)((ulong)uVar10 >> 0x20)),
                                                            CONCAT13(-((byte)((ulong)uVar73 >> 0x18)
                                                                      <= (byte)((ulong)uVar10 >>
                                                                               0x18)),
                                                                     CONCAT12(-((byte)((ulong)uVar73
                                                                                      >> 0x10) <=
                                                                               (byte)((ulong)uVar10
                                                                                     >> 0x10)),
                                                                              CONCAT11(-((byte)((
                                                  ulong)uVar73 >> 8) <= (byte)((ulong)uVar10 >> 8)),
                                                  -((byte)uVar73 <= (byte)uVar10))))))));
      bVar20 = (char)uVar29 + (char)uVar57;
      bVar21 = (char)(uVar29 >> 8) + (char)((uint)uVar57 >> 8);
      bVar22 = (char)(uVar29 >> 0x10) + (char)((uint)uVar57 >> 0x10);
      bVar23 = (char)(uVar29 >> 0x18) + (char)((uint)uVar57 >> 0x18);
      bVar24 = (char)(uVar29 >> 0x20) + (char)uVar58;
      bVar25 = (char)(uVar29 >> 0x28) + (char)((uint)uVar58 >> 8);
      bVar26 = (char)(uVar29 >> 0x30) + (char)((uint)uVar58 >> 0x10);
      bVar27 = (char)(uVar29 >> 0x38) + (char)((uint)uVar58 >> 0x18);
      auVar61._0_2_ = (ushort)bVar20 + (ushort)(byte)uVar4;
      auVar61._2_2_ = (ushort)bVar21 + (ushort)bVar46;
      auVar61._4_2_ = (ushort)bVar22 + (ushort)bVar47;
      auVar61._6_2_ = (ushort)bVar23 + (ushort)bVar48;
      auVar61._8_2_ = (ushort)bVar24 + (ushort)bVar49;
      auVar61._10_2_ = (ushort)bVar25 + (ushort)bVar50;
      auVar61._12_2_ = (ushort)bVar26 + (ushort)bVar51;
      auVar61._14_2_ = (ushort)bVar27 + (ushort)bVar52;
      uVar72 = MP_INT_ABS((ushort)(byte)uVar4 - (ushort)bVar38);
      uVar76 = MP_INT_ABS((ushort)bVar46 - (ushort)bVar39);
      uVar77 = MP_INT_ABS((ushort)bVar47 - (ushort)bVar40);
      uVar78 = MP_INT_ABS((ushort)bVar48 - (ushort)bVar41);
      uVar80 = MP_INT_ABS((ushort)bVar49 - (ushort)bVar42);
      uVar83 = MP_INT_ABS((ushort)bVar50 - (ushort)bVar43);
      uVar85 = MP_INT_ABS((ushort)bVar51 - (ushort)bVar44);
      uVar87 = MP_INT_ABS((ushort)bVar52 - (ushort)bVar45);
      uVar79 = MP_INT_ABS((ushort)bVar20 - (ushort)bVar38);
      uVar82 = MP_INT_ABS((ushort)bVar21 - (ushort)bVar39);
      uVar84 = MP_INT_ABS((ushort)bVar22 - (ushort)bVar40);
      uVar86 = MP_INT_ABS((ushort)bVar23 - (ushort)bVar41);
      uVar88 = MP_INT_ABS((ushort)bVar24 - (ushort)bVar42);
      uVar89 = MP_INT_ABS((ushort)bVar25 - (ushort)bVar43);
      uVar90 = MP_INT_ABS((ushort)bVar26 - (ushort)bVar44);
      uVar91 = MP_INT_ABS((ushort)bVar27 - (ushort)bVar45);
      auVar9[2] = (char)((ushort)bVar39 << 1);
      auVar9._0_2_ = (ushort)bVar38 << 1;
      auVar9[3] = (char)((ushort)((ushort)bVar39 << 1) >> 8);
      auVar9[4] = (char)((ushort)bVar40 << 1);
      auVar9[5] = (char)((ushort)((ushort)bVar40 << 1) >> 8);
      auVar9[6] = (char)((ushort)bVar41 << 1);
      auVar9[7] = (char)((ushort)((ushort)bVar41 << 1) >> 8);
      auVar9._8_2_ = (ushort)bVar42 << 1;
      auVar9._10_2_ = (ushort)bVar43 << 1;
      auVar9._12_2_ = (ushort)bVar44 << 1;
      auVar9._14_2_ = (ushort)bVar45 << 1;
      auVar75 = NEON_uabd(auVar61,auVar9,2);
      uVar10 = NEON_uabd(CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(bVar49,uVar4)))),
                         CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,uVar3)))),1
                        );
      uVar73 = NEON_uabd(CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,CONCAT13(
                                                  bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)))))
                                                 )),
                         CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,uVar3)))),1
                        );
      uVar29 = CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,uVar3)))) ^
               (CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,uVar3)))) ^
               CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(bVar49,uVar4))))) &
               CONCAT17(-(uVar91 <= auVar75._14_2_),
                        CONCAT16(-(uVar90 <= auVar75._12_2_),
                                 CONCAT15(-(uVar89 <= auVar75._10_2_),
                                          CONCAT14(-(uVar88 <= auVar75._8_2_),
                                                   CONCAT13(-(uVar86 <= auVar75._6_2_),
                                                            CONCAT12(-(uVar84 <= auVar75._4_2_),
                                                                     CONCAT11(-(uVar82 <=
                                                                               auVar75._2_2_),
                                                                              -(uVar79 <=
                                                                               auVar75._0_2_))))))))
      ;
      uVar29 = uVar29 ^ (uVar29 ^ CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,
                                                  CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,
                                                  bVar20)))))))) &
                        CONCAT17(-(uVar87 <= auVar75._14_2_),
                                 CONCAT16(-(uVar85 <= auVar75._12_2_),
                                          CONCAT15(-(uVar83 <= auVar75._10_2_),
                                                   CONCAT14(-(uVar80 <= auVar75._8_2_),
                                                            CONCAT13(-(uVar78 <= auVar75._6_2_),
                                                                     CONCAT12(-(uVar77 <=
                                                                               auVar75._4_2_),
                                                                              CONCAT11(-(uVar76 <=
                                                                                        auVar75.
                                                  _2_2_),-(uVar72 <= auVar75._0_2_)))))))) &
                        CONCAT17(-((byte)((ulong)uVar10 >> 0x38) <= (byte)((ulong)uVar73 >> 0x38)),
                                 CONCAT16(-((byte)((ulong)uVar10 >> 0x30) <=
                                           (byte)((ulong)uVar73 >> 0x30)),
                                          CONCAT15(-((byte)((ulong)uVar10 >> 0x28) <=
                                                    (byte)((ulong)uVar73 >> 0x28)),
                                                   CONCAT14(-((byte)((ulong)uVar10 >> 0x20) <=
                                                             (byte)((ulong)uVar73 >> 0x20)),
                                                            CONCAT13(-((byte)((ulong)uVar10 >> 0x18)
                                                                      <= (byte)((ulong)uVar73 >>
                                                                               0x18)),
                                                                     CONCAT12(-((byte)((ulong)uVar10
                                                                                      >> 0x10) <=
                                                                               (byte)((ulong)uVar73
                                                                                     >> 0x10)),
                                                                              CONCAT11(-((byte)((
                                                  ulong)uVar10 >> 8) <= (byte)((ulong)uVar73 >> 8)),
                                                  -((byte)uVar10 <= (byte)uVar73))))))));
      uVar28 = CONCAT13((char)(uVar29 >> 0x18) + (char)((uint)uVar59 >> 0x18),
                        CONCAT12((char)(uVar29 >> 0x10) + (char)((uint)uVar59 >> 0x10),
                                 CONCAT11((char)(uVar29 >> 8) + (char)((uint)uVar59 >> 8),
                                          (char)uVar29 + (char)uVar59)));
      uVar29 = CONCAT17((char)(uVar29 >> 0x38) + (char)((uint)uVar60 >> 0x18),
                        CONCAT16((char)(uVar29 >> 0x30) + (char)((uint)uVar60 >> 0x10),
                                 CONCAT15((char)(uVar29 >> 0x28) + (char)((uint)uVar60 >> 8),
                                          CONCAT14((char)(uVar29 >> 0x20) + (char)uVar60,uVar28))));
      *param_2 = CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar12)));
      param_2[1] = CONCAT13(bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)));
      param_2[2] = CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)));
      param_2[3] = uVar28;
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      auVar75[4] = bVar49;
      auVar75._0_4_ = uVar4;
      auVar75[5] = bVar50;
      auVar75[6] = bVar51;
      auVar75[7] = bVar52;
      auVar75._8_8_ = in_q7._8_8_;
    } while (param_2 < puVar1);
  }
  return;
}


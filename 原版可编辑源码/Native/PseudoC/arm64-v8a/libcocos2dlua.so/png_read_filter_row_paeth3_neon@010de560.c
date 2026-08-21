
void png_read_filter_row_paeth3_neon
               (long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  short sVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  byte bVar16;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  ulong uVar18;
  byte bVar25;
  undefined4 uVar26;
  ulong uVar27;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uVar47;
  ulong uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  ushort uVar53;
  ushort uVar54;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  undefined8 uVar55;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  byte bVar69;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined8 uVar70;
  ulong uVar71;
  byte bVar78;
  ushort uVar79;
  ushort uVar80;
  ushort uVar81;
  ushort uVar82;
  undefined4 uVar17;
  
  lVar5 = *(long *)(param_1 + 8);
  if (0 < lVar5) {
    uVar47 = *(undefined8 *)*param_2;
    cVar8 = (char)uVar47;
    cVar9 = (char)((ulong)uVar47 >> 8);
    cVar10 = (char)((ulong)uVar47 >> 0x10);
    cVar11 = (char)((ulong)uVar47 >> 0x18);
    cVar12 = (char)((ulong)uVar47 >> 0x20);
    cVar13 = (char)((ulong)uVar47 >> 0x28);
    cVar14 = (char)((ulong)uVar47 >> 0x30);
    cVar15 = (char)((ulong)uVar47 >> 0x38);
    uVar18 = 0;
    auVar29 = ZEXT816(0);
    auVar45 = NEON_ext(*param_2,*param_2,8,1);
    pauVar6 = param_2;
    do {
                    /* catch() { ... } // from try @ 010de5d4 with catch @ 010de584 */
      uVar48 = *(ulong *)*param_3;
      bVar30 = (byte)uVar48;
      bVar31 = (byte)(uVar48 >> 8);
      bVar32 = (byte)(uVar48 >> 0x10);
      bVar33 = (byte)(uVar48 >> 0x18);
      bVar34 = (byte)(uVar48 >> 0x20);
      bVar35 = (byte)(uVar48 >> 0x28);
      bVar36 = (byte)(uVar48 >> 0x30);
      bVar43 = (byte)(uVar48 >> 0x38);
      bVar16 = (byte)uVar18;
      bVar19 = (byte)(uVar18 >> 8);
      bVar20 = (byte)(uVar18 >> 0x10);
      bVar21 = (byte)(uVar18 >> 0x18);
      bVar22 = (byte)(uVar18 >> 0x20);
      bVar23 = (byte)(uVar18 >> 0x28);
      bVar24 = (byte)(uVar18 >> 0x30);
      bVar25 = (byte)(uVar18 >> 0x38);
      auVar49._0_2_ = (ushort)bVar16 << 1;
      auVar49._2_2_ = (ushort)bVar19 << 1;
      auVar49._4_2_ = (ushort)bVar20 << 1;
      auVar49._6_2_ = (ushort)bVar21 << 1;
      auVar49._8_2_ = (ushort)bVar22 << 1;
      auVar49._10_2_ = (ushort)bVar23 << 1;
      auVar49._12_2_ = (ushort)bVar24 << 1;
      auVar49._14_2_ = (ushort)bVar25 << 1;
      uVar53 = MP_INT_ABS((ushort)auVar29[0] - (ushort)bVar16);
      uVar56 = MP_INT_ABS((ushort)auVar29[1] - (ushort)bVar19);
      uVar58 = MP_INT_ABS((ushort)auVar29[2] - (ushort)bVar20);
      uVar60 = MP_INT_ABS((ushort)auVar29[3] - (ushort)bVar21);
      uVar62 = MP_INT_ABS((ushort)auVar29[4] - (ushort)bVar22);
      uVar63 = MP_INT_ABS((ushort)auVar29[5] - (ushort)bVar23);
      uVar64 = MP_INT_ABS((ushort)auVar29[6] - (ushort)bVar24);
      uVar65 = MP_INT_ABS((ushort)auVar29[7] - (ushort)bVar25);
      uVar66 = NEON_uabd(auVar29._0_8_,uVar18,1);
      sVar2 = (ushort)bVar31 + (ushort)auVar29[1];
      sVar3 = (ushort)bVar32 + (ushort)auVar29[2];
      sVar4 = (ushort)bVar33 + (ushort)auVar29[3];
      uVar54 = MP_INT_ABS((ushort)bVar30 - (ushort)bVar16);
      uVar57 = MP_INT_ABS((ushort)bVar31 - (ushort)bVar19);
      uVar59 = MP_INT_ABS((ushort)bVar32 - (ushort)bVar20);
      uVar61 = MP_INT_ABS((ushort)bVar33 - (ushort)bVar21);
      uVar79 = MP_INT_ABS((ushort)bVar34 - (ushort)bVar22);
      uVar80 = MP_INT_ABS((ushort)bVar35 - (ushort)bVar23);
      uVar81 = MP_INT_ABS((ushort)bVar36 - (ushort)bVar24);
      uVar82 = MP_INT_ABS((ushort)bVar43 - (ushort)bVar25);
      auVar50[2] = (char)sVar2;
      auVar50._0_2_ = (ushort)bVar30 + (ushort)auVar29[0];
      auVar50[3] = (char)((ushort)sVar2 >> 8);
      auVar50[4] = (char)sVar3;
      auVar50[5] = (char)((ushort)sVar3 >> 8);
      auVar50[6] = (char)sVar4;
      auVar50[7] = (char)((ushort)sVar4 >> 8);
      auVar50._8_2_ = (ushort)bVar34 + (ushort)auVar29[4];
      auVar50._10_2_ = (ushort)bVar35 + (ushort)auVar29[5];
      auVar50._12_2_ = (ushort)bVar36 + (ushort)auVar29[6];
      auVar50._14_2_ = (ushort)bVar43 + (ushort)auVar29[7];
      auVar50 = NEON_uabd(auVar50,auVar49,2);
      uVar70 = NEON_uabd(uVar48,uVar18,1);
                    /* try { // try from 010de5ac to 011de5b3 has its CatchHandler @ 010de628 */
      uVar18 = uVar18 ^ (uVar18 ^ uVar48) &
                        CONCAT17(-(uVar65 <= auVar50._14_2_),
                                 CONCAT16(-(uVar64 <= auVar50._12_2_),
                                          CONCAT15(-(uVar63 <= auVar50._10_2_),
                                                   CONCAT14(-(uVar62 <= auVar50._8_2_),
                                                            CONCAT13(-(uVar60 <= auVar50._6_2_),
                                                                     CONCAT12(-(uVar58 <=
                                                                               auVar50._4_2_),
                                                                              CONCAT11(-(uVar56 <=
                                                                                        auVar50.
                                                  _2_2_),-(uVar53 <= auVar50._0_2_))))))));
      uVar55 = auVar45._0_8_;
      uVar47 = NEON_ext(CONCAT17(cVar15,CONCAT16(cVar14,CONCAT15(cVar13,CONCAT14(cVar12,CONCAT13(
                                                  cVar11,CONCAT12(cVar10,CONCAT11(cVar9,cVar8)))))))
                        ,uVar55,3,1);
      uVar67 = NEON_ext(CONCAT17(cVar15,CONCAT16(cVar14,CONCAT15(cVar13,CONCAT14(cVar12,CONCAT13(
                                                  cVar11,CONCAT12(cVar10,CONCAT11(cVar9,cVar8)))))))
                        ,uVar55,6,1);
                    /* try { // try from 010de5c8 to 011de5d3 has its CatchHandler @ 010de618 */
      uVar68 = NEON_ext(uVar55,uVar55,1,1);
      auVar45 = NEON_ext(*param_3,*param_3,8,1);
      uVar18 = uVar18 ^ (uVar18 ^ auVar29._0_8_) &
                        CONCAT17(-(uVar82 <= auVar50._14_2_),
                                 CONCAT16(-(uVar81 <= auVar50._12_2_),
                                          CONCAT15(-(uVar80 <= auVar50._10_2_),
                                                   CONCAT14(-(uVar79 <= auVar50._8_2_),
                                                            CONCAT13(-(uVar61 <= auVar50._6_2_),
                                                                     CONCAT12(-(uVar59 <=
                                                                               auVar50._4_2_),
                                                                              CONCAT11(-(uVar57 <=
                                                                                        auVar50.
                                                  _2_2_),-(uVar54 <= auVar50._0_2_)))))))) &
                        CONCAT17(-((byte)((ulong)uVar70 >> 0x38) <= (byte)((ulong)uVar66 >> 0x38)),
                                 CONCAT16(-((byte)((ulong)uVar70 >> 0x30) <=
                                           (byte)((ulong)uVar66 >> 0x30)),
                                          CONCAT15(-((byte)((ulong)uVar70 >> 0x28) <=
                                                    (byte)((ulong)uVar66 >> 0x28)),
                                                   CONCAT14(-((byte)((ulong)uVar70 >> 0x20) <=
                                                             (byte)((ulong)uVar66 >> 0x20)),
                                                            CONCAT13(-((byte)((ulong)uVar70 >> 0x18)
                                                                      <= (byte)((ulong)uVar66 >>
                                                                               0x18)),
                                                                     CONCAT12(-((byte)((ulong)uVar70
                                                                                      >> 0x10) <=
                                                                               (byte)((ulong)uVar66
                                                                                     >> 0x10)),
                                                                              CONCAT11(-((byte)((
                                                  ulong)uVar70 >> 8) <= (byte)((ulong)uVar66 >> 8)),
                                                  -((byte)uVar70 <= (byte)uVar66))))))));
      uVar55 = auVar45._0_8_;
                    /* try { // try from 010de5d4 to 011de643 has its CatchHandler @ 010de584 */
      uVar71 = NEON_ext(uVar48,uVar55,3,1);
      bVar16 = (char)uVar18 + cVar8;
      bVar19 = (char)(uVar18 >> 8) + cVar9;
      bVar20 = (char)(uVar18 >> 0x10) + cVar10;
      bVar21 = (char)(uVar18 >> 0x18) + cVar11;
      uVar17 = CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar16)));
      bVar22 = (char)(uVar18 >> 0x20) + cVar12;
      bVar23 = (char)(uVar18 >> 0x28) + cVar13;
      bVar24 = (char)(uVar18 >> 0x30) + cVar14;
      bVar25 = (char)(uVar18 >> 0x38) + cVar15;
      uVar18 = CONCAT17(bVar25,CONCAT16(bVar24,CONCAT15(bVar23,CONCAT14(bVar22,uVar17))));
      bVar69 = (byte)uVar71;
      bVar72 = (byte)(uVar71 >> 8);
      bVar73 = (byte)(uVar71 >> 0x10);
      bVar74 = (byte)(uVar71 >> 0x18);
      bVar75 = (byte)(uVar71 >> 0x20);
      bVar76 = (byte)(uVar71 >> 0x28);
      bVar77 = (byte)(uVar71 >> 0x30);
      bVar78 = (byte)(uVar71 >> 0x38);
      auVar28._0_2_ = (ushort)bVar16 + (ushort)bVar69;
      auVar28._2_2_ = (ushort)bVar19 + (ushort)bVar72;
      auVar28._4_2_ = (ushort)bVar20 + (ushort)bVar73;
      auVar28._6_2_ = (ushort)bVar21 + (ushort)bVar74;
      auVar28._8_2_ = (ushort)bVar22 + (ushort)bVar75;
      auVar28._10_2_ = (ushort)bVar23 + (ushort)bVar76;
      auVar28._12_2_ = (ushort)bVar24 + (ushort)bVar77;
      auVar28._14_2_ = (ushort)bVar25 + (ushort)bVar78;
      uVar70 = NEON_uabd(uVar71,uVar48,1);
      uVar54 = MP_INT_ABS((ushort)bVar69 - (ushort)bVar30);
      uVar57 = MP_INT_ABS((ushort)bVar72 - (ushort)bVar31);
      uVar59 = MP_INT_ABS((ushort)bVar73 - (ushort)bVar32);
      uVar61 = MP_INT_ABS((ushort)bVar74 - (ushort)bVar33);
      uVar79 = MP_INT_ABS((ushort)bVar75 - (ushort)bVar34);
      uVar80 = MP_INT_ABS((ushort)bVar76 - (ushort)bVar35);
      uVar81 = MP_INT_ABS((ushort)bVar77 - (ushort)bVar36);
      uVar82 = MP_INT_ABS((ushort)bVar78 - (ushort)bVar43);
      uVar66 = NEON_uabd(uVar18,uVar48,1);
      uVar53 = MP_INT_ABS((ushort)bVar16 - (ushort)bVar30);
      uVar56 = MP_INT_ABS((ushort)bVar19 - (ushort)bVar31);
      uVar58 = MP_INT_ABS((ushort)bVar20 - (ushort)bVar32);
      uVar60 = MP_INT_ABS((ushort)bVar21 - (ushort)bVar33);
      uVar62 = MP_INT_ABS((ushort)bVar22 - (ushort)bVar34);
      uVar63 = MP_INT_ABS((ushort)bVar23 - (ushort)bVar35);
      uVar64 = MP_INT_ABS((ushort)bVar24 - (ushort)bVar36);
      uVar65 = MP_INT_ABS((ushort)bVar25 - (ushort)bVar43);
      auVar1[2] = (char)((ushort)bVar31 << 1);
      auVar1._0_2_ = (ushort)bVar30 << 1;
      auVar1[3] = (char)((ushort)((ushort)bVar31 << 1) >> 8);
      auVar1[4] = (char)((ushort)bVar32 << 1);
      auVar1[5] = (char)((ushort)((ushort)bVar32 << 1) >> 8);
      auVar1[6] = (char)((ushort)bVar33 << 1);
      auVar1[7] = (char)((ushort)((ushort)bVar33 << 1) >> 8);
      auVar1._8_2_ = (ushort)bVar34 << 1;
      auVar1._10_2_ = (ushort)bVar35 << 1;
      auVar1._12_2_ = (ushort)bVar36 << 1;
      auVar1._14_2_ = (ushort)bVar43 << 1;
      auVar29 = NEON_uabd(auVar28,auVar1,2);
      uVar27 = uVar48 ^ (uVar48 ^ uVar71) &
                        CONCAT17(-(uVar65 <= auVar29._14_2_),
                                 CONCAT16(-(uVar64 <= auVar29._12_2_),
                                          CONCAT15(-(uVar63 <= auVar29._10_2_),
                                                   CONCAT14(-(uVar62 <= auVar29._8_2_),
                                                            CONCAT13(-(uVar60 <= auVar29._6_2_),
                                                                     CONCAT12(-(uVar58 <=
                                                                               auVar29._4_2_),
                                                                              CONCAT11(-(uVar56 <=
                                                                                        auVar29.
                                                  _2_2_),-(uVar53 <= auVar29._0_2_))))))));
      uVar27 = uVar27 ^ (uVar27 ^ uVar18) &
                        CONCAT17(-(uVar82 <= auVar29._14_2_),
                                 CONCAT16(-(uVar81 <= auVar29._12_2_),
                                          CONCAT15(-(uVar80 <= auVar29._10_2_),
                                                   CONCAT14(-(uVar79 <= auVar29._8_2_),
                                                            CONCAT13(-(uVar61 <= auVar29._6_2_),
                                                                     CONCAT12(-(uVar59 <=
                                                                               auVar29._4_2_),
                                                                              CONCAT11(-(uVar57 <=
                                                                                        auVar29.
                                                  _2_2_),-(uVar54 <= auVar29._0_2_)))))))) &
                        CONCAT17(-((byte)((ulong)uVar70 >> 0x38) <= (byte)((ulong)uVar66 >> 0x38)),
                                 CONCAT16(-((byte)((ulong)uVar70 >> 0x30) <=
                                           (byte)((ulong)uVar66 >> 0x30)),
                                          CONCAT15(-((byte)((ulong)uVar70 >> 0x28) <=
                                                    (byte)((ulong)uVar66 >> 0x28)),
                                                   CONCAT14(-((byte)((ulong)uVar70 >> 0x20) <=
                                                             (byte)((ulong)uVar66 >> 0x20)),
                                                            CONCAT13(-((byte)((ulong)uVar70 >> 0x18)
                                                                      <= (byte)((ulong)uVar66 >>
                                                                               0x18)),
                                                                     CONCAT12(-((byte)((ulong)uVar70
                                                                                      >> 0x10) <=
                                                                               (byte)((ulong)uVar66
                                                                                     >> 0x10)),
                                                                              CONCAT11(-((byte)((
                                                  ulong)uVar70 >> 8) <= (byte)((ulong)uVar66 >> 8)),
                                                  -((byte)uVar70 <= (byte)uVar66))))))));
                    /* catch() { ... } // from try @ 010de5c8 with catch @ 010de618 */
      bVar16 = (char)uVar27 + (char)uVar47;
      bVar19 = (char)(uVar27 >> 8) + (char)((ulong)uVar47 >> 8);
      bVar20 = (char)(uVar27 >> 0x10) + (char)((ulong)uVar47 >> 0x10);
      bVar21 = (char)(uVar27 >> 0x18) + (char)((ulong)uVar47 >> 0x18);
      uVar26 = CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar16)));
      bVar22 = (char)(uVar27 >> 0x20) + (char)((ulong)uVar47 >> 0x20);
      bVar23 = (char)(uVar27 >> 0x28) + (char)((ulong)uVar47 >> 0x28);
      bVar24 = (char)(uVar27 >> 0x30) + (char)((ulong)uVar47 >> 0x30);
      bVar25 = (char)(uVar27 >> 0x38) + (char)((ulong)uVar47 >> 0x38);
      uVar27 = CONCAT17(bVar25,CONCAT16(bVar24,CONCAT15(bVar23,CONCAT14(bVar22,uVar26))));
      uVar48 = NEON_ext(uVar48,uVar55,6,1);
      bVar43 = (byte)uVar48;
      bVar37 = (byte)(uVar48 >> 8);
      bVar38 = (byte)(uVar48 >> 0x10);
      bVar39 = (byte)(uVar48 >> 0x18);
      bVar40 = (byte)(uVar48 >> 0x20);
      bVar41 = (byte)(uVar48 >> 0x28);
      bVar42 = (byte)(uVar48 >> 0x30);
      bVar44 = (byte)(uVar48 >> 0x38);
      pauVar7 = (undefined1 (*) [16])(*pauVar6 + 0xc);
      uVar47 = *(undefined8 *)*pauVar7;
      auVar50 = *pauVar7;
      auVar29 = *pauVar7;
      cVar8 = (char)uVar47;
      cVar9 = (char)((ulong)uVar47 >> 8);
      cVar10 = (char)((ulong)uVar47 >> 0x10);
      cVar11 = (char)((ulong)uVar47 >> 0x18);
      cVar12 = (char)((ulong)uVar47 >> 0x20);
      cVar13 = (char)((ulong)uVar47 >> 0x28);
      cVar14 = (char)((ulong)uVar47 >> 0x30);
      cVar15 = (char)((ulong)uVar47 >> 0x38);
      *(undefined4 *)*pauVar6 = uVar17;
                    /* catch() { ... } // from try @ 010de5ac with catch @ 010de628 */
      auVar51._0_2_ = (ushort)bVar69 << 1;
      auVar51._2_2_ = (ushort)bVar72 << 1;
      auVar51._4_2_ = (ushort)bVar73 << 1;
      auVar51._6_2_ = (ushort)bVar74 << 1;
      auVar51._8_2_ = (ushort)bVar75 << 1;
      auVar51._10_2_ = (ushort)bVar76 << 1;
      auVar51._12_2_ = (ushort)bVar77 << 1;
      auVar51._14_2_ = (ushort)bVar78 << 1;
      uVar18 = NEON_ext(uVar55,uVar55,1,1);
      auVar46._0_2_ = (ushort)bVar16 + (ushort)bVar43;
      auVar46._2_2_ = (ushort)bVar19 + (ushort)bVar37;
      auVar46._4_2_ = (ushort)bVar20 + (ushort)bVar38;
      auVar46._6_2_ = (ushort)bVar21 + (ushort)bVar39;
      auVar46._8_2_ = (ushort)bVar22 + (ushort)bVar40;
      auVar46._10_2_ = (ushort)bVar23 + (ushort)bVar41;
      auVar46._12_2_ = (ushort)bVar24 + (ushort)bVar42;
      auVar46._14_2_ = (ushort)bVar25 + (ushort)bVar44;
      uVar55 = NEON_uabd(uVar48,uVar71,1);
      auVar45 = NEON_uabd(auVar46,auVar51,2);
      uVar47 = NEON_uabd(uVar27,uVar71,1);
      uVar62 = MP_INT_ABS((ushort)bVar43 - (ushort)bVar69);
      uVar63 = MP_INT_ABS((ushort)bVar37 - (ushort)bVar72);
      uVar64 = MP_INT_ABS((ushort)bVar38 - (ushort)bVar73);
      uVar65 = MP_INT_ABS((ushort)bVar39 - (ushort)bVar74);
      uVar79 = MP_INT_ABS((ushort)bVar40 - (ushort)bVar75);
      uVar80 = MP_INT_ABS((ushort)bVar41 - (ushort)bVar76);
      uVar81 = MP_INT_ABS((ushort)bVar42 - (ushort)bVar77);
      uVar82 = MP_INT_ABS((ushort)bVar44 - (ushort)bVar78);
      uVar54 = MP_INT_ABS((ushort)bVar16 - (ushort)bVar69);
      uVar57 = MP_INT_ABS((ushort)bVar19 - (ushort)bVar72);
      uVar59 = MP_INT_ABS((ushort)bVar20 - (ushort)bVar73);
      uVar61 = MP_INT_ABS((ushort)bVar21 - (ushort)bVar74);
      uVar53 = MP_INT_ABS((ushort)bVar22 - (ushort)bVar75);
      uVar56 = MP_INT_ABS((ushort)bVar23 - (ushort)bVar76);
      uVar58 = MP_INT_ABS((ushort)bVar24 - (ushort)bVar77);
      uVar60 = MP_INT_ABS((ushort)bVar25 - (ushort)bVar78);
                    /* catch() { ... } // from try @ 010de6c0 with catch @ 010de65c */
      uVar71 = uVar71 ^ (uVar71 ^ uVar48) &
                        CONCAT17(-(uVar60 <= auVar45._14_2_),
                                 CONCAT16(-(uVar58 <= auVar45._12_2_),
                                          CONCAT15(-(uVar56 <= auVar45._10_2_),
                                                   CONCAT14(-(uVar53 <= auVar45._8_2_),
                                                            CONCAT13(-(uVar61 <= auVar45._6_2_),
                                                                     CONCAT12(-(uVar59 <=
                                                                               auVar45._4_2_),
                                                                              CONCAT11(-(uVar57 <=
                                                                                        auVar45.
                                                  _2_2_),-(uVar54 <= auVar45._0_2_))))))));
      uVar71 = uVar71 ^ (uVar71 ^ uVar27) &
                        CONCAT17(-(uVar82 <= auVar45._14_2_),
                                 CONCAT16(-(uVar81 <= auVar45._12_2_),
                                          CONCAT15(-(uVar80 <= auVar45._10_2_),
                                                   CONCAT14(-(uVar79 <= auVar45._8_2_),
                                                            CONCAT13(-(uVar65 <= auVar45._6_2_),
                                                                     CONCAT12(-(uVar64 <=
                                                                               auVar45._4_2_),
                                                                              CONCAT11(-(uVar63 <=
                                                                                        auVar45.
                                                  _2_2_),-(uVar62 <= auVar45._0_2_)))))))) &
                        CONCAT17(-((byte)((ulong)uVar55 >> 0x38) <= (byte)((ulong)uVar47 >> 0x38)),
                                 CONCAT16(-((byte)((ulong)uVar55 >> 0x30) <=
                                           (byte)((ulong)uVar47 >> 0x30)),
                                          CONCAT15(-((byte)((ulong)uVar55 >> 0x28) <=
                                                    (byte)((ulong)uVar47 >> 0x28)),
                                                   CONCAT14(-((byte)((ulong)uVar55 >> 0x20) <=
                                                             (byte)((ulong)uVar47 >> 0x20)),
                                                            CONCAT13(-((byte)((ulong)uVar55 >> 0x18)
                                                                      <= (byte)((ulong)uVar47 >>
                                                                               0x18)),
                                                                     CONCAT12(-((byte)((ulong)uVar55
                                                                                      >> 0x10) <=
                                                                               (byte)((ulong)uVar47
                                                                                     >> 0x10)),
                                                                              CONCAT11(-((byte)((
                                                  ulong)uVar55 >> 8) <= (byte)((ulong)uVar47 >> 8)),
                                                  -((byte)uVar55 <= (byte)uVar47))))))));
      *(undefined4 *)(*pauVar6 + 3) = uVar26;
      bVar25 = (char)uVar71 + (char)uVar67;
      bVar30 = (char)(uVar71 >> 8) + (char)((ulong)uVar67 >> 8);
      bVar31 = (char)(uVar71 >> 0x10) + (char)((ulong)uVar67 >> 0x10);
      bVar32 = (char)(uVar71 >> 0x18) + (char)((ulong)uVar67 >> 0x18);
      uVar17 = CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar25)));
      bVar33 = (char)(uVar71 >> 0x20) + (char)((ulong)uVar67 >> 0x20);
      bVar34 = (char)(uVar71 >> 0x28) + (char)((ulong)uVar67 >> 0x28);
      bVar35 = (char)(uVar71 >> 0x30) + (char)((ulong)uVar67 >> 0x30);
      bVar36 = (char)(uVar71 >> 0x38) + (char)((ulong)uVar67 >> 0x38);
      uVar27 = CONCAT17(bVar36,CONCAT16(bVar35,CONCAT15(bVar34,CONCAT14(bVar33,uVar17))));
      bVar16 = (byte)(uVar18 >> 8);
      bVar19 = (byte)(uVar18 >> 0x10);
      bVar20 = (byte)(uVar18 >> 0x18);
      bVar21 = (byte)(uVar18 >> 0x20);
      bVar22 = (byte)(uVar18 >> 0x28);
      bVar23 = (byte)(uVar18 >> 0x30);
      bVar24 = (byte)(uVar18 >> 0x38);
      auVar52._0_2_ = (ushort)bVar25 + (ushort)(byte)uVar18;
      auVar52._2_2_ = (ushort)bVar30 + (ushort)bVar16;
      auVar52._4_2_ = (ushort)bVar31 + (ushort)bVar19;
      auVar52._6_2_ = (ushort)bVar32 + (ushort)bVar20;
      auVar52._8_2_ = (ushort)bVar33 + (ushort)bVar21;
      auVar52._10_2_ = (ushort)bVar34 + (ushort)bVar22;
      auVar52._12_2_ = (ushort)bVar35 + (ushort)bVar23;
      auVar52._14_2_ = (ushort)bVar36 + (ushort)bVar24;
      uVar54 = MP_INT_ABS((ushort)(byte)uVar18 - (ushort)bVar43);
      uVar57 = MP_INT_ABS((ushort)bVar16 - (ushort)bVar37);
      uVar59 = MP_INT_ABS((ushort)bVar19 - (ushort)bVar38);
      uVar61 = MP_INT_ABS((ushort)bVar20 - (ushort)bVar39);
      uVar79 = MP_INT_ABS((ushort)bVar21 - (ushort)bVar40);
      uVar80 = MP_INT_ABS((ushort)bVar22 - (ushort)bVar41);
      uVar81 = MP_INT_ABS((ushort)bVar23 - (ushort)bVar42);
      uVar82 = MP_INT_ABS((ushort)bVar24 - (ushort)bVar44);
      uVar53 = MP_INT_ABS((ushort)bVar25 - (ushort)bVar43);
      uVar56 = MP_INT_ABS((ushort)bVar30 - (ushort)bVar37);
      uVar58 = MP_INT_ABS((ushort)bVar31 - (ushort)bVar38);
      uVar60 = MP_INT_ABS((ushort)bVar32 - (ushort)bVar39);
      uVar62 = MP_INT_ABS((ushort)bVar33 - (ushort)bVar40);
      uVar63 = MP_INT_ABS((ushort)bVar34 - (ushort)bVar41);
      uVar64 = MP_INT_ABS((ushort)bVar35 - (ushort)bVar42);
      uVar65 = MP_INT_ABS((ushort)bVar36 - (ushort)bVar44);
      auVar45[2] = (char)((ushort)bVar37 << 1);
      auVar45._0_2_ = (ushort)bVar43 << 1;
      auVar45[3] = (char)((ushort)((ushort)bVar37 << 1) >> 8);
      auVar45[4] = (char)((ushort)bVar38 << 1);
      auVar45[5] = (char)((ushort)((ushort)bVar38 << 1) >> 8);
      auVar45[6] = (char)((ushort)bVar39 << 1);
      auVar45[7] = (char)((ushort)((ushort)bVar39 << 1) >> 8);
      auVar45[8] = (char)((ushort)bVar40 << 1);
      auVar45[9] = (char)((ushort)((ushort)bVar40 << 1) >> 8);
      auVar45[10] = (char)((ushort)bVar41 << 1);
      auVar45[0xb] = (char)((ushort)((ushort)bVar41 << 1) >> 8);
      auVar45[0xc] = (char)((ushort)bVar42 << 1);
      auVar45[0xd] = (char)((ushort)((ushort)bVar42 << 1) >> 8);
      auVar45[0xe] = (char)((ushort)bVar44 << 1);
      auVar45[0xf] = (char)((ushort)((ushort)bVar44 << 1) >> 8);
      auVar45 = NEON_uabd(auVar52,auVar45,2);
      uVar47 = NEON_uabd(uVar18,uVar48,1);
      uVar55 = NEON_uabd(uVar27,uVar48,1);
                    /* try { // try from 010de698 to 011de69f has its CatchHandler @ 010de778 */
      uVar48 = uVar48 ^ (uVar48 ^ uVar18) &
                        CONCAT17(-(uVar65 <= auVar45._14_2_),
                                 CONCAT16(-(uVar64 <= auVar45._12_2_),
                                          CONCAT15(-(uVar63 <= auVar45._10_2_),
                                                   CONCAT14(-(uVar62 <= auVar45._8_2_),
                                                            CONCAT13(-(uVar60 <= auVar45._6_2_),
                                                                     CONCAT12(-(uVar58 <=
                                                                               auVar45._4_2_),
                                                                              CONCAT11(-(uVar56 <=
                                                                                        auVar45.
                                                  _2_2_),-(uVar53 <= auVar45._0_2_))))))));
      uVar48 = uVar48 ^ (uVar48 ^ uVar27) &
                        CONCAT17(-(uVar82 <= auVar45._14_2_),
                                 CONCAT16(-(uVar81 <= auVar45._12_2_),
                                          CONCAT15(-(uVar80 <= auVar45._10_2_),
                                                   CONCAT14(-(uVar79 <= auVar45._8_2_),
                                                            CONCAT13(-(uVar61 <= auVar45._6_2_),
                                                                     CONCAT12(-(uVar59 <=
                                                                               auVar45._4_2_),
                                                                              CONCAT11(-(uVar57 <=
                                                                                        auVar45.
                                                  _2_2_),-(uVar54 <= auVar45._0_2_)))))))) &
                        CONCAT17(-((byte)((ulong)uVar47 >> 0x38) <= (byte)((ulong)uVar55 >> 0x38)),
                                 CONCAT16(-((byte)((ulong)uVar47 >> 0x30) <=
                                           (byte)((ulong)uVar55 >> 0x30)),
                                          CONCAT15(-((byte)((ulong)uVar47 >> 0x28) <=
                                                    (byte)((ulong)uVar55 >> 0x28)),
                                                   CONCAT14(-((byte)((ulong)uVar47 >> 0x20) <=
                                                             (byte)((ulong)uVar55 >> 0x20)),
                                                            CONCAT13(-((byte)((ulong)uVar47 >> 0x18)
                                                                      <= (byte)((ulong)uVar55 >>
                                                                               0x18)),
                                                                     CONCAT12(-((byte)((ulong)uVar47
                                                                                      >> 0x10) <=
                                                                               (byte)((ulong)uVar55
                                                                                     >> 0x10)),
                                                                              CONCAT11(-((byte)((
                                                  ulong)uVar47 >> 8) <= (byte)((ulong)uVar55 >> 8)),
                                                  -((byte)uVar47 <= (byte)uVar55))))))));
                    /* try { // try from 010de6b4 to 011de6bf has its CatchHandler @ 010de768 */
      auVar45 = NEON_ext(auVar29,auVar50,8,1);
      *(undefined4 *)(*pauVar6 + 6) = uVar17;
                    /* try { // try from 010de6c0 to 011de793 has its CatchHandler @ 010de65c */
      auVar29._0_4_ =
           CONCAT13((char)(uVar48 >> 0x18) + (char)((ulong)uVar68 >> 0x18),
                    CONCAT12((char)(uVar48 >> 0x10) + (char)((ulong)uVar68 >> 0x10),
                             CONCAT11((char)(uVar48 >> 8) + (char)((ulong)uVar68 >> 8),
                                      (char)uVar48 + (char)uVar68)));
      auVar29[4] = (char)(uVar48 >> 0x20) + (char)((ulong)uVar68 >> 0x20);
      auVar29[5] = (char)(uVar48 >> 0x28) + (char)((ulong)uVar68 >> 0x28);
      auVar29[6] = (char)(uVar48 >> 0x30) + (char)((ulong)uVar68 >> 0x30);
      auVar29[7] = (char)(uVar48 >> 0x38) + (char)((ulong)uVar68 >> 0x38);
      auVar29._8_8_ = 0;
      *(undefined4 *)(*pauVar6 + 9) = auVar29._0_4_;
      param_3 = (undefined1 (*) [16])(*param_3 + 0xc);
      pauVar6 = pauVar7;
    } while (pauVar7 < (undefined1 (*) [16])(*param_2 + lVar5));
  }
  return;
}


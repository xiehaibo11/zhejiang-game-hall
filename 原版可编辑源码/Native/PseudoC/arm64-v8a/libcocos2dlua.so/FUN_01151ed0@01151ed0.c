
void FUN_01151ed0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  uint uVar34;
  uint uVar35;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar36 [16];
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  byte bVar46;
  uint uVar47;
  uint uVar48;
  byte bVar49;
  uint uVar50;
  uint uVar51;
  byte bVar52;
  undefined1 auVar45 [16];
  uint uVar53;
  uint uVar54;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined1 auVar62 [16];
  uint uVar69;
  uint uVar70;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  byte bVar83;
  byte bVar84;
  uint uVar85;
  uint uVar86;
  byte bVar87;
  byte bVar88;
  uint uVar89;
  uint uVar90;
  byte bVar91;
  byte bVar92;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  uint uVar93;
  uint uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar103;
  uint uVar104;
  undefined1 auVar102 [16];
  uint uVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  undefined1 auVar112 [16];
  byte bVar113;
  byte bVar114;
  byte bVar115;
  uint uVar116;
  byte bVar117;
  uint uVar118;
  byte bVar119;
  uint uVar120;
  byte bVar121;
  uint uVar122;
  
  if (0 < (int)param_5) {
    uVar26 = (ulong)param_5;
    if (param_5 < 0x10) {
      lVar28 = 0;
    }
    else {
      lVar28 = 0;
      lVar27 = uVar26 - (param_5 & 0xf);
      if (lVar27 != 0) {
        pbVar1 = param_4 + uVar26 * 4;
        if (((param_1 + uVar26 <= param_4 || pbVar1 <= param_1) &&
            (param_2 + uVar26 <= param_4 || pbVar1 <= param_2)) &&
           (lVar29 = lVar27, pbVar30 = param_4, pbVar31 = param_3, pbVar32 = param_2,
           pbVar33 = param_1, param_3 + uVar26 <= param_4 || pbVar1 <= param_3)) {
          do {
            auVar45._0_8_ =
                 CONCAT17(0,CONCAT16(pbVar33[0xb],
                                     (uint6)CONCAT14(pbVar33[10],
                                                     (uint)CONCAT12(pbVar33[9],(ushort)pbVar33[8])))
                         );
            auVar45[8] = pbVar33[0xc];
            auVar45[9] = 0;
            auVar45[10] = pbVar33[0xd];
            auVar45[0xb] = 0;
            auVar45[0xc] = pbVar33[0xe];
            auVar45[0xd] = 0;
            auVar45[0xe] = pbVar33[0xf];
            auVar45[0xf] = 0;
            auVar56._0_8_ =
                 CONCAT17(0,CONCAT16(pbVar32[0xb],
                                     (uint6)CONCAT14(pbVar32[10],
                                                     (uint)CONCAT12(pbVar32[9],(ushort)pbVar32[8])))
                         );
            auVar56[8] = pbVar32[0xc];
            auVar56[9] = 0;
            auVar56[10] = pbVar32[0xd];
            auVar56[0xb] = 0;
            auVar56[0xc] = pbVar32[0xe];
            auVar56[0xd] = 0;
            auVar56[0xe] = pbVar32[0xf];
            auVar56[0xf] = 0;
            auVar81 = NEON_ext(auVar45,auVar45,8,1);
            auVar45 = NEON_umull(auVar45._0_8_,0x4a854a854a854a85,2);
            auVar95 = NEON_umull(auVar56._0_8_,0x1913191319131913,2);
            auVar36._0_8_ =
                 CONCAT17(0,CONCAT16(pbVar33[3],
                                     (uint6)CONCAT14(pbVar33[2],
                                                     (uint)CONCAT12(pbVar33[1],(ushort)*pbVar33))));
            auVar36[8] = pbVar33[4];
            auVar36[9] = 0;
            auVar36[10] = pbVar33[5];
            auVar36[0xb] = 0;
            auVar36[0xc] = pbVar33[6];
            auVar36[0xd] = 0;
            auVar36[0xe] = pbVar33[7];
            auVar36[0xf] = 0;
            auVar55._0_8_ =
                 CONCAT17(0,CONCAT16(pbVar32[3],
                                     (uint6)CONCAT14(pbVar32[2],
                                                     (uint)CONCAT12(pbVar32[1],(ushort)*pbVar32))));
            auVar55[8] = pbVar32[4];
            auVar55[9] = 0;
            auVar55[10] = pbVar32[5];
            auVar55[0xb] = 0;
            auVar55[0xc] = pbVar32[6];
            auVar55[0xd] = 0;
            auVar55[0xe] = pbVar32[7];
            auVar55[0xf] = 0;
            auVar71 = NEON_ext(auVar36,auVar36,8,1);
            auVar36 = NEON_umull(auVar36._0_8_,0x4a854a854a854a85,2);
            auVar96 = NEON_umull(auVar55._0_8_,0x1913191319131913,2);
            auVar107._0_8_ =
                 CONCAT17(0,CONCAT16(pbVar31[0xb],
                                     (uint6)CONCAT14(pbVar31[10],
                                                     (uint)CONCAT12(pbVar31[9],(ushort)pbVar31[8])))
                         );
            auVar107[8] = pbVar31[0xc];
            auVar107[9] = 0;
            auVar107[10] = pbVar31[0xd];
            auVar107[0xb] = 0;
            auVar107[0xc] = pbVar31[0xe];
            auVar107[0xd] = 0;
            auVar107[0xe] = pbVar31[0xf];
            auVar107[0xf] = 0;
            auVar112._0_8_ =
                 CONCAT17(0,CONCAT16(pbVar31[3],
                                     (uint6)CONCAT14(pbVar31[2],
                                                     (uint)CONCAT12(pbVar31[1],(ushort)*pbVar31))));
            auVar112[8] = pbVar31[4];
            auVar112[9] = 0;
            auVar112[10] = pbVar31[5];
            auVar112[0xb] = 0;
            auVar112[0xc] = pbVar31[6];
            auVar112[0xd] = 0;
            auVar112[0xe] = pbVar31[7];
            auVar112[0xf] = 0;
            auVar102 = NEON_ext(auVar55,auVar55,8,1);
            auVar106 = NEON_ext(auVar56,auVar56,8,1);
            auVar55 = NEON_umull(auVar55._0_8_,0x811a811a811a811a,2);
            auVar62 = NEON_umull(auVar56._0_8_,0x811a811a811a811a,2);
            uVar34 = auVar36._0_4_ >> 8;
            uVar37 = auVar36._4_4_ >> 8;
            uVar39 = auVar36._8_4_ >> 8;
            uVar41 = auVar36._12_4_ >> 8;
            uVar43 = auVar45._0_4_ >> 8;
            uVar47 = auVar45._4_4_ >> 8;
            uVar50 = auVar45._8_4_ >> 8;
            uVar53 = auVar45._12_4_ >> 8;
            auVar56 = NEON_umull(auVar107._0_8_,0x6625662566256625,2);
            auVar57 = NEON_umull(auVar112._0_8_,0x6625662566256625,2);
            auVar82 = NEON_umull(auVar81._0_8_,0x4a854a854a854a85,2);
            auVar81 = NEON_umull(auVar106._0_8_,0x1913191319131913,2);
            auVar72 = NEON_umull(auVar71._0_8_,0x4a854a854a854a85,2);
            auVar71 = NEON_umull(auVar102._0_8_,0x1913191319131913,2);
            auVar58 = NEON_umull(auVar112._0_8_,0x3408340834083408,2);
            uVar116 = (((auVar36._0_4_ >> 8) + 0x2204) - (auVar96._0_4_ >> 8)) -
                      (auVar58._0_4_ >> 8);
            uVar118 = (((auVar36._4_4_ >> 8) + 0x2204) - (auVar96._4_4_ >> 8)) -
                      (auVar58._4_4_ >> 8);
            uVar120 = (((auVar36._8_4_ >> 8) + 0x2204) - (auVar96._8_4_ >> 8)) -
                      (auVar58._8_4_ >> 8);
            uVar122 = (((auVar36._12_4_ >> 8) + 0x2204) - (auVar96._12_4_ >> 8)) -
                      (auVar58._12_4_ >> 8);
            auVar36 = NEON_ext(auVar107,auVar107,8,1);
            auVar58 = NEON_umull(auVar107._0_8_,0x3408340834083408,2);
            auVar96 = NEON_umull(auVar102._0_8_,0x811a811a811a811a,2);
            auVar107 = NEON_umull(auVar106._0_8_,0x811a811a811a811a,2);
            uVar69 = auVar72._0_4_ >> 8;
            uVar73 = auVar72._4_4_ >> 8;
            uVar75 = auVar72._8_4_ >> 8;
            uVar77 = auVar72._12_4_ >> 8;
            uVar79 = auVar82._0_4_ >> 8;
            uVar85 = auVar82._4_4_ >> 8;
            uVar89 = auVar82._8_4_ >> 8;
            uVar93 = auVar82._12_4_ >> 8;
            auVar102 = NEON_ext(auVar112,auVar112,8,1);
            uVar97 = (((auVar45._0_4_ >> 8) + 0x2204) - (auVar95._0_4_ >> 8)) - (auVar58._0_4_ >> 8)
            ;
            uVar98 = (((auVar45._4_4_ >> 8) + 0x2204) - (auVar95._4_4_ >> 8)) - (auVar58._4_4_ >> 8)
            ;
            uVar99 = (((auVar45._8_4_ >> 8) + 0x2204) - (auVar95._8_4_ >> 8)) - (auVar58._8_4_ >> 8)
            ;
            uVar100 = (((auVar45._12_4_ >> 8) + 0x2204) - (auVar95._12_4_ >> 8)) -
                      (auVar58._12_4_ >> 8);
            auVar45 = NEON_umull(auVar36._0_8_,0x6625662566256625,2);
            auVar58 = NEON_umull(auVar102._0_8_,0x6625662566256625,2);
            auVar95 = NEON_umull(auVar102._0_8_,0x3408340834083408,2);
            auVar36 = NEON_umull(auVar36._0_8_,0x3408340834083408,2);
            uVar101 = (((auVar72._0_4_ >> 8) + 0x2204) - (auVar71._0_4_ >> 8)) -
                      (auVar95._0_4_ >> 8);
            uVar103 = (((auVar72._4_4_ >> 8) + 0x2204) - (auVar71._4_4_ >> 8)) -
                      (auVar95._4_4_ >> 8);
            uVar104 = (((auVar72._8_4_ >> 8) + 0x2204) - (auVar71._8_4_ >> 8)) -
                      (auVar95._8_4_ >> 8);
            uVar105 = (((auVar72._12_4_ >> 8) + 0x2204) - (auVar71._12_4_ >> 8)) -
                      (auVar95._12_4_ >> 8);
            uVar108 = (((auVar82._0_4_ >> 8) + 0x2204) - (auVar81._0_4_ >> 8)) -
                      (auVar36._0_4_ >> 8);
            uVar109 = (((auVar82._4_4_ >> 8) + 0x2204) - (auVar81._4_4_ >> 8)) -
                      (auVar36._4_4_ >> 8);
            uVar110 = (((auVar82._8_4_ >> 8) + 0x2204) - (auVar81._8_4_ >> 8)) -
                      (auVar36._8_4_ >> 8);
            uVar111 = (((auVar82._12_4_ >> 8) + 0x2204) - (auVar81._12_4_ >> 8)) -
                      (auVar36._12_4_ >> 8);
            bVar5 = 0xff - (char)((int)uVar116 >> 0x1f);
            bVar113 = 0xff - (char)((int)uVar118 >> 0x1f);
            bVar114 = 0xff - (char)((int)uVar120 >> 0x1f);
            bVar115 = 0xff - (char)((int)uVar122 >> 0x1f);
            uVar35 = (uVar34 + (auVar55._0_4_ >> 8)) - 0x4515;
            uVar38 = (uVar37 + (auVar55._4_4_ >> 8)) - 0x4515;
            uVar40 = (uVar39 + (auVar55._8_4_ >> 8)) - 0x4515;
            uVar42 = (uVar41 + (auVar55._12_4_ >> 8)) - 0x4515;
            bVar7 = 0xff - (char)((int)uVar97 >> 0x1f);
            bVar117 = 0xff - (char)((int)uVar98 >> 0x1f);
            bVar119 = 0xff - (char)((int)uVar99 >> 0x1f);
            bVar121 = 0xff - (char)((int)uVar100 >> 0x1f);
            uVar44 = (uVar43 + (auVar62._0_4_ >> 8)) - 0x4515;
            uVar48 = (uVar47 + (auVar62._4_4_ >> 8)) - 0x4515;
            uVar51 = (uVar50 + (auVar62._8_4_ >> 8)) - 0x4515;
            uVar54 = (uVar53 + (auVar62._12_4_ >> 8)) - 0x4515;
            bVar9 = (byte)(uVar35 >> 6);
            bVar10 = (byte)(uVar38 >> 6);
            bVar11 = (byte)(uVar40 >> 6);
            bVar12 = (byte)(uVar42 >> 6);
            uVar34 = (uVar34 + (auVar57._0_4_ >> 8)) - 0x379a;
            uVar37 = (uVar37 + (auVar57._4_4_ >> 8)) - 0x379a;
            uVar39 = (uVar39 + (auVar57._8_4_ >> 8)) - 0x379a;
            uVar41 = (uVar41 + (auVar57._12_4_ >> 8)) - 0x379a;
            bVar17 = (byte)(uVar44 >> 6);
            bVar18 = (byte)(uVar48 >> 6);
            bVar19 = (byte)(uVar51 >> 6);
            bVar20 = (byte)(uVar54 >> 6);
            uVar43 = (uVar43 + (auVar56._0_4_ >> 8)) - 0x379a;
            uVar47 = (uVar47 + (auVar56._4_4_ >> 8)) - 0x379a;
            uVar50 = (uVar50 + (auVar56._8_4_ >> 8)) - 0x379a;
            uVar53 = (uVar53 + (auVar56._12_4_ >> 8)) - 0x379a;
            bVar25 = 0xff - (char)((int)uVar34 >> 0x1f);
            bVar46 = 0xff - (char)((int)uVar37 >> 0x1f);
            bVar49 = 0xff - (char)((int)uVar39 >> 0x1f);
            bVar52 = 0xff - (char)((int)uVar41 >> 0x1f);
            bVar3 = 0xff - (char)((int)uVar43 >> 0x1f);
            bVar59 = 0xff - (char)((int)uVar47 >> 0x1f);
            bVar60 = 0xff - (char)((int)uVar50 >> 0x1f);
            bVar61 = 0xff - (char)((int)uVar53 >> 0x1f);
            bVar6 = 0xff - (char)((int)uVar101 >> 0x1f);
            bVar63 = 0xff - (char)((int)uVar103 >> 0x1f);
            bVar65 = 0xff - (char)((int)uVar104 >> 0x1f);
            bVar67 = 0xff - (char)((int)uVar105 >> 0x1f);
            uVar70 = (uVar69 + (auVar96._0_4_ >> 8)) - 0x4515;
            uVar74 = (uVar73 + (auVar96._4_4_ >> 8)) - 0x4515;
            uVar76 = (uVar75 + (auVar96._8_4_ >> 8)) - 0x4515;
            uVar78 = (uVar77 + (auVar96._12_4_ >> 8)) - 0x4515;
            bVar8 = 0xff - (char)((int)uVar108 >> 0x1f);
            bVar64 = 0xff - (char)((int)uVar109 >> 0x1f);
            bVar66 = 0xff - (char)((int)uVar110 >> 0x1f);
            bVar68 = 0xff - (char)((int)uVar111 >> 0x1f);
            uVar80 = (uVar79 + (auVar107._0_4_ >> 8)) - 0x4515;
            uVar86 = (uVar85 + (auVar107._4_4_ >> 8)) - 0x4515;
            uVar90 = (uVar89 + (auVar107._8_4_ >> 8)) - 0x4515;
            uVar94 = (uVar93 + (auVar107._12_4_ >> 8)) - 0x4515;
            bVar13 = (byte)(uVar70 >> 6);
            bVar14 = (byte)(uVar74 >> 6);
            bVar15 = (byte)(uVar76 >> 6);
            bVar16 = (byte)(uVar78 >> 6);
            uVar69 = (uVar69 + (auVar58._0_4_ >> 8)) - 0x379a;
            uVar73 = (uVar73 + (auVar58._4_4_ >> 8)) - 0x379a;
            uVar75 = (uVar75 + (auVar58._8_4_ >> 8)) - 0x379a;
            uVar77 = (uVar77 + (auVar58._12_4_ >> 8)) - 0x379a;
            bVar21 = (byte)(uVar80 >> 6);
            bVar22 = (byte)(uVar86 >> 6);
            bVar23 = (byte)(uVar90 >> 6);
            bVar24 = (byte)(uVar94 >> 6);
            uVar79 = (uVar79 + (auVar45._0_4_ >> 8)) - 0x379a;
            uVar85 = (uVar85 + (auVar45._4_4_ >> 8)) - 0x379a;
            uVar89 = (uVar89 + (auVar45._8_4_ >> 8)) - 0x379a;
            uVar93 = (uVar93 + (auVar45._12_4_ >> 8)) - 0x379a;
            bVar2 = 0xff - (char)((int)uVar69 >> 0x1f);
            bVar83 = 0xff - (char)((int)uVar73 >> 0x1f);
            bVar87 = 0xff - (char)((int)uVar75 >> 0x1f);
            bVar91 = 0xff - (char)((int)uVar77 >> 0x1f);
            bVar4 = 0xff - (char)((int)uVar79 >> 0x1f);
            bVar84 = 0xff - (char)((int)uVar85 >> 0x1f);
            bVar88 = 0xff - (char)((int)uVar89 >> 0x1f);
            bVar92 = 0xff - (char)((int)uVar93 >> 0x1f);
            lVar29 = lVar29 + -0x10;
            *pbVar30 = 0xff;
            pbVar30[1] = bVar25 ^ (bVar25 ^ (byte)(uVar34 >> 6)) & -(uVar34 < 0x4000);
            pbVar30[2] = bVar5 ^ (bVar5 ^ (byte)(uVar116 >> 6)) & -(uVar116 < 0x4000);
            pbVar30[3] = bVar9 ^ (bVar9 ^ -(char)((int)uVar35 >> 0x1f) - 1U) & -(0x3fff < uVar35);
            pbVar30[4] = 0xff;
            pbVar30[5] = bVar46 ^ (bVar46 ^ (byte)(uVar37 >> 6)) & -(uVar37 < 0x4000);
            pbVar30[6] = bVar113 ^ (bVar113 ^ (byte)(uVar118 >> 6)) & -(uVar118 < 0x4000);
            pbVar30[7] = bVar10 ^ (bVar10 ^ 0xffU - (char)((int)uVar38 >> 0x1f)) &
                                  -(0x3fff < uVar38);
            pbVar30[8] = 0xff;
            pbVar30[9] = bVar49 ^ (bVar49 ^ (byte)(uVar39 >> 6)) & -(uVar39 < 0x4000);
            pbVar30[10] = bVar114 ^ (bVar114 ^ (byte)(uVar120 >> 6)) & -(uVar120 < 0x4000);
            pbVar30[0xb] = bVar11 ^ (bVar11 ^ 0xffU - (char)((int)uVar40 >> 0x1f)) &
                                    -(0x3fff < uVar40);
            pbVar30[0xc] = 0xff;
            pbVar30[0xd] = bVar52 ^ (bVar52 ^ (byte)(uVar41 >> 6)) & -(uVar41 < 0x4000);
            pbVar30[0xe] = bVar115 ^ (bVar115 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000);
            pbVar30[0xf] = bVar12 ^ (bVar12 ^ 0xffU - (char)((int)uVar42 >> 0x1f)) &
                                    -(0x3fff < uVar42);
            pbVar30[0x10] = 0xff;
            pbVar30[0x11] = bVar2 ^ (bVar2 ^ (byte)(uVar69 >> 6)) & -(uVar69 < 0x4000);
            pbVar30[0x12] = bVar6 ^ (bVar6 ^ (byte)(uVar101 >> 6)) & -(uVar101 < 0x4000);
            pbVar30[0x13] =
                 bVar13 ^ (bVar13 ^ -(char)((int)uVar70 >> 0x1f) - 1U) & -(0x3fff < uVar70);
            pbVar30[0x14] = 0xff;
            pbVar30[0x15] = bVar83 ^ (bVar83 ^ (byte)(uVar73 >> 6)) & -(uVar73 < 0x4000);
            pbVar30[0x16] = bVar63 ^ (bVar63 ^ (byte)(uVar103 >> 6)) & -(uVar103 < 0x4000);
            pbVar30[0x17] =
                 bVar14 ^ (bVar14 ^ 0xffU - (char)((int)uVar74 >> 0x1f)) & -(0x3fff < uVar74);
            pbVar30[0x18] = 0xff;
            pbVar30[0x19] = bVar87 ^ (bVar87 ^ (byte)(uVar75 >> 6)) & -(uVar75 < 0x4000);
            pbVar30[0x1a] = bVar65 ^ (bVar65 ^ (byte)(uVar104 >> 6)) & -(uVar104 < 0x4000);
            pbVar30[0x1b] =
                 bVar15 ^ (bVar15 ^ 0xffU - (char)((int)uVar76 >> 0x1f)) & -(0x3fff < uVar76);
            pbVar30[0x1c] = 0xff;
            pbVar30[0x1d] = bVar91 ^ (bVar91 ^ (byte)(uVar77 >> 6)) & -(uVar77 < 0x4000);
            pbVar30[0x1e] = bVar67 ^ (bVar67 ^ (byte)(uVar105 >> 6)) & -(uVar105 < 0x4000);
            pbVar30[0x1f] =
                 bVar16 ^ (bVar16 ^ 0xffU - (char)((int)uVar78 >> 0x1f)) & -(0x3fff < uVar78);
            pbVar30[0x20] = 0xff;
            pbVar30[0x21] = bVar3 ^ (bVar3 ^ (byte)(uVar43 >> 6)) & -(uVar43 < 0x4000);
            pbVar30[0x22] = bVar7 ^ (bVar7 ^ (byte)(uVar97 >> 6)) & -(uVar97 < 0x4000);
            pbVar30[0x23] =
                 bVar17 ^ (bVar17 ^ -(char)((int)uVar44 >> 0x1f) - 1U) & -(0x3fff < uVar44);
            pbVar30[0x24] = 0xff;
            pbVar30[0x25] = bVar59 ^ (bVar59 ^ (byte)(uVar47 >> 6)) & -(uVar47 < 0x4000);
            pbVar30[0x26] = bVar117 ^ (bVar117 ^ (byte)(uVar98 >> 6)) & -(uVar98 < 0x4000);
            pbVar30[0x27] =
                 bVar18 ^ (bVar18 ^ 0xffU - (char)((int)uVar48 >> 0x1f)) & -(0x3fff < uVar48);
            pbVar30[0x28] = 0xff;
            pbVar30[0x29] = bVar60 ^ (bVar60 ^ (byte)(uVar50 >> 6)) & -(uVar50 < 0x4000);
            pbVar30[0x2a] = bVar119 ^ (bVar119 ^ (byte)(uVar99 >> 6)) & -(uVar99 < 0x4000);
            pbVar30[0x2b] =
                 bVar19 ^ (bVar19 ^ 0xffU - (char)((int)uVar51 >> 0x1f)) & -(0x3fff < uVar51);
            pbVar30[0x2c] = 0xff;
            pbVar30[0x2d] = bVar61 ^ (bVar61 ^ (byte)(uVar53 >> 6)) & -(uVar53 < 0x4000);
            pbVar30[0x2e] = bVar121 ^ (bVar121 ^ (byte)(uVar100 >> 6)) & -(uVar100 < 0x4000);
            pbVar30[0x2f] =
                 bVar20 ^ (bVar20 ^ 0xffU - (char)((int)uVar54 >> 0x1f)) & -(0x3fff < uVar54);
            pbVar30[0x30] = 0xff;
            pbVar30[0x31] = bVar4 ^ (bVar4 ^ (byte)(uVar79 >> 6)) & -(uVar79 < 0x4000);
            pbVar30[0x32] = bVar8 ^ (bVar8 ^ (byte)(uVar108 >> 6)) & -(uVar108 < 0x4000);
            pbVar30[0x33] =
                 bVar21 ^ (bVar21 ^ -(char)((int)uVar80 >> 0x1f) - 1U) & -(0x3fff < uVar80);
            pbVar30[0x34] = 0xff;
            pbVar30[0x35] = bVar84 ^ (bVar84 ^ (byte)(uVar85 >> 6)) & -(uVar85 < 0x4000);
            pbVar30[0x36] = bVar64 ^ (bVar64 ^ (byte)(uVar109 >> 6)) & -(uVar109 < 0x4000);
            pbVar30[0x37] =
                 bVar22 ^ (bVar22 ^ 0xffU - (char)((int)uVar86 >> 0x1f)) & -(0x3fff < uVar86);
            pbVar30[0x38] = 0xff;
            pbVar30[0x39] = bVar88 ^ (bVar88 ^ (byte)(uVar89 >> 6)) & -(uVar89 < 0x4000);
            pbVar30[0x3a] = bVar66 ^ (bVar66 ^ (byte)(uVar110 >> 6)) & -(uVar110 < 0x4000);
            pbVar30[0x3b] =
                 bVar23 ^ (bVar23 ^ 0xffU - (char)((int)uVar90 >> 0x1f)) & -(0x3fff < uVar90);
            pbVar30[0x3c] = 0xff;
            pbVar30[0x3d] = bVar92 ^ (bVar92 ^ (byte)(uVar93 >> 6)) & -(uVar93 < 0x4000);
            pbVar30[0x3e] = bVar68 ^ (bVar68 ^ (byte)(uVar111 >> 6)) & -(uVar111 < 0x4000);
            pbVar30[0x3f] =
                 bVar24 ^ (bVar24 ^ 0xffU - (char)((int)uVar94 >> 0x1f)) & -(0x3fff < uVar94);
            pbVar30 = pbVar30 + 0x40;
            pbVar31 = pbVar31 + 0x10;
            pbVar32 = pbVar32 + 0x10;
            pbVar33 = pbVar33 + 0x10;
          } while (lVar29 != 0);
          lVar28 = lVar27;
          if ((param_5 & 0xf) == 0) {
            return;
          }
        }
      }
    }
    param_2 = param_2 + lVar28;
    param_1 = param_1 + lVar28;
    param_3 = param_3 + lVar28;
    lVar27 = uVar26 - lVar28;
    param_4 = param_4 + lVar28 * 4 + 1;
    do {
      bVar25 = *param_1;
      bVar2 = *param_3;
      bVar3 = *param_2;
      param_4[-1] = 0xff;
      uVar35 = (uint)bVar25 * 0x4a85 >> 8;
      uVar34 = (uVar35 + ((uint)bVar2 * 0x6625 >> 8)) - 0x379a;
      if (uVar34 >> 0xe == 0) {
        bVar25 = (byte)(uVar34 >> 6);
      }
      else {
        bVar25 = ((byte)((int)uVar34 >> 0x1f) & 1) - 1;
      }
      uVar34 = ((uVar35 + 0x2204) - ((uint)bVar3 * 0x1913 >> 8)) - ((uint)bVar2 * 0x3408 >> 8);
      *param_4 = bVar25;
      if (uVar34 >> 0xe == 0) {
        bVar25 = (byte)(uVar34 >> 6);
      }
      else {
        bVar25 = ((byte)((int)uVar34 >> 0x1f) & 1) - 1;
      }
      uVar34 = (uVar35 + ((uint)bVar3 * 0x811a >> 8)) - 0x4515;
      param_4[1] = bVar25;
      if (uVar34 >> 0xe == 0) {
        bVar25 = (byte)(uVar34 >> 6);
      }
      else {
        bVar25 = ((byte)((int)uVar34 >> 0x1f) & 1) - 1;
      }
      param_4[2] = bVar25;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      lVar27 = lVar27 + -1;
      param_4 = param_4 + 4;
    } while (lVar27 != 0);
  }
  return;
}


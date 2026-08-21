
void FUN_011517bc(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  ulong uVar1;
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
  byte *pbVar24;
  byte bVar25;
  byte bVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  uint uVar35;
  uint uVar37;
  uint uVar38;
  undefined1 auVar36 [16];
  uint uVar39;
  uint uVar40;
  byte bVar42;
  byte bVar43;
  uint uVar44;
  byte bVar45;
  byte bVar46;
  uint uVar47;
  byte bVar48;
  byte bVar49;
  undefined1 auVar41 [16];
  uint uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint uVar56;
  uint uVar58;
  uint uVar59;
  undefined1 auVar57 [16];
  uint uVar60;
  uint uVar61;
  uint uVar63;
  uint uVar64;
  undefined1 auVar62 [16];
  uint uVar65;
  uint uVar66;
  uint uVar68;
  uint uVar69;
  undefined1 auVar67 [16];
  uint uVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  undefined1 auVar83 [16];
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  byte bVar93;
  uint uVar94;
  uint uVar95;
  byte bVar96;
  uint uVar97;
  uint uVar98;
  byte bVar99;
  undefined1 auVar92 [16];
  uint uVar100;
  uint uVar101;
  uint uVar102;
  byte bVar105;
  uint uVar106;
  byte bVar107;
  uint uVar108;
  byte bVar109;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  uint uVar110;
  uint uVar111;
  byte bVar114;
  byte bVar115;
  uint uVar116;
  byte bVar117;
  byte bVar118;
  uint uVar119;
  byte bVar120;
  byte bVar121;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  uint uVar122;
  undefined1 auVar123 [16];
  
  if (0 < (int)param_5) {
    uVar27 = (ulong)param_5;
    if (param_5 < 0x10) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      lVar28 = uVar27 - (param_5 & 0xf);
      if (lVar28 != 0) {
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar27 - 1;
        uVar1 = (uVar27 - 1) * 3;
        if (((!CARRY8(uVar1,(ulong)(param_4 + 1))) && (SUB168(auVar36 * ZEXT816(3),8) == 0)) &&
           (!CARRY8(uVar1,(ulong)(param_4 + 2)))) {
          pbVar24 = param_4 + uVar27 * 3;
          lVar29 = 0;
          if (((param_1 + uVar27 <= param_4 || pbVar24 <= param_1) &&
              (param_2 + uVar27 <= param_4 || pbVar24 <= param_2)) &&
             (lVar30 = lVar28, pbVar31 = param_4, pbVar32 = param_3, pbVar33 = param_2,
             pbVar34 = param_1, param_3 + uVar27 <= param_4 || pbVar24 <= param_3)) {
            do {
              auVar51._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar34[0xb],
                                       (uint6)CONCAT14(pbVar34[10],
                                                       (uint)CONCAT12(pbVar34[9],(ushort)pbVar34[8])
                                                      )));
              auVar51[8] = pbVar34[0xc];
              auVar51[9] = 0;
              auVar51[10] = pbVar34[0xd];
              auVar51[0xb] = 0;
              auVar51[0xc] = pbVar34[0xe];
              auVar51[0xd] = 0;
              auVar51[0xe] = pbVar34[0xf];
              auVar51[0xf] = 0;
              auVar57._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar33[0xb],
                                       (uint6)CONCAT14(pbVar33[10],
                                                       (uint)CONCAT12(pbVar33[9],(ushort)pbVar33[8])
                                                      )));
              auVar57[8] = pbVar33[0xc];
              auVar57[9] = 0;
              auVar57[10] = pbVar33[0xd];
              auVar57[0xb] = 0;
              auVar57[0xc] = pbVar33[0xe];
              auVar57[0xd] = 0;
              auVar57[0xe] = pbVar33[0xf];
              auVar57[0xf] = 0;
              auVar52._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar34[3],
                                       (uint6)CONCAT14(pbVar34[2],
                                                       (uint)CONCAT12(pbVar34[1],(ushort)*pbVar34)))
                           );
              auVar52[8] = pbVar34[4];
              auVar52[9] = 0;
              auVar52[10] = pbVar34[5];
              auVar52[0xb] = 0;
              auVar52[0xc] = pbVar34[6];
              auVar52[0xd] = 0;
              auVar52[0xe] = pbVar34[7];
              auVar52[0xf] = 0;
              auVar112._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar33[3],
                                       (uint6)CONCAT14(pbVar33[2],
                                                       (uint)CONCAT12(pbVar33[1],(ushort)*pbVar33)))
                           );
              auVar112[8] = pbVar33[4];
              auVar112[9] = 0;
              auVar112[10] = pbVar33[5];
              auVar112[0xb] = 0;
              auVar112[0xc] = pbVar33[6];
              auVar112[0xd] = 0;
              auVar112[0xe] = pbVar33[7];
              auVar112[0xf] = 0;
              auVar41 = NEON_ext(auVar51,auVar51,8,1);
              auVar92 = NEON_umull(auVar51._0_8_,0x4a854a854a854a85,2);
              auVar51 = NEON_umull(auVar57._0_8_,0x1913191319131913,2);
              auVar104._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar32[0xb],
                                       (uint6)CONCAT14(pbVar32[10],
                                                       (uint)CONCAT12(pbVar32[9],(ushort)pbVar32[8])
                                                      )));
              auVar104[8] = pbVar32[0xc];
              auVar104[9] = 0;
              auVar104[10] = pbVar32[0xd];
              auVar104[0xb] = 0;
              auVar104[0xc] = pbVar32[0xe];
              auVar104[0xd] = 0;
              auVar104[0xe] = pbVar32[0xf];
              auVar104[0xf] = 0;
              auVar67._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar32[3],
                                       (uint6)CONCAT14(pbVar32[2],
                                                       (uint)CONCAT12(pbVar32[1],(ushort)*pbVar32)))
                           );
              auVar67[8] = pbVar32[4];
              auVar67[9] = 0;
              auVar67[10] = pbVar32[5];
              auVar67[0xb] = 0;
              auVar67[0xc] = pbVar32[6];
              auVar67[0xd] = 0;
              auVar67[0xe] = pbVar32[7];
              auVar67[0xf] = 0;
              auVar36 = NEON_ext(auVar52,auVar52,8,1);
              auVar83 = NEON_umull(auVar52._0_8_,0x4a854a854a854a85,2);
              auVar53 = NEON_umull(auVar112._0_8_,0x1913191319131913,2);
              auVar54 = NEON_umull(auVar67._0_8_,0x6625662566256625,2);
              auVar52 = NEON_umull(auVar104._0_8_,0x6625662566256625,2);
              uVar81 = auVar83._0_4_ >> 8;
              uVar84 = auVar83._4_4_ >> 8;
              uVar86 = auVar83._8_4_ >> 8;
              uVar88 = auVar83._12_4_ >> 8;
              uVar90 = auVar92._0_4_ >> 8;
              uVar94 = auVar92._4_4_ >> 8;
              uVar97 = auVar92._8_4_ >> 8;
              uVar100 = auVar92._12_4_ >> 8;
              auVar62 = NEON_ext(auVar57,auVar57,8,1);
              auVar55 = NEON_ext(auVar104,auVar104,8,1);
              auVar103 = NEON_umull(auVar57._0_8_,0x811a811a811a811a,2);
              auVar123 = NEON_umull(auVar104._0_8_,0x3408340834083408,2);
              auVar41 = NEON_umull(auVar41._0_8_,0x4a854a854a854a85,2);
              auVar57 = NEON_ext(auVar112,auVar112,8,1);
              auVar104 = NEON_ext(auVar67,auVar67,8,1);
              auVar112 = NEON_umull(auVar112._0_8_,0x811a811a811a811a,2);
              auVar67 = NEON_umull(auVar67._0_8_,0x3408340834083408,2);
              uVar40 = auVar41._0_4_ >> 8;
              uVar44 = auVar41._4_4_ >> 8;
              uVar47 = auVar41._8_4_ >> 8;
              uVar50 = auVar41._12_4_ >> 8;
              auVar36 = NEON_umull(auVar36._0_8_,0x4a854a854a854a85,2);
              auVar113 = NEON_umull(auVar62._0_8_,0x1913191319131913,2);
              uVar77 = (((auVar92._0_4_ >> 8) + 0x2204) - (auVar51._0_4_ >> 8)) -
                       (auVar123._0_4_ >> 8);
              uVar78 = (((auVar92._4_4_ >> 8) + 0x2204) - (auVar51._4_4_ >> 8)) -
                       (auVar123._4_4_ >> 8);
              uVar79 = (((auVar92._8_4_ >> 8) + 0x2204) - (auVar51._8_4_ >> 8)) -
                       (auVar123._8_4_ >> 8);
              uVar80 = (((auVar92._12_4_ >> 8) + 0x2204) - (auVar51._12_4_ >> 8)) -
                       (auVar123._12_4_ >> 8);
              auVar62 = NEON_umull(auVar62._0_8_,0x811a811a811a811a,2);
              uVar66 = (((auVar83._0_4_ >> 8) + 0x2204) - (auVar53._0_4_ >> 8)) -
                       (auVar67._0_4_ >> 8);
              uVar68 = (((auVar83._4_4_ >> 8) + 0x2204) - (auVar53._4_4_ >> 8)) -
                       (auVar67._4_4_ >> 8);
              uVar69 = (((auVar83._8_4_ >> 8) + 0x2204) - (auVar53._8_4_ >> 8)) -
                       (auVar67._8_4_ >> 8);
              uVar70 = (((auVar83._12_4_ >> 8) + 0x2204) - (auVar53._12_4_ >> 8)) -
                       (auVar67._12_4_ >> 8);
              auVar67 = NEON_umull(auVar55._0_8_,0x6625662566256625,2);
              uVar35 = auVar36._0_4_ >> 8;
              uVar37 = auVar36._4_4_ >> 8;
              uVar38 = auVar36._8_4_ >> 8;
              uVar39 = auVar36._12_4_ >> 8;
              auVar55 = NEON_umull(auVar55._0_8_,0x3408340834083408,2);
              auVar83 = NEON_umull(auVar57._0_8_,0x1913191319131913,2);
              auVar51 = NEON_umull(auVar57._0_8_,0x811a811a811a811a,2);
              auVar53 = NEON_umull(auVar104._0_8_,0x3408340834083408,2);
              uVar61 = (((auVar41._0_4_ >> 8) + 0x2204) - (auVar113._0_4_ >> 8)) -
                       (auVar55._0_4_ >> 8);
              uVar63 = (((auVar41._4_4_ >> 8) + 0x2204) - (auVar113._4_4_ >> 8)) -
                       (auVar55._4_4_ >> 8);
              uVar64 = (((auVar41._8_4_ >> 8) + 0x2204) - (auVar113._8_4_ >> 8)) -
                       (auVar55._8_4_ >> 8);
              uVar65 = (((auVar41._12_4_ >> 8) + 0x2204) - (auVar113._12_4_ >> 8)) -
                       (auVar55._12_4_ >> 8);
              uVar56 = (((auVar36._0_4_ >> 8) + 0x2204) - (auVar83._0_4_ >> 8)) -
                       (auVar53._0_4_ >> 8);
              uVar58 = (((auVar36._4_4_ >> 8) + 0x2204) - (auVar83._4_4_ >> 8)) -
                       (auVar53._4_4_ >> 8);
              uVar59 = (((auVar36._8_4_ >> 8) + 0x2204) - (auVar83._8_4_ >> 8)) -
                       (auVar53._8_4_ >> 8);
              uVar60 = (((auVar36._12_4_ >> 8) + 0x2204) - (auVar83._12_4_ >> 8)) -
                       (auVar53._12_4_ >> 8);
              bVar4 = 0xff - (char)((int)uVar66 >> 0x1f);
              bVar71 = 0xff - (char)((int)uVar68 >> 0x1f);
              bVar73 = 0xff - (char)((int)uVar69 >> 0x1f);
              bVar75 = 0xff - (char)((int)uVar70 >> 0x1f);
              uVar82 = (uVar81 + (auVar54._0_4_ >> 8)) - 0x379a;
              uVar85 = (uVar84 + (auVar54._4_4_ >> 8)) - 0x379a;
              uVar87 = (uVar86 + (auVar54._8_4_ >> 8)) - 0x379a;
              uVar89 = (uVar88 + (auVar54._12_4_ >> 8)) - 0x379a;
              bVar6 = 0xff - (char)((int)uVar77 >> 0x1f);
              bVar72 = 0xff - (char)((int)uVar78 >> 0x1f);
              bVar74 = 0xff - (char)((int)uVar79 >> 0x1f);
              bVar76 = 0xff - (char)((int)uVar80 >> 0x1f);
              uVar91 = (uVar90 + (auVar52._0_4_ >> 8)) - 0x379a;
              uVar95 = (uVar94 + (auVar52._4_4_ >> 8)) - 0x379a;
              uVar98 = (uVar97 + (auVar52._8_4_ >> 8)) - 0x379a;
              uVar101 = (uVar100 + (auVar52._12_4_ >> 8)) - 0x379a;
              bVar8 = (byte)(uVar82 >> 6);
              bVar9 = (byte)(uVar85 >> 6);
              bVar10 = (byte)(uVar87 >> 6);
              bVar11 = (byte)(uVar89 >> 6);
              auVar36 = NEON_umull(auVar104._0_8_,0x6625662566256625,2);
              uVar102 = (uVar81 + (auVar112._0_4_ >> 8)) - 0x4515;
              uVar106 = (uVar84 + (auVar112._4_4_ >> 8)) - 0x4515;
              uVar108 = (uVar86 + (auVar112._8_4_ >> 8)) - 0x4515;
              uVar110 = (uVar88 + (auVar112._12_4_ >> 8)) - 0x4515;
              bVar16 = (byte)(uVar91 >> 6);
              bVar17 = (byte)(uVar95 >> 6);
              bVar18 = (byte)(uVar98 >> 6);
              bVar19 = (byte)(uVar101 >> 6);
              uVar111 = (uVar90 + (auVar103._0_4_ >> 8)) - 0x4515;
              uVar116 = (uVar94 + (auVar103._4_4_ >> 8)) - 0x4515;
              uVar119 = (uVar97 + (auVar103._8_4_ >> 8)) - 0x4515;
              uVar122 = (uVar100 + (auVar103._12_4_ >> 8)) - 0x4515;
              bVar25 = 0xff - (char)((int)uVar102 >> 0x1f);
              bVar93 = 0xff - (char)((int)uVar106 >> 0x1f);
              bVar96 = 0xff - (char)((int)uVar108 >> 0x1f);
              bVar99 = 0xff - (char)((int)uVar110 >> 0x1f);
              bVar2 = 0xff - (char)((int)uVar111 >> 0x1f);
              bVar105 = 0xff - (char)((int)uVar116 >> 0x1f);
              bVar107 = 0xff - (char)((int)uVar119 >> 0x1f);
              bVar109 = 0xff - (char)((int)uVar122 >> 0x1f);
              bVar5 = 0xff - (char)((int)uVar56 >> 0x1f);
              bVar114 = 0xff - (char)((int)uVar58 >> 0x1f);
              bVar117 = 0xff - (char)((int)uVar59 >> 0x1f);
              bVar120 = 0xff - (char)((int)uVar60 >> 0x1f);
              uVar81 = (uVar35 + (auVar36._0_4_ >> 8)) - 0x379a;
              uVar84 = (uVar37 + (auVar36._4_4_ >> 8)) - 0x379a;
              uVar86 = (uVar38 + (auVar36._8_4_ >> 8)) - 0x379a;
              uVar88 = (uVar39 + (auVar36._12_4_ >> 8)) - 0x379a;
              bVar7 = 0xff - (char)((int)uVar61 >> 0x1f);
              bVar115 = 0xff - (char)((int)uVar63 >> 0x1f);
              bVar118 = 0xff - (char)((int)uVar64 >> 0x1f);
              bVar121 = 0xff - (char)((int)uVar65 >> 0x1f);
              uVar90 = (uVar40 + (auVar67._0_4_ >> 8)) - 0x379a;
              uVar94 = (uVar44 + (auVar67._4_4_ >> 8)) - 0x379a;
              uVar97 = (uVar47 + (auVar67._8_4_ >> 8)) - 0x379a;
              uVar100 = (uVar50 + (auVar67._12_4_ >> 8)) - 0x379a;
              bVar12 = (byte)(uVar81 >> 6);
              bVar13 = (byte)(uVar84 >> 6);
              bVar14 = (byte)(uVar86 >> 6);
              bVar15 = (byte)(uVar88 >> 6);
              uVar35 = (uVar35 + (auVar51._0_4_ >> 8)) - 0x4515;
              uVar37 = (uVar37 + (auVar51._4_4_ >> 8)) - 0x4515;
              uVar38 = (uVar38 + (auVar51._8_4_ >> 8)) - 0x4515;
              uVar39 = (uVar39 + (auVar51._12_4_ >> 8)) - 0x4515;
              bVar20 = (byte)(uVar90 >> 6);
              bVar21 = (byte)(uVar94 >> 6);
              bVar22 = (byte)(uVar97 >> 6);
              bVar23 = (byte)(uVar100 >> 6);
              uVar40 = (uVar40 + (auVar62._0_4_ >> 8)) - 0x4515;
              uVar44 = (uVar44 + (auVar62._4_4_ >> 8)) - 0x4515;
              uVar47 = (uVar47 + (auVar62._8_4_ >> 8)) - 0x4515;
              uVar50 = (uVar50 + (auVar62._12_4_ >> 8)) - 0x4515;
              bVar26 = 0xff - (char)((int)uVar35 >> 0x1f);
              bVar42 = 0xff - (char)((int)uVar37 >> 0x1f);
              bVar45 = 0xff - (char)((int)uVar38 >> 0x1f);
              bVar48 = 0xff - (char)((int)uVar39 >> 0x1f);
              bVar3 = 0xff - (char)((int)uVar40 >> 0x1f);
              bVar43 = 0xff - (char)((int)uVar44 >> 0x1f);
              bVar46 = 0xff - (char)((int)uVar47 >> 0x1f);
              bVar49 = 0xff - (char)((int)uVar50 >> 0x1f);
              lVar30 = lVar30 + -0x10;
              *pbVar31 = bVar25 ^ (bVar25 ^ (byte)(uVar102 >> 6)) & -(uVar102 < 0x4000);
              pbVar31[1] = bVar4 ^ (bVar4 ^ (byte)(uVar66 >> 6)) & -(uVar66 < 0x4000);
              pbVar31[2] = bVar8 ^ (bVar8 ^ -(char)((int)uVar82 >> 0x1f) - 1U) & -(0x3fff < uVar82);
              pbVar31[3] = bVar93 ^ (bVar93 ^ (byte)(uVar106 >> 6)) & -(uVar106 < 0x4000);
              pbVar31[4] = bVar71 ^ (bVar71 ^ (byte)(uVar68 >> 6)) & -(uVar68 < 0x4000);
              pbVar31[5] = bVar9 ^ (bVar9 ^ 0xffU - (char)((int)uVar85 >> 0x1f)) &
                                   -(0x3fff < uVar85);
              pbVar31[6] = bVar96 ^ (bVar96 ^ (byte)(uVar108 >> 6)) & -(uVar108 < 0x4000);
              pbVar31[7] = bVar73 ^ (bVar73 ^ (byte)(uVar69 >> 6)) & -(uVar69 < 0x4000);
              pbVar31[8] = bVar10 ^ (bVar10 ^ 0xffU - (char)((int)uVar87 >> 0x1f)) &
                                    -(0x3fff < uVar87);
              pbVar31[9] = bVar99 ^ (bVar99 ^ (byte)(uVar110 >> 6)) & -(uVar110 < 0x4000);
              pbVar31[10] = bVar75 ^ (bVar75 ^ (byte)(uVar70 >> 6)) & -(uVar70 < 0x4000);
              pbVar31[0xb] = bVar11 ^ (bVar11 ^ 0xffU - (char)((int)uVar89 >> 0x1f)) &
                                      -(0x3fff < uVar89);
              pbVar31[0xc] = bVar26 ^ (bVar26 ^ (byte)(uVar35 >> 6)) & -(uVar35 < 0x4000);
              pbVar31[0xd] = bVar5 ^ (bVar5 ^ (byte)(uVar56 >> 6)) & -(uVar56 < 0x4000);
              pbVar31[0xe] = bVar12 ^ (bVar12 ^ -(char)((int)uVar81 >> 0x1f) - 1U) &
                                      -(0x3fff < uVar81);
              pbVar31[0xf] = bVar42 ^ (bVar42 ^ (byte)(uVar37 >> 6)) & -(uVar37 < 0x4000);
              pbVar31[0x10] = bVar114 ^ (bVar114 ^ (byte)(uVar58 >> 6)) & -(uVar58 < 0x4000);
              pbVar31[0x11] =
                   bVar13 ^ (bVar13 ^ 0xffU - (char)((int)uVar84 >> 0x1f)) & -(0x3fff < uVar84);
              pbVar31[0x12] = bVar45 ^ (bVar45 ^ (byte)(uVar38 >> 6)) & -(uVar38 < 0x4000);
              pbVar31[0x13] = bVar117 ^ (bVar117 ^ (byte)(uVar59 >> 6)) & -(uVar59 < 0x4000);
              pbVar31[0x14] =
                   bVar14 ^ (bVar14 ^ 0xffU - (char)((int)uVar86 >> 0x1f)) & -(0x3fff < uVar86);
              pbVar31[0x15] = bVar48 ^ (bVar48 ^ (byte)(uVar39 >> 6)) & -(uVar39 < 0x4000);
              pbVar31[0x16] = bVar120 ^ (bVar120 ^ (byte)(uVar60 >> 6)) & -(uVar60 < 0x4000);
              pbVar31[0x17] =
                   bVar15 ^ (bVar15 ^ 0xffU - (char)((int)uVar88 >> 0x1f)) & -(0x3fff < uVar88);
              pbVar31[0x18] = bVar2 ^ (bVar2 ^ (byte)(uVar111 >> 6)) & -(uVar111 < 0x4000);
              pbVar31[0x19] = bVar6 ^ (bVar6 ^ (byte)(uVar77 >> 6)) & -(uVar77 < 0x4000);
              pbVar31[0x1a] =
                   bVar16 ^ (bVar16 ^ -(char)((int)uVar91 >> 0x1f) - 1U) & -(0x3fff < uVar91);
              pbVar31[0x1b] = bVar105 ^ (bVar105 ^ (byte)(uVar116 >> 6)) & -(uVar116 < 0x4000);
              pbVar31[0x1c] = bVar72 ^ (bVar72 ^ (byte)(uVar78 >> 6)) & -(uVar78 < 0x4000);
              pbVar31[0x1d] =
                   bVar17 ^ (bVar17 ^ 0xffU - (char)((int)uVar95 >> 0x1f)) & -(0x3fff < uVar95);
              pbVar31[0x1e] = bVar107 ^ (bVar107 ^ (byte)(uVar119 >> 6)) & -(uVar119 < 0x4000);
              pbVar31[0x1f] = bVar74 ^ (bVar74 ^ (byte)(uVar79 >> 6)) & -(uVar79 < 0x4000);
              pbVar31[0x20] =
                   bVar18 ^ (bVar18 ^ 0xffU - (char)((int)uVar98 >> 0x1f)) & -(0x3fff < uVar98);
              pbVar31[0x21] = bVar109 ^ (bVar109 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000);
              pbVar31[0x22] = bVar76 ^ (bVar76 ^ (byte)(uVar80 >> 6)) & -(uVar80 < 0x4000);
              pbVar31[0x23] =
                   bVar19 ^ (bVar19 ^ 0xffU - (char)((int)uVar101 >> 0x1f)) & -(0x3fff < uVar101);
              pbVar31[0x24] = bVar3 ^ (bVar3 ^ (byte)(uVar40 >> 6)) & -(uVar40 < 0x4000);
              pbVar31[0x25] = bVar7 ^ (bVar7 ^ (byte)(uVar61 >> 6)) & -(uVar61 < 0x4000);
              pbVar31[0x26] =
                   bVar20 ^ (bVar20 ^ -(char)((int)uVar90 >> 0x1f) - 1U) & -(0x3fff < uVar90);
              pbVar31[0x27] = bVar43 ^ (bVar43 ^ (byte)(uVar44 >> 6)) & -(uVar44 < 0x4000);
              pbVar31[0x28] = bVar115 ^ (bVar115 ^ (byte)(uVar63 >> 6)) & -(uVar63 < 0x4000);
              pbVar31[0x29] =
                   bVar21 ^ (bVar21 ^ 0xffU - (char)((int)uVar94 >> 0x1f)) & -(0x3fff < uVar94);
              pbVar31[0x2a] = bVar46 ^ (bVar46 ^ (byte)(uVar47 >> 6)) & -(uVar47 < 0x4000);
              pbVar31[0x2b] = bVar118 ^ (bVar118 ^ (byte)(uVar64 >> 6)) & -(uVar64 < 0x4000);
              pbVar31[0x2c] =
                   bVar22 ^ (bVar22 ^ 0xffU - (char)((int)uVar97 >> 0x1f)) & -(0x3fff < uVar97);
              pbVar31[0x2d] = bVar49 ^ (bVar49 ^ (byte)(uVar50 >> 6)) & -(uVar50 < 0x4000);
              pbVar31[0x2e] = bVar121 ^ (bVar121 ^ (byte)(uVar65 >> 6)) & -(uVar65 < 0x4000);
              pbVar31[0x2f] =
                   bVar23 ^ (bVar23 ^ 0xffU - (char)((int)uVar100 >> 0x1f)) & -(0x3fff < uVar100);
              pbVar31 = pbVar31 + 0x30;
              pbVar32 = pbVar32 + 0x10;
              pbVar33 = pbVar33 + 0x10;
              pbVar34 = pbVar34 + 0x10;
            } while (lVar30 != 0);
            lVar29 = lVar28;
            if ((param_5 & 0xf) == 0) {
              return;
            }
          }
        }
      }
    }
    param_1 = param_1 + lVar29;
    param_2 = param_2 + lVar29;
    param_3 = param_3 + lVar29;
    lVar28 = uVar27 - lVar29;
    pbVar24 = param_4 + lVar29 * 3 + 2;
    do {
      bVar25 = *param_3;
      uVar81 = (uint)*param_1 * 0x4a85 >> 8;
      uVar35 = (uVar81 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      if (uVar35 >> 0xe == 0) {
        bVar26 = (byte)(uVar35 >> 6);
      }
      else {
        bVar26 = ((byte)((int)uVar35 >> 0x1f) & 1) - 1;
      }
      uVar35 = ((uVar81 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) - ((uint)bVar25 * 0x3408 >> 8);
      pbVar24[-2] = bVar26;
      if (uVar35 >> 0xe == 0) {
        bVar26 = (byte)(uVar35 >> 6);
      }
      else {
        bVar26 = ((byte)((int)uVar35 >> 0x1f) & 1) - 1;
      }
      uVar35 = (uVar81 + ((uint)bVar25 * 0x6625 >> 8)) - 0x379a;
      pbVar24[-1] = bVar26;
      if (uVar35 >> 0xe == 0) {
        bVar25 = (byte)(uVar35 >> 6);
      }
      else {
        bVar25 = ((byte)((int)uVar35 >> 0x1f) & 1) - 1;
      }
      *pbVar24 = bVar25;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      lVar28 = lVar28 + -1;
      param_3 = param_3 + 1;
      pbVar24 = pbVar24 + 3;
    } while (lVar28 != 0);
  }
  return;
}



void FUN_011512c0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

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
  byte bVar24;
  byte *pbVar25;
  byte bVar26;
  byte bVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint uVar36;
  uint uVar38;
  uint uVar39;
  undefined1 auVar37 [16];
  uint uVar40;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar54;
  uint uVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar56;
  uint uVar57;
  uint uVar59;
  uint uVar60;
  undefined1 auVar58 [16];
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  undefined1 auVar66 [16];
  byte bVar67;
  byte bVar68;
  byte bVar69;
  uint uVar70;
  byte bVar71;
  uint uVar72;
  byte bVar73;
  uint uVar74;
  byte bVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  undefined1 auVar79 [16];
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  byte bVar89;
  uint uVar90;
  uint uVar91;
  byte bVar92;
  uint uVar93;
  uint uVar94;
  byte bVar95;
  undefined1 auVar88 [16];
  uint uVar96;
  uint uVar97;
  uint uVar98;
  byte bVar105;
  uint uVar106;
  byte bVar107;
  uint uVar108;
  byte bVar109;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  uint uVar110;
  uint uVar111;
  byte bVar113;
  byte bVar114;
  uint uVar115;
  byte bVar116;
  byte bVar117;
  uint uVar118;
  byte bVar119;
  byte bVar120;
  undefined1 auVar112 [16];
  uint uVar121;
  
  if (0 < (int)param_5) {
    uVar28 = (ulong)param_5;
    if (param_5 < 0x10) {
      lVar30 = 0;
    }
    else {
      lVar30 = 0;
      lVar29 = uVar28 - (param_5 & 0xf);
      if (lVar29 != 0) {
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar28 - 1;
        uVar1 = (uVar28 - 1) * 3;
        if (((!CARRY8(uVar1,(ulong)(param_4 + 1))) && (SUB168(auVar37 * ZEXT816(3),8) == 0)) &&
           (!CARRY8(uVar1,(ulong)(param_4 + 2)))) {
          pbVar25 = param_4 + uVar28 * 3;
          lVar30 = 0;
          if (((param_1 + uVar28 <= param_4 || pbVar25 <= param_1) &&
              (param_2 + uVar28 <= param_4 || pbVar25 <= param_2)) &&
             (lVar31 = lVar29, pbVar32 = param_4, pbVar33 = param_3, pbVar34 = param_2,
             pbVar35 = param_1, param_3 + uVar28 <= param_4 || pbVar25 <= param_3)) {
            do {
              auVar58._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar35[0xb],
                                       (uint6)CONCAT14(pbVar35[10],
                                                       (uint)CONCAT12(pbVar35[9],(ushort)pbVar35[8])
                                                      )));
              auVar58[8] = pbVar35[0xc];
              auVar58[9] = 0;
              auVar58[10] = pbVar35[0xd];
              auVar58[0xb] = 0;
              auVar58[0xc] = pbVar35[0xe];
              auVar58[0xd] = 0;
              auVar58[0xe] = pbVar35[0xf];
              auVar58[0xf] = 0;
              auVar100._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar34[0xb],
                                       (uint6)CONCAT14(pbVar34[10],
                                                       (uint)CONCAT12(pbVar34[9],(ushort)pbVar34[8])
                                                      )));
              auVar100[8] = pbVar34[0xc];
              auVar100[9] = 0;
              auVar100[10] = pbVar34[0xd];
              auVar100[0xb] = 0;
              auVar100[0xc] = pbVar34[0xe];
              auVar100[0xd] = 0;
              auVar100[0xe] = pbVar34[0xf];
              auVar100[0xf] = 0;
              auVar41 = NEON_ext(auVar58,auVar58,8,1);
              auVar88 = NEON_umull(auVar58._0_8_,0x4a854a854a854a85,2);
              auVar45 = NEON_umull(auVar100._0_8_,0x1913191319131913,2);
              auVar52._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar35[3],
                                       (uint6)CONCAT14(pbVar35[2],
                                                       (uint)CONCAT12(pbVar35[1],(ushort)*pbVar35)))
                           );
              auVar52[8] = pbVar35[4];
              auVar52[9] = 0;
              auVar52[10] = pbVar35[5];
              auVar52[0xb] = 0;
              auVar52[0xc] = pbVar35[6];
              auVar52[0xd] = 0;
              auVar52[0xe] = pbVar35[7];
              auVar52[0xf] = 0;
              auVar99._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar34[3],
                                       (uint6)CONCAT14(pbVar34[2],
                                                       (uint)CONCAT12(pbVar34[1],(ushort)*pbVar34)))
                           );
              auVar99[8] = pbVar34[4];
              auVar99[9] = 0;
              auVar99[10] = pbVar34[5];
              auVar99[0xb] = 0;
              auVar99[0xc] = pbVar34[6];
              auVar99[0xd] = 0;
              auVar99[0xe] = pbVar34[7];
              auVar99[0xf] = 0;
              auVar37 = NEON_ext(auVar52,auVar52,8,1);
              auVar79 = NEON_umull(auVar52._0_8_,0x4a854a854a854a85,2);
              auVar46 = NEON_umull(auVar99._0_8_,0x1913191319131913,2);
              auVar53._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar33[0xb],
                                       (uint6)CONCAT14(pbVar33[10],
                                                       (uint)CONCAT12(pbVar33[9],(ushort)pbVar33[8])
                                                      )));
              auVar53[8] = pbVar33[0xc];
              auVar53[9] = 0;
              auVar53[10] = pbVar33[0xd];
              auVar53[0xb] = 0;
              auVar53[0xc] = pbVar33[0xe];
              auVar53[0xd] = 0;
              auVar53[0xe] = pbVar33[0xf];
              auVar53[0xf] = 0;
              auVar66._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar33[3],
                                       (uint6)CONCAT14(pbVar33[2],
                                                       (uint)CONCAT12(pbVar33[1],(ushort)*pbVar33)))
                           );
              auVar66[8] = pbVar33[4];
              auVar66[9] = 0;
              auVar66[10] = pbVar33[5];
              auVar66[0xb] = 0;
              auVar66[0xc] = pbVar33[6];
              auVar66[0xd] = 0;
              auVar66[0xe] = pbVar33[7];
              auVar66[0xf] = 0;
              auVar52 = NEON_ext(auVar99,auVar99,8,1);
              auVar58 = NEON_ext(auVar100,auVar100,8,1);
              auVar99 = NEON_umull(auVar99._0_8_,0x811a811a811a811a,2);
              auVar112 = NEON_umull(auVar100._0_8_,0x811a811a811a811a,2);
              uVar77 = auVar79._0_4_ >> 8;
              uVar80 = auVar79._4_4_ >> 8;
              uVar82 = auVar79._8_4_ >> 8;
              uVar84 = auVar79._12_4_ >> 8;
              uVar86 = auVar88._0_4_ >> 8;
              uVar90 = auVar88._4_4_ >> 8;
              uVar93 = auVar88._8_4_ >> 8;
              uVar96 = auVar88._12_4_ >> 8;
              auVar100 = NEON_umull(auVar53._0_8_,0x6625662566256625,2);
              auVar101 = NEON_umull(auVar66._0_8_,0x6625662566256625,2);
              auVar41 = NEON_umull(auVar41._0_8_,0x4a854a854a854a85,2);
              auVar102 = NEON_umull(auVar58._0_8_,0x1913191319131913,2);
              auVar37 = NEON_umull(auVar37._0_8_,0x4a854a854a854a85,2);
              auVar103 = NEON_umull(auVar52._0_8_,0x1913191319131913,2);
              auVar104 = NEON_umull(auVar66._0_8_,0x3408340834083408,2);
              uVar70 = (((auVar79._0_4_ >> 8) + 0x2204) - (auVar46._0_4_ >> 8)) -
                       (auVar104._0_4_ >> 8);
              uVar72 = (((auVar79._4_4_ >> 8) + 0x2204) - (auVar46._4_4_ >> 8)) -
                       (auVar104._4_4_ >> 8);
              uVar74 = (((auVar79._8_4_ >> 8) + 0x2204) - (auVar46._8_4_ >> 8)) -
                       (auVar104._8_4_ >> 8);
              uVar76 = (((auVar79._12_4_ >> 8) + 0x2204) - (auVar46._12_4_ >> 8)) -
                       (auVar104._12_4_ >> 8);
              auVar79 = NEON_ext(auVar53,auVar53,8,1);
              auVar46 = NEON_umull(auVar53._0_8_,0x3408340834083408,2);
              auVar53 = NEON_umull(auVar52._0_8_,0x811a811a811a811a,2);
              auVar58 = NEON_umull(auVar58._0_8_,0x811a811a811a811a,2);
              uVar36 = auVar37._0_4_ >> 8;
              uVar38 = auVar37._4_4_ >> 8;
              uVar39 = auVar37._8_4_ >> 8;
              uVar40 = auVar37._12_4_ >> 8;
              auVar52 = NEON_ext(auVar66,auVar66,8,1);
              uVar47 = (((auVar88._0_4_ >> 8) + 0x2204) - (auVar45._0_4_ >> 8)) -
                       (auVar46._0_4_ >> 8);
              uVar48 = (((auVar88._4_4_ >> 8) + 0x2204) - (auVar45._4_4_ >> 8)) -
                       (auVar46._4_4_ >> 8);
              uVar49 = (((auVar88._8_4_ >> 8) + 0x2204) - (auVar45._8_4_ >> 8)) -
                       (auVar46._8_4_ >> 8);
              uVar50 = (((auVar88._12_4_ >> 8) + 0x2204) - (auVar45._12_4_ >> 8)) -
                       (auVar46._12_4_ >> 8);
              auVar45 = NEON_umull(auVar79._0_8_,0x6625662566256625,2);
              auVar46 = NEON_umull(auVar52._0_8_,0x6625662566256625,2);
              auVar52 = NEON_umull(auVar52._0_8_,0x3408340834083408,2);
              auVar66 = NEON_umull(auVar79._0_8_,0x3408340834083408,2);
              uVar51 = (((auVar37._0_4_ >> 8) + 0x2204) - (auVar103._0_4_ >> 8)) -
                       (auVar52._0_4_ >> 8);
              uVar54 = (((auVar37._4_4_ >> 8) + 0x2204) - (auVar103._4_4_ >> 8)) -
                       (auVar52._4_4_ >> 8);
              uVar55 = (((auVar37._8_4_ >> 8) + 0x2204) - (auVar103._8_4_ >> 8)) -
                       (auVar52._8_4_ >> 8);
              uVar56 = (((auVar37._12_4_ >> 8) + 0x2204) - (auVar103._12_4_ >> 8)) -
                       (auVar52._12_4_ >> 8);
              uVar62 = (((auVar41._0_4_ >> 8) + 0x2204) - (auVar102._0_4_ >> 8)) -
                       (auVar66._0_4_ >> 8);
              uVar63 = (((auVar41._4_4_ >> 8) + 0x2204) - (auVar102._4_4_ >> 8)) -
                       (auVar66._4_4_ >> 8);
              uVar64 = (((auVar41._8_4_ >> 8) + 0x2204) - (auVar102._8_4_ >> 8)) -
                       (auVar66._8_4_ >> 8);
              uVar65 = (((auVar41._12_4_ >> 8) + 0x2204) - (auVar102._12_4_ >> 8)) -
                       (auVar66._12_4_ >> 8);
              bVar5 = 0xff - (char)((int)uVar70 >> 0x1f);
              bVar67 = 0xff - (char)((int)uVar72 >> 0x1f);
              bVar68 = 0xff - (char)((int)uVar74 >> 0x1f);
              bVar69 = 0xff - (char)((int)uVar76 >> 0x1f);
              uVar78 = (uVar77 + (auVar99._0_4_ >> 8)) - 0x4515;
              uVar81 = (uVar80 + (auVar99._4_4_ >> 8)) - 0x4515;
              uVar83 = (uVar82 + (auVar99._8_4_ >> 8)) - 0x4515;
              uVar85 = (uVar84 + (auVar99._12_4_ >> 8)) - 0x4515;
              bVar7 = 0xff - (char)((int)uVar47 >> 0x1f);
              bVar71 = 0xff - (char)((int)uVar48 >> 0x1f);
              bVar73 = 0xff - (char)((int)uVar49 >> 0x1f);
              bVar75 = 0xff - (char)((int)uVar50 >> 0x1f);
              uVar87 = (uVar86 + (auVar112._0_4_ >> 8)) - 0x4515;
              uVar91 = (uVar90 + (auVar112._4_4_ >> 8)) - 0x4515;
              uVar94 = (uVar93 + (auVar112._8_4_ >> 8)) - 0x4515;
              uVar97 = (uVar96 + (auVar112._12_4_ >> 8)) - 0x4515;
              bVar9 = (byte)(uVar78 >> 6);
              bVar10 = (byte)(uVar81 >> 6);
              bVar11 = (byte)(uVar83 >> 6);
              bVar12 = (byte)(uVar85 >> 6);
              uVar98 = (uVar77 + (auVar101._0_4_ >> 8)) - 0x379a;
              uVar106 = (uVar80 + (auVar101._4_4_ >> 8)) - 0x379a;
              uVar108 = (uVar82 + (auVar101._8_4_ >> 8)) - 0x379a;
              uVar110 = (uVar84 + (auVar101._12_4_ >> 8)) - 0x379a;
              bVar17 = (byte)(uVar87 >> 6);
              bVar18 = (byte)(uVar91 >> 6);
              bVar19 = (byte)(uVar94 >> 6);
              bVar20 = (byte)(uVar97 >> 6);
              uVar111 = (uVar86 + (auVar100._0_4_ >> 8)) - 0x379a;
              uVar115 = (uVar90 + (auVar100._4_4_ >> 8)) - 0x379a;
              uVar118 = (uVar93 + (auVar100._8_4_ >> 8)) - 0x379a;
              uVar121 = (uVar96 + (auVar100._12_4_ >> 8)) - 0x379a;
              bVar3 = 0xff - (char)((int)uVar98 >> 0x1f);
              bVar89 = 0xff - (char)((int)uVar106 >> 0x1f);
              bVar92 = 0xff - (char)((int)uVar108 >> 0x1f);
              bVar95 = 0xff - (char)((int)uVar110 >> 0x1f);
              bVar2 = 0xff - (char)((int)uVar111 >> 0x1f);
              bVar105 = 0xff - (char)((int)uVar115 >> 0x1f);
              bVar107 = 0xff - (char)((int)uVar118 >> 0x1f);
              bVar109 = 0xff - (char)((int)uVar121 >> 0x1f);
              bVar6 = 0xff - (char)((int)uVar51 >> 0x1f);
              bVar113 = 0xff - (char)((int)uVar54 >> 0x1f);
              bVar116 = 0xff - (char)((int)uVar55 >> 0x1f);
              bVar119 = 0xff - (char)((int)uVar56 >> 0x1f);
              uVar77 = (uVar36 + (auVar53._0_4_ >> 8)) - 0x4515;
              uVar80 = (uVar38 + (auVar53._4_4_ >> 8)) - 0x4515;
              uVar82 = (uVar39 + (auVar53._8_4_ >> 8)) - 0x4515;
              uVar84 = (uVar40 + (auVar53._12_4_ >> 8)) - 0x4515;
              bVar8 = 0xff - (char)((int)uVar62 >> 0x1f);
              bVar114 = 0xff - (char)((int)uVar63 >> 0x1f);
              bVar117 = 0xff - (char)((int)uVar64 >> 0x1f);
              bVar120 = 0xff - (char)((int)uVar65 >> 0x1f);
              uVar86 = ((auVar41._0_4_ >> 8) + (auVar58._0_4_ >> 8)) - 0x4515;
              uVar90 = ((auVar41._4_4_ >> 8) + (auVar58._4_4_ >> 8)) - 0x4515;
              uVar93 = ((auVar41._8_4_ >> 8) + (auVar58._8_4_ >> 8)) - 0x4515;
              uVar96 = ((auVar41._12_4_ >> 8) + (auVar58._12_4_ >> 8)) - 0x4515;
              bVar13 = (byte)(uVar77 >> 6);
              bVar14 = (byte)(uVar80 >> 6);
              bVar15 = (byte)(uVar82 >> 6);
              bVar16 = (byte)(uVar84 >> 6);
              uVar57 = (uVar36 + (auVar46._0_4_ >> 8)) - 0x379a;
              uVar59 = (uVar38 + (auVar46._4_4_ >> 8)) - 0x379a;
              uVar60 = (uVar39 + (auVar46._8_4_ >> 8)) - 0x379a;
              uVar61 = (uVar40 + (auVar46._12_4_ >> 8)) - 0x379a;
              bVar21 = (byte)(uVar86 >> 6);
              bVar22 = (byte)(uVar90 >> 6);
              bVar23 = (byte)(uVar93 >> 6);
              bVar24 = (byte)(uVar96 >> 6);
              uVar36 = ((uint)auVar41._1_3_ + (auVar45._0_4_ >> 8)) - 0x379a;
              uVar38 = ((uint)auVar41._5_3_ + (auVar45._4_4_ >> 8)) - 0x379a;
              uVar39 = ((uint)auVar41._9_3_ + (auVar45._8_4_ >> 8)) - 0x379a;
              uVar40 = ((uint)auVar41._13_3_ + (auVar45._12_4_ >> 8)) - 0x379a;
              bVar4 = 0xff - (char)((int)uVar57 >> 0x1f);
              bVar42 = 0xff - (char)((int)uVar59 >> 0x1f);
              bVar43 = 0xff - (char)((int)uVar60 >> 0x1f);
              bVar44 = 0xff - (char)((int)uVar61 >> 0x1f);
              bVar27 = (byte)(uVar39 >> 0x18);
              bVar26 = (byte)(uVar40 >> 0x18);
              auVar46._0_4_ = -(uint)(uVar36 < 0x4000);
              auVar46._4_4_ = -(uint)(uVar38 < 0x4000);
              auVar46._8_4_ = -(uint)(uVar39 < 0x4000);
              auVar46._12_4_ = -(uint)(uVar40 < 0x4000);
              uVar39 = uVar39 >> 6;
              uVar40 = uVar40 >> 6;
              auVar45._0_4_ = 0xff - ((int)uVar36 >> 0x1f);
              auVar45._4_4_ = 0xff - ((int)uVar38 >> 0x1f);
              auVar45._8_4_ = (bVar27 >> 7) + 0xff;
              auVar45._12_4_ = (bVar26 >> 7) + 0xff;
              auVar41._5_3_ = 0;
              auVar41._0_5_ = CONCAT14((char)(uVar38 >> 6),uVar36 >> 6) & 0xff000000ff;
              auVar41[8] = (char)uVar39;
              auVar41[9] = (char)(uVar39 >> 8);
              auVar41[10] = (char)(uVar39 >> 0x10);
              auVar41[0xb] = bVar27 >> 6;
              auVar41[0xc] = (char)uVar40;
              auVar41[0xd] = (char)(uVar40 >> 8);
              auVar41[0xe] = (char)(uVar40 >> 0x10);
              auVar41[0xf] = bVar26 >> 6;
              auVar45 = auVar45 ^ (auVar45 ^ auVar41) & auVar46;
              lVar31 = lVar31 + -0x10;
              *pbVar32 = bVar3 ^ (bVar3 ^ (byte)(uVar98 >> 6)) & -(uVar98 < 0x4000);
              pbVar32[1] = bVar5 ^ (bVar5 ^ (byte)(uVar70 >> 6)) & -(uVar70 < 0x4000);
              pbVar32[2] = bVar9 ^ (bVar9 ^ -(char)((int)uVar78 >> 0x1f) - 1U) & -(0x3fff < uVar78);
              pbVar32[3] = bVar89 ^ (bVar89 ^ (byte)(uVar106 >> 6)) & -(uVar106 < 0x4000);
              pbVar32[4] = bVar67 ^ (bVar67 ^ (byte)(uVar72 >> 6)) & -(uVar72 < 0x4000);
              pbVar32[5] = bVar10 ^ (bVar10 ^ 0xffU - (char)((int)uVar81 >> 0x1f)) &
                                    -(0x3fff < uVar81);
              pbVar32[6] = bVar92 ^ (bVar92 ^ (byte)(uVar108 >> 6)) & -(uVar108 < 0x4000);
              pbVar32[7] = bVar68 ^ (bVar68 ^ (byte)(uVar74 >> 6)) & -(uVar74 < 0x4000);
              pbVar32[8] = bVar11 ^ (bVar11 ^ 0xffU - (char)((int)uVar83 >> 0x1f)) &
                                    -(0x3fff < uVar83);
              pbVar32[9] = bVar95 ^ (bVar95 ^ (byte)(uVar110 >> 6)) & -(uVar110 < 0x4000);
              pbVar32[10] = bVar69 ^ (bVar69 ^ (byte)(uVar76 >> 6)) & -(uVar76 < 0x4000);
              pbVar32[0xb] = bVar12 ^ (bVar12 ^ 0xffU - (char)((int)uVar85 >> 0x1f)) &
                                      -(0x3fff < uVar85);
              pbVar32[0xc] = bVar4 ^ (bVar4 ^ (byte)(uVar57 >> 6)) & -(uVar57 < 0x4000);
              pbVar32[0xd] = bVar6 ^ (bVar6 ^ (byte)(uVar51 >> 6)) & -(uVar51 < 0x4000);
              pbVar32[0xe] = bVar13 ^ (bVar13 ^ -(char)((int)uVar77 >> 0x1f) - 1U) &
                                      -(0x3fff < uVar77);
              pbVar32[0xf] = bVar42 ^ (bVar42 ^ (byte)(uVar59 >> 6)) & -(uVar59 < 0x4000);
              pbVar32[0x10] = bVar113 ^ (bVar113 ^ (byte)(uVar54 >> 6)) & -(uVar54 < 0x4000);
              pbVar32[0x11] =
                   bVar14 ^ (bVar14 ^ 0xffU - (char)((int)uVar80 >> 0x1f)) & -(0x3fff < uVar80);
              pbVar32[0x12] = bVar43 ^ (bVar43 ^ (byte)(uVar60 >> 6)) & -(uVar60 < 0x4000);
              pbVar32[0x13] = bVar116 ^ (bVar116 ^ (byte)(uVar55 >> 6)) & -(uVar55 < 0x4000);
              pbVar32[0x14] =
                   bVar15 ^ (bVar15 ^ 0xffU - (char)((int)uVar82 >> 0x1f)) & -(0x3fff < uVar82);
              pbVar32[0x15] = bVar44 ^ (bVar44 ^ (byte)(uVar61 >> 6)) & -(uVar61 < 0x4000);
              pbVar32[0x16] = bVar119 ^ (bVar119 ^ (byte)(uVar56 >> 6)) & -(uVar56 < 0x4000);
              pbVar32[0x17] =
                   bVar16 ^ (bVar16 ^ 0xffU - (char)((int)uVar84 >> 0x1f)) & -(0x3fff < uVar84);
              pbVar32[0x18] = bVar2 ^ (bVar2 ^ (byte)(uVar111 >> 6)) & -(uVar111 < 0x4000);
              pbVar32[0x19] = bVar7 ^ (bVar7 ^ (byte)(uVar47 >> 6)) & -(uVar47 < 0x4000);
              pbVar32[0x1a] =
                   bVar17 ^ (bVar17 ^ -(char)((int)uVar87 >> 0x1f) - 1U) & -(0x3fff < uVar87);
              pbVar32[0x1b] = bVar105 ^ (bVar105 ^ (byte)(uVar115 >> 6)) & -(uVar115 < 0x4000);
              pbVar32[0x1c] = bVar71 ^ (bVar71 ^ (byte)(uVar48 >> 6)) & -(uVar48 < 0x4000);
              pbVar32[0x1d] =
                   bVar18 ^ (bVar18 ^ 0xffU - (char)((int)uVar91 >> 0x1f)) & -(0x3fff < uVar91);
              pbVar32[0x1e] = bVar107 ^ (bVar107 ^ (byte)(uVar118 >> 6)) & -(uVar118 < 0x4000);
              pbVar32[0x1f] = bVar73 ^ (bVar73 ^ (byte)(uVar49 >> 6)) & -(uVar49 < 0x4000);
              pbVar32[0x20] =
                   bVar19 ^ (bVar19 ^ 0xffU - (char)((int)uVar94 >> 0x1f)) & -(0x3fff < uVar94);
              pbVar32[0x21] = bVar109 ^ (bVar109 ^ (byte)(uVar121 >> 6)) & -(uVar121 < 0x4000);
              pbVar32[0x22] = bVar75 ^ (bVar75 ^ (byte)(uVar50 >> 6)) & -(uVar50 < 0x4000);
              pbVar32[0x23] =
                   bVar20 ^ (bVar20 ^ 0xffU - (char)((int)uVar97 >> 0x1f)) & -(0x3fff < uVar97);
              pbVar32[0x24] = auVar45[0];
              pbVar32[0x25] = bVar8 ^ (bVar8 ^ (byte)(uVar62 >> 6)) & -(uVar62 < 0x4000);
              pbVar32[0x26] =
                   bVar21 ^ (bVar21 ^ -(char)((int)uVar86 >> 0x1f) - 1U) & -(0x3fff < uVar86);
              pbVar32[0x27] = auVar45[4];
              pbVar32[0x28] = bVar114 ^ (bVar114 ^ (byte)(uVar63 >> 6)) & -(uVar63 < 0x4000);
              pbVar32[0x29] =
                   bVar22 ^ (bVar22 ^ 0xffU - (char)((int)uVar90 >> 0x1f)) & -(0x3fff < uVar90);
              pbVar32[0x2a] = auVar45[8];
              pbVar32[0x2b] = bVar117 ^ (bVar117 ^ (byte)(uVar64 >> 6)) & -(uVar64 < 0x4000);
              pbVar32[0x2c] =
                   bVar23 ^ (bVar23 ^ 0xffU - (char)((int)uVar93 >> 0x1f)) & -(0x3fff < uVar93);
              pbVar32[0x2d] = auVar45[0xc];
              pbVar32[0x2e] = bVar120 ^ (bVar120 ^ (byte)(uVar65 >> 6)) & -(uVar65 < 0x4000);
              pbVar32[0x2f] =
                   bVar24 ^ (bVar24 ^ 0xffU - (char)((int)uVar96 >> 0x1f)) & -(0x3fff < uVar96);
              pbVar32 = pbVar32 + 0x30;
              pbVar33 = pbVar33 + 0x10;
              pbVar34 = pbVar34 + 0x10;
              pbVar35 = pbVar35 + 0x10;
            } while (lVar31 != 0);
            lVar30 = lVar29;
            if ((param_5 & 0xf) == 0) {
              return;
            }
          }
        }
      }
    }
    param_1 = param_1 + lVar30;
    param_2 = param_2 + lVar30;
    param_3 = param_3 + lVar30;
    lVar29 = uVar28 - lVar30;
    pbVar25 = param_4 + lVar30 * 3 + 2;
    do {
      bVar26 = *param_2;
      uVar38 = (uint)*param_1 * 0x4a85 >> 8;
      uVar36 = (uVar38 + ((uint)*param_3 * 0x6625 >> 8)) - 0x379a;
      if (uVar36 >> 0xe == 0) {
        bVar27 = (byte)(uVar36 >> 6);
      }
      else {
        bVar27 = ((byte)((int)uVar36 >> 0x1f) & 1) - 1;
      }
      uVar36 = ((uVar38 + 0x2204) - ((uint)bVar26 * 0x1913 >> 8)) - ((uint)*param_3 * 0x3408 >> 8);
      pbVar25[-2] = bVar27;
      if (uVar36 >> 0xe == 0) {
        bVar27 = (byte)(uVar36 >> 6);
      }
      else {
        bVar27 = ((byte)((int)uVar36 >> 0x1f) & 1) - 1;
      }
      uVar36 = (uVar38 + ((uint)bVar26 * 0x811a >> 8)) - 0x4515;
      pbVar25[-1] = bVar27;
      if (uVar36 >> 0xe == 0) {
        bVar26 = (byte)(uVar36 >> 6);
      }
      else {
        bVar26 = ((byte)((int)uVar36 >> 0x1f) & 1) - 1;
      }
      *pbVar25 = bVar26;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      lVar29 = lVar29 + -1;
      param_3 = param_3 + 1;
      pbVar25 = pbVar25 + 3;
    } while (lVar29 != 0);
  }
  return;
}


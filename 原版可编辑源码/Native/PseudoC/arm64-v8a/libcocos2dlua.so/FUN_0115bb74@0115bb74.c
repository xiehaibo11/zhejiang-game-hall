
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0115bb74(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  byte *pbVar27;
  byte *pbVar42;
  byte bVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  uint uVar49;
  uint uVar53;
  uint uVar54;
  undefined1 auVar50 [16];
  uint uVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint uVar56;
  byte bVar59;
  byte bVar60;
  undefined8 uVar57;
  uint uVar61;
  byte bVar62;
  byte bVar63;
  uint uVar64;
  byte bVar65;
  byte bVar66;
  undefined1 auVar58 [16];
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  undefined1 auVar74 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  uint uVar103;
  uint uVar109;
  uint uVar110;
  undefined1 auVar104 [16];
  uint uVar111;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  uint uVar114;
  uint uVar115;
  undefined1 auVar112 [16];
  uint uVar116;
  undefined1 auVar113 [16];
  uint uVar117;
  uint uVar119;
  uint uVar120;
  undefined1 auVar118 [16];
  uint uVar121;
  uint uVar122;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  undefined1 auVar123 [16];
  uint uVar127;
  uint uVar128;
  byte bVar132;
  uint uVar133;
  byte bVar135;
  uint uVar136;
  byte bVar138;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  uint uVar134;
  uint uVar137;
  uint uVar139;
  uint uVar140;
  undefined1 auVar131 [16];
  undefined8 uVar141;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  
  auVar26 = _DAT_01499830;
  auVar25 = _DAT_01499820;
  auVar24 = _DAT_01499810;
  auVar23 = _DAT_014997d0;
  auVar22 = _DAT_014997b0;
  pbVar3 = param_4;
  pbVar5 = param_3;
  pbVar4 = param_2;
  pbVar2 = param_1;
  if ((param_5 & 0xfffffffe) != 0) {
    lVar44 = (long)(int)((param_5 & 0xfffffffe) * 3);
    uVar45 = lVar44 - 6;
    uVar1 = uVar45 / 6 + 1;
    pbVar3 = param_4 + lVar44;
    if ((7 < uVar1) && (uVar46 = uVar1 & 0x7ffffffffffffff8, uVar46 != 0)) {
      uVar45 = uVar45 / 6;
      pbVar2 = param_4 + uVar45 * 6 + 6;
      if ((param_1 + uVar45 * 2 + 2 <= param_4 || pbVar2 <= param_1) &&
         ((param_2 + uVar45 + 1 <= param_4 || pbVar2 <= param_2 &&
          (param_3 + uVar45 + 1 <= param_4 || pbVar2 <= param_3)))) {
        pbVar2 = param_1 + uVar46 * 2;
        pbVar4 = param_2 + uVar46;
        pbVar5 = param_3 + uVar46;
        pbVar42 = param_4;
        uVar45 = uVar46;
        do {
          bVar47 = *param_1;
          pbVar27 = param_1 + 1;
          pbVar28 = param_1 + 2;
          pbVar29 = param_1 + 3;
          pbVar30 = param_1 + 4;
          pbVar31 = param_1 + 5;
          pbVar32 = param_1 + 6;
          pbVar33 = param_1 + 7;
          pbVar34 = param_1 + 8;
          pbVar35 = param_1 + 9;
          pbVar36 = param_1 + 10;
          pbVar37 = param_1 + 0xb;
          pbVar38 = param_1 + 0xc;
          pbVar39 = param_1 + 0xd;
          pbVar40 = param_1 + 0xe;
          pbVar41 = param_1 + 0xf;
          param_1 = param_1 + 0x10;
          uVar141 = *(undefined8 *)param_2;
          uVar57 = *(undefined8 *)param_3;
          auVar99._0_8_ =
               CONCAT17(0,CONCAT16(*pbVar32,(uint6)CONCAT14(*pbVar30,(uint)CONCAT12(*pbVar28,(ushort
                                                  )bVar47))));
          auVar99[8] = *pbVar34;
          auVar99[9] = 0;
          auVar99[10] = *pbVar36;
          auVar99[0xb] = 0;
          auVar99[0xc] = *pbVar38;
          auVar99[0xd] = 0;
          auVar99[0xe] = *pbVar40;
          auVar99[0xf] = 0;
          auVar142._0_8_ =
               CONCAT17(0,CONCAT16((char)((ulong)uVar141 >> 0x18),
                                   (uint6)CONCAT14((char)((ulong)uVar141 >> 0x10),
                                                   (uint)CONCAT12((char)((ulong)uVar141 >> 8),
                                                                  (ushort)(byte)uVar141))));
          auVar142[8] = (char)((ulong)uVar141 >> 0x20);
          auVar142[9] = 0;
          auVar142[10] = (char)((ulong)uVar141 >> 0x28);
          auVar142[0xb] = 0;
          auVar142[0xc] = (char)((ulong)uVar141 >> 0x30);
          auVar142[0xd] = 0;
          auVar142[0xe] = (char)((ulong)uVar141 >> 0x38);
          auVar142[0xf] = 0;
          auVar58._0_8_ =
               CONCAT17(0,CONCAT16((char)((ulong)uVar57 >> 0x18),
                                   (uint6)CONCAT14((char)((ulong)uVar57 >> 0x10),
                                                   (uint)CONCAT12((char)((ulong)uVar57 >> 8),
                                                                  (ushort)(byte)uVar57))));
          auVar58[8] = (char)((ulong)uVar57 >> 0x20);
          auVar58[9] = 0;
          auVar58[10] = (char)((ulong)uVar57 >> 0x28);
          auVar58[0xb] = 0;
          auVar58[0xc] = (char)((ulong)uVar57 >> 0x30);
          auVar58[0xd] = 0;
          auVar58[0xe] = (char)((ulong)uVar57 >> 0x38);
          auVar58[0xf] = 0;
          auVar48._0_8_ =
               CONCAT17(0,CONCAT16(*pbVar33,(uint6)CONCAT14(*pbVar31,(uint)CONCAT12(*pbVar29,(ushort
                                                  )*pbVar27))));
          auVar48[8] = *pbVar35;
          auVar48[9] = 0;
          auVar48[10] = *pbVar37;
          auVar48[0xb] = 0;
          auVar48[0xc] = *pbVar39;
          auVar48[0xd] = 0;
          auVar48[0xe] = *pbVar41;
          auVar48[0xf] = 0;
          auVar50 = NEON_ext(auVar99,auVar99,8,1);
          auVar101 = NEON_ext(auVar142,auVar142,8,1);
          auVar100 = NEON_umull(auVar99._0_8_,0x4a854a854a854a85,2);
          auVar112 = NEON_umull(auVar142._0_8_,0x811a811a811a811a,2);
          auVar143 = NEON_umull(auVar142._0_8_,0x1913191319131913,2);
          auVar118 = NEON_umull(auVar58._0_8_,0x3408340834083408,2);
          uVar122 = auVar143._0_4_ >> 8;
          uVar124 = auVar143._4_4_ >> 8;
          uVar125 = auVar143._8_4_ >> 8;
          uVar126 = auVar143._12_4_ >> 8;
          uVar117 = auVar118._0_4_ >> 8;
          uVar119 = auVar118._4_4_ >> 8;
          uVar120 = auVar118._8_4_ >> 8;
          uVar121 = auVar118._12_4_ >> 8;
          uVar71 = (((auVar100._0_4_ >> 8) + 0x2204) - uVar122) - uVar117;
          uVar78 = (((auVar100._4_4_ >> 8) + 0x2204) - uVar124) - uVar119;
          uVar84 = (((auVar100._8_4_ >> 8) + 0x2204) - uVar125) - uVar120;
          uVar90 = (((auVar100._12_4_ >> 8) + 0x2204) - uVar126) - uVar121;
          bVar11 = 0xff - (char)((int)uVar71 >> 0x1f);
          bVar132 = 0xff - (char)((int)uVar78 >> 0x1f);
          bVar135 = 0xff - (char)((int)uVar84 >> 0x1f);
          bVar138 = 0xff - (char)((int)uVar90 >> 0x1f);
          auVar129 = NEON_ext(auVar48,auVar48,8,1);
          auVar118 = NEON_umull(auVar48._0_8_,0x4a854a854a854a85,2);
          auVar104 = NEON_ext(auVar58,auVar58,8,1);
          auVar143 = NEON_umull(auVar58._0_8_,0x6625662566256625,2);
          uVar72 = auVar100._0_4_ >> 8;
          uVar79 = auVar100._4_4_ >> 8;
          uVar85 = auVar100._8_4_ >> 8;
          uVar91 = auVar100._12_4_ >> 8;
          auVar50 = NEON_umull(auVar50._0_8_,0x4a854a854a854a85,2);
          auVar100 = NEON_umull(auVar101._0_8_,0x1913191319131913,2);
          auVar130 = NEON_umull(auVar129._0_8_,0x4a854a854a854a85,2);
          auVar129 = NEON_umull(auVar104._0_8_,0x6625662566256625,2);
          uVar49 = auVar50._0_4_ >> 8;
          uVar53 = auVar50._4_4_ >> 8;
          uVar54 = auVar50._8_4_ >> 8;
          uVar55 = auVar50._12_4_ >> 8;
          uVar56 = auVar100._0_4_ >> 8;
          uVar61 = auVar100._4_4_ >> 8;
          uVar64 = auVar100._8_4_ >> 8;
          uVar67 = auVar100._12_4_ >> 8;
          uVar127 = auVar130._0_4_ >> 8;
          uVar133 = auVar130._4_4_ >> 8;
          uVar136 = auVar130._8_4_ >> 8;
          uVar139 = auVar130._12_4_ >> 8;
          auVar100 = NEON_umull(auVar104._0_8_,0x3408340834083408,2);
          uVar117 = (((auVar118._0_4_ >> 8) + 0x2204) - uVar122) - uVar117;
          uVar119 = (((auVar118._4_4_ >> 8) + 0x2204) - uVar124) - uVar119;
          uVar120 = (((auVar118._8_4_ >> 8) + 0x2204) - uVar125) - uVar120;
          uVar121 = (((auVar118._12_4_ >> 8) + 0x2204) - uVar126) - uVar121;
          uVar103 = auVar100._0_4_ >> 8;
          uVar109 = auVar100._4_4_ >> 8;
          uVar110 = auVar100._8_4_ >> 8;
          uVar111 = auVar100._12_4_ >> 8;
          uVar122 = (uVar72 + (auVar143._0_4_ >> 8)) - 0x379a;
          uVar114 = (uVar79 + (auVar143._4_4_ >> 8)) - 0x379a;
          uVar115 = (uVar85 + (auVar143._8_4_ >> 8)) - 0x379a;
          uVar116 = (uVar91 + (auVar143._12_4_ >> 8)) - 0x379a;
          uVar126 = (((auVar50._0_4_ >> 8) + 0x2204) - uVar56) - uVar103;
          uVar68 = (((auVar50._4_4_ >> 8) + 0x2204) - uVar61) - uVar109;
          uVar69 = (((auVar50._8_4_ >> 8) + 0x2204) - uVar64) - uVar110;
          uVar70 = (((auVar50._12_4_ >> 8) + 0x2204) - uVar67) - uVar111;
          uVar103 = (((auVar130._0_4_ >> 8) + 0x2204) - uVar56) - uVar103;
          uVar109 = (((auVar130._4_4_ >> 8) + 0x2204) - uVar61) - uVar109;
          uVar110 = (((auVar130._8_4_ >> 8) + 0x2204) - uVar64) - uVar110;
          uVar111 = (((auVar130._12_4_ >> 8) + 0x2204) - uVar67) - uVar111;
          auVar101 = NEON_umull(auVar101._0_8_,0x811a811a811a811a,2);
          bVar47 = 0xff - (char)((int)uVar122 >> 0x1f);
          bVar59 = 0xff - (char)((int)uVar114 >> 0x1f);
          bVar62 = 0xff - (char)((int)uVar115 >> 0x1f);
          bVar65 = 0xff - (char)((int)uVar116 >> 0x1f);
          auVar102[0] = bVar47 ^ (bVar47 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000);
          uVar73 = ((auVar118._0_4_ >> 8) + (auVar143._0_4_ >> 8)) - 0x379a;
          uVar80 = ((auVar118._4_4_ >> 8) + (auVar143._4_4_ >> 8)) - 0x379a;
          uVar86 = ((auVar118._8_4_ >> 8) + (auVar143._8_4_ >> 8)) - 0x379a;
          uVar92 = ((auVar118._12_4_ >> 8) + (auVar143._12_4_ >> 8)) - 0x379a;
          bVar47 = 0xff - (char)((int)uVar117 >> 0x1f);
          bVar60 = 0xff - (char)((int)uVar119 >> 0x1f);
          bVar63 = 0xff - (char)((int)uVar120 >> 0x1f);
          bVar66 = 0xff - (char)((int)uVar121 >> 0x1f);
          auVar113[0] = bVar47 ^ (bVar47 ^ (byte)(uVar117 >> 6)) & -(uVar117 < 0x4000);
          uVar72 = (uVar72 + (auVar112._0_4_ >> 8)) - 0x4515;
          uVar79 = (uVar79 + (auVar112._4_4_ >> 8)) - 0x4515;
          uVar85 = (uVar85 + (auVar112._8_4_ >> 8)) - 0x4515;
          uVar91 = (uVar91 + (auVar112._12_4_ >> 8)) - 0x4515;
          bVar13 = (byte)(uVar73 >> 6);
          bVar14 = (byte)(uVar80 >> 6);
          bVar15 = (byte)(uVar86 >> 6);
          bVar16 = (byte)(uVar92 >> 6);
          bVar9 = 0xff - (char)((int)uVar72 >> 0x1f);
          bVar75 = 0xff - (char)((int)uVar79 >> 0x1f);
          bVar81 = 0xff - (char)((int)uVar85 >> 0x1f);
          bVar87 = 0xff - (char)((int)uVar91 >> 0x1f);
          uVar122 = (uVar49 + (auVar129._0_4_ >> 8)) - 0x379a;
          uVar117 = (uVar53 + (auVar129._4_4_ >> 8)) - 0x379a;
          uVar124 = (uVar54 + (auVar129._8_4_ >> 8)) - 0x379a;
          uVar125 = (uVar55 + (auVar129._12_4_ >> 8)) - 0x379a;
          bVar12 = 0xff - (char)((int)uVar126 >> 0x1f);
          bVar76 = 0xff - (char)((int)uVar68 >> 0x1f);
          bVar82 = 0xff - (char)((int)uVar69 >> 0x1f);
          bVar88 = 0xff - (char)((int)uVar70 >> 0x1f);
          uVar56 = ((uint)auVar118._1_3_ + (auVar112._0_4_ >> 8)) - 0x4515;
          uVar61 = ((uint)auVar118._5_3_ + (auVar112._4_4_ >> 8)) - 0x4515;
          uVar64 = ((uint)auVar118._9_3_ + (auVar112._8_4_ >> 8)) - 0x4515;
          uVar67 = ((uint)auVar118._13_3_ + (auVar112._12_4_ >> 8)) - 0x4515;
          bVar10 = 0xff - (char)((int)uVar122 >> 0x1f);
          bVar77 = 0xff - (char)((int)uVar117 >> 0x1f);
          bVar83 = 0xff - (char)((int)uVar124 >> 0x1f);
          bVar89 = 0xff - (char)((int)uVar125 >> 0x1f);
          bVar43 = (byte)(uVar64 >> 0x18);
          bVar47 = (byte)(uVar67 >> 0x18);
          auVar51._0_4_ = -(uint)(uVar56 < 0x4000);
          auVar51._4_4_ = -(uint)(uVar61 < 0x4000);
          auVar51._8_4_ = -(uint)(uVar64 < 0x4000);
          auVar51._12_4_ = -(uint)(uVar67 < 0x4000);
          uVar64 = uVar64 >> 6;
          uVar67 = uVar67 >> 6;
          auVar52._0_4_ = 0xff - ((int)uVar56 >> 0x1f);
          auVar52._4_4_ = 0xff - ((int)uVar61 >> 0x1f);
          auVar52._8_4_ = (bVar43 >> 7) + 0xff;
          auVar52._12_4_ = (bVar47 >> 7) + 0xff;
          auVar118._5_3_ = 0;
          auVar118._0_5_ = CONCAT14((char)(uVar61 >> 6),uVar56 >> 6) & 0xff000000ff;
          auVar118[8] = (char)uVar64;
          auVar118[9] = (char)(uVar64 >> 8);
          auVar118[10] = (char)(uVar64 >> 0x10);
          auVar118[0xb] = bVar43 >> 6;
          auVar118[0xc] = (char)uVar67;
          auVar118[0xd] = (char)(uVar67 >> 8);
          auVar118[0xe] = (char)(uVar67 >> 0x10);
          auVar118[0xf] = bVar47 >> 6;
          auVar52 = auVar52 ^ (auVar52 ^ auVar118) & auVar51;
          uVar128 = (uVar127 + (auVar129._0_4_ >> 8)) - 0x379a;
          uVar134 = (uVar133 + (auVar129._4_4_ >> 8)) - 0x379a;
          uVar137 = (uVar136 + (auVar129._8_4_ >> 8)) - 0x379a;
          uVar140 = (uVar139 + (auVar129._12_4_ >> 8)) - 0x379a;
          auVar74._0_4_ = -(uint)(uVar103 < 0x4000);
          auVar74._4_4_ = -(uint)(uVar109 < 0x4000);
          auVar74._8_4_ = -(uint)(uVar110 < 0x4000);
          auVar74._12_4_ = -(uint)(uVar111 < 0x4000);
          auVar105._0_4_ = uVar103 >> 6;
          auVar105._4_4_ = uVar109 >> 6;
          auVar105._8_4_ = uVar110 >> 6;
          auVar105._12_4_ = uVar111 >> 6;
          iVar6 = 0xff - ((int)uVar103 >> 0x1f);
          cVar7 = -1 - (char)((int)uVar109 >> 0x1f);
          iVar8 = 0xff - ((int)uVar110 >> 0x1f);
          uVar95 = (undefined1)iVar8;
          uVar96 = (undefined1)((uint)iVar8 >> 8);
          iVar8 = 0xff - ((int)uVar111 >> 0x1f);
          uVar97 = (undefined1)iVar8;
          uVar98 = (undefined1)((uint)iVar8 >> 8);
          auVar50[4] = cVar7;
          auVar50._0_4_ = iVar6;
          auVar50._5_3_ = 0;
          auVar50[8] = uVar95;
          auVar50[9] = uVar96;
          auVar50._10_2_ = 0;
          auVar50[0xc] = uVar97;
          auVar50[0xd] = uVar98;
          auVar50._14_2_ = 0;
          auVar143[4] = cVar7;
          auVar143._0_4_ = iVar6;
          auVar143._5_3_ = 0;
          auVar143[8] = uVar95;
          auVar143[9] = uVar96;
          auVar143._10_2_ = 0;
          auVar143[0xc] = uVar97;
          auVar143[0xd] = uVar98;
          auVar143._14_2_ = 0;
          auVar143 = auVar143 ^ (auVar50 ^ auVar105) & auVar74;
          uVar56 = (uVar49 + (auVar101._0_4_ >> 8)) - 0x4515;
          uVar61 = (uVar53 + (auVar101._4_4_ >> 8)) - 0x4515;
          uVar64 = (uVar54 + (auVar101._8_4_ >> 8)) - 0x4515;
          uVar67 = (uVar55 + (auVar101._12_4_ >> 8)) - 0x4515;
          auVar106._0_4_ = -(uint)(0x3fff < uVar128);
          auVar106._4_4_ = -(uint)(0x3fff < uVar134);
          auVar106._8_4_ = -(uint)(0x3fff < uVar137);
          auVar106._12_4_ = -(uint)(0x3fff < uVar140);
          auVar107._0_4_ = uVar128 >> 6;
          auVar107._4_4_ = uVar134 >> 6;
          auVar107._8_4_ = uVar137 >> 6;
          auVar107._12_4_ = uVar140 >> 6;
          iVar6 = 0xff - ((int)uVar137 >> 0x1f);
          iVar8 = 0xff - ((int)uVar140 >> 0x1f);
          auVar100[4] = -1 - (char)((int)uVar134 >> 0x1f);
          auVar100._0_4_ = 0xff - ((int)uVar128 >> 0x1f);
          auVar100._5_3_ = 0;
          auVar100[8] = (char)iVar6;
          auVar100[9] = (char)((uint)iVar6 >> 8);
          auVar100._10_2_ = 0;
          auVar100[0xc] = (char)iVar8;
          auVar100[0xd] = (char)((uint)iVar8 >> 8);
          auVar100._14_2_ = 0;
          auVar107 = auVar107 ^ (auVar107 ^ auVar100) & auVar106;
          uVar49 = (uVar127 + (auVar101._0_4_ >> 8)) - 0x4515;
          uVar53 = (uVar133 + (auVar101._4_4_ >> 8)) - 0x4515;
          uVar54 = (uVar136 + (auVar101._8_4_ >> 8)) - 0x4515;
          uVar55 = (uVar139 + (auVar101._12_4_ >> 8)) - 0x4515;
          auVar131._0_4_ = -(uint)(uVar56 < 0x4000);
          auVar131._4_4_ = -(uint)(uVar61 < 0x4000);
          auVar131._8_4_ = -(uint)(uVar64 < 0x4000);
          auVar131._12_4_ = -(uint)(uVar67 < 0x4000);
          auVar93._0_4_ = uVar56 >> 6;
          auVar93._4_4_ = uVar61 >> 6;
          auVar93._8_4_ = uVar64 >> 6;
          auVar93._12_4_ = uVar67 >> 6;
          iVar6 = 0xff - ((int)uVar56 >> 0x1f);
          cVar7 = -1 - (char)((int)uVar61 >> 0x1f);
          iVar8 = 0xff - ((int)uVar64 >> 0x1f);
          uVar95 = (undefined1)iVar8;
          uVar96 = (undefined1)((uint)iVar8 >> 8);
          iVar8 = 0xff - ((int)uVar67 >> 0x1f);
          uVar97 = (undefined1)iVar8;
          uVar98 = (undefined1)((uint)iVar8 >> 8);
          auVar101[4] = cVar7;
          auVar101._0_4_ = iVar6;
          auVar101._5_3_ = 0;
          auVar101[8] = uVar95;
          auVar101[9] = uVar96;
          auVar101._10_2_ = 0;
          auVar101[0xc] = uVar97;
          auVar101[0xd] = uVar98;
          auVar101._14_2_ = 0;
          auVar104[4] = cVar7;
          auVar104._0_4_ = iVar6;
          auVar104._5_3_ = 0;
          auVar104[8] = uVar95;
          auVar104[9] = uVar96;
          auVar104._10_2_ = 0;
          auVar104[0xc] = uVar97;
          auVar104[0xd] = uVar98;
          auVar104._14_2_ = 0;
          auVar104 = auVar104 ^ (auVar101 ^ auVar93) & auVar131;
          auVar94._0_4_ = -(uint)(uVar49 < 0x4000);
          auVar94._4_4_ = -(uint)(uVar53 < 0x4000);
          auVar94._8_4_ = -(uint)(uVar54 < 0x4000);
          auVar94._12_4_ = -(uint)(uVar55 < 0x4000);
          auVar123._0_4_ = uVar49 >> 6;
          auVar123._4_4_ = uVar53 >> 6;
          auVar123._8_4_ = uVar54 >> 6;
          auVar123._12_4_ = uVar55 >> 6;
          iVar6 = 0xff - ((int)uVar49 >> 0x1f);
          cVar7 = -1 - (char)((int)uVar53 >> 0x1f);
          iVar8 = 0xff - ((int)uVar54 >> 0x1f);
          uVar95 = (undefined1)iVar8;
          uVar96 = (undefined1)((uint)iVar8 >> 8);
          iVar8 = 0xff - ((int)uVar55 >> 0x1f);
          uVar97 = (undefined1)iVar8;
          uVar98 = (undefined1)((uint)iVar8 >> 8);
          auVar112[4] = cVar7;
          auVar112._0_4_ = iVar6;
          auVar112._5_3_ = 0;
          auVar112[8] = uVar95;
          auVar112[9] = uVar96;
          auVar112._10_2_ = 0;
          auVar112[0xc] = uVar97;
          auVar112[0xd] = uVar98;
          auVar112._14_2_ = 0;
          auVar129[4] = cVar7;
          auVar129._0_4_ = iVar6;
          auVar129._5_3_ = 0;
          auVar129[8] = uVar95;
          auVar129[9] = uVar96;
          auVar129._10_2_ = 0;
          auVar129[0xc] = uVar97;
          auVar129[0xd] = uVar98;
          auVar129._14_2_ = 0;
          auVar129 = auVar129 ^ (auVar112 ^ auVar123) & auVar94;
          auVar108[1] = bVar75 ^ (bVar75 ^ (byte)(uVar79 >> 6)) & -(uVar79 < 0x4000);
          auVar108[0] = bVar9 ^ (bVar9 ^ (byte)(uVar72 >> 6)) & -(uVar72 < 0x4000);
          auVar108[2] = bVar81 ^ (bVar81 ^ (byte)(uVar85 >> 6)) & -(uVar85 < 0x4000);
          auVar108[3] = bVar87 ^ (bVar87 ^ (byte)(uVar91 >> 6)) & -(uVar91 < 0x4000);
          auVar108[4] = auVar104[0];
          auVar108[5] = auVar104[4];
          auVar108[6] = auVar104[8];
          auVar108[7] = auVar104[0xc];
          auVar102[1] = bVar59 ^ (bVar59 ^ (byte)(uVar114 >> 6)) & -(uVar114 < 0x4000);
          auVar102[2] = bVar62 ^ (bVar62 ^ (byte)(uVar115 >> 6)) & -(uVar115 < 0x4000);
          auVar102[3] = bVar65 ^ (bVar65 ^ (byte)(uVar116 >> 6)) & -(uVar116 < 0x4000);
          auVar102[4] = bVar10 ^ (bVar10 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000);
          auVar102[5] = bVar77 ^ (bVar77 ^ (byte)(uVar117 >> 6)) & -(uVar117 < 0x4000);
          auVar102[6] = bVar83 ^ (bVar83 ^ (byte)(uVar124 >> 6)) & -(uVar124 < 0x4000);
          auVar102[7] = bVar89 ^ (bVar89 ^ (byte)(uVar125 >> 6)) & -(uVar125 < 0x4000);
          auVar113[1] = bVar60 ^ (bVar60 ^ (byte)(uVar119 >> 6)) & -(uVar119 < 0x4000);
          auVar113[2] = bVar63 ^ (bVar63 ^ (byte)(uVar120 >> 6)) & -(uVar120 < 0x4000);
          auVar113[3] = bVar66 ^ (bVar66 ^ (byte)(uVar121 >> 6)) & -(uVar121 < 0x4000);
          auVar113[4] = auVar143[0];
          auVar113[5] = auVar143[4];
          auVar113[6] = auVar143[8];
          auVar113[7] = auVar143[0xc];
          auVar102[8] = auVar52[0];
          auVar102[9] = auVar52[4];
          auVar102[10] = auVar52[8];
          auVar102[0xb] = auVar52[0xc];
          auVar102[0xc] = auVar129[0];
          auVar102[0xd] = auVar129[4];
          auVar102[0xe] = auVar129[8];
          auVar102[0xf] = auVar129[0xc];
          auVar108[8] = bVar11 ^ (bVar11 ^ (byte)(uVar71 >> 6)) & -(uVar71 < 0x4000);
          auVar108[9] = bVar132 ^ (bVar132 ^ (byte)(uVar78 >> 6)) & -(uVar78 < 0x4000);
          auVar108[10] = bVar135 ^ (bVar135 ^ (byte)(uVar84 >> 6)) & -(uVar84 < 0x4000);
          auVar108[0xb] = bVar138 ^ (bVar138 ^ (byte)(uVar90 >> 6)) & -(uVar90 < 0x4000);
          auVar108[0xc] = bVar12 ^ (bVar12 ^ (byte)(uVar126 >> 6)) & -(uVar126 < 0x4000);
          auVar108[0xd] = bVar76 ^ (bVar76 ^ (byte)(uVar68 >> 6)) & -(uVar68 < 0x4000);
          auVar108[0xe] = bVar82 ^ (bVar82 ^ (byte)(uVar69 >> 6)) & -(uVar69 < 0x4000);
          auVar108[0xf] = bVar88 ^ (bVar88 ^ (byte)(uVar70 >> 6)) & -(uVar70 < 0x4000);
          auVar113[8] = bVar13 ^ (bVar13 ^ -(char)((int)uVar73 >> 0x1f) - 1U) & -(0x3fff < uVar73);
          auVar113[9] = bVar14 ^ (bVar14 ^ 0xffU - (char)((int)uVar80 >> 0x1f)) & -(0x3fff < uVar80)
          ;
          auVar113[10] = bVar15 ^ (bVar15 ^ 0xffU - (char)((int)uVar86 >> 0x1f)) &
                                  -(0x3fff < uVar86);
          auVar113[0xb] =
               bVar16 ^ (bVar16 ^ 0xffU - (char)((int)uVar92 >> 0x1f)) & -(0x3fff < uVar92);
          auVar113[0xc] = auVar107[0];
          auVar113[0xd] = auVar107[4];
          auVar113[0xe] = auVar107[8];
          auVar113[0xf] = auVar107[0xc];
          auVar18._8_8_ = 0xd05ffffffff0c04;
          auVar18._0_8_ = 0xffffffff0b03ffff;
          auVar21._8_8_ = 0xa02ffffffff0901;
          auVar21._0_8_ = 0xffffffff0800ffff;
          auVar143 = a64_TBL(ZEXT816(0),auVar113,auVar24);
          auVar118 = a64_TBL(ZEXT816(0),auVar102,auVar25);
          auVar50 = a64_TBL(ZEXT816(0),auVar108,auVar18);
          auVar20._8_8_ = 0xffff0a02ffffffff;
          auVar20._0_8_ = 0x901ffffffff0800;
          auVar101 = a64_TBL(ZEXT816(0),auVar102,auVar21);
          auVar143 = a64_TBL(ZEXT816(0),auVar118,auVar143,auVar22);
          auVar100 = a64_TBL(ZEXT816(0),auVar108,auVar26);
          auVar118 = a64_TBL(ZEXT816(0),auVar108,auVar20);
          auVar17._8_8_ = 0xffff0c04ffffffff;
          auVar17._0_8_ = 0xb03ffffffff0a02;
          auVar101 = a64_TBL(ZEXT816(0),auVar118,auVar101,auVar22);
          uVar45 = uVar45 - 8;
          auVar118 = a64_TBL(ZEXT816(0),auVar113,auVar17);
          auVar19._8_8_ = 0xffffffff0901ffff;
          auVar19._0_8_ = 0xffff0800ffffffff;
          auVar118 = a64_TBL(ZEXT816(0),auVar118,auVar50,auVar22);
          auVar104 = a64_TBL(ZEXT816(0),auVar113,auVar19);
          auVar130._8_8_ = 0xffffffff0c04ffff;
          auVar130._0_8_ = 0xffff0b03ffffffff;
          auVar50 = a64_TBL(ZEXT816(0),auVar102,auVar130);
          auVar101 = a64_TBL(ZEXT816(0),auVar101,auVar104,auVar23);
          auVar118 = a64_TBL(ZEXT816(0),auVar118,auVar50,auVar23);
          auVar50 = a64_TBL(ZEXT816(0),auVar143,auVar100,auVar23);
          *(long *)(pbVar42 + 0x18) = auVar118._8_8_;
          *(long *)(pbVar42 + 0x10) = auVar118._0_8_;
          *(long *)(pbVar42 + 0x28) = auVar50._8_8_;
          *(long *)(pbVar42 + 0x20) = auVar50._0_8_;
          *(long *)(pbVar42 + 8) = auVar101._8_8_;
          *(long *)pbVar42 = auVar101._0_8_;
          param_2 = param_2 + 8;
          param_3 = param_3 + 8;
          pbVar42 = pbVar42 + 0x30;
        } while (uVar45 != 0);
        param_2 = pbVar4;
        param_3 = pbVar5;
        param_1 = pbVar2;
        param_4 = param_4 + uVar46 * 6;
        if (uVar1 == uVar46) goto joined_r0x0115c1a8;
      }
    }
    do {
      bVar47 = *param_3;
      uVar61 = (uint)*param_1 * 0x4a85 >> 8;
      uVar56 = (uVar61 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      if (uVar56 >> 0xe == 0) {
        bVar43 = (byte)(uVar56 >> 6);
      }
      else {
        bVar43 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
      }
      uVar56 = ((uVar61 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) - ((uint)bVar47 * 0x3408 >> 8);
      *param_4 = bVar43;
      if (uVar56 >> 0xe == 0) {
        bVar43 = (byte)(uVar56 >> 6);
      }
      else {
        bVar43 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
      }
      uVar56 = (uVar61 + ((uint)bVar47 * 0x6625 >> 8)) - 0x379a;
      param_4[1] = bVar43;
      if (uVar56 >> 0xe == 0) {
        bVar47 = (byte)(uVar56 >> 6);
      }
      else {
        bVar47 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
      }
      param_4[2] = bVar47;
      bVar47 = *param_3;
      uVar61 = (uint)param_1[1] * 0x4a85 >> 8;
      uVar56 = (uVar61 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      if (uVar56 >> 0xe == 0) {
        bVar43 = (byte)(uVar56 >> 6);
      }
      else {
        bVar43 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
      }
      uVar56 = ((uVar61 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) - ((uint)bVar47 * 0x3408 >> 8);
      param_4[3] = bVar43;
      if (uVar56 >> 0xe == 0) {
        bVar43 = (byte)(uVar56 >> 6);
      }
      else {
        bVar43 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
      }
      uVar56 = (uVar61 + ((uint)bVar47 * 0x6625 >> 8)) - 0x379a;
      param_4[4] = bVar43;
      if (uVar56 >> 0xe == 0) {
        bVar47 = (byte)(uVar56 >> 6);
      }
      else {
        bVar47 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
      }
      param_4[5] = bVar47;
      param_4 = param_4 + 6;
      pbVar2 = param_1 + 2;
      pbVar4 = param_2 + 1;
      pbVar5 = param_3 + 1;
      param_2 = pbVar4;
      param_3 = pbVar5;
      param_1 = pbVar2;
    } while (param_4 != pbVar3);
  }
joined_r0x0115c1a8:
  if ((param_5 & 1) != 0) {
    bVar47 = *pbVar5;
    uVar61 = (uint)*pbVar2 * 0x4a85 >> 8;
    uVar56 = (uVar61 + ((uint)*pbVar4 * 0x811a >> 8)) - 0x4515;
    if (uVar56 >> 0xe == 0) {
      bVar43 = (byte)(uVar56 >> 6);
    }
    else {
      bVar43 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
    }
    uVar56 = ((uVar61 + 0x2204) - ((uint)*pbVar4 * 0x1913 >> 8)) - ((uint)bVar47 * 0x3408 >> 8);
    *pbVar3 = bVar43;
    if (uVar56 >> 0xe == 0) {
      bVar43 = (byte)(uVar56 >> 6);
    }
    else {
      bVar43 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
    }
    uVar56 = (uVar61 + ((uint)bVar47 * 0x6625 >> 8)) - 0x379a;
    pbVar3[1] = bVar43;
    if (uVar56 >> 0xe == 0) {
      bVar47 = (byte)(uVar56 >> 6);
    }
    else {
      bVar47 = ((byte)((int)uVar56 >> 0x1f) & 1) - 1;
    }
    pbVar3[2] = bVar47;
  }
  return;
}


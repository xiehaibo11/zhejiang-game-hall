
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dfe890(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  byte *pbVar26;
  byte *pbVar41;
  byte bVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  byte bVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar53;
  uint uVar54;
  undefined1 auVar52 [16];
  uint uVar55;
  uint uVar56;
  byte bVar59;
  undefined8 uVar57;
  uint uVar60;
  byte bVar61;
  uint uVar62;
  byte bVar63;
  undefined1 auVar58 [16];
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  byte bVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  byte bVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  byte bVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  uint uVar90;
  uint uVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  uint uVar99;
  uint uVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 auVar82 [16];
  uint uVar108;
  uint uVar109;
  undefined1 auVar110 [16];
  uint uVar111;
  uint uVar113;
  uint uVar114;
  undefined1 auVar112 [16];
  uint uVar115;
  uint uVar116;
  uint uVar118;
  uint uVar119;
  undefined1 auVar117 [16];
  uint uVar120;
  uint uVar121;
  uint uVar126;
  uint uVar127;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  uint uVar128;
  undefined1 auVar125 [16];
  byte bVar130;
  uint uVar131;
  byte bVar132;
  uint uVar133;
  byte bVar134;
  undefined1 auVar129 [16];
  uint uVar135;
  undefined8 uVar136;
  undefined1 auVar137 [16];
  byte *pbVar27;
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
  
  auVar25 = _DAT_01970c70;
  auVar24 = _DAT_01970c60;
  auVar23 = _DAT_01970c50;
  auVar22 = _DAT_01970c40;
  auVar21 = _DAT_01970c10;
  auVar20 = _DAT_01970bf0;
  pbVar3 = param_4;
  pbVar5 = param_3;
  pbVar4 = param_2;
  pbVar2 = param_1;
  if ((param_5 & 0xfffffffe) != 0) {
    lVar43 = (long)(int)((param_5 & 0xfffffffe) * 3);
    uVar44 = lVar43 - 6;
    uVar1 = uVar44 / 6 + 1;
    pbVar3 = param_4 + lVar43;
    if ((7 < uVar1) && (uVar45 = uVar1 & 0x7ffffffffffffff8, uVar45 != 0)) {
      uVar44 = uVar44 / 6;
      pbVar2 = param_4 + uVar44 * 6 + 6;
      if ((param_1 + uVar44 * 2 + 2 <= param_4 || pbVar2 <= param_1) &&
         ((param_2 + uVar44 + 1 <= param_4 || pbVar2 <= param_2 &&
          (param_3 + uVar44 + 1 <= param_4 || pbVar2 <= param_3)))) {
        pbVar2 = param_1 + uVar45 * 2;
        pbVar4 = param_2 + uVar45;
        pbVar5 = param_3 + uVar45;
        pbVar41 = param_4;
        uVar44 = uVar45;
        do {
          bVar46 = *param_1;
          pbVar26 = param_1 + 1;
          pbVar27 = param_1 + 2;
          pbVar28 = param_1 + 3;
          pbVar29 = param_1 + 4;
          pbVar30 = param_1 + 5;
          pbVar31 = param_1 + 6;
          pbVar32 = param_1 + 7;
          pbVar33 = param_1 + 8;
          pbVar34 = param_1 + 9;
          pbVar35 = param_1 + 10;
          pbVar36 = param_1 + 0xb;
          pbVar37 = param_1 + 0xc;
          pbVar38 = param_1 + 0xd;
          pbVar39 = param_1 + 0xe;
          pbVar40 = param_1 + 0xf;
          param_1 = param_1 + 0x10;
          uVar136 = *(undefined8 *)param_2;
          uVar57 = *(undefined8 *)param_3;
          auVar122._0_8_ =
               CONCAT17(0,CONCAT16(*pbVar31,(uint6)CONCAT14(*pbVar29,(uint)CONCAT12(*pbVar27,(ushort
                                                  )bVar46))));
          auVar122[8] = *pbVar33;
          auVar122[9] = 0;
          auVar122[10] = *pbVar35;
          auVar122[0xb] = 0;
          auVar122[0xc] = *pbVar37;
          auVar122[0xd] = 0;
          auVar122[0xe] = *pbVar39;
          auVar122[0xf] = 0;
          auVar137._0_8_ =
               CONCAT17(0,CONCAT16((char)((ulong)uVar136 >> 0x18),
                                   (uint6)CONCAT14((char)((ulong)uVar136 >> 0x10),
                                                   (uint)CONCAT12((char)((ulong)uVar136 >> 8),
                                                                  (ushort)(byte)uVar136))));
          auVar137[8] = (char)((ulong)uVar136 >> 0x20);
          auVar137[9] = 0;
          auVar137[10] = (char)((ulong)uVar136 >> 0x28);
          auVar137[0xb] = 0;
          auVar137[0xc] = (char)((ulong)uVar136 >> 0x30);
          auVar137[0xd] = 0;
          auVar137[0xe] = (char)((ulong)uVar136 >> 0x38);
          auVar137[0xf] = 0;
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
          auVar124._0_8_ =
               CONCAT17(0,CONCAT16(*pbVar32,(uint6)CONCAT14(*pbVar30,(uint)CONCAT12(*pbVar28,(ushort
                                                  )*pbVar26))));
          auVar124[8] = *pbVar34;
          auVar124[9] = 0;
          auVar124[10] = *pbVar36;
          auVar124[0xb] = 0;
          auVar124[0xc] = *pbVar38;
          auVar124[0xd] = 0;
          auVar124[0xe] = *pbVar40;
          auVar124[0xf] = 0;
          auVar52 = NEON_ext(auVar122,auVar122,8,1);
          auVar82 = NEON_umull(auVar122._0_8_,0x4a854a854a854a85,2);
          auVar112 = NEON_umull(auVar137._0_8_,0x1913191319131913,2);
          auVar117 = NEON_umull(auVar58._0_8_,0x3408340834083408,2);
          uVar111 = auVar112._0_4_ >> 8;
          uVar113 = auVar112._4_4_ >> 8;
          uVar114 = auVar112._8_4_ >> 8;
          uVar115 = auVar112._12_4_ >> 8;
          auVar110 = NEON_ext(auVar137,auVar137,8,1);
          auVar122 = NEON_umull(auVar137._0_8_,0x811a811a811a811a,2);
          uVar116 = auVar117._0_4_ >> 8;
          uVar118 = auVar117._4_4_ >> 8;
          uVar119 = auVar117._8_4_ >> 8;
          uVar120 = auVar117._12_4_ >> 8;
          uVar66 = (((auVar82._0_4_ >> 8) + 0x2204) - uVar111) - uVar116;
          uVar69 = (((auVar82._4_4_ >> 8) + 0x2204) - uVar113) - uVar118;
          uVar73 = (((auVar82._8_4_ >> 8) + 0x2204) - uVar114) - uVar119;
          uVar77 = (((auVar82._12_4_ >> 8) + 0x2204) - uVar115) - uVar120;
          bVar10 = 0xff - (char)((int)uVar66 >> 0x1f);
          bVar130 = 0xff - (char)((int)uVar69 >> 0x1f);
          bVar132 = 0xff - (char)((int)uVar73 >> 0x1f);
          bVar134 = 0xff - (char)((int)uVar77 >> 0x1f);
          auVar129 = NEON_umull(auVar124._0_8_,0x4a854a854a854a85,2);
          uVar67 = auVar82._0_4_ >> 8;
          uVar70 = auVar82._4_4_ >> 8;
          uVar74 = auVar82._8_4_ >> 8;
          uVar78 = auVar82._12_4_ >> 8;
          uVar80 = auVar129._0_4_ >> 8;
          uVar90 = auVar129._4_4_ >> 8;
          uVar99 = auVar129._8_4_ >> 8;
          uVar108 = auVar129._12_4_ >> 8;
          auVar123 = NEON_ext(auVar58,auVar58,8,1);
          auVar112 = NEON_umull(auVar58._0_8_,0x6625662566256625,2);
          auVar82 = NEON_ext(auVar124,auVar124,8,1);
          auVar52 = NEON_umull(auVar52._0_8_,0x4a854a854a854a85,2);
          auVar117 = NEON_umull(auVar110._0_8_,0x1913191319131913,2);
          auVar82 = NEON_umull(auVar82._0_8_,0x4a854a854a854a85,2);
          auVar110 = NEON_umull(auVar110._0_8_,0x811a811a811a811a,2);
          uVar51 = auVar52._0_4_ >> 8;
          uVar53 = auVar52._4_4_ >> 8;
          uVar54 = auVar52._8_4_ >> 8;
          uVar55 = auVar52._12_4_ >> 8;
          uVar56 = auVar117._0_4_ >> 8;
          uVar60 = auVar117._4_4_ >> 8;
          uVar62 = auVar117._8_4_ >> 8;
          uVar64 = auVar117._12_4_ >> 8;
          uVar47 = auVar82._0_4_ >> 8;
          uVar48 = auVar82._4_4_ >> 8;
          uVar49 = auVar82._8_4_ >> 8;
          uVar50 = auVar82._12_4_ >> 8;
          uVar116 = (((auVar129._0_4_ >> 8) + 0x2204) - uVar111) - uVar116;
          uVar118 = (((auVar129._4_4_ >> 8) + 0x2204) - uVar113) - uVar118;
          uVar119 = (((auVar129._8_4_ >> 8) + 0x2204) - uVar114) - uVar119;
          uVar120 = (((auVar129._12_4_ >> 8) + 0x2204) - uVar115) - uVar120;
          auVar117 = NEON_umull(auVar123._0_8_,0x6625662566256625,2);
          auVar124 = NEON_umull(auVar123._0_8_,0x3408340834083408,2);
          uVar121 = auVar124._0_4_ >> 8;
          uVar126 = auVar124._4_4_ >> 8;
          uVar127 = auVar124._8_4_ >> 8;
          uVar128 = auVar124._12_4_ >> 8;
          uVar111 = (uVar67 + (auVar122._0_4_ >> 8)) - 0x4515;
          uVar71 = (uVar70 + (auVar122._4_4_ >> 8)) - 0x4515;
          uVar75 = (uVar74 + (auVar122._8_4_ >> 8)) - 0x4515;
          uVar79 = (uVar78 + (auVar122._12_4_ >> 8)) - 0x4515;
          uVar113 = (((auVar52._0_4_ >> 8) + 0x2204) - uVar56) - uVar121;
          uVar114 = (((auVar52._4_4_ >> 8) + 0x2204) - uVar60) - uVar126;
          uVar115 = (((auVar52._8_4_ >> 8) + 0x2204) - uVar62) - uVar127;
          uVar65 = (((auVar52._12_4_ >> 8) + 0x2204) - uVar64) - uVar128;
          uVar121 = (((auVar82._0_4_ >> 8) + 0x2204) - uVar56) - uVar121;
          uVar126 = (((auVar82._4_4_ >> 8) + 0x2204) - uVar60) - uVar126;
          uVar127 = (((auVar82._8_4_ >> 8) + 0x2204) - uVar62) - uVar127;
          uVar128 = (((auVar82._12_4_ >> 8) + 0x2204) - uVar64) - uVar128;
          bVar46 = 0xff - (char)((int)uVar111 >> 0x1f);
          bVar59 = 0xff - (char)((int)uVar71 >> 0x1f);
          bVar61 = 0xff - (char)((int)uVar75 >> 0x1f);
          bVar63 = 0xff - (char)((int)uVar79 >> 0x1f);
          auVar123[0] = bVar46 ^ (bVar46 ^ (byte)(uVar111 >> 6)) & -(uVar111 < 0x4000);
          uVar81 = (uVar80 + (auVar122._0_4_ >> 8)) - 0x4515;
          uVar91 = (uVar90 + (auVar122._4_4_ >> 8)) - 0x4515;
          uVar100 = (uVar99 + (auVar122._8_4_ >> 8)) - 0x4515;
          uVar109 = (uVar108 + (auVar122._12_4_ >> 8)) - 0x4515;
          bVar6 = 0xff - (char)((int)uVar116 >> 0x1f);
          bVar68 = 0xff - (char)((int)uVar118 >> 0x1f);
          bVar72 = 0xff - (char)((int)uVar119 >> 0x1f);
          bVar76 = 0xff - (char)((int)uVar120 >> 0x1f);
          uVar56 = (uVar67 + (auVar112._0_4_ >> 8)) - 0x379a;
          uVar131 = (uVar70 + (auVar112._4_4_ >> 8)) - 0x379a;
          uVar133 = (uVar74 + (auVar112._8_4_ >> 8)) - 0x379a;
          uVar135 = (uVar78 + (auVar112._12_4_ >> 8)) - 0x379a;
          bVar12 = (byte)(uVar81 >> 6);
          bVar13 = (byte)(uVar91 >> 6);
          bVar14 = (byte)(uVar100 >> 6);
          bVar15 = (byte)(uVar109 >> 6);
          bVar46 = 0xff - (char)((int)uVar56 >> 0x1f);
          bVar83 = 0xff - (char)((int)uVar131 >> 0x1f);
          bVar92 = 0xff - (char)((int)uVar133 >> 0x1f);
          bVar101 = 0xff - (char)((int)uVar135 >> 0x1f);
          auVar129[0] = bVar46 ^ (bVar46 ^ (byte)(uVar56 >> 6)) & -(uVar56 < 0x4000);
          uVar67 = (uVar51 + (auVar110._0_4_ >> 8)) - 0x4515;
          uVar111 = (uVar53 + (auVar110._4_4_ >> 8)) - 0x4515;
          uVar70 = (uVar54 + (auVar110._8_4_ >> 8)) - 0x4515;
          uVar74 = (uVar55 + (auVar110._12_4_ >> 8)) - 0x4515;
          bVar11 = 0xff - (char)((int)uVar113 >> 0x1f);
          bVar84 = 0xff - (char)((int)uVar114 >> 0x1f);
          bVar93 = 0xff - (char)((int)uVar115 >> 0x1f);
          bVar102 = 0xff - (char)((int)uVar65 >> 0x1f);
          uVar78 = (uVar80 + (auVar112._0_4_ >> 8)) - 0x379a;
          uVar80 = (uVar90 + (auVar112._4_4_ >> 8)) - 0x379a;
          uVar90 = (uVar99 + (auVar112._8_4_ >> 8)) - 0x379a;
          uVar99 = (uVar108 + (auVar112._12_4_ >> 8)) - 0x379a;
          bVar42 = 0xff - (char)((int)uVar67 >> 0x1f);
          bVar85 = 0xff - (char)((int)uVar111 >> 0x1f);
          bVar94 = 0xff - (char)((int)uVar70 >> 0x1f);
          bVar103 = 0xff - (char)((int)uVar74 >> 0x1f);
          bVar8 = 0xff - (char)((int)uVar78 >> 0x1f);
          bVar86 = 0xff - (char)((int)uVar80 >> 0x1f);
          bVar95 = 0xff - (char)((int)uVar90 >> 0x1f);
          bVar104 = 0xff - (char)((int)uVar99 >> 0x1f);
          uVar56 = (uVar47 + (auVar110._0_4_ >> 8)) - 0x4515;
          uVar60 = (uVar48 + (auVar110._4_4_ >> 8)) - 0x4515;
          uVar62 = (uVar49 + (auVar110._8_4_ >> 8)) - 0x4515;
          uVar64 = (uVar50 + (auVar110._12_4_ >> 8)) - 0x4515;
          bVar7 = 0xff - (char)((int)uVar121 >> 0x1f);
          bVar87 = 0xff - (char)((int)uVar126 >> 0x1f);
          bVar96 = 0xff - (char)((int)uVar127 >> 0x1f);
          bVar105 = 0xff - (char)((int)uVar128 >> 0x1f);
          uVar51 = (uVar51 + (auVar117._0_4_ >> 8)) - 0x379a;
          uVar53 = (uVar53 + (auVar117._4_4_ >> 8)) - 0x379a;
          uVar54 = (uVar54 + (auVar117._8_4_ >> 8)) - 0x379a;
          uVar55 = (uVar55 + (auVar117._12_4_ >> 8)) - 0x379a;
          bVar16 = (byte)(uVar56 >> 6);
          bVar17 = (byte)(uVar60 >> 6);
          bVar18 = (byte)(uVar62 >> 6);
          bVar19 = (byte)(uVar64 >> 6);
          uVar47 = (uVar47 + (auVar117._0_4_ >> 8)) - 0x379a;
          uVar48 = (uVar48 + (auVar117._4_4_ >> 8)) - 0x379a;
          uVar49 = (uVar49 + (auVar117._8_4_ >> 8)) - 0x379a;
          uVar50 = (uVar50 + (auVar117._12_4_ >> 8)) - 0x379a;
          bVar46 = 0xff - (char)((int)uVar51 >> 0x1f);
          bVar88 = 0xff - (char)((int)uVar53 >> 0x1f);
          bVar97 = 0xff - (char)((int)uVar54 >> 0x1f);
          bVar106 = 0xff - (char)((int)uVar55 >> 0x1f);
          bVar9 = 0xff - (char)((int)uVar47 >> 0x1f);
          bVar89 = 0xff - (char)((int)uVar48 >> 0x1f);
          bVar98 = 0xff - (char)((int)uVar49 >> 0x1f);
          bVar107 = 0xff - (char)((int)uVar50 >> 0x1f);
          auVar129[1] = bVar83 ^ (bVar83 ^ (byte)(uVar131 >> 6)) & -(uVar131 < 0x4000);
          auVar129[2] = bVar92 ^ (bVar92 ^ (byte)(uVar133 >> 6)) & -(uVar133 < 0x4000);
          auVar129[3] = bVar101 ^ (bVar101 ^ (byte)(uVar135 >> 6)) & -(uVar135 < 0x4000);
          auVar129[4] = bVar46 ^ (bVar46 ^ (byte)(uVar51 >> 6)) & -(uVar51 < 0x4000);
          auVar129[5] = bVar88 ^ (bVar88 ^ (byte)(uVar53 >> 6)) & -(uVar53 < 0x4000);
          auVar129[6] = bVar97 ^ (bVar97 ^ (byte)(uVar54 >> 6)) & -(uVar54 < 0x4000);
          auVar129[7] = bVar106 ^ (bVar106 ^ (byte)(uVar55 >> 6)) & -(uVar55 < 0x4000);
          auVar123[1] = bVar59 ^ (bVar59 ^ (byte)(uVar71 >> 6)) & -(uVar71 < 0x4000);
          auVar123[2] = bVar61 ^ (bVar61 ^ (byte)(uVar75 >> 6)) & -(uVar75 < 0x4000);
          auVar123[3] = bVar63 ^ (bVar63 ^ (byte)(uVar79 >> 6)) & -(uVar79 < 0x4000);
          auVar123[4] = bVar42 ^ (bVar42 ^ (byte)(uVar67 >> 6)) & -(uVar67 < 0x4000);
          auVar123[5] = bVar85 ^ (bVar85 ^ (byte)(uVar111 >> 6)) & -(uVar111 < 0x4000);
          auVar123[6] = bVar94 ^ (bVar94 ^ (byte)(uVar70 >> 6)) & -(uVar70 < 0x4000);
          auVar123[7] = bVar103 ^ (bVar103 ^ (byte)(uVar74 >> 6)) & -(uVar74 < 0x4000);
          auVar125[1] = bVar68 ^ (bVar68 ^ (byte)(uVar118 >> 6)) & -(uVar118 < 0x4000);
          auVar125[0] = bVar6 ^ (bVar6 ^ (byte)(uVar116 >> 6)) & -(uVar116 < 0x4000);
          auVar125[2] = bVar72 ^ (bVar72 ^ (byte)(uVar119 >> 6)) & -(uVar119 < 0x4000);
          auVar125[3] = bVar76 ^ (bVar76 ^ (byte)(uVar120 >> 6)) & -(uVar120 < 0x4000);
          auVar125[4] = bVar7 ^ (bVar7 ^ (byte)(uVar121 >> 6)) & -(uVar121 < 0x4000);
          auVar125[5] = bVar87 ^ (bVar87 ^ (byte)(uVar126 >> 6)) & -(uVar126 < 0x4000);
          auVar125[6] = bVar96 ^ (bVar96 ^ (byte)(uVar127 >> 6)) & -(uVar127 < 0x4000);
          auVar125[7] = bVar105 ^ (bVar105 ^ (byte)(uVar128 >> 6)) & -(uVar128 < 0x4000);
          auVar123[8] = bVar8 ^ (bVar8 ^ (byte)(uVar78 >> 6)) & -(uVar78 < 0x4000);
          auVar123[9] = bVar86 ^ (bVar86 ^ (byte)(uVar80 >> 6)) & -(uVar80 < 0x4000);
          auVar123[10] = bVar95 ^ (bVar95 ^ (byte)(uVar90 >> 6)) & -(uVar90 < 0x4000);
          auVar123[0xb] = bVar104 ^ (bVar104 ^ (byte)(uVar99 >> 6)) & -(uVar99 < 0x4000);
          auVar123[0xc] = bVar9 ^ (bVar9 ^ (byte)(uVar47 >> 6)) & -(uVar47 < 0x4000);
          auVar123[0xd] = bVar89 ^ (bVar89 ^ (byte)(uVar48 >> 6)) & -(uVar48 < 0x4000);
          auVar123[0xe] = bVar98 ^ (bVar98 ^ (byte)(uVar49 >> 6)) & -(uVar49 < 0x4000);
          auVar123[0xf] = bVar107 ^ (bVar107 ^ (byte)(uVar50 >> 6)) & -(uVar50 < 0x4000);
          auVar129[8] = bVar10 ^ (bVar10 ^ (byte)(uVar66 >> 6)) & -(uVar66 < 0x4000);
          auVar129[9] = bVar130 ^ (bVar130 ^ (byte)(uVar69 >> 6)) & -(uVar69 < 0x4000);
          auVar129[10] = bVar132 ^ (bVar132 ^ (byte)(uVar73 >> 6)) & -(uVar73 < 0x4000);
          auVar129[0xb] = bVar134 ^ (bVar134 ^ (byte)(uVar77 >> 6)) & -(uVar77 < 0x4000);
          auVar129[0xc] = bVar11 ^ (bVar11 ^ (byte)(uVar113 >> 6)) & -(uVar113 < 0x4000);
          auVar129[0xd] = bVar84 ^ (bVar84 ^ (byte)(uVar114 >> 6)) & -(uVar114 < 0x4000);
          auVar129[0xe] = bVar93 ^ (bVar93 ^ (byte)(uVar115 >> 6)) & -(uVar115 < 0x4000);
          auVar129[0xf] = bVar102 ^ (bVar102 ^ (byte)(uVar65 >> 6)) & -(uVar65 < 0x4000);
          auVar125[8] = bVar12 ^ (bVar12 ^ -(char)((int)uVar81 >> 0x1f) - 1U) & -(0x3fff < uVar81);
          auVar125[9] = bVar13 ^ (bVar13 ^ 0xffU - (char)((int)uVar91 >> 0x1f)) & -(0x3fff < uVar91)
          ;
          auVar125[10] = bVar14 ^ (bVar14 ^ 0xffU - (char)((int)uVar100 >> 0x1f)) &
                                  -(0x3fff < uVar100);
          auVar125[0xb] =
               bVar15 ^ (bVar15 ^ 0xffU - (char)((int)uVar109 >> 0x1f)) & -(0x3fff < uVar109);
          auVar125[0xc] = bVar16 ^ (bVar16 ^ -(char)((int)uVar56 >> 0x1f) - 1U) & -(0x3fff < uVar56)
          ;
          auVar125[0xd] =
               bVar17 ^ (bVar17 ^ 0xffU - (char)((int)uVar60 >> 0x1f)) & -(0x3fff < uVar60);
          auVar125[0xe] =
               bVar18 ^ (bVar18 ^ 0xffU - (char)((int)uVar62 >> 0x1f)) & -(0x3fff < uVar62);
          auVar125[0xf] =
               bVar19 ^ (bVar19 ^ 0xffU - (char)((int)uVar64 >> 0x1f)) & -(0x3fff < uVar64);
          auVar110._8_8_ = 0xa02ffffffff0901;
          auVar110._0_8_ = 0xffffffff0800ffff;
          uVar44 = uVar44 - 8;
          auVar112 = a64_TBL(ZEXT816(0),auVar123,auVar110);
          auVar52._8_8_ = 0xd05ffffffff0c04;
          auVar52._0_8_ = 0xffffffff0b03ffff;
          auVar110 = a64_TBL(ZEXT816(0),auVar129,auVar52);
          auVar117._8_8_ = 0xffff0a02ffffffff;
          auVar117._0_8_ = 0x901ffffffff0800;
          auVar52 = a64_TBL(ZEXT816(0),auVar129,auVar117);
          auVar82._8_8_ = 0xffff0c04ffffffff;
          auVar82._0_8_ = 0xb03ffffffff0a02;
          auVar52 = a64_TBL(ZEXT816(0),auVar52,auVar112,auVar20);
          auVar82 = a64_TBL(ZEXT816(0),auVar125,auVar82);
          auVar112._8_8_ = 0xffffffff0901ffff;
          auVar112._0_8_ = 0xffff0800ffffffff;
          auVar117 = a64_TBL(ZEXT816(0),auVar82,auVar110,auVar20);
          auVar110 = a64_TBL(ZEXT816(0),auVar123,auVar22);
          auVar82 = a64_TBL(ZEXT816(0),auVar125,auVar112);
          auVar124 = a64_TBL(ZEXT816(0),auVar125,auVar23);
          auVar112 = a64_TBL(ZEXT816(0),auVar123,auVar24);
          auVar112 = a64_TBL(ZEXT816(0),auVar112,auVar124,auVar20);
          auVar124 = a64_TBL(ZEXT816(0),auVar129,auVar25);
          auVar52 = a64_TBL(ZEXT816(0),auVar52,auVar82,auVar21);
          auVar117 = a64_TBL(ZEXT816(0),auVar117,auVar110,auVar21);
          auVar82 = a64_TBL(ZEXT816(0),auVar112,auVar124,auVar21);
          *(long *)(pbVar41 + 0x18) = auVar117._8_8_;
          *(long *)(pbVar41 + 0x10) = auVar117._0_8_;
          *(long *)(pbVar41 + 0x28) = auVar82._8_8_;
          *(long *)(pbVar41 + 0x20) = auVar82._0_8_;
          *(long *)(pbVar41 + 8) = auVar52._8_8_;
          *(long *)pbVar41 = auVar52._0_8_;
          param_2 = param_2 + 8;
          param_3 = param_3 + 8;
          pbVar41 = pbVar41 + 0x30;
        } while (uVar44 != 0);
        param_2 = pbVar4;
        param_3 = pbVar5;
        param_1 = pbVar2;
        param_4 = param_4 + uVar45 * 6;
        if (uVar1 == uVar45) goto joined_r0x00dfeebc;
      }
    }
    do {
      bVar46 = *param_2;
      uVar56 = (uint)*param_1 * 0x4a85 >> 8;
      uVar47 = (uVar56 + ((uint)*param_3 * 0x6625 >> 8)) - 0x379a;
      if (uVar47 >> 0xe == 0) {
        bVar42 = (byte)(uVar47 >> 6);
      }
      else {
        bVar42 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
      }
      uVar47 = ((uVar56 + 0x2204) - ((uint)bVar46 * 0x1913 >> 8)) - ((uint)*param_3 * 0x3408 >> 8);
      *param_4 = bVar42;
      if (uVar47 >> 0xe == 0) {
        bVar42 = (byte)(uVar47 >> 6);
      }
      else {
        bVar42 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
      }
      uVar47 = (uVar56 + ((uint)bVar46 * 0x811a >> 8)) - 0x4515;
      param_4[1] = bVar42;
      if (uVar47 >> 0xe == 0) {
        bVar46 = (byte)(uVar47 >> 6);
      }
      else {
        bVar46 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
      }
      param_4[2] = bVar46;
      bVar46 = *param_2;
      uVar56 = (uint)param_1[1] * 0x4a85 >> 8;
      uVar47 = (uVar56 + ((uint)*param_3 * 0x6625 >> 8)) - 0x379a;
      if (uVar47 >> 0xe == 0) {
        bVar42 = (byte)(uVar47 >> 6);
      }
      else {
        bVar42 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
      }
      uVar47 = ((uVar56 + 0x2204) - ((uint)bVar46 * 0x1913 >> 8)) - ((uint)*param_3 * 0x3408 >> 8);
      param_4[3] = bVar42;
      if (uVar47 >> 0xe == 0) {
        bVar42 = (byte)(uVar47 >> 6);
      }
      else {
        bVar42 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
      }
      uVar47 = (uVar56 + ((uint)bVar46 * 0x811a >> 8)) - 0x4515;
      param_4[4] = bVar42;
      if (uVar47 >> 0xe == 0) {
        bVar46 = (byte)(uVar47 >> 6);
      }
      else {
        bVar46 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
      }
      param_4[5] = bVar46;
      param_4 = param_4 + 6;
      pbVar2 = param_1 + 2;
      pbVar4 = param_2 + 1;
      pbVar5 = param_3 + 1;
      param_2 = pbVar4;
      param_3 = pbVar5;
      param_1 = pbVar2;
    } while (param_4 != pbVar3);
  }
joined_r0x00dfeebc:
  if ((param_5 & 1) != 0) {
    bVar46 = *pbVar4;
    uVar56 = (uint)*pbVar2 * 0x4a85 >> 8;
    uVar47 = (uVar56 + ((uint)*pbVar5 * 0x6625 >> 8)) - 0x379a;
    if (uVar47 >> 0xe == 0) {
      bVar42 = (byte)(uVar47 >> 6);
    }
    else {
      bVar42 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
    }
    uVar47 = ((uVar56 + 0x2204) - ((uint)bVar46 * 0x1913 >> 8)) - ((uint)*pbVar5 * 0x3408 >> 8);
    *pbVar3 = bVar42;
    if (uVar47 >> 0xe == 0) {
      bVar42 = (byte)(uVar47 >> 6);
    }
    else {
      bVar42 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
    }
    uVar47 = (uVar56 + ((uint)bVar46 * 0x811a >> 8)) - 0x4515;
    pbVar3[1] = bVar42;
    if (uVar47 >> 0xe == 0) {
      bVar46 = (byte)(uVar47 >> 6);
    }
    else {
      bVar46 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
    }
    pbVar3[2] = bVar46;
  }
  return;
}


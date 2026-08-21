
void FUN_0115c9b8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
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
  byte *pbVar19;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  long lVar39;
  byte bVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined1 auVar46 [16];
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar55;
  uint uVar56;
  undefined1 auVar54 [16];
  uint uVar57;
  uint uVar58;
  uint uVar60;
  uint uVar61;
  undefined1 auVar59 [16];
  uint uVar62;
  uint uVar63;
  uint uVar65;
  uint uVar66;
  undefined1 auVar64 [16];
  uint uVar67;
  uint uVar68;
  byte bVar69;
  uint uVar70;
  byte bVar71;
  uint uVar72;
  byte bVar73;
  uint uVar74;
  byte bVar75;
  uint uVar76;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  uint uVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  uint uVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  undefined1 auVar77 [16];
  uint uVar98;
  uint uVar99;
  uint uVar101;
  uint uVar102;
  undefined1 auVar100 [16];
  uint uVar103;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  undefined8 uVar104;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  undefined1 auVar105 [16];
  uint uVar115;
  undefined8 uVar116;
  uint uVar118;
  uint uVar119;
  undefined1 auVar117 [16];
  uint uVar120;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  
  pbVar36 = param_2;
  if ((param_5 & 0x3ffffffe) == 0) goto LAB_0115d018;
  lVar39 = (long)(int)((param_5 & 0x3ffffffe) << 2);
  uVar41 = lVar39 - 8;
  uVar1 = (uVar41 >> 3) + 1;
  pbVar36 = param_2 + uVar1;
  pbVar38 = param_1;
  pbVar35 = param_4;
  pbVar37 = param_3;
  if ((uVar1 < 8) || (uVar42 = uVar1 & 0x3ffffffffffffff8, uVar42 == 0)) {
LAB_0115ce5c:
    do {
      bVar75 = *pbVar38;
      bVar3 = *pbVar37;
      bVar40 = *param_2;
      *pbVar35 = 0xff;
      uVar45 = (uint)bVar75 * 0x4a85 >> 8;
      uVar44 = (uVar45 + ((uint)bVar3 * 0x6625 >> 8)) - 0x379a;
      if (uVar44 >> 0xe == 0) {
        bVar75 = (byte)(uVar44 >> 6);
      }
      else {
        bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      uVar44 = ((uVar45 + 0x2204) - ((uint)bVar40 * 0x1913 >> 8)) - ((uint)bVar3 * 0x3408 >> 8);
      pbVar35[1] = bVar75;
      if (uVar44 >> 0xe == 0) {
        bVar75 = (byte)(uVar44 >> 6);
      }
      else {
        bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      uVar44 = (uVar45 + ((uint)bVar40 * 0x811a >> 8)) - 0x4515;
      pbVar35[2] = bVar75;
      if (uVar44 >> 0xe == 0) {
        bVar75 = (byte)(uVar44 >> 6);
      }
      else {
        bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      pbVar35[3] = bVar75;
      bVar75 = pbVar38[1];
      bVar3 = *pbVar37;
      bVar40 = *param_2;
      pbVar35[4] = 0xff;
      uVar45 = (uint)bVar75 * 0x4a85 >> 8;
      uVar44 = (uVar45 + ((uint)bVar3 * 0x6625 >> 8)) - 0x379a;
      if (uVar44 >> 0xe == 0) {
        bVar75 = (byte)(uVar44 >> 6);
      }
      else {
        bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      uVar44 = ((uVar45 + 0x2204) - ((uint)bVar40 * 0x1913 >> 8)) - ((uint)bVar3 * 0x3408 >> 8);
      pbVar35[5] = bVar75;
      if (uVar44 >> 0xe == 0) {
        bVar75 = (byte)(uVar44 >> 6);
      }
      else {
        bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      uVar44 = (uVar45 + ((uint)bVar40 * 0x811a >> 8)) - 0x4515;
      pbVar35[6] = bVar75;
      if (uVar44 >> 0xe == 0) {
        bVar75 = (byte)(uVar44 >> 6);
      }
      else {
        bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      pbVar35[7] = bVar75;
      pbVar35 = pbVar35 + 8;
      param_2 = param_2 + 1;
      pbVar37 = pbVar37 + 1;
      pbVar38 = pbVar38 + 2;
    } while (pbVar35 != param_4 + lVar39);
  }
  else {
    pbVar34 = param_4 + lVar39;
    lVar2 = (uVar41 >> 3) + 1;
    if ((param_4 < param_1 + (uVar41 >> 2) + 2 && param_1 < pbVar34) ||
       ((param_4 < param_2 + lVar2 && param_2 < pbVar34 ||
        (param_4 < param_3 + lVar2 && param_3 < pbVar34)))) goto LAB_0115ce5c;
    pbVar35 = param_2;
    pbVar37 = param_4;
    pbVar38 = param_3;
    uVar43 = uVar42;
    pbVar34 = param_1;
    do {
      bVar75 = *pbVar34;
      pbVar19 = pbVar34 + 1;
      pbVar20 = pbVar34 + 2;
      pbVar21 = pbVar34 + 3;
      pbVar22 = pbVar34 + 4;
      pbVar23 = pbVar34 + 5;
      pbVar24 = pbVar34 + 6;
      pbVar25 = pbVar34 + 7;
      pbVar26 = pbVar34 + 8;
      pbVar27 = pbVar34 + 9;
      pbVar28 = pbVar34 + 10;
      pbVar29 = pbVar34 + 0xb;
      pbVar30 = pbVar34 + 0xc;
      pbVar31 = pbVar34 + 0xd;
      pbVar32 = pbVar34 + 0xe;
      pbVar33 = pbVar34 + 0xf;
      pbVar34 = pbVar34 + 0x10;
      uVar104 = *(undefined8 *)pbVar35;
      uVar116 = *(undefined8 *)pbVar38;
      auVar46._0_8_ =
           CONCAT17(0,CONCAT16(*pbVar24,(uint6)CONCAT14(*pbVar22,(uint)CONCAT12(*pbVar20,(ushort)
                                                  bVar75))));
      auVar46[8] = *pbVar26;
      auVar46[9] = 0;
      auVar46[10] = *pbVar28;
      auVar46[0xb] = 0;
      auVar46[0xc] = *pbVar30;
      auVar46[0xd] = 0;
      auVar46[0xe] = *pbVar32;
      auVar46[0xf] = 0;
      auVar105._0_8_ =
           CONCAT17(0,CONCAT16((char)((ulong)uVar104 >> 0x18),
                               (uint6)CONCAT14((char)((ulong)uVar104 >> 0x10),
                                               (uint)CONCAT12((char)((ulong)uVar104 >> 8),
                                                              (ushort)(byte)uVar104))));
      auVar105[8] = (char)((ulong)uVar104 >> 0x20);
      auVar105[9] = 0;
      auVar105[10] = (char)((ulong)uVar104 >> 0x28);
      auVar105[0xb] = 0;
      auVar105[0xc] = (char)((ulong)uVar104 >> 0x30);
      auVar105[0xd] = 0;
      auVar105[0xe] = (char)((ulong)uVar104 >> 0x38);
      auVar105[0xf] = 0;
      auVar117._0_8_ =
           CONCAT17(0,CONCAT16((char)((ulong)uVar116 >> 0x18),
                               (uint6)CONCAT14((char)((ulong)uVar116 >> 0x10),
                                               (uint)CONCAT12((char)((ulong)uVar116 >> 8),
                                                              (ushort)(byte)uVar116))));
      auVar117[8] = (char)((ulong)uVar116 >> 0x20);
      auVar117[9] = 0;
      auVar117[10] = (char)((ulong)uVar116 >> 0x28);
      auVar117[0xb] = 0;
      auVar117[0xc] = (char)((ulong)uVar116 >> 0x30);
      auVar117[0xd] = 0;
      auVar117[0xe] = (char)((ulong)uVar116 >> 0x38);
      auVar117[0xf] = 0;
      auVar77._0_8_ =
           CONCAT17(0,CONCAT16(*pbVar25,(uint6)CONCAT14(*pbVar23,(uint)CONCAT12(*pbVar21,(ushort)*
                                                  pbVar19))));
      auVar77[8] = *pbVar27;
      auVar77[9] = 0;
      auVar77[10] = *pbVar29;
      auVar77[0xb] = 0;
      auVar77[0xc] = *pbVar31;
      auVar77[0xd] = 0;
      auVar77[0xe] = *pbVar33;
      auVar77[0xf] = 0;
      auVar100 = NEON_ext(auVar46,auVar46,8,1);
      auVar46 = NEON_umull(auVar46._0_8_,0x4a854a854a854a85,2);
      auVar64 = NEON_umull(auVar105._0_8_,0x1913191319131913,2);
      auVar54 = NEON_ext(auVar117,auVar117,8,1);
      auVar59 = NEON_umull(auVar117._0_8_,0x6625662566256625,2);
      auVar117 = NEON_umull(auVar117._0_8_,0x3408340834083408,2);
      uVar63 = auVar64._0_4_ >> 8;
      uVar65 = auVar64._4_4_ >> 8;
      uVar66 = auVar64._8_4_ >> 8;
      uVar67 = auVar64._12_4_ >> 8;
      uVar115 = auVar117._0_4_ >> 8;
      uVar118 = auVar117._4_4_ >> 8;
      uVar119 = auVar117._8_4_ >> 8;
      uVar120 = auVar117._12_4_ >> 8;
      uVar125 = (((auVar46._0_4_ >> 8) + 0x2204) - uVar63) - uVar115;
      uVar127 = (((auVar46._4_4_ >> 8) + 0x2204) - uVar65) - uVar118;
      uVar129 = (((auVar46._8_4_ >> 8) + 0x2204) - uVar66) - uVar119;
      uVar131 = (((auVar46._12_4_ >> 8) + 0x2204) - uVar67) - uVar120;
      bVar40 = 0xff - (char)((int)uVar125 >> 0x1f);
      bVar69 = 0xff - (char)((int)uVar127 >> 0x1f);
      bVar71 = 0xff - (char)((int)uVar129 >> 0x1f);
      bVar73 = 0xff - (char)((int)uVar131 >> 0x1f);
      auVar117 = NEON_ext(auVar77,auVar77,8,1);
      auVar77 = NEON_umull(auVar77._0_8_,0x4a854a854a854a85,2);
      uVar44 = auVar46._0_4_ >> 8;
      uVar47 = auVar46._4_4_ >> 8;
      uVar49 = auVar46._8_4_ >> 8;
      uVar51 = auVar46._12_4_ >> 8;
      uVar68 = auVar77._0_4_ >> 8;
      uVar70 = auVar77._4_4_ >> 8;
      uVar72 = auVar77._8_4_ >> 8;
      uVar74 = auVar77._12_4_ >> 8;
      auVar46 = NEON_ext(auVar105,auVar105,8,1);
      auVar105 = NEON_umull(auVar105._0_8_,0x811a811a811a811a,2);
      auVar100 = NEON_umull(auVar100._0_8_,0x4a854a854a854a85,2);
      auVar64 = NEON_umull(auVar46._0_8_,0x1913191319131913,2);
      auVar117 = NEON_umull(auVar117._0_8_,0x4a854a854a854a85,2);
      uVar99 = auVar100._0_4_ >> 8;
      uVar101 = auVar100._4_4_ >> 8;
      uVar102 = auVar100._8_4_ >> 8;
      uVar103 = auVar100._12_4_ >> 8;
      uVar58 = auVar64._0_4_ >> 8;
      uVar60 = auVar64._4_4_ >> 8;
      uVar61 = auVar64._8_4_ >> 8;
      uVar62 = auVar64._12_4_ >> 8;
      uVar126 = auVar117._0_4_ >> 8;
      uVar128 = auVar117._4_4_ >> 8;
      uVar130 = auVar117._8_4_ >> 8;
      uVar132 = auVar117._12_4_ >> 8;
      auVar64 = NEON_umull(auVar54._0_8_,0x6625662566256625,2);
      uVar45 = (uVar44 + (auVar105._0_4_ >> 8)) - 0x4515;
      uVar48 = (uVar47 + (auVar105._4_4_ >> 8)) - 0x4515;
      uVar50 = (uVar49 + (auVar105._8_4_ >> 8)) - 0x4515;
      uVar52 = (uVar51 + (auVar105._12_4_ >> 8)) - 0x4515;
      uVar115 = (((auVar77._0_4_ >> 8) + 0x2204) - uVar63) - uVar115;
      uVar118 = (((auVar77._4_4_ >> 8) + 0x2204) - uVar65) - uVar118;
      uVar119 = (((auVar77._8_4_ >> 8) + 0x2204) - uVar66) - uVar119;
      uVar120 = (((auVar77._12_4_ >> 8) + 0x2204) - uVar67) - uVar120;
      auVar46 = NEON_umull(auVar46._0_8_,0x811a811a811a811a,2);
      uVar63 = (uVar68 + (auVar105._0_4_ >> 8)) - 0x4515;
      uVar65 = (uVar70 + (auVar105._4_4_ >> 8)) - 0x4515;
      uVar66 = (uVar72 + (auVar105._8_4_ >> 8)) - 0x4515;
      uVar67 = (uVar74 + (auVar105._12_4_ >> 8)) - 0x4515;
      bVar5 = 0xff - (char)((int)uVar45 >> 0x1f);
      bVar106 = 0xff - (char)((int)uVar48 >> 0x1f);
      bVar109 = 0xff - (char)((int)uVar50 >> 0x1f);
      bVar112 = 0xff - (char)((int)uVar52 >> 0x1f);
      auVar54 = NEON_umull(auVar54._0_8_,0x3408340834083408,2);
      uVar53 = auVar54._0_4_ >> 8;
      uVar55 = auVar54._4_4_ >> 8;
      uVar56 = auVar54._8_4_ >> 8;
      uVar57 = auVar54._12_4_ >> 8;
      uVar121 = (((auVar100._0_4_ >> 8) + 0x2204) - uVar58) - uVar53;
      uVar122 = (((auVar100._4_4_ >> 8) + 0x2204) - uVar60) - uVar55;
      uVar123 = (((auVar100._8_4_ >> 8) + 0x2204) - uVar61) - uVar56;
      uVar124 = (((auVar100._12_4_ >> 8) + 0x2204) - uVar62) - uVar57;
      uVar53 = (((auVar117._0_4_ >> 8) + 0x2204) - uVar58) - uVar53;
      uVar55 = (((auVar117._4_4_ >> 8) + 0x2204) - uVar60) - uVar55;
      uVar56 = (((auVar117._8_4_ >> 8) + 0x2204) - uVar61) - uVar56;
      uVar57 = (((auVar117._12_4_ >> 8) + 0x2204) - uVar62) - uVar57;
      bVar9 = 0xff - (char)((int)uVar115 >> 0x1f);
      bVar107 = 0xff - (char)((int)uVar118 >> 0x1f);
      bVar110 = 0xff - (char)((int)uVar119 >> 0x1f);
      bVar113 = 0xff - (char)((int)uVar120 >> 0x1f);
      uVar76 = (uVar44 + (auVar59._0_4_ >> 8)) - 0x379a;
      uVar84 = (uVar47 + (auVar59._4_4_ >> 8)) - 0x379a;
      uVar91 = (uVar49 + (auVar59._8_4_ >> 8)) - 0x379a;
      uVar98 = (uVar51 + (auVar59._12_4_ >> 8)) - 0x379a;
      bVar11 = (byte)(uVar63 >> 6);
      bVar12 = (byte)(uVar65 >> 6);
      bVar13 = (byte)(uVar66 >> 6);
      bVar14 = (byte)(uVar67 >> 6);
      uVar44 = (uVar99 + (auVar64._0_4_ >> 8)) - 0x379a;
      uVar47 = (uVar101 + (auVar64._4_4_ >> 8)) - 0x379a;
      uVar49 = (uVar102 + (auVar64._8_4_ >> 8)) - 0x379a;
      uVar51 = (uVar103 + (auVar64._12_4_ >> 8)) - 0x379a;
      bVar75 = 0xff - (char)((int)uVar76 >> 0x1f);
      bVar108 = 0xff - (char)((int)uVar84 >> 0x1f);
      bVar111 = 0xff - (char)((int)uVar91 >> 0x1f);
      bVar114 = 0xff - (char)((int)uVar98 >> 0x1f);
      uVar99 = (uVar99 + (auVar46._0_4_ >> 8)) - 0x4515;
      uVar101 = (uVar101 + (auVar46._4_4_ >> 8)) - 0x4515;
      uVar102 = (uVar102 + (auVar46._8_4_ >> 8)) - 0x4515;
      uVar103 = (uVar103 + (auVar46._12_4_ >> 8)) - 0x4515;
      bVar4 = 0xff - (char)((int)uVar121 >> 0x1f);
      bVar78 = 0xff - (char)((int)uVar122 >> 0x1f);
      bVar85 = 0xff - (char)((int)uVar123 >> 0x1f);
      bVar92 = 0xff - (char)((int)uVar124 >> 0x1f);
      uVar58 = (uVar68 + (auVar59._0_4_ >> 8)) - 0x379a;
      uVar60 = (uVar70 + (auVar59._4_4_ >> 8)) - 0x379a;
      uVar61 = (uVar72 + (auVar59._8_4_ >> 8)) - 0x379a;
      uVar62 = (uVar74 + (auVar59._12_4_ >> 8)) - 0x379a;
      bVar6 = 0xff - (char)((int)uVar99 >> 0x1f);
      bVar79 = 0xff - (char)((int)uVar101 >> 0x1f);
      bVar86 = 0xff - (char)((int)uVar102 >> 0x1f);
      bVar93 = 0xff - (char)((int)uVar103 >> 0x1f);
      uVar68 = (uVar126 + (auVar64._0_4_ >> 8)) - 0x379a;
      uVar70 = (uVar128 + (auVar64._4_4_ >> 8)) - 0x379a;
      uVar72 = (uVar130 + (auVar64._8_4_ >> 8)) - 0x379a;
      uVar74 = (uVar132 + (auVar64._12_4_ >> 8)) - 0x379a;
      bVar7 = 0xff - (char)((int)uVar58 >> 0x1f);
      bVar80 = 0xff - (char)((int)uVar60 >> 0x1f);
      bVar87 = 0xff - (char)((int)uVar61 >> 0x1f);
      bVar94 = 0xff - (char)((int)uVar62 >> 0x1f);
      uVar126 = (uVar126 + (auVar46._0_4_ >> 8)) - 0x4515;
      uVar128 = (uVar128 + (auVar46._4_4_ >> 8)) - 0x4515;
      uVar130 = (uVar130 + (auVar46._8_4_ >> 8)) - 0x4515;
      uVar132 = (uVar132 + (auVar46._12_4_ >> 8)) - 0x4515;
      bVar10 = 0xff - (char)((int)uVar53 >> 0x1f);
      bVar81 = 0xff - (char)((int)uVar55 >> 0x1f);
      bVar88 = 0xff - (char)((int)uVar56 >> 0x1f);
      bVar95 = 0xff - (char)((int)uVar57 >> 0x1f);
      bVar15 = (byte)(uVar126 >> 6);
      bVar16 = (byte)(uVar128 >> 6);
      bVar17 = (byte)(uVar130 >> 6);
      bVar18 = (byte)(uVar132 >> 6);
      bVar3 = 0xff - (char)((int)uVar44 >> 0x1f);
      bVar82 = 0xff - (char)((int)uVar47 >> 0x1f);
      bVar89 = 0xff - (char)((int)uVar49 >> 0x1f);
      bVar96 = 0xff - (char)((int)uVar51 >> 0x1f);
      bVar8 = 0xff - (char)((int)uVar68 >> 0x1f);
      bVar83 = 0xff - (char)((int)uVar70 >> 0x1f);
      bVar90 = 0xff - (char)((int)uVar72 >> 0x1f);
      bVar97 = 0xff - (char)((int)uVar74 >> 0x1f);
      uVar43 = uVar43 - 8;
      pbVar37[0x20] = 0xff;
      pbVar37[0x21] = bVar3 ^ (bVar3 ^ (byte)(uVar44 >> 6)) & -(uVar44 < 0x4000);
      pbVar37[0x22] = bVar4 ^ (bVar4 ^ (byte)(uVar121 >> 6)) & -(uVar121 < 0x4000);
      pbVar37[0x23] = bVar6 ^ (bVar6 ^ (byte)(uVar99 >> 6)) & -(uVar99 < 0x4000);
      pbVar37[0x24] = 0xff;
      pbVar37[0x25] = bVar8 ^ (bVar8 ^ (byte)(uVar68 >> 6)) & -(uVar68 < 0x4000);
      pbVar37[0x26] = bVar10 ^ (bVar10 ^ (byte)(uVar53 >> 6)) & -(uVar53 < 0x4000);
      pbVar37[0x27] = bVar15 ^ (bVar15 ^ -(char)((int)uVar126 >> 0x1f) - 1U) & -(0x3fff < uVar126);
      pbVar37[0x28] = 0xff;
      pbVar37[0x29] = bVar82 ^ (bVar82 ^ (byte)(uVar47 >> 6)) & -(uVar47 < 0x4000);
      pbVar37[0x2a] = bVar78 ^ (bVar78 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000);
      pbVar37[0x2b] = bVar79 ^ (bVar79 ^ (byte)(uVar101 >> 6)) & -(uVar101 < 0x4000);
      pbVar37[0x2c] = 0xff;
      pbVar37[0x2d] = bVar83 ^ (bVar83 ^ (byte)(uVar70 >> 6)) & -(uVar70 < 0x4000);
      pbVar37[0x2e] = bVar81 ^ (bVar81 ^ (byte)(uVar55 >> 6)) & -(uVar55 < 0x4000);
      pbVar37[0x2f] = bVar16 ^ (bVar16 ^ 0xffU - (char)((int)uVar128 >> 0x1f)) & -(0x3fff < uVar128)
      ;
      *(ulong *)(pbVar37 + 0x38) =
           CONCAT17(bVar18 ^ (bVar18 ^ 0xffU - (char)((int)uVar132 >> 0x1f)) & -(0x3fff < uVar132),
                    CONCAT16(bVar95 ^ (bVar95 ^ (byte)(uVar57 >> 6)) & -(uVar57 < 0x4000),
                             CONCAT15(bVar97 ^ (bVar97 ^ (byte)(uVar74 >> 6)) & -(uVar74 < 0x4000),
                                      (int5)CONCAT44(0xffffffff,
                                                     CONCAT13(bVar93 ^ (bVar93 ^ (byte)(uVar103 >> 6
                                                                                       )) &
                                                                       -(uVar103 < 0x4000),
                                                              CONCAT12(bVar92 ^ (bVar92 ^ (byte)(
                                                  uVar124 >> 6)) & -(uVar124 < 0x4000),
                                                  CONCAT11(bVar96 ^ (bVar96 ^ (byte)(uVar51 >> 6)) &
                                                                    -(uVar51 < 0x4000),0xff)))))));
      *(ulong *)(pbVar37 + 0x30) =
           CONCAT17(bVar17 ^ (bVar17 ^ 0xffU - (char)((int)uVar130 >> 0x1f)) & -(0x3fff < uVar130),
                    CONCAT16(bVar88 ^ (bVar88 ^ (byte)(uVar56 >> 6)) & -(uVar56 < 0x4000),
                             CONCAT15(bVar90 ^ (bVar90 ^ (byte)(uVar72 >> 6)) & -(uVar72 < 0x4000),
                                      (int5)CONCAT44(0xff0000ff,
                                                     CONCAT13(bVar86 ^ (bVar86 ^ (byte)(uVar102 >> 6
                                                                                       )) &
                                                                       -(uVar102 < 0x4000),
                                                              CONCAT12(bVar85 ^ (bVar85 ^ (byte)(
                                                  uVar123 >> 6)) & -(uVar123 < 0x4000),
                                                  CONCAT11(bVar89 ^ (bVar89 ^ (byte)(uVar49 >> 6)) &
                                                                    -(uVar49 < 0x4000),0xff)))))));
      *(ulong *)(pbVar37 + 8) =
           CONCAT17(bVar12 ^ (bVar12 ^ 0xffU - (char)((int)uVar65 >> 0x1f)) & -(0x3fff < uVar65),
                    CONCAT16(bVar107 ^ (bVar107 ^ (byte)(uVar118 >> 6)) & -(uVar118 < 0x4000),
                             CONCAT15(bVar80 ^ (bVar80 ^ (byte)(uVar60 >> 6)) & -(uVar60 < 0x4000),
                                      (int5)CONCAT44(0xffffffff,
                                                     CONCAT13(bVar106 ^ (bVar106 ^
                                                                        (byte)(uVar48 >> 6)) &
                                                                        -(uVar48 < 0x4000),
                                                              CONCAT12(bVar69 ^ (bVar69 ^ (byte)(
                                                  uVar127 >> 6)) & -(uVar127 < 0x4000),
                                                  CONCAT11(bVar108 ^ (bVar108 ^ (byte)(uVar84 >> 6))
                                                                     & -(uVar84 < 0x4000),0xff))))))
                   );
      *(ulong *)pbVar37 =
           CONCAT17(bVar11 ^ (bVar11 ^ -(char)((int)uVar63 >> 0x1f) - 1U) & -(0x3fff < uVar63),
                    CONCAT16(bVar9 ^ (bVar9 ^ (byte)(uVar115 >> 6)) & -(uVar115 < 0x4000),
                             CONCAT15(bVar7 ^ (bVar7 ^ (byte)(uVar58 >> 6)) & -(uVar58 < 0x4000),
                                      (int5)CONCAT44(0xff0000ff,
                                                     CONCAT13(bVar5 ^ (bVar5 ^ (byte)(uVar45 >> 6))
                                                                      & -(uVar45 < 0x4000),
                                                              CONCAT12(bVar40 ^ (bVar40 ^ (byte)(
                                                  uVar125 >> 6)) & -(uVar125 < 0x4000),
                                                  CONCAT11(bVar75 ^ (bVar75 ^ (byte)(uVar76 >> 6)) &
                                                                    -(uVar76 < 0x4000),0xff)))))));
      *(ulong *)(pbVar37 + 0x18) =
           CONCAT17(bVar14 ^ (bVar14 ^ 0xffU - (char)((int)uVar67 >> 0x1f)) & -(0x3fff < uVar67),
                    CONCAT16(bVar113 ^ (bVar113 ^ (byte)(uVar120 >> 6)) & -(uVar120 < 0x4000),
                             CONCAT15(bVar94 ^ (bVar94 ^ (byte)(uVar62 >> 6)) & -(uVar62 < 0x4000),
                                      (int5)CONCAT44(0xffffffff,
                                                     CONCAT13(bVar112 ^ (bVar112 ^
                                                                        (byte)(uVar52 >> 6)) &
                                                                        -(uVar52 < 0x4000),
                                                              CONCAT12(bVar73 ^ (bVar73 ^ (byte)(
                                                  uVar131 >> 6)) & -(uVar131 < 0x4000),
                                                  CONCAT11(bVar114 ^ (bVar114 ^ (byte)(uVar98 >> 6))
                                                                     & -(uVar98 < 0x4000),0xff))))))
                   );
      *(ulong *)(pbVar37 + 0x10) =
           CONCAT17(bVar13 ^ (bVar13 ^ 0xffU - (char)((int)uVar66 >> 0x1f)) & -(0x3fff < uVar66),
                    CONCAT16(bVar110 ^ (bVar110 ^ (byte)(uVar119 >> 6)) & -(uVar119 < 0x4000),
                             CONCAT15(bVar87 ^ (bVar87 ^ (byte)(uVar61 >> 6)) & -(uVar61 < 0x4000),
                                      (int5)CONCAT44(0xff0000ff,
                                                     CONCAT13(bVar109 ^ (bVar109 ^
                                                                        (byte)(uVar50 >> 6)) &
                                                                        -(uVar50 < 0x4000),
                                                              CONCAT12(bVar71 ^ (bVar71 ^ (byte)(
                                                  uVar129 >> 6)) & -(uVar129 < 0x4000),
                                                  CONCAT11(bVar111 ^ (bVar111 ^ (byte)(uVar91 >> 6))
                                                                     & -(uVar91 < 0x4000),0xff))))))
                   );
      pbVar35 = pbVar35 + 8;
      pbVar37 = pbVar37 + 0x40;
      pbVar38 = pbVar38 + 8;
    } while (uVar43 != 0);
    pbVar38 = param_1 + uVar42 * 2;
    param_2 = param_2 + uVar42;
    pbVar35 = param_4 + uVar42 * 8;
    pbVar37 = param_3 + uVar42;
    if (uVar1 != uVar42) goto LAB_0115ce5c;
  }
  param_1 = param_1 + (uVar41 >> 2) + 2;
  param_3 = param_3 + uVar1;
  param_4 = param_4 + lVar39;
LAB_0115d018:
  if ((param_5 & 1) != 0) {
    bVar75 = *param_3;
    bVar3 = *pbVar36;
    uVar45 = (uint)*param_1 * 0x4a85 >> 8;
    uVar44 = (uVar45 + ((uint)bVar75 * 0x6625 >> 8)) - 0x379a;
    *param_4 = 0xff;
    if (uVar44 >> 0xe == 0) {
      bVar40 = (byte)(uVar44 >> 6);
    }
    else {
      bVar40 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
    }
    uVar44 = ((uVar45 + 0x2204) - ((uint)bVar3 * 0x1913 >> 8)) - ((uint)bVar75 * 0x3408 >> 8);
    param_4[1] = bVar40;
    if (uVar44 >> 0xe == 0) {
      bVar75 = (byte)(uVar44 >> 6);
    }
    else {
      bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
    }
    uVar44 = (uVar45 + ((uint)bVar3 * 0x811a >> 8)) - 0x4515;
    param_4[2] = bVar75;
    if (uVar44 >> 0xe == 0) {
      bVar75 = (byte)(uVar44 >> 6);
    }
    else {
      bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
    }
    param_4[3] = bVar75;
  }
  return;
}


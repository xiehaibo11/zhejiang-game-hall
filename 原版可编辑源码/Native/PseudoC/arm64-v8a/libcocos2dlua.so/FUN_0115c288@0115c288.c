
void FUN_0115c288(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

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
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  byte bVar43;
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
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  undefined1 auVar76 [16];
  uint uVar95;
  uint uVar96;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  undefined1 auVar97 [16];
  uint uVar102;
  uint uVar103;
  uint uVar104;
  byte bVar107;
  undefined8 uVar105;
  uint uVar108;
  byte bVar109;
  uint uVar110;
  byte bVar111;
  undefined1 auVar106 [16];
  uint uVar112;
  byte bVar115;
  byte bVar116;
  undefined8 uVar113;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  undefined1 auVar114 [16];
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  undefined1 auVar127 [16];
  uint uVar133;
  uint uVar134;
  uint uVar135;
  uint uVar136;
  uint uVar137;
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
  if ((param_5 & 0x3ffffffe) == 0) goto LAB_0115c8e8;
  lVar39 = (long)(int)((param_5 & 0x3ffffffe) << 2);
  uVar40 = lVar39 - 8;
  uVar1 = (uVar40 >> 3) + 1;
  pbVar36 = param_2 + uVar1;
  pbVar38 = param_1;
  pbVar35 = param_4;
  pbVar37 = param_3;
  if ((uVar1 < 8) || (uVar41 = uVar1 & 0x3ffffffffffffff8, uVar41 == 0)) {
LAB_0115c72c:
    do {
      bVar75 = *pbVar37;
      uVar45 = (uint)*pbVar38 * 0x4a85 >> 8;
      uVar44 = (uVar45 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      if (uVar44 >> 0xe == 0) {
        bVar43 = (byte)(uVar44 >> 6);
      }
      else {
        bVar43 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      uVar44 = ((uVar45 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) - ((uint)bVar75 * 0x3408 >> 8);
      *pbVar35 = bVar43;
      if (uVar44 >> 0xe == 0) {
        bVar43 = (byte)(uVar44 >> 6);
      }
      else {
        bVar43 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      uVar44 = (uVar45 + ((uint)bVar75 * 0x6625 >> 8)) - 0x379a;
      pbVar35[1] = bVar43;
      if (uVar44 >> 0xe == 0) {
        bVar75 = (byte)(uVar44 >> 6);
      }
      else {
        bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      pbVar35[2] = bVar75;
      pbVar35[3] = 0xff;
      bVar75 = *pbVar37;
      uVar45 = (uint)pbVar38[1] * 0x4a85 >> 8;
      uVar44 = (uVar45 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      if (uVar44 >> 0xe == 0) {
        bVar43 = (byte)(uVar44 >> 6);
      }
      else {
        bVar43 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      uVar44 = ((uVar45 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) - ((uint)bVar75 * 0x3408 >> 8);
      pbVar35[4] = bVar43;
      if (uVar44 >> 0xe == 0) {
        bVar43 = (byte)(uVar44 >> 6);
      }
      else {
        bVar43 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      uVar44 = (uVar45 + ((uint)bVar75 * 0x6625 >> 8)) - 0x379a;
      pbVar35[5] = bVar43;
      if (uVar44 >> 0xe == 0) {
        bVar75 = (byte)(uVar44 >> 6);
      }
      else {
        bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
      }
      pbVar35[6] = bVar75;
      pbVar35[7] = 0xff;
      pbVar35 = pbVar35 + 8;
      param_2 = param_2 + 1;
      pbVar37 = pbVar37 + 1;
      pbVar38 = pbVar38 + 2;
    } while (pbVar35 != param_4 + lVar39);
  }
  else {
    pbVar34 = param_4 + lVar39;
    lVar2 = (uVar40 >> 3) + 1;
    if ((param_4 < param_1 + (uVar40 >> 2) + 2 && param_1 < pbVar34) ||
       ((param_4 < param_2 + lVar2 && param_2 < pbVar34 ||
        (param_4 < param_3 + lVar2 && param_3 < pbVar34)))) goto LAB_0115c72c;
    pbVar35 = param_2;
    pbVar37 = param_4;
    pbVar38 = param_3;
    uVar42 = uVar41;
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
      uVar105 = *(undefined8 *)pbVar35;
      uVar113 = *(undefined8 *)pbVar38;
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
      auVar64._0_8_ =
           CONCAT17(0,CONCAT16((char)((ulong)uVar105 >> 0x18),
                               (uint6)CONCAT14((char)((ulong)uVar105 >> 0x10),
                                               (uint)CONCAT12((char)((ulong)uVar105 >> 8),
                                                              (ushort)(byte)uVar105))));
      auVar64[8] = (char)((ulong)uVar105 >> 0x20);
      auVar64[9] = 0;
      auVar64[10] = (char)((ulong)uVar105 >> 0x28);
      auVar64[0xb] = 0;
      auVar64[0xc] = (char)((ulong)uVar105 >> 0x30);
      auVar64[0xd] = 0;
      auVar64[0xe] = (char)((ulong)uVar105 >> 0x38);
      auVar64[0xf] = 0;
      auVar114._0_8_ =
           CONCAT17(0,CONCAT16((char)((ulong)uVar113 >> 0x18),
                               (uint6)CONCAT14((char)((ulong)uVar113 >> 0x10),
                                               (uint)CONCAT12((char)((ulong)uVar113 >> 8),
                                                              (ushort)(byte)uVar113))));
      auVar114[8] = (char)((ulong)uVar113 >> 0x20);
      auVar114[9] = 0;
      auVar114[10] = (char)((ulong)uVar113 >> 0x28);
      auVar114[0xb] = 0;
      auVar114[0xc] = (char)((ulong)uVar113 >> 0x30);
      auVar114[0xd] = 0;
      auVar114[0xe] = (char)((ulong)uVar113 >> 0x38);
      auVar114[0xf] = 0;
      auVar76._0_8_ =
           CONCAT17(0,CONCAT16(*pbVar25,(uint6)CONCAT14(*pbVar23,(uint)CONCAT12(*pbVar21,(ushort)*
                                                  pbVar19))));
      auVar76[8] = *pbVar27;
      auVar76[9] = 0;
      auVar76[10] = *pbVar29;
      auVar76[0xb] = 0;
      auVar76[0xc] = *pbVar31;
      auVar76[0xd] = 0;
      auVar76[0xe] = *pbVar33;
      auVar76[0xf] = 0;
      auVar97 = NEON_ext(auVar46,auVar46,8,1);
      auVar54 = NEON_ext(auVar64,auVar64,8,1);
      auVar46 = NEON_umull(auVar46._0_8_,0x4a854a854a854a85,2);
      auVar59 = NEON_umull(auVar64._0_8_,0x811a811a811a811a,2);
      auVar106 = NEON_umull(auVar64._0_8_,0x1913191319131913,2);
      auVar64 = NEON_umull(auVar114._0_8_,0x3408340834083408,2);
      uVar104 = auVar106._0_4_ >> 8;
      uVar108 = auVar106._4_4_ >> 8;
      uVar110 = auVar106._8_4_ >> 8;
      uVar112 = auVar106._12_4_ >> 8;
      uVar63 = auVar64._0_4_ >> 8;
      uVar65 = auVar64._4_4_ >> 8;
      uVar66 = auVar64._8_4_ >> 8;
      uVar67 = auVar64._12_4_ >> 8;
      uVar125 = (((auVar46._0_4_ >> 8) + 0x2204) - uVar104) - uVar63;
      uVar128 = (((auVar46._4_4_ >> 8) + 0x2204) - uVar108) - uVar65;
      uVar130 = (((auVar46._8_4_ >> 8) + 0x2204) - uVar110) - uVar66;
      uVar132 = (((auVar46._12_4_ >> 8) + 0x2204) - uVar112) - uVar67;
      bVar3 = 0xff - (char)((int)uVar125 >> 0x1f);
      bVar69 = 0xff - (char)((int)uVar128 >> 0x1f);
      bVar71 = 0xff - (char)((int)uVar130 >> 0x1f);
      bVar73 = 0xff - (char)((int)uVar132 >> 0x1f);
      auVar127 = NEON_ext(auVar76,auVar76,8,1);
      auVar76 = NEON_umull(auVar76._0_8_,0x4a854a854a854a85,2);
      auVar64 = NEON_ext(auVar114,auVar114,8,1);
      auVar106 = NEON_umull(auVar114._0_8_,0x6625662566256625,2);
      uVar44 = auVar46._0_4_ >> 8;
      uVar47 = auVar46._4_4_ >> 8;
      uVar49 = auVar46._8_4_ >> 8;
      uVar51 = auVar46._12_4_ >> 8;
      uVar68 = auVar76._0_4_ >> 8;
      uVar70 = auVar76._4_4_ >> 8;
      uVar72 = auVar76._8_4_ >> 8;
      uVar74 = auVar76._12_4_ >> 8;
      auVar97 = NEON_umull(auVar97._0_8_,0x4a854a854a854a85,2);
      auVar114 = NEON_umull(auVar54._0_8_,0x811a811a811a811a,2);
      auVar46 = NEON_umull(auVar54._0_8_,0x1913191319131913,2);
      auVar127 = NEON_umull(auVar127._0_8_,0x4a854a854a854a85,2);
      uVar95 = auVar97._0_4_ >> 8;
      uVar98 = auVar97._4_4_ >> 8;
      uVar100 = auVar97._8_4_ >> 8;
      uVar102 = auVar97._12_4_ >> 8;
      uVar53 = auVar46._0_4_ >> 8;
      uVar55 = auVar46._4_4_ >> 8;
      uVar56 = auVar46._8_4_ >> 8;
      uVar57 = auVar46._12_4_ >> 8;
      uVar126 = auVar127._0_4_ >> 8;
      uVar129 = auVar127._4_4_ >> 8;
      uVar131 = auVar127._8_4_ >> 8;
      uVar133 = auVar127._12_4_ >> 8;
      uVar45 = (uVar44 + (auVar106._0_4_ >> 8)) - 0x379a;
      uVar48 = (uVar47 + (auVar106._4_4_ >> 8)) - 0x379a;
      uVar50 = (uVar49 + (auVar106._8_4_ >> 8)) - 0x379a;
      uVar52 = (uVar51 + (auVar106._12_4_ >> 8)) - 0x379a;
      uVar63 = (((auVar76._0_4_ >> 8) + 0x2204) - uVar104) - uVar63;
      uVar65 = (((auVar76._4_4_ >> 8) + 0x2204) - uVar108) - uVar65;
      uVar66 = (((auVar76._8_4_ >> 8) + 0x2204) - uVar110) - uVar66;
      uVar67 = (((auVar76._12_4_ >> 8) + 0x2204) - uVar112) - uVar67;
      auVar54 = NEON_umull(auVar64._0_8_,0x3408340834083408,2);
      auVar46 = NEON_umull(auVar64._0_8_,0x6625662566256625,2);
      uVar104 = (uVar68 + (auVar106._0_4_ >> 8)) - 0x379a;
      uVar108 = (uVar70 + (auVar106._4_4_ >> 8)) - 0x379a;
      uVar110 = (uVar72 + (auVar106._8_4_ >> 8)) - 0x379a;
      uVar112 = (uVar74 + (auVar106._12_4_ >> 8)) - 0x379a;
      bVar5 = 0xff - (char)((int)uVar45 >> 0x1f);
      bVar115 = 0xff - (char)((int)uVar48 >> 0x1f);
      bVar117 = 0xff - (char)((int)uVar50 >> 0x1f);
      bVar119 = 0xff - (char)((int)uVar52 >> 0x1f);
      uVar58 = auVar54._0_4_ >> 8;
      uVar60 = auVar54._4_4_ >> 8;
      uVar61 = auVar54._8_4_ >> 8;
      uVar62 = auVar54._12_4_ >> 8;
      uVar121 = (((auVar97._0_4_ >> 8) + 0x2204) - uVar53) - uVar58;
      uVar122 = (((auVar97._4_4_ >> 8) + 0x2204) - uVar55) - uVar60;
      uVar123 = (((auVar97._8_4_ >> 8) + 0x2204) - uVar56) - uVar61;
      uVar124 = (((auVar97._12_4_ >> 8) + 0x2204) - uVar57) - uVar62;
      uVar58 = (((auVar127._0_4_ >> 8) + 0x2204) - uVar53) - uVar58;
      uVar60 = (((auVar127._4_4_ >> 8) + 0x2204) - uVar55) - uVar60;
      uVar61 = (((auVar127._8_4_ >> 8) + 0x2204) - uVar56) - uVar61;
      uVar62 = (((auVar127._12_4_ >> 8) + 0x2204) - uVar57) - uVar62;
      bVar9 = 0xff - (char)((int)uVar63 >> 0x1f);
      bVar116 = 0xff - (char)((int)uVar65 >> 0x1f);
      bVar118 = 0xff - (char)((int)uVar66 >> 0x1f);
      bVar120 = 0xff - (char)((int)uVar67 >> 0x1f);
      uVar53 = (uVar44 + (auVar59._0_4_ >> 8)) - 0x4515;
      uVar55 = (uVar47 + (auVar59._4_4_ >> 8)) - 0x4515;
      uVar56 = (uVar49 + (auVar59._8_4_ >> 8)) - 0x4515;
      uVar57 = (uVar51 + (auVar59._12_4_ >> 8)) - 0x4515;
      bVar11 = (byte)(uVar104 >> 6);
      bVar12 = (byte)(uVar108 >> 6);
      bVar13 = (byte)(uVar110 >> 6);
      bVar14 = (byte)(uVar112 >> 6);
      bVar75 = 0xff - (char)((int)uVar53 >> 0x1f);
      bVar107 = 0xff - (char)((int)uVar55 >> 0x1f);
      bVar109 = 0xff - (char)((int)uVar56 >> 0x1f);
      bVar111 = 0xff - (char)((int)uVar57 >> 0x1f);
      uVar96 = (uVar95 + (auVar46._0_4_ >> 8)) - 0x379a;
      uVar99 = (uVar98 + (auVar46._4_4_ >> 8)) - 0x379a;
      uVar101 = (uVar100 + (auVar46._8_4_ >> 8)) - 0x379a;
      uVar103 = (uVar102 + (auVar46._12_4_ >> 8)) - 0x379a;
      bVar4 = 0xff - (char)((int)uVar121 >> 0x1f);
      bVar77 = 0xff - (char)((int)uVar122 >> 0x1f);
      bVar83 = 0xff - (char)((int)uVar123 >> 0x1f);
      bVar89 = 0xff - (char)((int)uVar124 >> 0x1f);
      uVar134 = (uVar68 + (auVar59._0_4_ >> 8)) - 0x4515;
      uVar135 = (uVar70 + (auVar59._4_4_ >> 8)) - 0x4515;
      uVar136 = (uVar72 + (auVar59._8_4_ >> 8)) - 0x4515;
      uVar137 = (uVar74 + (auVar59._12_4_ >> 8)) - 0x4515;
      bVar6 = 0xff - (char)((int)uVar96 >> 0x1f);
      bVar78 = 0xff - (char)((int)uVar99 >> 0x1f);
      bVar84 = 0xff - (char)((int)uVar101 >> 0x1f);
      bVar90 = 0xff - (char)((int)uVar103 >> 0x1f);
      uVar68 = (uVar126 + (auVar114._0_4_ >> 8)) - 0x4515;
      uVar70 = (uVar129 + (auVar114._4_4_ >> 8)) - 0x4515;
      uVar72 = (uVar131 + (auVar114._8_4_ >> 8)) - 0x4515;
      uVar74 = (uVar133 + (auVar114._12_4_ >> 8)) - 0x4515;
      bVar7 = 0xff - (char)((int)uVar134 >> 0x1f);
      bVar79 = 0xff - (char)((int)uVar135 >> 0x1f);
      bVar85 = 0xff - (char)((int)uVar136 >> 0x1f);
      bVar91 = 0xff - (char)((int)uVar137 >> 0x1f);
      uVar126 = (uVar126 + (auVar46._0_4_ >> 8)) - 0x379a;
      uVar129 = (uVar129 + (auVar46._4_4_ >> 8)) - 0x379a;
      uVar131 = (uVar131 + (auVar46._8_4_ >> 8)) - 0x379a;
      uVar133 = (uVar133 + (auVar46._12_4_ >> 8)) - 0x379a;
      bVar10 = 0xff - (char)((int)uVar58 >> 0x1f);
      bVar80 = 0xff - (char)((int)uVar60 >> 0x1f);
      bVar86 = 0xff - (char)((int)uVar61 >> 0x1f);
      bVar92 = 0xff - (char)((int)uVar62 >> 0x1f);
      uVar44 = (uVar95 + (auVar114._0_4_ >> 8)) - 0x4515;
      uVar47 = (uVar98 + (auVar114._4_4_ >> 8)) - 0x4515;
      uVar49 = (uVar100 + (auVar114._8_4_ >> 8)) - 0x4515;
      uVar51 = (uVar102 + (auVar114._12_4_ >> 8)) - 0x4515;
      bVar15 = (byte)(uVar126 >> 6);
      bVar16 = (byte)(uVar129 >> 6);
      bVar17 = (byte)(uVar131 >> 6);
      bVar18 = (byte)(uVar133 >> 6);
      bVar43 = 0xff - (char)((int)uVar44 >> 0x1f);
      bVar81 = 0xff - (char)((int)uVar47 >> 0x1f);
      bVar87 = 0xff - (char)((int)uVar49 >> 0x1f);
      bVar93 = 0xff - (char)((int)uVar51 >> 0x1f);
      bVar8 = 0xff - (char)((int)uVar68 >> 0x1f);
      bVar82 = 0xff - (char)((int)uVar70 >> 0x1f);
      bVar88 = 0xff - (char)((int)uVar72 >> 0x1f);
      bVar94 = 0xff - (char)((int)uVar74 >> 0x1f);
      uVar42 = uVar42 - 8;
      pbVar37[0x20] = bVar43 ^ (bVar43 ^ (byte)(uVar44 >> 6)) & -(uVar44 < 0x4000);
      pbVar37[0x21] = bVar4 ^ (bVar4 ^ (byte)(uVar121 >> 6)) & -(uVar121 < 0x4000);
      pbVar37[0x22] = bVar6 ^ (bVar6 ^ (byte)(uVar96 >> 6)) & -(uVar96 < 0x4000);
      pbVar37[0x23] = 0xff;
      pbVar37[0x24] = bVar8 ^ (bVar8 ^ (byte)(uVar68 >> 6)) & -(uVar68 < 0x4000);
      pbVar37[0x25] = bVar10 ^ (bVar10 ^ (byte)(uVar58 >> 6)) & -(uVar58 < 0x4000);
      pbVar37[0x26] = bVar15 ^ (bVar15 ^ -(char)((int)uVar126 >> 0x1f) - 1U) & -(0x3fff < uVar126);
      pbVar37[0x27] = 0xff;
      pbVar37[0x28] = bVar81 ^ (bVar81 ^ (byte)(uVar47 >> 6)) & -(uVar47 < 0x4000);
      pbVar37[0x29] = bVar77 ^ (bVar77 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000);
      pbVar37[0x2a] = bVar78 ^ (bVar78 ^ (byte)(uVar99 >> 6)) & -(uVar99 < 0x4000);
      pbVar37[0x2b] = 0xff;
      pbVar37[0x2c] = bVar82 ^ (bVar82 ^ (byte)(uVar70 >> 6)) & -(uVar70 < 0x4000);
      pbVar37[0x2d] = bVar80 ^ (bVar80 ^ (byte)(uVar60 >> 6)) & -(uVar60 < 0x4000);
      pbVar37[0x2e] = bVar16 ^ (bVar16 ^ 0xffU - (char)((int)uVar129 >> 0x1f)) & -(0x3fff < uVar129)
      ;
      pbVar37[0x2f] = 0xff;
      *(ulong *)(pbVar37 + 0x38) =
           CONCAT17(0xff,CONCAT16(bVar18 ^ (bVar18 ^ 0xffU - (char)((int)uVar133 >> 0x1f)) &
                                           -(0x3fff < uVar133),
                                  CONCAT15(bVar92 ^ (bVar92 ^ (byte)(uVar62 >> 6)) &
                                                    -(uVar62 < 0x4000),
                                           CONCAT14(bVar94 ^ (bVar94 ^ (byte)(uVar74 >> 6)) &
                                                             -(uVar74 < 0x4000),
                                                    (int)CONCAT53(0xffffffffff,
                                                                  CONCAT12(bVar90 ^ (bVar90 ^ (byte)
                                                  (uVar103 >> 6)) & -(uVar103 < 0x4000),
                                                  CONCAT11(bVar89 ^ (bVar89 ^ (byte)(uVar124 >> 6))
                                                                    & -(uVar124 < 0x4000),
                                                           bVar93 ^ (bVar93 ^ (byte)(uVar51 >> 6)) &
                                                                    -(uVar51 < 0x4000))))))));
      *(ulong *)(pbVar37 + 0x30) =
           CONCAT17(0xff,CONCAT16(bVar17 ^ (bVar17 ^ 0xffU - (char)((int)uVar131 >> 0x1f)) &
                                           -(0x3fff < uVar131),
                                  CONCAT15(bVar86 ^ (bVar86 ^ (byte)(uVar61 >> 6)) &
                                                    -(uVar61 < 0x4000),
                                           CONCAT14(bVar88 ^ (bVar88 ^ (byte)(uVar72 >> 6)) &
                                                             -(uVar72 < 0x4000),
                                                    (int)CONCAT53(0xff000000ff,
                                                                  CONCAT12(bVar84 ^ (bVar84 ^ (byte)
                                                  (uVar101 >> 6)) & -(uVar101 < 0x4000),
                                                  CONCAT11(bVar83 ^ (bVar83 ^ (byte)(uVar123 >> 6))
                                                                    & -(uVar123 < 0x4000),
                                                           bVar87 ^ (bVar87 ^ (byte)(uVar49 >> 6)) &
                                                                    -(uVar49 < 0x4000))))))));
      *(ulong *)(pbVar37 + 8) =
           CONCAT17(0xff,CONCAT16(bVar12 ^ (bVar12 ^ 0xffU - (char)((int)uVar108 >> 0x1f)) &
                                           -(0x3fff < uVar108),
                                  CONCAT15(bVar116 ^ (bVar116 ^ (byte)(uVar65 >> 6)) &
                                                     -(uVar65 < 0x4000),
                                           CONCAT14(bVar79 ^ (bVar79 ^ (byte)(uVar135 >> 6)) &
                                                             -(uVar135 < 0x4000),
                                                    (int)CONCAT53(0xffffffffff,
                                                                  CONCAT12(bVar115 ^ (bVar115 ^
                                                                                     (byte)(uVar48 
                                                  >> 6)) & -(uVar48 < 0x4000),
                                                  CONCAT11(bVar69 ^ (bVar69 ^ (byte)(uVar128 >> 6))
                                                                    & -(uVar128 < 0x4000),
                                                           bVar107 ^ (bVar107 ^ (byte)(uVar55 >> 6))
                                                                     & -(uVar55 < 0x4000))))))));
      *(ulong *)pbVar37 =
           CONCAT17(0xff,CONCAT16(bVar11 ^ (bVar11 ^ -(char)((int)uVar104 >> 0x1f) - 1U) &
                                           -(0x3fff < uVar104),
                                  CONCAT15(bVar9 ^ (bVar9 ^ (byte)(uVar63 >> 6)) &
                                                   -(uVar63 < 0x4000),
                                           CONCAT14(bVar7 ^ (bVar7 ^ (byte)(uVar134 >> 6)) &
                                                            -(uVar134 < 0x4000),
                                                    (int)CONCAT53(0xff000000ff,
                                                                  CONCAT12(bVar5 ^ (bVar5 ^ (byte)(
                                                  uVar45 >> 6)) & -(uVar45 < 0x4000),
                                                  CONCAT11(bVar3 ^ (bVar3 ^ (byte)(uVar125 >> 6)) &
                                                                   -(uVar125 < 0x4000),
                                                           bVar75 ^ (bVar75 ^ (byte)(uVar53 >> 6)) &
                                                                    -(uVar53 < 0x4000))))))));
      *(ulong *)(pbVar37 + 0x18) =
           CONCAT17(0xff,CONCAT16(bVar14 ^ (bVar14 ^ 0xffU - (char)((int)uVar112 >> 0x1f)) &
                                           -(0x3fff < uVar112),
                                  CONCAT15(bVar120 ^ (bVar120 ^ (byte)(uVar67 >> 6)) &
                                                     -(uVar67 < 0x4000),
                                           CONCAT14(bVar91 ^ (bVar91 ^ (byte)(uVar137 >> 6)) &
                                                             -(uVar137 < 0x4000),
                                                    (int)CONCAT53(0xffffffffff,
                                                                  CONCAT12(bVar119 ^ (bVar119 ^
                                                                                     (byte)(uVar52 
                                                  >> 6)) & -(uVar52 < 0x4000),
                                                  CONCAT11(bVar73 ^ (bVar73 ^ (byte)(uVar132 >> 6))
                                                                    & -(uVar132 < 0x4000),
                                                           bVar111 ^ (bVar111 ^ (byte)(uVar57 >> 6))
                                                                     & -(uVar57 < 0x4000))))))));
      *(ulong *)(pbVar37 + 0x10) =
           CONCAT17(0xff,CONCAT16(bVar13 ^ (bVar13 ^ 0xffU - (char)((int)uVar110 >> 0x1f)) &
                                           -(0x3fff < uVar110),
                                  CONCAT15(bVar118 ^ (bVar118 ^ (byte)(uVar66 >> 6)) &
                                                     -(uVar66 < 0x4000),
                                           CONCAT14(bVar85 ^ (bVar85 ^ (byte)(uVar136 >> 6)) &
                                                             -(uVar136 < 0x4000),
                                                    (int)CONCAT53(0xff000000ff,
                                                                  CONCAT12(bVar117 ^ (bVar117 ^
                                                                                     (byte)(uVar50 
                                                  >> 6)) & -(uVar50 < 0x4000),
                                                  CONCAT11(bVar71 ^ (bVar71 ^ (byte)(uVar130 >> 6))
                                                                    & -(uVar130 < 0x4000),
                                                           bVar109 ^ (bVar109 ^ (byte)(uVar56 >> 6))
                                                                     & -(uVar56 < 0x4000))))))));
      pbVar35 = pbVar35 + 8;
      pbVar37 = pbVar37 + 0x40;
      pbVar38 = pbVar38 + 8;
    } while (uVar42 != 0);
    pbVar38 = param_1 + uVar41 * 2;
    param_2 = param_2 + uVar41;
    pbVar35 = param_4 + uVar41 * 8;
    pbVar37 = param_3 + uVar41;
    if (uVar1 != uVar41) goto LAB_0115c72c;
  }
  param_1 = param_1 + (uVar40 >> 2) + 2;
  param_3 = param_3 + uVar1;
  param_4 = param_4 + lVar39;
LAB_0115c8e8:
  if ((param_5 & 1) != 0) {
    bVar75 = *param_3;
    uVar45 = (uint)*param_1 * 0x4a85 >> 8;
    uVar44 = (uVar45 + ((uint)*pbVar36 * 0x811a >> 8)) - 0x4515;
    if (uVar44 >> 0xe == 0) {
      bVar43 = (byte)(uVar44 >> 6);
    }
    else {
      bVar43 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
    }
    uVar44 = ((uVar45 + 0x2204) - ((uint)*pbVar36 * 0x1913 >> 8)) - ((uint)bVar75 * 0x3408 >> 8);
    *param_4 = bVar43;
    if (uVar44 >> 0xe == 0) {
      bVar43 = (byte)(uVar44 >> 6);
    }
    else {
      bVar43 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
    }
    uVar44 = (uVar45 + ((uint)bVar75 * 0x6625 >> 8)) - 0x379a;
    param_4[1] = bVar43;
    if (uVar44 >> 0xe == 0) {
      bVar75 = (byte)(uVar44 >> 6);
    }
    else {
      bVar75 = ((byte)((int)uVar44 >> 0x1f) & 1) - 1;
    }
    param_4[2] = bVar75;
    param_4[3] = 0xff;
  }
  return;
}


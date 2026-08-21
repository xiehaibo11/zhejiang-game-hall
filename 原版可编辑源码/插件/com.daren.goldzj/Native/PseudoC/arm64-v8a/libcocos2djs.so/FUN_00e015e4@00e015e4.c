
void FUN_00e015e4(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  unkuint10 Var3;
  undefined1 auVar4 [14];
  uint3 uVar5;
  uint3 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar46;
  byte *pbVar47;
  byte *pbVar48;
  byte *pbVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  ulong uVar60;
  ulong uVar61;
  undefined1 auVar62 [16];
  byte bVar63;
  uint uVar64;
  byte bVar65;
  uint uVar66;
  byte bVar67;
  uint uVar68;
  byte bVar69;
  uint uVar70;
  undefined1 auVar71 [16];
  byte bVar72;
  byte bVar74;
  ulong uVar73;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  uint uVar78;
  byte bVar80;
  uint uVar81;
  byte bVar82;
  uint uVar83;
  byte bVar84;
  undefined1 auVar79 [16];
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar96;
  uint uVar97;
  undefined1 auVar95 [16];
  uint uVar98;
  uint uVar99;
  uint uVar102;
  uint uVar103;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  uint uVar114;
  undefined1 auVar109 [16];
  uint uVar115;
  uint uVar116;
  uint uVar118;
  uint uVar119;
  undefined1 auVar117 [16];
  uint uVar120;
  byte bVar121;
  uint uVar122;
  byte bVar123;
  uint uVar124;
  uint uVar125;
  byte bVar126;
  uint uVar127;
  uint uVar128;
  byte bVar129;
  uint uVar130;
  uint uVar131;
  byte bVar132;
  byte bVar133;
  uint uVar134;
  uint uVar135;
  byte bVar137;
  byte bVar138;
  uint uVar139;
  uint uVar140;
  byte bVar141;
  byte bVar142;
  uint uVar143;
  uint uVar144;
  byte bVar145;
  byte bVar146;
  undefined1 auVar136 [16];
  uint uVar147;
  uint uVar148;
  uint uVar149;
  uint uVar152;
  uint uVar153;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  uint uVar154;
  uint uVar155;
  uint uVar156;
  uint uVar159;
  uint uVar160;
  uint uVar161;
  uint uVar162;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  uint uVar163;
  uint uVar164;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  uint uVar168;
  uint uVar169;
  ulong uVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  byte bVar173;
  undefined1 auVar174 [16];
  uint uVar175;
  uint uVar176;
  uint uVar179;
  uint uVar180;
  uint uVar181;
  uint uVar182;
  undefined1 auVar177 [16];
  uint uVar183;
  undefined1 auVar178 [16];
  uint uVar184;
  char cVar185;
  char cVar186;
  char cVar187;
  char cVar188;
  undefined1 uVar189;
  undefined1 uVar190;
  uint uVar191;
  uint uVar192;
  uint uVar194;
  uint uVar195;
  uint uVar196;
  uint uVar197;
  undefined1 auVar193 [16];
  uint uVar198;
  uint uVar199;
  undefined1 auVar200 [16];
  uint uVar201;
  uint uVar202;
  uint uVar203;
  uint uVar204;
  uint uVar205;
  uint uVar207;
  uint uVar210;
  uint uVar212;
  uint uVar213;
  uint uVar215;
  uint uVar216;
  undefined1 auVar208 [16];
  uint uVar206;
  uint uVar211;
  uint uVar214;
  uint uVar217;
  undefined1 auVar209 [16];
  uint uVar218;
  uint uVar219;
  uint uVar220;
  uint uVar222;
  uint uVar223;
  uint uVar224;
  uint uVar225;
  uint uVar226;
  undefined1 auVar221 [16];
  uint uVar227;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
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
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte *pbVar44;
  byte *pbVar45;
  
  pbVar48 = param_2;
  if ((param_5 & 0x7ffffffe) == 0) goto LAB_00e01f2c;
  lVar50 = (long)(int)((param_5 & 0x7ffffffe) << 1);
  uVar51 = lVar50 - 4;
  uVar1 = (uVar51 >> 2) + 1;
  pbVar48 = param_2 + uVar1;
  pbVar49 = param_1;
  pbVar47 = param_4;
  pbVar46 = param_3;
  if ((uVar1 < 0x10) || (uVar52 = uVar1 & 0x7ffffffffffffff0, uVar52 == 0)) {
LAB_00e01d58:
    do {
      uVar202 = (uint)*pbVar49 * 0x4a85 >> 8;
      uVar201 = (uVar202 + ((uint)*pbVar46 * 0x6625 >> 8)) - 0x379a;
      if (uVar201 >> 0xe == 0) {
        bVar173 = (byte)(uVar201 >> 6);
      }
      else {
        bVar173 = ((byte)((int)uVar201 >> 0x1f) & 1) - 1;
      }
      uVar201 = ((uVar202 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) -
                ((uint)*pbVar46 * 0x3408 >> 8);
      if (uVar201 >> 0xe == 0) {
        uVar201 = uVar201 >> 6;
      }
      else {
        uVar201 = ((int)uVar201 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar202 = (uVar202 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      if (uVar202 >> 0xe == 0) {
        uVar202 = uVar202 >> 6;
      }
      else {
        uVar202 = ((int)uVar202 >> 0x1f & 0xffffff01U) + 0xff;
      }
      *pbVar47 = bVar173 & 0xf8 | (byte)(uVar201 >> 5);
      pbVar47[1] = (byte)((uVar201 & 0x1c) << 3) | (byte)(uVar202 >> 3);
      uVar202 = (uint)pbVar49[1] * 0x4a85 >> 8;
      uVar201 = (uVar202 + ((uint)*pbVar46 * 0x6625 >> 8)) - 0x379a;
      if (uVar201 >> 0xe == 0) {
        bVar173 = (byte)(uVar201 >> 6);
      }
      else {
        bVar173 = ((byte)((int)uVar201 >> 0x1f) & 1) - 1;
      }
      uVar201 = ((uVar202 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) -
                ((uint)*pbVar46 * 0x3408 >> 8);
      if (uVar201 >> 0xe == 0) {
        uVar201 = uVar201 >> 6;
      }
      else {
        uVar201 = ((int)uVar201 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar202 = (uVar202 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      if (uVar202 >> 0xe == 0) {
        uVar202 = uVar202 >> 6;
      }
      else {
        uVar202 = ((int)uVar202 >> 0x1f & 0xffffff01U) + 0xff;
      }
      pbVar47[2] = bVar173 & 0xf8 | (byte)(uVar201 >> 5);
      pbVar47[3] = (byte)((uVar201 & 0x1c) << 3) | (byte)(uVar202 >> 3);
      pbVar47 = pbVar47 + 4;
      param_2 = param_2 + 1;
      pbVar46 = pbVar46 + 1;
      pbVar49 = pbVar49 + 2;
    } while (pbVar47 != param_4 + lVar50);
  }
  else {
    pbVar45 = param_4 + lVar50;
    lVar2 = (uVar51 >> 2) + 1;
    if ((param_4 < param_1 + (uVar51 >> 1) + 2 && param_1 < pbVar45) ||
       ((param_4 < param_2 + lVar2 && param_2 < pbVar45 ||
        (param_4 < param_3 + lVar2 && param_3 < pbVar45)))) goto LAB_00e01d58;
    pbVar47 = param_2;
    pbVar46 = param_4;
    pbVar49 = param_3;
    uVar53 = uVar52;
    pbVar45 = param_1;
    do {
      bVar173 = *pbVar45;
      pbVar14 = pbVar45 + 1;
      pbVar15 = pbVar45 + 2;
      pbVar16 = pbVar45 + 3;
      pbVar17 = pbVar45 + 4;
      pbVar18 = pbVar45 + 5;
      pbVar19 = pbVar45 + 6;
      pbVar20 = pbVar45 + 7;
      pbVar21 = pbVar45 + 8;
      pbVar22 = pbVar45 + 9;
      pbVar23 = pbVar45 + 10;
      pbVar24 = pbVar45 + 0xb;
      pbVar25 = pbVar45 + 0xc;
      pbVar26 = pbVar45 + 0xd;
      pbVar27 = pbVar45 + 0xe;
      pbVar28 = pbVar45 + 0xf;
      pbVar29 = pbVar45 + 0x10;
      pbVar30 = pbVar45 + 0x11;
      pbVar31 = pbVar45 + 0x12;
      pbVar32 = pbVar45 + 0x13;
      pbVar33 = pbVar45 + 0x14;
      pbVar34 = pbVar45 + 0x15;
      pbVar35 = pbVar45 + 0x16;
      pbVar36 = pbVar45 + 0x17;
      pbVar37 = pbVar45 + 0x18;
      pbVar38 = pbVar45 + 0x19;
      pbVar39 = pbVar45 + 0x1a;
      pbVar40 = pbVar45 + 0x1b;
      pbVar41 = pbVar45 + 0x1c;
      pbVar42 = pbVar45 + 0x1d;
      pbVar43 = pbVar45 + 0x1e;
      pbVar44 = pbVar45 + 0x1f;
      pbVar45 = pbVar45 + 0x20;
      uVar11 = *(undefined8 *)(pbVar47 + 8);
      uVar189 = (undefined1)((ulong)uVar11 >> 0x38);
      uVar8 = *(undefined8 *)pbVar47;
      auVar158._0_8_ =
           CONCAT17(0,CONCAT16(pbVar49[0xb],
                               (uint6)CONCAT14(pbVar49[10],
                                               (uint)CONCAT12(pbVar49[9],(ushort)pbVar49[8]))));
      auVar158[8] = pbVar49[0xc];
      auVar158[9] = 0;
      auVar158[10] = pbVar49[0xd];
      auVar158[0xb] = 0;
      auVar158[0xc] = pbVar49[0xe];
      auVar158[0xd] = 0;
      auVar158[0xe] = pbVar49[0xf];
      auVar158[0xf] = 0;
      auVar71._0_8_ =
           CONCAT17(0,CONCAT16(*pbVar19,(uint6)CONCAT14(*pbVar17,(uint)CONCAT12(*pbVar15,(ushort)
                                                  bVar173))));
      auVar71[8] = *pbVar21;
      auVar71[9] = 0;
      auVar71[10] = *pbVar23;
      auVar71[0xb] = 0;
      auVar71[0xc] = *pbVar25;
      auVar71[0xd] = 0;
      auVar71[0xe] = *pbVar27;
      auVar71[0xf] = 0;
      auVar157._0_8_ =
           CONCAT17(0,CONCAT16((char)((ulong)uVar8 >> 0x18),
                               (uint6)CONCAT14((char)((ulong)uVar8 >> 0x10),
                                               (uint)CONCAT12((char)((ulong)uVar8 >> 8),
                                                              (ushort)(byte)uVar8))));
      auVar157[8] = (char)((ulong)uVar8 >> 0x20);
      auVar157[9] = 0;
      auVar157[10] = (char)((ulong)uVar8 >> 0x28);
      auVar157[0xb] = 0;
      auVar157[0xc] = (char)((ulong)uVar8 >> 0x30);
      auVar157[0xd] = 0;
      auVar157[0xe] = (char)((ulong)uVar8 >> 0x38);
      auVar157[0xf] = 0;
      auVar62 = NEON_umull(auVar158._0_8_,0x3408340834083408,2);
      auVar107._0_8_ =
           CONCAT17(0,CONCAT16(*pbVar35,(uint6)CONCAT14(*pbVar33,(uint)CONCAT12(*pbVar31,(ushort)*
                                                  pbVar29))));
      auVar107[8] = *pbVar37;
      auVar107[9] = 0;
      auVar107[10] = *pbVar39;
      auVar107[0xb] = 0;
      auVar107[0xc] = *pbVar41;
      auVar107[0xd] = 0;
      auVar107[0xe] = *pbVar43;
      auVar107[0xf] = 0;
      bVar173 = (byte)uVar11;
      uVar54 = (undefined1)((ulong)uVar11 >> 8);
      uVar55 = (undefined1)((ulong)uVar11 >> 0x10);
      uVar56 = (undefined1)((ulong)uVar11 >> 0x18);
      uVar57 = (undefined1)((ulong)uVar11 >> 0x20);
      uVar58 = (undefined1)((ulong)uVar11 >> 0x28);
      uVar59 = (undefined1)((ulong)uVar11 >> 0x30);
      auVar172._0_8_ =
           CONCAT17(0,CONCAT16(pbVar49[3],
                               (uint6)CONCAT14(pbVar49[2],
                                               (uint)CONCAT12(pbVar49[1],(ushort)*pbVar49))));
      auVar172[8] = pbVar49[4];
      auVar172[9] = 0;
      auVar172[10] = pbVar49[5];
      auVar172[0xb] = 0;
      auVar172[0xc] = pbVar49[6];
      auVar172[0xd] = 0;
      auVar172[0xe] = pbVar49[7];
      auVar172[0xf] = 0;
      auVar109._0_8_ =
           CONCAT17(0,CONCAT16(*pbVar36,(uint6)CONCAT14(*pbVar34,(uint)CONCAT12(*pbVar32,(ushort)*
                                                  pbVar30))));
      auVar109[8] = *pbVar38;
      auVar109[9] = 0;
      auVar109[10] = *pbVar40;
      auVar109[0xb] = 0;
      auVar109[0xc] = *pbVar42;
      auVar109[0xd] = 0;
      auVar109[0xe] = *pbVar44;
      auVar109[0xf] = 0;
      auVar174 = NEON_umull(auVar71._0_8_,0x4a854a854a854a85,2);
      auVar193 = NEON_umull(auVar157._0_8_,0x1913191319131913,2);
      uVar201 = auVar62._0_4_ >> 8;
      uVar202 = auVar62._4_4_ >> 8;
      uVar203 = auVar62._8_4_ >> 8;
      uVar204 = auVar62._12_4_ >> 8;
      auVar117._0_8_ =
           CONCAT17(0,CONCAT16(*pbVar20,(uint6)CONCAT14(*pbVar18,(uint)CONCAT12(*pbVar16,(ushort)*
                                                  pbVar14))));
      auVar117[8] = *pbVar22;
      auVar117[9] = 0;
      auVar117[10] = *pbVar24;
      auVar117[0xb] = 0;
      auVar117[0xc] = *pbVar26;
      auVar117[0xd] = 0;
      auVar117[0xe] = *pbVar28;
      auVar117[0xf] = 0;
      auVar71 = NEON_ext(auVar71,auVar71,8,1);
      auVar177 = NEON_umull((ulong)CONCAT16(uVar56,(uint6)CONCAT14(uVar55,(uint)CONCAT12(uVar54,(
                                                  ushort)bVar173))),0x1913191319131913,2);
      auVar79 = NEON_umull(auVar172._0_8_,0x3408340834083408,2);
      uVar64 = auVar193._0_4_ >> 8;
      uVar66 = auVar193._4_4_ >> 8;
      uVar68 = auVar193._8_4_ >> 8;
      uVar70 = auVar193._12_4_ >> 8;
      Var3 = CONCAT19(0x22,CONCAT18(4,0x220400002204));
      auVar4._10_2_ = 0;
      auVar4._0_10_ = Var3;
      auVar4[0xc] = 4;
      auVar4[0xd] = 0x22;
      auVar136 = NEON_ext(auVar107,auVar107,8,1);
      auVar200 = NEON_ext(auVar157,auVar157,8,1);
      auVar193[1] = 0;
      auVar193[0] = bVar173;
      auVar193[2] = uVar54;
      auVar193[3] = 0;
      auVar193[4] = uVar55;
      auVar193[5] = 0;
      auVar193[6] = uVar56;
      auVar193[7] = 0;
      auVar193[8] = uVar57;
      auVar193[9] = 0;
      auVar193[10] = uVar58;
      auVar193[0xb] = 0;
      auVar193[0xc] = uVar59;
      auVar193[0xd] = 0;
      auVar193[0xe] = uVar189;
      auVar193[0xf] = 0;
      auVar108[1] = 0;
      auVar108[0] = bVar173;
      auVar108[2] = uVar54;
      auVar108[3] = 0;
      auVar108[4] = uVar55;
      auVar108[5] = 0;
      auVar108[6] = uVar56;
      auVar108[7] = 0;
      auVar108[8] = uVar57;
      auVar108[9] = 0;
      auVar108[10] = uVar58;
      auVar108[0xb] = 0;
      auVar108[0xc] = uVar59;
      auVar108[0xd] = 0;
      auVar108[0xe] = uVar189;
      auVar108[0xf] = 0;
      auVar171 = NEON_ext(auVar193,auVar108,8,1);
      auVar193 = NEON_umull(auVar107._0_8_,0x4a854a854a854a85,2);
      auVar95 = NEON_umull(auVar157._0_8_,0x811a811a811a811a,2);
      auVar62 = NEON_umull((ulong)CONCAT16(uVar56,(uint6)CONCAT14(uVar55,(uint)CONCAT12(uVar54,(
                                                  ushort)bVar173))),0x811a811a811a811a,2);
      uVar78 = auVar79._0_4_ >> 8;
      uVar81 = auVar79._4_4_ >> 8;
      uVar83 = auVar79._8_4_ >> 8;
      uVar85 = auVar79._12_4_ >> 8;
      uVar6 = auVar174._9_3_;
      uVar5 = auVar174._1_3_;
      uVar175 = (((auVar174._0_4_ >> 8) + 0x2204) - uVar64) - uVar78;
      uVar179 = (((auVar174._4_4_ >> 8) + 0x2204) - uVar66) - uVar81;
      uVar181 = (((auVar174._8_4_ >> 8) + 0x2204) - uVar68) - uVar83;
      uVar183 = (((auVar174._12_4_ >> 8) + 0x2204) - uVar70) - uVar85;
      uVar219 = ((uint)uVar5 + (auVar95._0_4_ >> 8)) - 0x4515;
      uVar222 = ((uint)auVar174._5_3_ + (auVar95._4_4_ >> 8)) - 0x4515;
      uVar224 = ((uint)uVar6 + (auVar95._8_4_ >> 8)) - 0x4515;
      uVar226 = ((uint)auVar174._13_3_ + (auVar95._12_4_ >> 8)) - 0x4515;
      cVar185 = (char)((int)uVar175 >> 0x1f);
      cVar186 = (char)((int)uVar179 >> 0x1f);
      cVar187 = (char)((int)uVar181 >> 0x1f);
      cVar188 = (char)((int)uVar183 >> 0x1f);
      uVar205 = (((auVar193._0_4_ >> 8) + 0x2204) - (uint)auVar177._1_3_) - uVar201;
      uVar210 = (((auVar193._4_4_ >> 8) + 0x2204) - (uint)auVar177._5_3_) - uVar202;
      uVar213 = (((auVar193._8_4_ >> 8) + 0x2204) - (uint)auVar177._9_3_) - uVar203;
      uVar216 = (((auVar193._12_4_ >> 8) + 0x2204) - (uint)auVar177._13_3_) - uVar204;
      auVar209._0_4_ = -(uint)(uVar175 < 0x4000);
      auVar209._4_4_ = -(uint)(uVar179 < 0x4000);
      auVar209._8_4_ = -(uint)(uVar181 < 0x4000);
      auVar209._12_4_ = -(uint)(uVar183 < 0x4000);
      auVar178._0_4_ = uVar175 >> 6;
      auVar178._4_4_ = uVar179 >> 6;
      auVar178._8_4_ = uVar181 >> 6;
      auVar178._12_4_ = uVar183 >> 6;
      iVar7 = (CONCAT11(cVar185,cVar185) & 0xffffff01) + 0xff;
      iVar9 = (CONCAT13(cVar186,CONCAT12(cVar186,CONCAT11(cVar186,cVar186))) & 0xffffff01) + 0xff;
      uVar54 = (undefined1)((uint)iVar9 >> 8);
      uVar55 = (undefined1)((uint)iVar9 >> 0x18);
      iVar10 = (CONCAT13(cVar187,CONCAT12(cVar187,CONCAT11(cVar187,cVar187))) & 0xffffff01) + 0xff;
      uVar56 = (undefined1)((uint)iVar10 >> 8);
      uVar57 = (undefined1)((uint)iVar10 >> 0x10);
      uVar58 = (undefined1)((uint)iVar10 >> 0x18);
      iVar12 = (CONCAT13(cVar188,CONCAT12(cVar188,CONCAT11(cVar188,cVar188))) & 0xffffff01) + 0xff;
      uVar59 = (undefined1)((uint)iVar12 >> 8);
      uVar189 = (undefined1)((uint)iVar12 >> 0x10);
      uVar190 = (undefined1)((uint)iVar12 >> 0x18);
      auVar79[4] = (char)iVar9;
      auVar79._0_4_ = iVar7;
      auVar79[5] = uVar54;
      auVar79[6] = 0;
      auVar79[7] = uVar55;
      auVar79[8] = (char)iVar10;
      auVar79[9] = uVar56;
      auVar79[10] = uVar57;
      auVar79[0xb] = uVar58;
      auVar79[0xc] = (char)iVar12;
      auVar79[0xd] = uVar59;
      auVar79[0xe] = uVar189;
      auVar79[0xf] = uVar190;
      auVar150[4] = (char)iVar9;
      auVar150._0_4_ = iVar7;
      auVar150[5] = uVar54;
      auVar150[6] = 0;
      auVar150[7] = uVar55;
      auVar150[8] = (char)iVar10;
      auVar150[9] = uVar56;
      auVar150[10] = uVar57;
      auVar150[0xb] = uVar58;
      auVar150[0xc] = (char)iVar12;
      auVar150[0xd] = uVar59;
      auVar150[0xe] = uVar189;
      auVar150[0xf] = uVar190;
      auVar150 = auVar150 ^ (auVar79 ^ auVar178) & auVar209;
      cVar185 = (char)((int)uVar205 >> 0x1f);
      cVar186 = (char)((int)uVar210 >> 0x1f);
      cVar187 = (char)((int)uVar213 >> 0x1f);
      cVar188 = (char)((int)uVar216 >> 0x1f);
      auVar221._0_4_ = -(uint)(uVar205 < 0x4000);
      auVar221._4_4_ = -(uint)(uVar210 < 0x4000);
      auVar221._8_4_ = -(uint)(uVar213 < 0x4000);
      auVar221._12_4_ = -(uint)(uVar216 < 0x4000);
      auVar208._0_4_ = uVar205 >> 6;
      auVar208._4_4_ = uVar210 >> 6;
      auVar208._8_4_ = uVar213 >> 6;
      auVar208._12_4_ = uVar216 >> 6;
      iVar7 = (CONCAT11(cVar185,cVar185) & 0xffffff01) + 0xff;
      iVar9 = (CONCAT13(cVar186,CONCAT12(cVar186,CONCAT11(cVar186,cVar186))) & 0xffffff01) + 0xff;
      uVar54 = (undefined1)((uint)iVar9 >> 8);
      uVar55 = (undefined1)((uint)iVar9 >> 0x18);
      iVar10 = (CONCAT13(cVar187,CONCAT12(cVar187,CONCAT11(cVar187,cVar187))) & 0xffffff01) + 0xff;
      uVar56 = (undefined1)((uint)iVar10 >> 8);
      uVar57 = (undefined1)((uint)iVar10 >> 0x10);
      uVar58 = (undefined1)((uint)iVar10 >> 0x18);
      iVar12 = (CONCAT13(cVar188,CONCAT12(cVar188,CONCAT11(cVar188,cVar188))) & 0xffffff01) + 0xff;
      uVar59 = (undefined1)((uint)iVar12 >> 8);
      uVar189 = (undefined1)((uint)iVar12 >> 0x10);
      uVar190 = (undefined1)((uint)iVar12 >> 0x18);
      auVar100[4] = (char)iVar9;
      auVar100._0_4_ = iVar7;
      auVar100[5] = uVar54;
      auVar100[6] = 0;
      auVar100[7] = uVar55;
      auVar100[8] = (char)iVar10;
      auVar100[9] = uVar56;
      auVar100[10] = uVar57;
      auVar100[0xb] = uVar58;
      auVar100[0xc] = (char)iVar12;
      auVar100[0xd] = uVar59;
      auVar100[0xe] = uVar189;
      auVar100[0xf] = uVar190;
      auVar151[4] = (char)iVar9;
      auVar151._0_4_ = iVar7;
      auVar151[5] = uVar54;
      auVar151[6] = 0;
      auVar151[7] = uVar55;
      auVar151[8] = (char)iVar10;
      auVar151[9] = uVar56;
      auVar151[10] = uVar57;
      auVar151[0xb] = uVar58;
      auVar151[0xc] = (char)iVar12;
      auVar151[0xd] = uVar59;
      auVar151[0xe] = uVar189;
      auVar151[0xf] = uVar190;
      auVar151 = auVar151 ^ (auVar100 ^ auVar208) & auVar221;
      uVar60 = CONCAT44((int)uVar222 >> 0x1f,(int)uVar219 >> 0x1f) & 0xffffff01ffffff01;
      uVar206 = (int)uVar60 + 0xff;
      uVar211 = (int)(uVar60 >> 0x20) + 0xff;
      uVar214 = ((int)uVar224 >> 0x1f & 0xffffff01U) + 0xff;
      uVar217 = ((int)uVar226 >> 0x1f & 0xffffff01U) + 0xff;
      auVar209 = NEON_umull(auVar109._0_8_,0x4a854a854a854a85,2);
      auVar221 = NEON_umull(auVar117._0_8_,0x4a854a854a854a85,2);
      uVar86 = auVar193._0_4_ >> 8;
      uVar88 = auVar193._4_4_ >> 8;
      uVar90 = auVar193._8_4_ >> 8;
      uVar92 = auVar193._12_4_ >> 8;
      uVar207 = auVar209._0_4_ >> 8;
      uVar212 = auVar209._4_4_ >> 8;
      uVar215 = auVar209._8_4_ >> 8;
      uVar218 = auVar209._12_4_ >> 8;
      auVar79 = NEON_ext(auVar158,auVar158,8,1);
      auVar100 = NEON_umull(auVar158._0_8_,0x6625662566256625,2);
      auVar101 = NEON_ext(auVar172,auVar172,8,1);
      auVar107 = NEON_umull(auVar172._0_8_,0x6625662566256625,2);
      auVar193 = NEON_ext(auVar109,auVar109,8,1);
      auVar136 = NEON_umull(auVar136._0_8_,0x4a854a854a854a85,2);
      auVar108 = NEON_umull(auVar171._0_8_,0x1913191319131913,2);
      auVar193 = NEON_umull(auVar193._0_8_,0x4a854a854a854a85,2);
      uVar105 = auVar108._0_4_ >> 8;
      uVar110 = auVar108._4_4_ >> 8;
      uVar112 = auVar108._8_4_ >> 8;
      uVar114 = auVar108._12_4_ >> 8;
      auVar109 = NEON_umull(auVar200._0_8_,0x1913191319131913,2);
      auVar157 = NEON_umull(auVar200._0_8_,0x811a811a811a811a,2);
      auVar172 = NEON_umull(auVar171._0_8_,0x811a811a811a811a,2);
      auVar108 = NEON_umull(auVar71._0_8_,0x4a854a854a854a85,2);
      auVar71 = NEON_ext(auVar117,auVar117,8,1);
      uVar106 = auVar109._0_4_ >> 8;
      uVar111 = auVar109._4_4_ >> 8;
      uVar113 = auVar109._8_4_ >> 8;
      uVar115 = auVar109._12_4_ >> 8;
      auVar109 = NEON_umull(auVar71._0_8_,0x4a854a854a854a85,2);
      uVar205 = auVar108._0_4_ >> 8;
      uVar210 = auVar108._4_4_ >> 8;
      uVar213 = auVar108._8_4_ >> 8;
      uVar216 = auVar108._12_4_ >> 8;
      uVar134 = auVar136._0_4_ >> 8;
      uVar139 = auVar136._4_4_ >> 8;
      uVar143 = auVar136._8_4_ >> 8;
      uVar147 = auVar136._12_4_ >> 8;
      uVar175 = auVar193._0_4_ >> 8;
      uVar179 = auVar193._4_4_ >> 8;
      uVar181 = auVar193._8_4_ >> 8;
      uVar183 = auVar193._12_4_ >> 8;
      uVar78 = (((auVar221._0_4_ >> 8) + 0x2204) - uVar64) - uVar78;
      uVar81 = (((auVar221._4_4_ >> 8) + 0x2204) - uVar66) - uVar81;
      uVar83 = (((auVar221._8_4_ >> 8) + 0x2204) - uVar68) - uVar83;
      uVar85 = (((auVar221._12_4_ >> 8) + 0x2204) - uVar70) - uVar85;
      uVar201 = (((auVar209._0_4_ >> 8) + 0x2204) - (uint)auVar177._1_3_) - uVar201;
      uVar202 = (((auVar209._4_4_ >> 8) + 0x2204) - (uint)auVar177._5_3_) - uVar202;
      uVar203 = (((auVar209._8_4_ >> 8) + 0x2204) - (uint)auVar177._9_3_) - uVar203;
      uVar204 = (((auVar209._12_4_ >> 8) + 0x2204) - (uint)auVar177._13_3_) - uVar204;
      auVar71 = NEON_umull(auVar79._0_8_,0x6625662566256625,2);
      auVar158 = NEON_umull(auVar101._0_8_,0x6625662566256625,2);
      uVar87 = (uVar86 + (auVar62._0_4_ >> 8)) - 0x4515;
      uVar89 = (uVar88 + (auVar62._4_4_ >> 8)) - 0x4515;
      uVar91 = (uVar90 + (auVar62._8_4_ >> 8)) - 0x4515;
      uVar93 = (uVar92 + (auVar62._12_4_ >> 8)) - 0x4515;
      auVar101 = NEON_umull(auVar101._0_8_,0x3408340834083408,2);
      uVar122 = ((uint)uVar5 + (auVar107._0_4_ >> 8)) - 0x379a;
      uVar124 = ((uint)(uint3)(CONCAT16(auVar174[7],
                                        CONCAT15(auVar174[6],CONCAT14(auVar174[5],(uint)uVar5))) >>
                              0x20) + (auVar107._4_4_ >> 8)) - 0x379a;
      uVar127 = ((uint)uVar6 + (auVar107._8_4_ >> 8)) - 0x379a;
      uVar130 = ((uint)(uint3)(CONCAT16(auVar174[0xf],
                                        CONCAT15(auVar174[0xe],CONCAT14(auVar174[0xd],(uint)uVar6)))
                              >> 0x20) + (auVar107._12_4_ >> 8)) - 0x379a;
      uVar155 = auVar101._0_4_ >> 8;
      uVar159 = auVar101._4_4_ >> 8;
      uVar161 = auVar101._8_4_ >> 8;
      uVar163 = auVar101._12_4_ >> 8;
      uVar60 = CONCAT44((int)uVar89 >> 0x1f,(int)uVar87 >> 0x1f) & 0xffffff01ffffff01;
      auVar79 = NEON_umull(auVar79._0_8_,0x3408340834083408,2);
      uVar99 = (uVar207 + (auVar62._0_4_ >> 8)) - 0x4515;
      uVar102 = (uVar212 + (auVar62._4_4_ >> 8)) - 0x4515;
      uVar103 = (uVar215 + (auVar62._8_4_ >> 8)) - 0x4515;
      uVar104 = (uVar218 + (auVar62._12_4_ >> 8)) - 0x4515;
      uVar165 = (((auVar108._0_4_ >> 8) + 0x2204) - uVar106) - uVar155;
      uVar166 = (((auVar108._4_4_ >> 8) + 0x2204) - uVar111) - uVar159;
      uVar167 = (((auVar108._8_4_ >> 8) + 0x2204) - uVar113) - uVar161;
      uVar168 = (((auVar108._12_4_ >> 8) + 0x2204) - uVar115) - uVar163;
      uVar191 = (int)uVar60 + 0xff;
      uVar194 = (int)(uVar60 >> 0x20) + 0xff;
      uVar196 = ((int)uVar91 >> 0x1f & 0xffffff01U) + 0xff;
      uVar198 = ((int)uVar93 >> 0x1f & 0xffffff01U) + 0xff;
      uVar94 = auVar79._0_4_ >> 8;
      uVar96 = auVar79._4_4_ >> 8;
      uVar97 = auVar79._8_4_ >> 8;
      uVar98 = auVar79._12_4_ >> 8;
      uVar60 = CONCAT44((int)uVar81 >> 0x1f,(int)uVar78 >> 0x1f) & 0xffffff01ffffff01;
      uVar149 = (((auVar136._0_4_ >> 8) + 0x2204) - uVar105) - uVar94;
      uVar152 = (((auVar136._4_4_ >> 8) + 0x2204) - uVar110) - uVar96;
      uVar153 = (((auVar136._8_4_ >> 8) + 0x2204) - uVar112) - uVar97;
      uVar154 = (((auVar136._12_4_ >> 8) + 0x2204) - uVar114) - uVar98;
      uVar192 = (int)uVar60 + 0xff;
      uVar195 = (int)(uVar60 >> 0x20) + 0xff;
      uVar197 = ((int)uVar83 >> 0x1f & 0xffffff01U) + 0xff;
      uVar199 = ((int)uVar85 >> 0x1f & 0xffffff01U) + 0xff;
      uVar176 = (uVar175 + (auVar172._0_4_ >> 8)) - 0x4515;
      uVar180 = (uVar179 + (auVar172._4_4_ >> 8)) - 0x4515;
      uVar182 = (uVar181 + (auVar172._8_4_ >> 8)) - 0x4515;
      uVar184 = (uVar183 + (auVar172._12_4_ >> 8)) - 0x4515;
      uVar220 = ((auVar221._0_4_ >> 8) + (auVar95._0_4_ >> 8)) - 0x4515;
      uVar223 = ((auVar221._4_4_ >> 8) + (auVar95._4_4_ >> 8)) - 0x4515;
      uVar225 = ((auVar221._8_4_ >> 8) + (auVar95._8_4_ >> 8)) - 0x4515;
      uVar227 = ((auVar221._12_4_ >> 8) + (auVar95._12_4_ >> 8)) - 0x4515;
      uVar192 = uVar192 ^ (uVar192 ^ uVar78 >> 6) & -(uint)(uVar78 < 0x4000);
      uVar195 = uVar195 ^ (uVar195 ^ uVar81 >> 6) & -(uint)(uVar81 < 0x4000);
      uVar197 = uVar197 ^ (uVar197 ^ uVar83 >> 6) & -(uint)(uVar83 < 0x4000);
      uVar199 = uVar199 ^ (uVar199 ^ uVar85 >> 6) & -(uint)(uVar85 < 0x4000);
      uVar68 = (uVar205 + (auVar157._0_4_ >> 8)) - 0x4515;
      uVar83 = (uVar210 + (auVar157._4_4_ >> 8)) - 0x4515;
      uVar70 = (uVar213 + (auVar157._8_4_ >> 8)) - 0x4515;
      uVar85 = (uVar216 + (auVar157._12_4_ >> 8)) - 0x4515;
      uVar135 = (uVar134 + (auVar172._0_4_ >> 8)) - 0x4515;
      uVar140 = (uVar139 + (auVar172._4_4_ >> 8)) - 0x4515;
      uVar144 = (uVar143 + (auVar172._8_4_ >> 8)) - 0x4515;
      uVar148 = (uVar147 + (auVar172._12_4_ >> 8)) - 0x4515;
      uVar116 = ((auVar109._0_4_ >> 8) + (auVar157._0_4_ >> 8)) - 0x4515;
      uVar118 = ((auVar109._4_4_ >> 8) + (auVar157._4_4_ >> 8)) - 0x4515;
      uVar119 = ((auVar109._8_4_ >> 8) + (auVar157._8_4_ >> 8)) - 0x4515;
      uVar120 = ((auVar109._12_4_ >> 8) + (auVar157._12_4_ >> 8)) - 0x4515;
      uVar60 = CONCAT44((int)uVar202 >> 0x1f,(int)uVar201 >> 0x1f) & 0xffffff01ffffff01;
      uVar64 = (int)uVar60 + 0xff;
      uVar78 = (int)(uVar60 >> 0x20) + 0xff;
      uVar66 = ((int)uVar203 >> 0x1f & 0xffffff01U) + 0xff;
      uVar81 = ((int)uVar204 >> 0x1f & 0xffffff01U) + 0xff;
      uVar60 = CONCAT44((int)uVar223 >> 0x1f,(int)uVar220 >> 0x1f) & 0xffffff01ffffff01;
      uVar64 = uVar64 ^ (uVar64 ^ uVar201 >> 6) & -(uint)(uVar201 < 0x4000);
      uVar78 = uVar78 ^ (uVar78 ^ uVar202 >> 6) & -(uint)(uVar202 < 0x4000);
      uVar66 = uVar66 ^ (uVar66 ^ uVar203 >> 6) & -(uint)(uVar203 < 0x4000);
      uVar81 = uVar81 ^ (uVar81 ^ uVar204 >> 6) & -(uint)(uVar204 < 0x4000);
      uVar134 = (uVar134 + (auVar71._0_4_ >> 8)) - 0x379a;
      uVar139 = (uVar139 + (auVar71._4_4_ >> 8)) - 0x379a;
      uVar143 = (uVar143 + (auVar71._8_4_ >> 8)) - 0x379a;
      uVar147 = (uVar147 + (auVar71._12_4_ >> 8)) - 0x379a;
      uVar61 = CONCAT44((int)uVar102 >> 0x1f,(int)uVar99 >> 0x1f) & 0xffffff01ffffff01;
      uVar86 = (uVar86 + (auVar100._0_4_ >> 8)) - 0x379a;
      uVar88 = (uVar88 + (auVar100._4_4_ >> 8)) - 0x379a;
      uVar90 = (uVar90 + (auVar100._8_4_ >> 8)) - 0x379a;
      uVar92 = (uVar92 + (auVar100._12_4_ >> 8)) - 0x379a;
      bVar63 = 0xff - (char)((int)uVar122 >> 0x1f);
      bVar65 = 0xff - (char)((int)uVar124 >> 0x1f);
      bVar67 = 0xff - (char)((int)uVar127 >> 0x1f);
      bVar69 = 0xff - (char)((int)uVar130 >> 0x1f);
      uVar155 = (((auVar109._0_4_ >> 8) + 0x2204) - uVar106) - uVar155;
      uVar159 = (((auVar109._4_4_ >> 8) + 0x2204) - uVar111) - uVar159;
      uVar161 = (((auVar109._8_4_ >> 8) + 0x2204) - uVar113) - uVar161;
      uVar163 = (((auVar109._12_4_ >> 8) + 0x2204) - uVar115) - uVar163;
      bVar121 = 0xff - (char)((int)uVar86 >> 0x1f);
      bVar123 = 0xff - (char)((int)uVar88 >> 0x1f);
      bVar126 = 0xff - (char)((int)uVar90 >> 0x1f);
      bVar129 = 0xff - (char)((int)uVar92 >> 0x1f);
      uVar73 = CONCAT44((int)uVar166 >> 0x1f,(int)uVar165 >> 0x1f) & 0xffffff01ffffff01;
      uVar113 = (int)uVar73 + 0xff;
      uVar125 = (int)(uVar73 >> 0x20) + 0xff;
      uVar128 = ((int)uVar167 >> 0x1f & 0xffffff01U) + 0xff;
      uVar131 = ((int)uVar168 >> 0x1f & 0xffffff01U) + 0xff;
      uVar113 = uVar113 ^ (uVar113 ^ uVar165 >> 6) & -(uint)(uVar165 < 0x4000);
      uVar125 = uVar125 ^ (uVar125 ^ uVar166 >> 6) & -(uint)(uVar166 < 0x4000);
      uVar128 = uVar128 ^ (uVar128 ^ uVar167 >> 6) & -(uint)(uVar167 < 0x4000);
      uVar131 = uVar131 ^ (uVar131 ^ uVar168 >> 6) & -(uint)(uVar168 < 0x4000);
      uVar73 = CONCAT44((int)uVar152 >> 0x1f,(int)uVar149 >> 0x1f) & 0xffffff01ffffff01;
      uVar94 = (((auVar193._0_4_ >> 8) + 0x2204) - uVar105) - uVar94;
      uVar96 = (((auVar193._4_4_ >> 8) + 0x2204) - uVar110) - uVar96;
      uVar97 = (((uint)(ushort)(Var3 >> 0x40) + (auVar193._8_4_ >> 8)) - uVar112) - uVar97;
      uVar98 = (((uint)auVar4._12_2_ + (auVar193._12_4_ >> 8)) - uVar114) - uVar98;
      uVar112 = (int)uVar73 + 0xff;
      uVar165 = (int)(uVar73 >> 0x20) + 0xff;
      uVar166 = ((int)uVar153 >> 0x1f & 0xffffff01U) + 0xff;
      uVar167 = ((int)uVar154 >> 0x1f & 0xffffff01U) + 0xff;
      uVar112 = uVar112 ^ (uVar112 ^ uVar149 >> 6) & -(uint)(uVar149 < 0x4000);
      uVar165 = uVar165 ^ (uVar165 ^ uVar152 >> 6) & -(uint)(uVar152 < 0x4000);
      uVar166 = uVar166 ^ (uVar166 ^ uVar153 >> 6) & -(uint)(uVar153 < 0x4000);
      uVar167 = uVar167 ^ (uVar167 ^ uVar154 >> 6) & -(uint)(uVar154 < 0x4000);
      uVar73 = CONCAT44((int)uVar83 >> 0x1f,(int)uVar68 >> 0x1f) & 0xffffff01ffffff01;
      uVar105 = (uVar207 + (auVar100._0_4_ >> 8)) - 0x379a;
      uVar106 = (uVar212 + (auVar100._4_4_ >> 8)) - 0x379a;
      uVar110 = (uVar215 + (auVar100._8_4_ >> 8)) - 0x379a;
      uVar111 = (uVar218 + (auVar100._12_4_ >> 8)) - 0x379a;
      uVar114 = (int)uVar73 + 0xff;
      uVar149 = (int)(uVar73 >> 0x20) + 0xff;
      uVar153 = ((int)uVar70 >> 0x1f & 0xffffff01U) + 0xff;
      uVar168 = ((int)uVar85 >> 0x1f & 0xffffff01U) + 0xff;
      uVar73 = CONCAT44((int)uVar140 >> 0x1f,(int)uVar135 >> 0x1f) & 0xffffff01ffffff01;
      uVar156 = ((uint)auVar221._1_3_ + (auVar107._0_4_ >> 8)) - 0x379a;
      uVar160 = ((uint)auVar221._5_3_ + (auVar107._4_4_ >> 8)) - 0x379a;
      uVar162 = ((uint)auVar221._9_3_ + (auVar107._8_4_ >> 8)) - 0x379a;
      uVar164 = ((uint)auVar221._13_3_ + (auVar107._12_4_ >> 8)) - 0x379a;
      uVar115 = (int)uVar73 + 0xff;
      uVar152 = (int)(uVar73 >> 0x20) + 0xff;
      uVar154 = ((int)uVar144 >> 0x1f & 0xffffff01U) + 0xff;
      uVar207 = ((int)uVar148 >> 0x1f & 0xffffff01U) + 0xff;
      bVar132 = 0xff - (char)((int)uVar156 >> 0x1f);
      bVar137 = 0xff - (char)((int)uVar160 >> 0x1f);
      bVar141 = 0xff - (char)((int)uVar162 >> 0x1f);
      bVar145 = 0xff - (char)((int)uVar164 >> 0x1f);
      bVar133 = 0xff - (char)((int)uVar105 >> 0x1f);
      bVar138 = 0xff - (char)((int)uVar106 >> 0x1f);
      bVar142 = 0xff - (char)((int)uVar110 >> 0x1f);
      bVar146 = 0xff - (char)((int)uVar111 >> 0x1f);
      uVar73 = CONCAT44((int)uVar159 >> 0x1f,(int)uVar155 >> 0x1f) & 0xffffff01ffffff01;
      uVar212 = (int)uVar73 + 0xff;
      uVar215 = (int)(uVar73 >> 0x20) + 0xff;
      uVar218 = ((int)uVar161 >> 0x1f & 0xffffff01U) + 0xff;
      uVar169 = ((int)uVar163 >> 0x1f & 0xffffff01U) + 0xff;
      uVar212 = uVar212 ^ (uVar212 ^ uVar155 >> 6) & -(uint)(uVar155 < 0x4000);
      uVar215 = uVar215 ^ (uVar215 ^ uVar159 >> 6) & -(uint)(uVar159 < 0x4000);
      uVar218 = uVar218 ^ (uVar218 ^ uVar161 >> 6) & -(uint)(uVar161 < 0x4000);
      uVar169 = uVar169 ^ (uVar169 ^ uVar163 >> 6) & -(uint)(uVar163 < 0x4000);
      uVar73 = CONCAT44((int)uVar96 >> 0x1f,(int)uVar94 >> 0x1f) & 0xffffff01ffffff01;
      uVar155 = (int)uVar73 + 0xff;
      uVar159 = (int)(uVar73 >> 0x20) + 0xff;
      uVar161 = ((int)uVar97 >> 0x1f & 0xffffff01U) + 0xff;
      uVar163 = ((int)uVar98 >> 0x1f & 0xffffff01U) + 0xff;
      uVar155 = uVar155 ^ (uVar155 ^ uVar94 >> 6) & -(uint)(uVar94 < 0x4000);
      uVar159 = uVar159 ^ (uVar159 ^ uVar96 >> 6) & -(uint)(uVar96 < 0x4000);
      uVar161 = uVar161 ^ (uVar161 ^ uVar97 >> 6) & -(uint)(uVar97 < 0x4000);
      uVar163 = uVar163 ^ (uVar163 ^ uVar98 >> 6) & -(uint)(uVar98 < 0x4000);
      uVar170 = CONCAT44((int)uVar118 >> 0x1f,(int)uVar116 >> 0x1f) & 0xffffff01ffffff01;
      uVar73 = CONCAT44((int)uVar180 >> 0x1f,(int)uVar176 >> 0x1f) & 0xffffff01ffffff01;
      uVar205 = (uVar205 + (auVar158._0_4_ >> 8)) - 0x379a;
      uVar210 = (uVar210 + (auVar158._4_4_ >> 8)) - 0x379a;
      uVar213 = (uVar213 + (auVar158._8_4_ >> 8)) - 0x379a;
      uVar216 = (uVar216 + (auVar158._12_4_ >> 8)) - 0x379a;
      bVar72 = 0xff - (char)((int)uVar205 >> 0x1f);
      bVar74 = 0xff - (char)((int)uVar210 >> 0x1f);
      bVar75 = 0xff - (char)((int)uVar213 >> 0x1f);
      bVar76 = 0xff - (char)((int)uVar216 >> 0x1f);
      uVar94 = ((uint)auVar109._1_3_ + (auVar158._0_4_ >> 8)) - 0x379a;
      uVar96 = ((uint)auVar109._5_3_ + (auVar158._4_4_ >> 8)) - 0x379a;
      uVar97 = ((uint)auVar109._9_3_ + (auVar158._8_4_ >> 8)) - 0x379a;
      uVar98 = ((uint)auVar109._13_3_ + (auVar158._12_4_ >> 8)) - 0x379a;
      bVar77 = 0xff - (char)((int)uVar134 >> 0x1f);
      bVar80 = 0xff - (char)((int)uVar139 >> 0x1f);
      bVar82 = 0xff - (char)((int)uVar143 >> 0x1f);
      bVar84 = 0xff - (char)((int)uVar147 >> 0x1f);
      uVar201 = (uVar175 + (auVar71._0_4_ >> 8)) - 0x379a;
      uVar202 = (uVar179 + (auVar71._4_4_ >> 8)) - 0x379a;
      uVar203 = (uVar181 + (auVar71._8_4_ >> 8)) - 0x379a;
      uVar204 = (uVar183 + (auVar71._12_4_ >> 8)) - 0x379a;
      auVar95._0_4_ = -(uint)(uVar94 < 0x4000);
      auVar95._4_4_ = -(uint)(uVar96 < 0x4000);
      auVar95._8_4_ = -(uint)(uVar97 < 0x4000);
      auVar95._12_4_ = -(uint)(uVar98 < 0x4000);
      auVar171._0_4_ = uVar94 >> 6;
      auVar171._4_4_ = uVar96 >> 6;
      auVar171._8_4_ = uVar97 >> 6;
      auVar171._12_4_ = uVar98 >> 6;
      auVar101._0_4_ = 0xff - ((int)uVar94 >> 0x1f);
      auVar101._4_4_ = 0xff - ((int)uVar96 >> 0x1f);
      auVar101._8_4_ = 0xff - ((int)uVar97 >> 0x1f);
      auVar101._12_4_ = 0xff - ((int)uVar98 >> 0x1f);
      auVar101 = auVar101 ^ (auVar101 ^ auVar171) & auVar95;
      auVar174._0_4_ = -(uint)(uVar201 < 0x4000);
      auVar174._4_4_ = -(uint)(uVar202 < 0x4000);
      auVar174._8_4_ = -(uint)(uVar203 < 0x4000);
      auVar174._12_4_ = -(uint)(uVar204 < 0x4000);
      local_c0 = auVar151._0_4_;
      uStack_bc = auVar151._4_4_;
      uStack_b8 = auVar151._8_4_;
      uStack_b4 = auVar151._12_4_;
      bVar13 = (byte)(uVar203 >> 0x18);
      bVar173 = (byte)(uVar204 >> 0x18);
      uVar203 = uVar203 >> 6;
      uVar204 = uVar204 >> 6;
      auVar136._0_4_ = 0xff - ((int)uVar201 >> 0x1f);
      auVar136._4_4_ = 0xff - ((int)uVar202 >> 0x1f);
      auVar136._8_4_ = (bVar13 >> 7) + 0xff;
      auVar136._12_4_ = (bVar173 >> 7) + 0xff;
      auVar62._6_2_ = 0;
      auVar62._0_6_ = (uint6)CONCAT14((char)(uVar202 >> 6),uVar201 >> 6) & 0xffff0000ffff;
      auVar62[8] = (char)uVar203;
      auVar62[9] = (char)(uVar203 >> 8);
      auVar62[10] = (char)(uVar203 >> 0x10);
      auVar62[0xb] = bVar13 >> 6;
      auVar62[0xc] = (char)uVar204;
      auVar62[0xd] = (char)(uVar204 >> 8);
      auVar62[0xe] = (char)(uVar204 >> 0x10);
      auVar62[0xf] = bVar173 >> 6;
      auVar136 = auVar136 ^ (auVar136 ^ auVar62) & auVar174;
      uVar53 = uVar53 - 0x10;
      *pbVar46 = (byte)(auVar150._0_4_ >> 5) |
                 (bVar63 ^ (bVar63 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000)) & 0xf8;
      pbVar46[1] = (byte)((uVar206 ^ (uVar206 ^ uVar219 >> 6) & -(uint)(uVar219 < 0x4000)) >> 3) |
                   (byte)(auVar150._0_4_ << 3) & 0xe0;
      pbVar46[2] = (byte)(uVar192 >> 5) |
                   (bVar132 ^ (bVar132 ^ (byte)(uVar156 >> 6)) & -(uVar156 < 0x4000)) & 0xf8;
      pbVar46[3] = (byte)((uVar220 >> 6 ^
                          (uVar220 >> 6 ^ (int)uVar60 + 0xffU) & -(uint)(0x3fff < uVar220)) >> 3) |
                   (byte)(uVar192 << 3) & 0xe0;
      pbVar46[4] = (byte)(auVar150._4_4_ >> 5) |
                   (bVar65 ^ (bVar65 ^ (byte)(uVar124 >> 6)) & -(uVar124 < 0x4000)) & 0xf8;
      pbVar46[5] = (byte)((uVar211 ^ (uVar211 ^ uVar222 >> 6) & -(uint)(uVar222 < 0x4000)) >> 3) |
                   (byte)(auVar150._4_4_ << 3) & 0xe0;
      pbVar46[6] = (byte)(uVar195 >> 5) |
                   (bVar137 ^ (bVar137 ^ (byte)(uVar160 >> 6)) & -(uVar160 < 0x4000)) & 0xf8;
      pbVar46[7] = (byte)((uVar223 >> 6 ^
                          (uVar223 >> 6 ^ (int)(uVar60 >> 0x20) + 0xffU) & -(uint)(0x3fff < uVar223)
                          ) >> 3) | (byte)(uVar195 << 3) & 0xe0;
      pbVar46[8] = (byte)(auVar150._8_4_ >> 5) |
                   (bVar67 ^ (bVar67 ^ (byte)(uVar127 >> 6)) & -(uVar127 < 0x4000)) & 0xf8;
      pbVar46[9] = (byte)((uVar214 ^ (uVar214 ^ uVar224 >> 6) & -(uint)(uVar224 < 0x4000)) >> 3) |
                   (byte)(auVar150._8_4_ << 3) & 0xe0;
      pbVar46[10] = (byte)(uVar197 >> 5) |
                    (bVar141 ^ (bVar141 ^ (byte)(uVar162 >> 6)) & -(uVar162 < 0x4000)) & 0xf8;
      pbVar46[0xb] = (byte)((uVar225 >> 6 ^
                            (uVar225 >> 6 ^ ((int)uVar225 >> 0x1f & 0xffffff01U) + 0xff) &
                            -(uint)(0x3fff < uVar225)) >> 3) | (byte)(uVar197 << 3) & 0xe0;
      pbVar46[0xc] = (byte)(auVar150._12_4_ >> 5) |
                     (bVar69 ^ (bVar69 ^ (byte)(uVar130 >> 6)) & -(uVar130 < 0x4000)) & 0xf8;
      pbVar46[0xd] = (byte)((uVar217 ^ (uVar217 ^ uVar226 >> 6) & -(uint)(uVar226 < 0x4000)) >> 3) |
                     (byte)(auVar150._12_4_ << 3) & 0xe0;
      pbVar46[0xe] = (byte)(uVar199 >> 5) |
                     (bVar145 ^ (bVar145 ^ (byte)(uVar164 >> 6)) & -(uVar164 < 0x4000)) & 0xf8;
      pbVar46[0xf] = (byte)((uVar227 >> 6 ^
                            (uVar227 >> 6 ^ ((int)uVar227 >> 0x1f & 0xffffff01U) + 0xff) &
                            -(uint)(0x3fff < uVar227)) >> 3) | (byte)(uVar199 << 3) & 0xe0;
      pbVar46[0x10] =
           (byte)(uVar113 >> 5) |
           (bVar72 ^ (bVar72 ^ (byte)(uVar205 >> 6)) & -(uVar205 < 0x4000)) & 0xf8;
      pbVar46[0x11] =
           (byte)((uVar114 ^ (uVar114 ^ uVar68 >> 6) & -(uint)(uVar68 < 0x4000)) >> 3) |
           (byte)(uVar113 << 3) & 0xe0;
      pbVar46[0x12] = (byte)(uVar212 >> 5) | auVar101[0] & 0xf8;
      pbVar46[0x13] =
           (byte)((uVar116 >> 6 ^ (uVar116 >> 6 ^ (int)uVar170 + 0xffU) & -(uint)(0x3fff < uVar116))
                 >> 3) | (byte)(uVar212 << 3) & 0xe0;
      pbVar46[0x14] =
           (byte)(uVar125 >> 5) |
           (bVar74 ^ (bVar74 ^ (byte)(uVar210 >> 6)) & -(uVar210 < 0x4000)) & 0xf8;
      pbVar46[0x15] =
           (byte)((uVar149 ^ (uVar149 ^ uVar83 >> 6) & -(uint)(uVar83 < 0x4000)) >> 3) |
           (byte)(uVar125 << 3) & 0xe0;
      pbVar46[0x16] = (byte)(uVar215 >> 5) | auVar101[4] & 0xf8;
      pbVar46[0x17] =
           (byte)((uVar118 >> 6 ^
                  (uVar118 >> 6 ^ (int)(uVar170 >> 0x20) + 0xffU) & -(uint)(0x3fff < uVar118)) >> 3)
           | (byte)(uVar215 << 3) & 0xe0;
      pbVar46[0x18] =
           (byte)(uVar128 >> 5) |
           (bVar75 ^ (bVar75 ^ (byte)(uVar213 >> 6)) & -(uVar213 < 0x4000)) & 0xf8;
      pbVar46[0x19] =
           (byte)((uVar153 ^ (uVar153 ^ uVar70 >> 6) & -(uint)(uVar70 < 0x4000)) >> 3) |
           (byte)(uVar128 << 3) & 0xe0;
      pbVar46[0x1a] = (byte)(uVar218 >> 5) | auVar101[8] & 0xf8;
      pbVar46[0x1b] =
           (byte)((uVar119 >> 6 ^
                  (uVar119 >> 6 ^ ((int)uVar119 >> 0x1f & 0xffffff01U) + 0xff) &
                  -(uint)(0x3fff < uVar119)) >> 3) | (byte)(uVar218 << 3) & 0xe0;
      pbVar46[0x1c] =
           (byte)(uVar131 >> 5) |
           (bVar76 ^ (bVar76 ^ (byte)(uVar216 >> 6)) & -(uVar216 < 0x4000)) & 0xf8;
      pbVar46[0x1d] =
           (byte)((uVar168 ^ (uVar168 ^ uVar85 >> 6) & -(uint)(uVar85 < 0x4000)) >> 3) |
           (byte)(uVar131 << 3) & 0xe0;
      pbVar46[0x1e] = (byte)(uVar169 >> 5) | auVar101[0xc] & 0xf8;
      pbVar46[0x1f] =
           (byte)((uVar120 >> 6 ^
                  (uVar120 >> 6 ^ ((int)uVar120 >> 0x1f & 0xffffff01U) + 0xff) &
                  -(uint)(0x3fff < uVar120)) >> 3) | (byte)(uVar169 << 3) & 0xe0;
      pbVar46[0x20] =
           (byte)(local_c0 >> 5) |
           (bVar121 ^ (bVar121 ^ (byte)(uVar86 >> 6)) & -(uVar86 < 0x4000)) & 0xf8;
      pbVar46[0x21] =
           (byte)((uVar191 ^ (uVar191 ^ uVar87 >> 6) & -(uint)(uVar87 < 0x4000)) >> 3) |
           (byte)(local_c0 << 3) & 0xe0;
      pbVar46[0x22] =
           (byte)(uVar64 >> 5) |
           (bVar133 ^ (bVar133 ^ (byte)(uVar105 >> 6)) & -(uVar105 < 0x4000)) & 0xf8;
      pbVar46[0x23] =
           (byte)((uVar99 >> 6 ^ (uVar99 >> 6 ^ (int)uVar61 + 0xffU) & -(uint)(0x3fff < uVar99)) >>
                 3) | (byte)(uVar64 << 3) & 0xe0;
      pbVar46[0x24] =
           (byte)(uStack_bc >> 5) |
           (bVar123 ^ (bVar123 ^ (byte)(uVar88 >> 6)) & -(uVar88 < 0x4000)) & 0xf8;
      pbVar46[0x25] =
           (byte)((uVar194 ^ (uVar194 ^ uVar89 >> 6) & -(uint)(uVar89 < 0x4000)) >> 3) |
           (byte)(uStack_bc << 3) & 0xe0;
      pbVar46[0x26] =
           (byte)(uVar78 >> 5) |
           (bVar138 ^ (bVar138 ^ (byte)(uVar106 >> 6)) & -(uVar106 < 0x4000)) & 0xf8;
      pbVar46[0x27] =
           (byte)((uVar102 >> 6 ^
                  (uVar102 >> 6 ^ (int)(uVar61 >> 0x20) + 0xffU) & -(uint)(0x3fff < uVar102)) >> 3)
           | (byte)(uVar78 << 3) & 0xe0;
      pbVar46[0x28] =
           (byte)(uStack_b8 >> 5) |
           (bVar126 ^ (bVar126 ^ (byte)(uVar90 >> 6)) & -(uVar90 < 0x4000)) & 0xf8;
      pbVar46[0x29] =
           (byte)((uVar196 ^ (uVar196 ^ uVar91 >> 6) & -(uint)(uVar91 < 0x4000)) >> 3) |
           (byte)(uStack_b8 << 3) & 0xe0;
      pbVar46[0x2a] =
           (byte)(uVar66 >> 5) |
           (bVar142 ^ (bVar142 ^ (byte)(uVar110 >> 6)) & -(uVar110 < 0x4000)) & 0xf8;
      pbVar46[0x2b] =
           (byte)((uVar103 >> 6 ^
                  (uVar103 >> 6 ^ ((int)uVar103 >> 0x1f & 0xffffff01U) + 0xff) &
                  -(uint)(0x3fff < uVar103)) >> 3) | (byte)(uVar66 << 3) & 0xe0;
      pbVar46[0x2c] =
           (byte)(uStack_b4 >> 5) |
           (bVar129 ^ (bVar129 ^ (byte)(uVar92 >> 6)) & -(uVar92 < 0x4000)) & 0xf8;
      pbVar46[0x2d] =
           (byte)((uVar198 ^ (uVar198 ^ uVar93 >> 6) & -(uint)(uVar93 < 0x4000)) >> 3) |
           (byte)(uStack_b4 << 3) & 0xe0;
      pbVar46[0x2e] =
           (byte)(uVar81 >> 5) |
           (bVar146 ^ (bVar146 ^ (byte)(uVar111 >> 6)) & -(uVar111 < 0x4000)) & 0xf8;
      pbVar46[0x2f] =
           (byte)((uVar104 >> 6 ^
                  (uVar104 >> 6 ^ ((int)uVar104 >> 0x1f & 0xffffff01U) + 0xff) &
                  -(uint)(0x3fff < uVar104)) >> 3) | (byte)(uVar81 << 3) & 0xe0;
      pbVar46[0x30] =
           (byte)(uVar112 >> 5) |
           (bVar77 ^ (bVar77 ^ (byte)(uVar134 >> 6)) & -(uVar134 < 0x4000)) & 0xf8;
      pbVar46[0x31] =
           (byte)((uVar115 ^ (uVar115 ^ uVar135 >> 6) & -(uint)(uVar135 < 0x4000)) >> 3) |
           (byte)(uVar112 << 3) & 0xe0;
      pbVar46[0x32] = (byte)(uVar155 >> 5) | auVar136[0] & 0xf8;
      pbVar46[0x33] =
           (byte)((uVar176 >> 6 ^ (uVar176 >> 6 ^ (int)uVar73 + 0xffU) & -(uint)(0x3fff < uVar176))
                 >> 3) | (byte)(uVar155 << 3) & 0xe0;
      pbVar46[0x34] =
           (byte)(uVar165 >> 5) |
           (bVar80 ^ (bVar80 ^ (byte)(uVar139 >> 6)) & -(uVar139 < 0x4000)) & 0xf8;
      pbVar46[0x35] =
           (byte)((uVar152 ^ (uVar152 ^ uVar140 >> 6) & -(uint)(uVar140 < 0x4000)) >> 3) |
           (byte)(uVar165 << 3) & 0xe0;
      pbVar46[0x36] = (byte)(uVar159 >> 5) | auVar136[4] & 0xf8;
      pbVar46[0x37] =
           (byte)((uVar180 >> 6 ^
                  (uVar180 >> 6 ^ (int)(uVar73 >> 0x20) + 0xffU) & -(uint)(0x3fff < uVar180)) >> 3)
           | (byte)(uVar159 << 3) & 0xe0;
      pbVar46[0x38] =
           (byte)(uVar166 >> 5) |
           (bVar82 ^ (bVar82 ^ (byte)(uVar143 >> 6)) & -(uVar143 < 0x4000)) & 0xf8;
      pbVar46[0x39] =
           (byte)((uVar154 ^ (uVar154 ^ uVar144 >> 6) & -(uint)(uVar144 < 0x4000)) >> 3) |
           (byte)(uVar166 << 3) & 0xe0;
      pbVar46[0x3a] = (byte)(uVar161 >> 5) | auVar136[8] & 0xf8;
      pbVar46[0x3b] =
           (byte)((uVar182 >> 6 ^
                  (uVar182 >> 6 ^ ((int)uVar182 >> 0x1f & 0xffffff01U) + 0xff) &
                  -(uint)(0x3fff < uVar182)) >> 3) | (byte)(uVar161 << 3) & 0xe0;
      pbVar46[0x3c] =
           (byte)(uVar167 >> 5) |
           (bVar84 ^ (bVar84 ^ (byte)(uVar147 >> 6)) & -(uVar147 < 0x4000)) & 0xf8;
      pbVar46[0x3d] =
           (byte)((uVar207 ^ (uVar207 ^ uVar148 >> 6) & -(uint)(uVar148 < 0x4000)) >> 3) |
           (byte)(uVar167 << 3) & 0xe0;
      pbVar46[0x3e] = (byte)(uVar163 >> 5) | auVar136[0xc] & 0xf8;
      pbVar46[0x3f] =
           (byte)((uVar184 >> 6 ^
                  (uVar184 >> 6 ^ ((int)uVar184 >> 0x1f & 0xffffff01U) + 0xff) &
                  -(uint)(0x3fff < uVar184)) >> 3) | (byte)(uVar163 << 3) & 0xe0;
      pbVar46 = pbVar46 + 0x40;
      pbVar47 = pbVar47 + 0x10;
      pbVar49 = pbVar49 + 0x10;
    } while (uVar53 != 0);
    pbVar49 = param_1 + uVar52 * 2;
    param_2 = param_2 + uVar52;
    pbVar47 = param_4 + uVar52 * 4;
    pbVar46 = param_3 + uVar52;
    if (uVar1 != uVar52) goto LAB_00e01d58;
  }
  param_1 = param_1 + (uVar51 >> 1) + 2;
  param_3 = param_3 + uVar1;
  param_4 = param_4 + lVar50;
LAB_00e01f2c:
  if ((param_5 & 1) != 0) {
    uVar202 = (uint)*param_1 * 0x4a85 >> 8;
    uVar201 = (uVar202 + ((uint)*param_3 * 0x6625 >> 8)) - 0x379a;
    if (uVar201 >> 0xe == 0) {
      bVar173 = (byte)(uVar201 >> 6);
    }
    else {
      bVar173 = ((byte)((int)uVar201 >> 0x1f) & 1) - 1;
    }
    uVar201 = ((uVar202 + 0x2204) - ((uint)*pbVar48 * 0x1913 >> 8)) - ((uint)*param_3 * 0x3408 >> 8)
    ;
    if (uVar201 >> 0xe == 0) {
      uVar201 = uVar201 >> 6;
    }
    else {
      uVar201 = ((int)uVar201 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar202 = (uVar202 + ((uint)*pbVar48 * 0x811a >> 8)) - 0x4515;
    if (uVar202 >> 0xe == 0) {
      uVar202 = uVar202 >> 6;
    }
    else {
      uVar202 = ((int)uVar202 >> 0x1f & 0xffffff01U) + 0xff;
    }
    *param_4 = bVar173 & 0xf8 | (byte)(uVar201 >> 5);
    param_4[1] = (byte)((uVar201 & 0x1c) << 3) | (byte)(uVar202 >> 3);
  }
  return;
}


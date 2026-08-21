
void FUN_01157594(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint3 uVar21;
  uint3 uVar22;
  undefined2 uVar23;
  uint3 uVar24;
  uint3 uVar25;
  uint3 uVar26;
  byte *pbVar27;
  byte *pbVar28;
  long lVar29;
  char *pcVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  byte *pbVar35;
  int iVar36;
  char cVar37;
  size_t __n;
  long lVar38;
  size_t __n_00;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  byte bVar75;
  byte bVar76;
  uint uVar77;
  undefined8 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar83;
  byte bVar88;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined8 uVar89;
  byte bVar101;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined8 uVar102;
  byte bVar110;
  undefined1 auVar103 [16];
  uint uVar111;
  undefined8 uVar112;
  uint uVar115;
  uint uVar116;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  uint uVar117;
  uint uVar118;
  undefined8 uVar119;
  uint uVar122;
  uint uVar123;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  uint uVar124;
  short sVar125;
  uint uVar126;
  short sVar132;
  short sVar133;
  short sVar135;
  undefined8 uVar127;
  uint uVar134;
  short sVar136;
  uint uVar137;
  short sVar138;
  short sVar139;
  short sVar141;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  uint uVar140;
  undefined8 uVar142;
  undefined1 auVar143 [16];
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  uint uVar150;
  uint uVar151;
  uint uVar152;
  uint uVar153;
  uint uVar154;
  uint uVar155;
  uint uVar159;
  uint uVar160;
  uint uVar161;
  uint uVar162;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  uint uVar163;
  uint uVar164;
  uint uVar165;
  uint uVar166;
  byte bVar170;
  uint uVar171;
  uint uVar172;
  byte bVar173;
  uint uVar174;
  uint uVar175;
  byte bVar176;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  uint uVar177;
  uint uVar178;
  uint uVar179;
  byte bVar184;
  uint uVar185;
  byte bVar186;
  uint uVar187;
  byte bVar188;
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  uint uVar189;
  uint uVar190;
  byte bVar195;
  uint uVar197;
  byte bVar198;
  uint uVar200;
  byte bVar201;
  undefined1 auVar191 [16];
  byte bVar196;
  byte bVar199;
  byte bVar202;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  uint uVar203;
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  byte *local_140;
  byte *local_138;
  undefined8 local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  byte bStack_100;
  byte abStack_f9 [2];
  undefined7 uStack_f7;
  byte bStack_f0;
  byte local_e0 [72];
  long local_98;
  
  local_110 = tpidr_el0;
  local_98 = *(long *)(local_110 + 0x28);
  iVar36 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  uVar2 = (uint)*param_1 * 0x4a85 >> 8;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar154 = iVar36 + (uint)*param_3 >> 1;
  uVar68 = (uVar2 + (uVar154 * 0x811a >> 8)) - 0x4515;
  uVar69 = iVar1 + (uint)*param_4 >> 1;
  if (uVar68 >> 0xe == 0) {
    cVar37 = (char)(uVar68 >> 6);
  }
  else {
    cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
  }
  uVar68 = ((uVar2 + 0x2204) - (uVar154 * 0x1913 >> 8)) - (uVar69 * 0x3408 >> 8);
  *param_7 = cVar37;
  if (uVar68 >> 0xe == 0) {
    cVar37 = (char)(uVar68 >> 6);
  }
  else {
    cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
  }
  uVar154 = ((int)(param_9 + 1U) >> 1) + -1 >> 3;
  uVar68 = (uVar2 + (uVar69 * 0x6625 >> 8)) - 0x379a;
  param_7[1] = cVar37;
  if (uVar68 >> 0xe == 0) {
    cVar37 = (char)(uVar68 >> 6);
  }
  else {
    cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
  }
  lVar38 = ((long)((ulong)(param_9 + 1U) << 0x20) >> 0x21) + (long)(int)uVar154 * -8;
  param_7[2] = cVar37;
  if (param_2 != (byte *)0x0) {
    uVar2 = iVar36 + (uint)*param_5 >> 1;
    uVar69 = (uint)*param_2 * 0x4a85 >> 8;
    uVar68 = (uVar69 + (uVar2 * 0x811a >> 8)) - 0x4515;
    uVar159 = iVar1 + (uint)*param_6 >> 1;
    if (uVar68 >> 0xe == 0) {
      cVar37 = (char)(uVar68 >> 6);
    }
    else {
      cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
    }
    uVar68 = ((uVar69 + 0x2204) - (uVar2 * 0x1913 >> 8)) - (uVar159 * 0x3408 >> 8);
    *param_8 = cVar37;
    if (uVar68 >> 0xe == 0) {
      cVar37 = (char)(uVar68 >> 6);
    }
    else {
      cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
    }
    uVar68 = (uVar69 + (uVar159 * 0x6625 >> 8)) - 0x379a;
    param_8[1] = cVar37;
    if (uVar68 >> 0xe == 0) {
      cVar37 = (char)(uVar68 >> 6);
    }
    else {
      cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
    }
    param_8[2] = cVar37;
  }
  uVar68 = uVar154 << 4 | 1;
  local_140 = param_4;
  local_138 = param_6;
  if (0 < (int)uVar154) {
    lVar32 = (ulong)(uVar154 - 1) * 8 + 8;
    uVar31 = (ulong)uVar154;
    iVar36 = 1;
    pbVar35 = param_3 + lVar32;
    local_140 = param_4 + lVar32;
    pbVar27 = param_5;
    pbVar28 = param_6;
    do {
      uVar78 = *(undefined8 *)param_3;
      uVar83 = *(undefined8 *)(param_3 + 1);
      uVar89 = *(undefined8 *)pbVar27;
      uVar102 = *(undefined8 *)(pbVar27 + 1);
      bVar55 = (byte)((ulong)uVar78 >> 8);
      bVar56 = (byte)((ulong)uVar78 >> 0x10);
      bVar57 = (byte)((ulong)uVar78 >> 0x18);
      bVar58 = (byte)((ulong)uVar78 >> 0x20);
      bVar59 = (byte)((ulong)uVar78 >> 0x28);
      bVar60 = (byte)((ulong)uVar78 >> 0x30);
      bVar61 = (byte)((ulong)uVar78 >> 0x38);
      bVar62 = (byte)((ulong)uVar83 >> 8);
      bVar63 = (byte)((ulong)uVar83 >> 0x10);
      bVar64 = (byte)((ulong)uVar83 >> 0x18);
      bVar65 = (byte)((ulong)uVar83 >> 0x20);
      bVar66 = (byte)((ulong)uVar83 >> 0x28);
      bVar67 = (byte)((ulong)uVar83 >> 0x30);
      bVar88 = (byte)((ulong)uVar83 >> 0x38);
      bVar95 = (byte)((ulong)uVar89 >> 8);
      bVar96 = (byte)((ulong)uVar89 >> 0x10);
      bVar97 = (byte)((ulong)uVar89 >> 0x18);
      bVar98 = (byte)((ulong)uVar89 >> 0x20);
      bVar99 = (byte)((ulong)uVar89 >> 0x28);
      bVar100 = (byte)((ulong)uVar89 >> 0x30);
      bVar101 = (byte)((ulong)uVar89 >> 0x38);
      uVar21 = CONCAT12(bVar95,(short)uVar89) & 0xff00ff;
      bVar104 = (byte)((ulong)uVar102 >> 8);
      bVar105 = (byte)((ulong)uVar102 >> 0x10);
      bVar106 = (byte)((ulong)uVar102 >> 0x18);
      bVar107 = (byte)((ulong)uVar102 >> 0x20);
      bVar108 = (byte)((ulong)uVar102 >> 0x28);
      bVar109 = (byte)((ulong)uVar102 >> 0x30);
      bVar110 = (byte)((ulong)uVar102 >> 0x38);
      sVar125 = (ushort)(byte)uVar83 + (ushort)(byte)uVar78 + (short)uVar21 + (ushort)(byte)uVar102;
      sVar132 = (ushort)bVar62 + (ushort)bVar55 + (ushort)(byte)(uVar21 >> 0x10) + (ushort)bVar104;
      sVar133 = (ushort)bVar63 + (ushort)bVar56 + (ushort)bVar96 + (ushort)bVar105;
      sVar135 = (ushort)bVar64 + (ushort)bVar57 + (ushort)bVar97 + (ushort)bVar106;
      sVar136 = (ushort)bVar65 + (ushort)bVar58 + (ushort)bVar98 + (ushort)bVar107;
      sVar138 = (ushort)bVar66 + (ushort)bVar59 + (ushort)bVar99 + (ushort)bVar108;
      sVar139 = (ushort)bVar67 + (ushort)bVar60 + (ushort)bVar100 + (ushort)bVar109;
      sVar141 = (ushort)bVar88 + (ushort)bVar61 + (ushort)bVar101 + (ushort)bVar110;
      uVar21 = CONCAT12(bVar104,(short)uVar102) & 0xff00ff;
      uVar119 = CONCAT17((char)((ushort)(((ushort)bVar101 + (ushort)bVar88) * 2 + sVar141) >> 3),
                         CONCAT16((char)((ushort)(((ushort)bVar100 + (ushort)bVar67) * 2 + sVar139)
                                        >> 3),
                                  CONCAT15((char)((ushort)(((ushort)bVar99 + (ushort)bVar66) * 2 +
                                                          sVar138) >> 3),
                                           CONCAT14((char)((ushort)(((ushort)bVar98 + (ushort)bVar65
                                                                    ) * 2 + sVar136) >> 3),
                                                    CONCAT13((char)((ushort)(((ushort)bVar97 +
                                                                             (ushort)bVar64) * 2 +
                                                                            sVar135) >> 3),
                                                             CONCAT12((char)((ushort)(((ushort)
                                                  bVar96 + (ushort)bVar63) * 2 + sVar133) >> 3),
                                                  CONCAT11((char)((ushort)(((ushort)bVar95 +
                                                                           (ushort)bVar62) * 2 +
                                                                          sVar132) >> 3),
                                                           (char)((ushort)(((ushort)(byte)uVar89 +
                                                                           (ushort)(byte)uVar83) * 2
                                                                          + sVar125) >> 3))))))));
      uVar112 = CONCAT17((char)((ushort)(sVar141 + (ushort)bVar61 * 2 + (ushort)bVar110 * 2) >> 3),
                         CONCAT16((char)((ushort)(sVar139 + (ushort)bVar60 * 2 + (ushort)bVar109 * 2
                                                 ) >> 3),
                                  CONCAT15((char)((ushort)(sVar138 + (ushort)bVar59 * 2 +
                                                          (ushort)bVar108 * 2) >> 3),
                                           CONCAT14((char)((ushort)(sVar136 + (ushort)bVar58 * 2 +
                                                                   (ushort)bVar107 * 2) >> 3),
                                                    CONCAT13((char)((ushort)(sVar135 + (ushort)
                                                  bVar57 * 2 + (ushort)bVar106 * 2) >> 3),
                                                  CONCAT12((char)((ushort)(sVar133 + (ushort)bVar56
                                                                                     * 2 +
                                                                          (ushort)bVar105 * 2) >> 3)
                                                           ,CONCAT11((char)((ushort)(sVar132 + (
                                                  ushort)bVar55 * 2 +
                                                  (ushort)(byte)(uVar21 >> 0x10) * 2) >> 3),
                                                  (char)((ushort)(sVar125 + (ushort)(byte)uVar78 * 2
                                                                 + (short)uVar21 * 2) >> 3))))))));
      uVar127 = NEON_urhadd(uVar78,uVar119,1);
      uVar142 = NEON_urhadd(uVar83,uVar112,1);
      uVar78 = NEON_urhadd(uVar89,uVar112,1);
      uVar83 = NEON_urhadd(uVar102,uVar119,1);
      local_e0[0] = (byte)uVar127;
      local_e0[1] = (byte)uVar142;
      local_e0[2] = (byte)((ulong)uVar127 >> 8);
      local_e0[3] = (byte)((ulong)uVar142 >> 8);
      local_e0[4] = (byte)((ulong)uVar127 >> 0x10);
      local_e0[5] = (byte)((ulong)uVar142 >> 0x10);
      local_e0[6] = (byte)((ulong)uVar127 >> 0x18);
      local_e0[7] = (byte)((ulong)uVar142 >> 0x18);
      local_e0[8] = (byte)((ulong)uVar127 >> 0x20);
      local_e0[9] = (byte)((ulong)uVar142 >> 0x20);
      local_e0[10] = (byte)((ulong)uVar127 >> 0x28);
      local_e0[0xb] = (byte)((ulong)uVar142 >> 0x28);
      local_e0[0xc] = (byte)((ulong)uVar127 >> 0x30);
      local_e0[0xd] = (byte)((ulong)uVar142 >> 0x30);
      local_e0[0xe] = (byte)((ulong)uVar127 >> 0x38);
      local_e0[0xf] = (byte)((ulong)uVar142 >> 0x38);
      local_e0[0x20] = (byte)uVar78;
      local_e0[0x21] = (byte)uVar83;
      local_e0[0x22] = (byte)((ulong)uVar78 >> 8);
      local_e0[0x23] = (byte)((ulong)uVar83 >> 8);
      local_e0[0x24] = (byte)((ulong)uVar78 >> 0x10);
      local_e0[0x25] = (byte)((ulong)uVar83 >> 0x10);
      local_e0[0x26] = (byte)((ulong)uVar78 >> 0x18);
      local_e0[0x27] = (byte)((ulong)uVar83 >> 0x18);
      local_e0[0x28] = (byte)((ulong)uVar78 >> 0x20);
      local_e0[0x29] = (byte)((ulong)uVar83 >> 0x20);
      local_e0[0x2a] = (byte)((ulong)uVar78 >> 0x28);
      local_e0[0x2b] = (byte)((ulong)uVar83 >> 0x28);
      local_e0[0x2c] = (byte)((ulong)uVar78 >> 0x30);
      local_e0[0x2d] = (byte)((ulong)uVar83 >> 0x30);
      local_e0[0x2e] = (byte)((ulong)uVar78 >> 0x38);
      local_e0[0x2f] = (byte)((ulong)uVar83 >> 0x38);
      uVar78 = *(undefined8 *)param_4;
      uVar89 = *(undefined8 *)(param_4 + 1);
      uVar102 = *(undefined8 *)pbVar28;
      uVar83 = *(undefined8 *)(pbVar28 + 1);
      bVar55 = (byte)((ulong)uVar78 >> 8);
      bVar56 = (byte)((ulong)uVar78 >> 0x10);
      bVar57 = (byte)((ulong)uVar78 >> 0x18);
      bVar58 = (byte)((ulong)uVar78 >> 0x20);
      bVar59 = (byte)((ulong)uVar78 >> 0x28);
      bVar60 = (byte)((ulong)uVar78 >> 0x30);
      bVar61 = (byte)((ulong)uVar78 >> 0x38);
      bVar95 = (byte)((ulong)uVar89 >> 8);
      bVar96 = (byte)((ulong)uVar89 >> 0x10);
      bVar97 = (byte)((ulong)uVar89 >> 0x18);
      bVar98 = (byte)((ulong)uVar89 >> 0x20);
      bVar99 = (byte)((ulong)uVar89 >> 0x28);
      bVar100 = (byte)((ulong)uVar89 >> 0x30);
      bVar101 = (byte)((ulong)uVar89 >> 0x38);
      bVar104 = (byte)((ulong)uVar102 >> 8);
      bVar105 = (byte)((ulong)uVar102 >> 0x10);
      bVar106 = (byte)((ulong)uVar102 >> 0x18);
      bVar107 = (byte)((ulong)uVar102 >> 0x20);
      bVar108 = (byte)((ulong)uVar102 >> 0x28);
      bVar109 = (byte)((ulong)uVar102 >> 0x30);
      bVar110 = (byte)((ulong)uVar102 >> 0x38);
      uVar21 = CONCAT12(bVar104,(short)uVar102) & 0xff00ff;
      bVar62 = (byte)((ulong)uVar83 >> 8);
      bVar63 = (byte)((ulong)uVar83 >> 0x10);
      bVar64 = (byte)((ulong)uVar83 >> 0x18);
      bVar65 = (byte)((ulong)uVar83 >> 0x20);
      bVar66 = (byte)((ulong)uVar83 >> 0x28);
      bVar67 = (byte)((ulong)uVar83 >> 0x30);
      bVar88 = (byte)((ulong)uVar83 >> 0x38);
      sVar125 = (ushort)(byte)uVar89 + (ushort)(byte)uVar78 + (short)uVar21 + (ushort)(byte)uVar83;
      sVar132 = (ushort)bVar95 + (ushort)bVar55 + (ushort)(byte)(uVar21 >> 0x10) + (ushort)bVar62;
      sVar133 = (ushort)bVar96 + (ushort)bVar56 + (ushort)bVar105 + (ushort)bVar63;
      sVar135 = (ushort)bVar97 + (ushort)bVar57 + (ushort)bVar106 + (ushort)bVar64;
      sVar136 = (ushort)bVar98 + (ushort)bVar58 + (ushort)bVar107 + (ushort)bVar65;
      sVar138 = (ushort)bVar99 + (ushort)bVar59 + (ushort)bVar108 + (ushort)bVar66;
      sVar139 = (ushort)bVar100 + (ushort)bVar60 + (ushort)bVar109 + (ushort)bVar67;
      sVar141 = (ushort)bVar101 + (ushort)bVar61 + (ushort)bVar110 + (ushort)bVar88;
      uVar21 = CONCAT12(bVar62,(short)uVar83) & 0xff00ff;
      uVar119 = CONCAT17((char)((ushort)(((ushort)bVar110 + (ushort)bVar101) * 2 + sVar141) >> 3),
                         CONCAT16((char)((ushort)(((ushort)bVar109 + (ushort)bVar100) * 2 + sVar139)
                                        >> 3),
                                  CONCAT15((char)((ushort)(((ushort)bVar108 + (ushort)bVar99) * 2 +
                                                          sVar138) >> 3),
                                           CONCAT14((char)((ushort)(((ushort)bVar107 +
                                                                    (ushort)bVar98) * 2 + sVar136)
                                                          >> 3),
                                                    CONCAT13((char)((ushort)(((ushort)bVar106 +
                                                                             (ushort)bVar97) * 2 +
                                                                            sVar135) >> 3),
                                                             CONCAT12((char)((ushort)(((ushort)
                                                  bVar105 + (ushort)bVar96) * 2 + sVar133) >> 3),
                                                  CONCAT11((char)((ushort)(((ushort)bVar104 +
                                                                           (ushort)bVar95) * 2 +
                                                                          sVar132) >> 3),
                                                           (char)((ushort)(((ushort)(byte)uVar102 +
                                                                           (ushort)(byte)uVar89) * 2
                                                                          + sVar125) >> 3))))))));
      uVar112 = CONCAT17((char)((ushort)(sVar141 + (ushort)bVar61 * 2 + (ushort)bVar88 * 2) >> 3),
                         CONCAT16((char)((ushort)(sVar139 + (ushort)bVar60 * 2 + (ushort)bVar67 * 2)
                                        >> 3),
                                  CONCAT15((char)((ushort)(sVar138 + (ushort)bVar59 * 2 +
                                                          (ushort)bVar66 * 2) >> 3),
                                           CONCAT14((char)((ushort)(sVar136 + (ushort)bVar58 * 2 +
                                                                   (ushort)bVar65 * 2) >> 3),
                                                    CONCAT13((char)((ushort)(sVar135 + (ushort)
                                                  bVar57 * 2 + (ushort)bVar64 * 2) >> 3),
                                                  CONCAT12((char)((ushort)(sVar133 + (ushort)bVar56
                                                                                     * 2 +
                                                                          (ushort)bVar63 * 2) >> 3),
                                                           CONCAT11((char)((ushort)(sVar132 + (
                                                  ushort)bVar55 * 2 +
                                                  (ushort)(byte)(uVar21 >> 0x10) * 2) >> 3),
                                                  (char)((ushort)(sVar125 + (ushort)(byte)uVar78 * 2
                                                                 + (short)uVar21 * 2) >> 3))))))));
      uVar127 = NEON_urhadd(uVar78,uVar119,1);
      uVar89 = NEON_urhadd(uVar89,uVar112,1);
      uVar78 = NEON_urhadd(uVar102,uVar112,1);
      uVar33 = (ulong)iVar36;
      uVar83 = NEON_urhadd(uVar83,uVar119,1);
      local_e0[0x10] = (byte)uVar127;
      local_e0[0x11] = (byte)uVar89;
      local_e0[0x12] = (byte)((ulong)uVar127 >> 8);
      local_e0[0x13] = (byte)((ulong)uVar89 >> 8);
      local_e0[0x14] = (byte)((ulong)uVar127 >> 0x10);
      local_e0[0x15] = (byte)((ulong)uVar89 >> 0x10);
      local_e0[0x16] = (byte)((ulong)uVar127 >> 0x18);
      local_e0[0x17] = (byte)((ulong)uVar89 >> 0x18);
      local_e0[0x18] = (byte)((ulong)uVar127 >> 0x20);
      local_e0[0x19] = (byte)((ulong)uVar89 >> 0x20);
      local_e0[0x1a] = (byte)((ulong)uVar127 >> 0x28);
      local_e0[0x1b] = (byte)((ulong)uVar89 >> 0x28);
      local_e0[0x1c] = (byte)((ulong)uVar127 >> 0x30);
      local_e0[0x1d] = (byte)((ulong)uVar89 >> 0x30);
      local_e0[0x1e] = (byte)((ulong)uVar127 >> 0x38);
      local_e0[0x1f] = (byte)((ulong)uVar89 >> 0x38);
      local_e0[0x30] = (byte)uVar78;
      local_e0[0x31] = (byte)uVar83;
      local_e0[0x32] = (byte)((ulong)uVar78 >> 8);
      local_e0[0x33] = (byte)((ulong)uVar83 >> 8);
      local_e0[0x34] = (byte)((ulong)uVar78 >> 0x10);
      local_e0[0x35] = (byte)((ulong)uVar83 >> 0x10);
      local_e0[0x36] = (byte)((ulong)uVar78 >> 0x18);
      local_e0[0x37] = (byte)((ulong)uVar83 >> 0x18);
      local_e0[0x38] = (byte)((ulong)uVar78 >> 0x20);
      local_e0[0x39] = (byte)((ulong)uVar83 >> 0x20);
      local_e0[0x3a] = (byte)((ulong)uVar78 >> 0x28);
      local_e0[0x3b] = (byte)((ulong)uVar83 >> 0x28);
      local_e0[0x3c] = (byte)((ulong)uVar78 >> 0x30);
      local_e0[0x3d] = (byte)((ulong)uVar83 >> 0x30);
      local_e0[0x3e] = (byte)((ulong)uVar78 >> 0x38);
      local_e0[0x3f] = (byte)((ulong)uVar83 >> 0x38);
      uVar78 = *(undefined8 *)(param_1 + uVar33);
      lVar29 = uVar33 + (long)iVar36 * 2;
      auVar206._0_2_ = (ushort)(byte)uVar78 << 7;
      auVar206._2_2_ = (ushort)(byte)((ulong)uVar78 >> 8) << 7;
      auVar206._4_2_ = (ushort)(byte)((ulong)uVar78 >> 0x10) << 7;
      auVar206._6_2_ = (ushort)(byte)((ulong)uVar78 >> 0x18) << 7;
      auVar206._8_2_ = (ushort)(byte)((ulong)uVar78 >> 0x20) << 7;
      auVar206._10_2_ = (ushort)(byte)((ulong)uVar78 >> 0x28) << 7;
      auVar206._12_2_ = (ushort)(byte)((ulong)uVar78 >> 0x30) << 7;
      auVar206._14_2_ = (ushort)(byte)((ulong)uVar78 >> 0x38) << 7;
      auVar84._0_2_ = (ushort)local_e0[0] << 7;
      auVar84._2_2_ = (ushort)local_e0[1] << 7;
      auVar84._4_2_ = (ushort)local_e0[2] << 7;
      auVar84._6_2_ = (ushort)local_e0[3] << 7;
      auVar84._8_2_ = (ushort)local_e0[4] << 7;
      auVar84._10_2_ = (ushort)local_e0[5] << 7;
      auVar84._12_2_ = (ushort)local_e0[6] << 7;
      auVar84._14_2_ = (ushort)local_e0[7] << 7;
      auVar90._0_2_ = (ushort)local_e0[0x10] << 7;
      auVar90._2_2_ = (ushort)local_e0[0x11] << 7;
      auVar90._4_2_ = (ushort)local_e0[0x12] << 7;
      auVar90._6_2_ = (ushort)local_e0[0x13] << 7;
      auVar90._8_2_ = (ushort)local_e0[0x14] << 7;
      auVar90._10_2_ = (ushort)local_e0[0x15] << 7;
      auVar90._12_2_ = (ushort)local_e0[0x16] << 7;
      auVar90._14_2_ = (ushort)local_e0[0x17] << 7;
      auVar79._8_2_ = 0x4a85;
      auVar79._0_8_ = 0x4a854a854a854a85;
      auVar79._10_2_ = 0x4a85;
      auVar79._12_2_ = 0x4a85;
      auVar79._14_2_ = 0x4a85;
      auVar79 = NEON_sqdmulh(auVar206,auVar79,2);
      auVar103._8_2_ = 0x6625;
      auVar103._0_8_ = 0x6625662566256625;
      auVar103._10_2_ = 0x6625;
      auVar103._12_2_ = 0x6625;
      auVar103._14_2_ = 0x6625;
      auVar103 = NEON_sqdmulh(auVar90,auVar103,2);
      auVar120._8_2_ = 0x1913;
      auVar120._0_8_ = 0x1913191319131913;
      auVar120._10_2_ = 0x1913;
      auVar120._12_2_ = 0x1913;
      auVar120._14_2_ = 0x1913;
      auVar113 = NEON_sqdmulh(auVar84,auVar120,2);
      auVar143[8] = 8;
      auVar143._0_8_ = 0x3408340834083408;
      auVar143[9] = 0x34;
      auVar143[10] = 8;
      auVar143[0xb] = 0x34;
      auVar143[0xc] = 8;
      auVar143[0xd] = 0x34;
      auVar143[0xe] = 8;
      auVar143[0xf] = 0x34;
      auVar91 = NEON_sqdmulh(auVar90,auVar143,2);
      auVar158._8_2_ = 0xc866;
      auVar158._0_8_ = 0xc866c866c866c866;
      auVar158._10_2_ = 0xc866;
      auVar158._12_2_ = 0xc866;
      auVar158._14_2_ = 0xc866;
      auVar128 = NEON_sqadd(auVar79,auVar158,2);
      auVar121._8_2_ = 0x11a;
      auVar121._0_8_ = 0x11a011a011a011a;
      auVar121._10_2_ = 0x11a;
      auVar121._12_2_ = 0x11a;
      auVar121._14_2_ = 0x11a;
      auVar120 = NEON_sqdmulh(auVar84,auVar121,2);
      auVar182._8_2_ = 0x2204;
      auVar182._0_8_ = 0x2204220422042204;
      auVar182._10_2_ = 0x2204;
      auVar182._12_2_ = 0x2204;
      auVar182._14_2_ = 0x2204;
      auVar143 = NEON_sqadd(auVar79,auVar182,2);
      auVar193._8_2_ = 0xbaeb;
      auVar193._0_8_ = 0xbaebbaebbaebbaeb;
      auVar193._10_2_ = 0xbaeb;
      auVar193._12_2_ = 0xbaeb;
      auVar193._14_2_ = 0xbaeb;
      auVar79 = NEON_sqadd(auVar79,auVar193,2);
      auVar91 = NEON_sqadd(auVar113,auVar91,2);
      auVar103 = NEON_sqadd(auVar103,auVar128,2);
      auVar79 = NEON_sqadd(auVar120,auVar79,2);
      auVar91 = NEON_sqsub(auVar143,auVar91,2);
      uVar89 = NEON_sqshrun(auVar120._0_8_,auVar103,6,2);
      auVar79 = NEON_sqadd(auVar79,auVar84,2);
      uVar83 = NEON_sqshrun(auVar113._0_8_,auVar91,6,2);
      pcVar30 = param_7 + lVar29;
      uVar78 = NEON_sqshrun(auVar103._0_8_,auVar79,6,2);
      *pcVar30 = (char)uVar78;
      pcVar30[1] = (char)uVar83;
      pcVar30[2] = (char)uVar89;
      pcVar30[3] = (char)((ulong)uVar78 >> 8);
      pcVar30[4] = (char)((ulong)uVar83 >> 8);
      pcVar30[5] = (char)((ulong)uVar89 >> 8);
      pcVar30[6] = (char)((ulong)uVar78 >> 0x10);
      pcVar30[7] = (char)((ulong)uVar83 >> 0x10);
      pcVar30[8] = (char)((ulong)uVar89 >> 0x10);
      pcVar30[9] = (char)((ulong)uVar78 >> 0x18);
      pcVar30[10] = (char)((ulong)uVar83 >> 0x18);
      pcVar30[0xb] = (char)((ulong)uVar89 >> 0x18);
      pcVar30[0xc] = (char)((ulong)uVar78 >> 0x20);
      pcVar30[0xd] = (char)((ulong)uVar83 >> 0x20);
      pcVar30[0xe] = (char)((ulong)uVar89 >> 0x20);
      pcVar30[0xf] = (char)((ulong)uVar78 >> 0x28);
      pcVar30[0x10] = (char)((ulong)uVar83 >> 0x28);
      pcVar30[0x11] = (char)((ulong)uVar89 >> 0x28);
      pcVar30[0x12] = (char)((ulong)uVar78 >> 0x30);
      pcVar30[0x13] = (char)((ulong)uVar83 >> 0x30);
      pcVar30[0x14] = (char)((ulong)uVar89 >> 0x30);
      pcVar30[0x15] = (char)((ulong)uVar78 >> 0x38);
      pcVar30[0x16] = (char)((ulong)uVar83 >> 0x38);
      pcVar30[0x17] = (char)((ulong)uVar89 >> 0x38);
      uVar78 = *(undefined8 *)(param_1 + uVar33 + 8);
      auVar80._0_2_ = (ushort)(byte)uVar78 << 7;
      auVar80._2_2_ = (ushort)(byte)((ulong)uVar78 >> 8) << 7;
      auVar80._4_2_ = (ushort)(byte)((ulong)uVar78 >> 0x10) << 7;
      auVar80._6_2_ = (ushort)(byte)((ulong)uVar78 >> 0x18) << 7;
      auVar80._8_2_ = (ushort)(byte)((ulong)uVar78 >> 0x20) << 7;
      auVar80._10_2_ = (ushort)(byte)((ulong)uVar78 >> 0x28) << 7;
      auVar80._12_2_ = (ushort)(byte)((ulong)uVar78 >> 0x30) << 7;
      auVar80._14_2_ = (ushort)(byte)((ulong)uVar78 >> 0x38) << 7;
      auVar85._0_2_ = (ushort)local_e0[8] << 7;
      auVar85._2_2_ = (ushort)local_e0[9] << 7;
      auVar85._4_2_ = (ushort)local_e0[10] << 7;
      auVar85._6_2_ = (ushort)local_e0[0xb] << 7;
      auVar85._8_2_ = (ushort)local_e0[0xc] << 7;
      auVar85._10_2_ = (ushort)local_e0[0xd] << 7;
      auVar85._12_2_ = (ushort)local_e0[0xe] << 7;
      auVar85._14_2_ = (ushort)local_e0[0xf] << 7;
      auVar92._0_2_ = (ushort)local_e0[0x18] << 7;
      auVar92._2_2_ = (ushort)local_e0[0x19] << 7;
      auVar92._4_2_ = (ushort)local_e0[0x1a] << 7;
      auVar92._6_2_ = (ushort)local_e0[0x1b] << 7;
      auVar92._8_2_ = (ushort)local_e0[0x1c] << 7;
      auVar92._10_2_ = (ushort)local_e0[0x1d] << 7;
      auVar92._12_2_ = (ushort)local_e0[0x1e] << 7;
      auVar92._14_2_ = (ushort)local_e0[0x1f] << 7;
      auVar91._8_2_ = 0x4a85;
      auVar91._0_8_ = 0x4a854a854a854a85;
      auVar91._10_2_ = 0x4a85;
      auVar91._12_2_ = 0x4a85;
      auVar91._14_2_ = 0x4a85;
      auVar79 = NEON_sqdmulh(auVar80,auVar91,2);
      auVar113._8_2_ = 0x6625;
      auVar113._0_8_ = 0x6625662566256625;
      auVar113._10_2_ = 0x6625;
      auVar113._12_2_ = 0x6625;
      auVar113._14_2_ = 0x6625;
      auVar103 = NEON_sqdmulh(auVar92,auVar113,2);
      auVar128._8_2_ = 0x1913;
      auVar128._0_8_ = 0x1913191319131913;
      auVar128._10_2_ = 0x1913;
      auVar128._12_2_ = 0x1913;
      auVar128._14_2_ = 0x1913;
      auVar113 = NEON_sqdmulh(auVar85,auVar128,2);
      auVar114[8] = 8;
      auVar114._0_8_ = 0x3408340834083408;
      auVar114[9] = 0x34;
      auVar114[10] = 8;
      auVar114[0xb] = 0x34;
      auVar114[0xc] = 8;
      auVar114[0xd] = 0x34;
      auVar114[0xe] = 8;
      auVar114[0xf] = 0x34;
      auVar91 = NEON_sqdmulh(auVar92,auVar114,2);
      auVar169._8_2_ = 0xc866;
      auVar169._0_8_ = 0xc866c866c866c866;
      auVar169._10_2_ = 0xc866;
      auVar169._12_2_ = 0xc866;
      auVar169._14_2_ = 0xc866;
      auVar128 = NEON_sqadd(auVar79,auVar169,2);
      auVar131._8_2_ = 0x11a;
      auVar131._0_8_ = 0x11a011a011a011a;
      auVar131._10_2_ = 0x11a;
      auVar131._12_2_ = 0x11a;
      auVar131._14_2_ = 0x11a;
      auVar120 = NEON_sqdmulh(auVar85,auVar131,2);
      auVar183._8_2_ = 0x2204;
      auVar183._0_8_ = 0x2204220422042204;
      auVar183._10_2_ = 0x2204;
      auVar183._12_2_ = 0x2204;
      auVar183._14_2_ = 0x2204;
      auVar143 = NEON_sqadd(auVar79,auVar183,2);
      auVar194._8_2_ = 0xbaeb;
      auVar194._0_8_ = 0xbaebbaebbaebbaeb;
      auVar194._10_2_ = 0xbaeb;
      auVar194._12_2_ = 0xbaeb;
      auVar194._14_2_ = 0xbaeb;
      auVar79 = NEON_sqadd(auVar79,auVar194,2);
      auVar91 = NEON_sqadd(auVar113,auVar91,2);
      auVar103 = NEON_sqadd(auVar103,auVar128,2);
      auVar79 = NEON_sqadd(auVar120,auVar79,2);
      auVar91 = NEON_sqsub(auVar143,auVar91,2);
      uVar89 = NEON_sqshrun(auVar120._0_8_,auVar103,6,2);
      lVar34 = (uVar33 | 8) * 3;
      auVar79 = NEON_sqadd(auVar79,auVar85,2);
      uVar83 = NEON_sqshrun(auVar113._0_8_,auVar91,6,2);
      uVar78 = NEON_sqshrun(auVar103._0_8_,auVar79,6,2);
      pcVar30 = param_7 + lVar34;
      *pcVar30 = (char)uVar78;
      pcVar30[1] = (char)uVar83;
      pcVar30[2] = (char)uVar89;
      pcVar30[3] = (char)((ulong)uVar78 >> 8);
      pcVar30[4] = (char)((ulong)uVar83 >> 8);
      pcVar30[5] = (char)((ulong)uVar89 >> 8);
      pcVar30[6] = (char)((ulong)uVar78 >> 0x10);
      pcVar30[7] = (char)((ulong)uVar83 >> 0x10);
      pcVar30[8] = (char)((ulong)uVar89 >> 0x10);
      pcVar30[9] = (char)((ulong)uVar78 >> 0x18);
      pcVar30[10] = (char)((ulong)uVar83 >> 0x18);
      pcVar30[0xb] = (char)((ulong)uVar89 >> 0x18);
      pcVar30[0xc] = (char)((ulong)uVar78 >> 0x20);
      pcVar30[0xd] = (char)((ulong)uVar83 >> 0x20);
      pcVar30[0xe] = (char)((ulong)uVar89 >> 0x20);
      pcVar30[0xf] = (char)((ulong)uVar78 >> 0x28);
      pcVar30[0x10] = (char)((ulong)uVar83 >> 0x28);
      pcVar30[0x11] = (char)((ulong)uVar89 >> 0x28);
      pcVar30[0x12] = (char)((ulong)uVar78 >> 0x30);
      pcVar30[0x13] = (char)((ulong)uVar83 >> 0x30);
      pcVar30[0x14] = (char)((ulong)uVar89 >> 0x30);
      pcVar30[0x15] = (char)((ulong)uVar78 >> 0x38);
      pcVar30[0x16] = (char)((ulong)uVar83 >> 0x38);
      pcVar30[0x17] = (char)((ulong)uVar89 >> 0x38);
      if (param_2 != (byte *)0x0) {
        uVar78 = *(undefined8 *)(param_2 + uVar33);
        pcVar30 = param_8 + lVar29;
        auVar81._0_2_ = (ushort)local_e0[0x20] << 7;
        auVar81._2_2_ = (ushort)local_e0[0x21] << 7;
        auVar81._4_2_ = (ushort)local_e0[0x22] << 7;
        auVar81._6_2_ = (ushort)local_e0[0x23] << 7;
        auVar81._8_2_ = (ushort)local_e0[0x24] << 7;
        auVar81._10_2_ = (ushort)local_e0[0x25] << 7;
        auVar81._12_2_ = (ushort)local_e0[0x26] << 7;
        auVar81._14_2_ = (ushort)local_e0[0x27] << 7;
        auVar86._0_2_ = (ushort)local_e0[0x30] << 7;
        auVar86._2_2_ = (ushort)local_e0[0x31] << 7;
        auVar86._4_2_ = (ushort)local_e0[0x32] << 7;
        auVar86._6_2_ = (ushort)local_e0[0x33] << 7;
        auVar86._8_2_ = (ushort)local_e0[0x34] << 7;
        auVar86._10_2_ = (ushort)local_e0[0x35] << 7;
        auVar86._12_2_ = (ushort)local_e0[0x36] << 7;
        auVar86._14_2_ = (ushort)local_e0[0x37] << 7;
        auVar93._0_2_ = (ushort)(byte)uVar78 << 7;
        auVar93._2_2_ = (ushort)(byte)((ulong)uVar78 >> 8) << 7;
        auVar93._4_2_ = (ushort)(byte)((ulong)uVar78 >> 0x10) << 7;
        auVar93._6_2_ = (ushort)(byte)((ulong)uVar78 >> 0x18) << 7;
        auVar93._8_2_ = (ushort)(byte)((ulong)uVar78 >> 0x20) << 7;
        auVar93._10_2_ = (ushort)(byte)((ulong)uVar78 >> 0x28) << 7;
        auVar93._12_2_ = (ushort)(byte)((ulong)uVar78 >> 0x30) << 7;
        auVar93._14_2_ = (ushort)(byte)((ulong)uVar78 >> 0x38) << 7;
        auVar7._8_2_ = 0x6625;
        auVar7._0_8_ = 0x6625662566256625;
        auVar7._10_2_ = 0x6625;
        auVar7._12_2_ = 0x6625;
        auVar7._14_2_ = 0x6625;
        auVar103 = NEON_sqdmulh(auVar86,auVar7,2);
        auVar9._8_2_ = 0x1913;
        auVar9._0_8_ = 0x1913191319131913;
        auVar9._10_2_ = 0x1913;
        auVar9._12_2_ = 0x1913;
        auVar9._14_2_ = 0x1913;
        auVar113 = NEON_sqdmulh(auVar81,auVar9,2);
        auVar11[8] = 8;
        auVar11._0_8_ = 0x3408340834083408;
        auVar11[9] = 0x34;
        auVar11[10] = 8;
        auVar11[0xb] = 0x34;
        auVar11[0xc] = 8;
        auVar11[0xd] = 0x34;
        auVar11[0xe] = 8;
        auVar11[0xf] = 0x34;
        auVar79 = NEON_sqdmulh(auVar86,auVar11,2);
        auVar5._8_2_ = 0x4a85;
        auVar5._0_8_ = 0x4a854a854a854a85;
        auVar5._10_2_ = 0x4a85;
        auVar5._12_2_ = 0x4a85;
        auVar5._14_2_ = 0x4a85;
        auVar91 = NEON_sqdmulh(auVar93,auVar5,2);
        auVar13._8_2_ = 0x11a;
        auVar13._0_8_ = 0x11a011a011a011a;
        auVar13._10_2_ = 0x11a;
        auVar13._12_2_ = 0x11a;
        auVar13._14_2_ = 0x11a;
        auVar128 = NEON_sqdmulh(auVar81,auVar13,2);
        auVar79 = NEON_sqadd(auVar113,auVar79,2);
        auVar15._8_2_ = 0xc866;
        auVar15._0_8_ = 0xc866c866c866c866;
        auVar15._10_2_ = 0xc866;
        auVar15._12_2_ = 0xc866;
        auVar15._14_2_ = 0xc866;
        auVar120 = NEON_sqadd(auVar91,auVar15,2);
        auVar17._8_2_ = 0x2204;
        auVar17._0_8_ = 0x2204220422042204;
        auVar17._10_2_ = 0x2204;
        auVar17._12_2_ = 0x2204;
        auVar17._14_2_ = 0x2204;
        auVar143 = NEON_sqadd(auVar91,auVar17,2);
        auVar19._8_2_ = 0xbaeb;
        auVar19._0_8_ = 0xbaebbaebbaebbaeb;
        auVar19._10_2_ = 0xbaeb;
        auVar19._12_2_ = 0xbaeb;
        auVar19._14_2_ = 0xbaeb;
        auVar91 = NEON_sqadd(auVar91,auVar19,2);
        auVar113 = NEON_sqadd(auVar103,auVar120,2);
        auVar103 = NEON_sqadd(auVar128,auVar91,2);
        auVar91 = NEON_sqsub(auVar143,auVar79,2);
        auVar79 = NEON_sqadd(auVar103,auVar81,2);
        uVar89 = NEON_sqshrun(auVar120._0_8_,auVar113,6,2);
        uVar83 = NEON_sqshrun(auVar113._0_8_,auVar91,6,2);
        uVar78 = NEON_sqshrun(auVar103._0_8_,auVar79,6,2);
        *pcVar30 = (char)uVar78;
        pcVar30[1] = (char)uVar83;
        pcVar30[2] = (char)uVar89;
        pcVar30[3] = (char)((ulong)uVar78 >> 8);
        pcVar30[4] = (char)((ulong)uVar83 >> 8);
        pcVar30[5] = (char)((ulong)uVar89 >> 8);
        pcVar30[6] = (char)((ulong)uVar78 >> 0x10);
        pcVar30[7] = (char)((ulong)uVar83 >> 0x10);
        pcVar30[8] = (char)((ulong)uVar89 >> 0x10);
        pcVar30[9] = (char)((ulong)uVar78 >> 0x18);
        pcVar30[10] = (char)((ulong)uVar83 >> 0x18);
        pcVar30[0xb] = (char)((ulong)uVar89 >> 0x18);
        pcVar30[0xc] = (char)((ulong)uVar78 >> 0x20);
        pcVar30[0xd] = (char)((ulong)uVar83 >> 0x20);
        pcVar30[0xe] = (char)((ulong)uVar89 >> 0x20);
        pcVar30[0xf] = (char)((ulong)uVar78 >> 0x28);
        pcVar30[0x10] = (char)((ulong)uVar83 >> 0x28);
        pcVar30[0x11] = (char)((ulong)uVar89 >> 0x28);
        pcVar30[0x12] = (char)((ulong)uVar78 >> 0x30);
        pcVar30[0x13] = (char)((ulong)uVar83 >> 0x30);
        pcVar30[0x14] = (char)((ulong)uVar89 >> 0x30);
        pcVar30[0x15] = (char)((ulong)uVar78 >> 0x38);
        pcVar30[0x16] = (char)((ulong)uVar83 >> 0x38);
        pcVar30[0x17] = (char)((ulong)uVar89 >> 0x38);
        uVar78 = *(undefined8 *)(param_2 + uVar33 + 8);
        pcVar30 = param_8 + lVar34;
        auVar82._0_2_ = (ushort)(byte)uVar78 << 7;
        auVar82._2_2_ = (ushort)(byte)((ulong)uVar78 >> 8) << 7;
        auVar82._4_2_ = (ushort)(byte)((ulong)uVar78 >> 0x10) << 7;
        auVar82._6_2_ = (ushort)(byte)((ulong)uVar78 >> 0x18) << 7;
        auVar82._8_2_ = (ushort)(byte)((ulong)uVar78 >> 0x20) << 7;
        auVar82._10_2_ = (ushort)(byte)((ulong)uVar78 >> 0x28) << 7;
        auVar82._12_2_ = (ushort)(byte)((ulong)uVar78 >> 0x30) << 7;
        auVar82._14_2_ = (ushort)(byte)((ulong)uVar78 >> 0x38) << 7;
        auVar87._0_2_ = (ushort)local_e0[0x28] << 7;
        auVar87._2_2_ = (ushort)local_e0[0x29] << 7;
        auVar87._4_2_ = (ushort)local_e0[0x2a] << 7;
        auVar87._6_2_ = (ushort)local_e0[0x2b] << 7;
        auVar87._8_2_ = (ushort)local_e0[0x2c] << 7;
        auVar87._10_2_ = (ushort)local_e0[0x2d] << 7;
        auVar87._12_2_ = (ushort)local_e0[0x2e] << 7;
        auVar87._14_2_ = (ushort)local_e0[0x2f] << 7;
        auVar94._0_2_ = (ushort)local_e0[0x38] << 7;
        auVar94._2_2_ = (ushort)local_e0[0x39] << 7;
        auVar94._4_2_ = (ushort)local_e0[0x3a] << 7;
        auVar94._6_2_ = (ushort)local_e0[0x3b] << 7;
        auVar94._8_2_ = (ushort)local_e0[0x3c] << 7;
        auVar94._10_2_ = (ushort)local_e0[0x3d] << 7;
        auVar94._12_2_ = (ushort)local_e0[0x3e] << 7;
        auVar94._14_2_ = (ushort)local_e0[0x3f] << 7;
        auVar6._8_2_ = 0x4a85;
        auVar6._0_8_ = 0x4a854a854a854a85;
        auVar6._10_2_ = 0x4a85;
        auVar6._12_2_ = 0x4a85;
        auVar6._14_2_ = 0x4a85;
        auVar79 = NEON_sqdmulh(auVar82,auVar6,2);
        auVar8._8_2_ = 0x6625;
        auVar8._0_8_ = 0x6625662566256625;
        auVar8._10_2_ = 0x6625;
        auVar8._12_2_ = 0x6625;
        auVar8._14_2_ = 0x6625;
        auVar103 = NEON_sqdmulh(auVar94,auVar8,2);
        auVar10._8_2_ = 0x1913;
        auVar10._0_8_ = 0x1913191319131913;
        auVar10._10_2_ = 0x1913;
        auVar10._12_2_ = 0x1913;
        auVar10._14_2_ = 0x1913;
        auVar113 = NEON_sqdmulh(auVar87,auVar10,2);
        auVar12[8] = 8;
        auVar12._0_8_ = 0x3408340834083408;
        auVar12[9] = 0x34;
        auVar12[10] = 8;
        auVar12[0xb] = 0x34;
        auVar12[0xc] = 8;
        auVar12[0xd] = 0x34;
        auVar12[0xe] = 8;
        auVar12[0xf] = 0x34;
        auVar91 = NEON_sqdmulh(auVar94,auVar12,2);
        auVar16._8_2_ = 0xc866;
        auVar16._0_8_ = 0xc866c866c866c866;
        auVar16._10_2_ = 0xc866;
        auVar16._12_2_ = 0xc866;
        auVar16._14_2_ = 0xc866;
        auVar128 = NEON_sqadd(auVar79,auVar16,2);
        auVar14._8_2_ = 0x11a;
        auVar14._0_8_ = 0x11a011a011a011a;
        auVar14._10_2_ = 0x11a;
        auVar14._12_2_ = 0x11a;
        auVar14._14_2_ = 0x11a;
        auVar120 = NEON_sqdmulh(auVar87,auVar14,2);
        auVar18._8_2_ = 0x2204;
        auVar18._0_8_ = 0x2204220422042204;
        auVar18._10_2_ = 0x2204;
        auVar18._12_2_ = 0x2204;
        auVar18._14_2_ = 0x2204;
        auVar143 = NEON_sqadd(auVar79,auVar18,2);
        auVar20._8_2_ = 0xbaeb;
        auVar20._0_8_ = 0xbaebbaebbaebbaeb;
        auVar20._10_2_ = 0xbaeb;
        auVar20._12_2_ = 0xbaeb;
        auVar20._14_2_ = 0xbaeb;
        auVar79 = NEON_sqadd(auVar79,auVar20,2);
        auVar91 = NEON_sqadd(auVar113,auVar91,2);
        auVar103 = NEON_sqadd(auVar103,auVar128,2);
        auVar79 = NEON_sqadd(auVar120,auVar79,2);
        auVar91 = NEON_sqsub(auVar143,auVar91,2);
        uVar89 = NEON_sqshrun(auVar120._0_8_,auVar103,6,2);
        auVar79 = NEON_sqadd(auVar79,auVar87,2);
        uVar83 = NEON_sqshrun(auVar113._0_8_,auVar91,6,2);
        uVar78 = NEON_sqshrun(auVar103._0_8_,auVar79,6,2);
        *pcVar30 = (char)uVar78;
        pcVar30[1] = (char)uVar83;
        pcVar30[2] = (char)uVar89;
        pcVar30[3] = (char)((ulong)uVar78 >> 8);
        pcVar30[4] = (char)((ulong)uVar83 >> 8);
        pcVar30[5] = (char)((ulong)uVar89 >> 8);
        pcVar30[6] = (char)((ulong)uVar78 >> 0x10);
        pcVar30[7] = (char)((ulong)uVar83 >> 0x10);
        pcVar30[8] = (char)((ulong)uVar89 >> 0x10);
        pcVar30[9] = (char)((ulong)uVar78 >> 0x18);
        pcVar30[10] = (char)((ulong)uVar83 >> 0x18);
        pcVar30[0xb] = (char)((ulong)uVar89 >> 0x18);
        pcVar30[0xc] = (char)((ulong)uVar78 >> 0x20);
        pcVar30[0xd] = (char)((ulong)uVar83 >> 0x20);
        pcVar30[0xe] = (char)((ulong)uVar89 >> 0x20);
        pcVar30[0xf] = (char)((ulong)uVar78 >> 0x28);
        pcVar30[0x10] = (char)((ulong)uVar83 >> 0x28);
        pcVar30[0x11] = (char)((ulong)uVar89 >> 0x28);
        pcVar30[0x12] = (char)((ulong)uVar78 >> 0x30);
        pcVar30[0x13] = (char)((ulong)uVar83 >> 0x30);
        pcVar30[0x14] = (char)((ulong)uVar89 >> 0x30);
        pcVar30[0x15] = (char)((ulong)uVar78 >> 0x38);
        pcVar30[0x16] = (char)((ulong)uVar83 >> 0x38);
        pcVar30[0x17] = (char)((ulong)uVar89 >> 0x38);
      }
      iVar36 = iVar36 + 0x10;
      uVar31 = uVar31 - 1;
      param_3 = param_3 + 8;
      pbVar27 = pbVar27 + 8;
      param_4 = param_4 + 8;
      pbVar28 = pbVar28 + 8;
    } while (uVar31 != 0);
    param_5 = param_5 + lVar32;
    local_138 = param_6 + lVar32;
    param_3 = pbVar35;
  }
  __n = (size_t)(int)lVar38;
  memcpy(abStack_f9 + 1,param_3,__n);
  memcpy(&local_108,param_5,__n);
  __n_00 = (size_t)(9 - (int)lVar38);
  memset(abStack_f9 + __n + 1,(uint)abStack_f9[lVar38],__n_00);
  memset(&local_108 + __n,(uint)*(byte *)((long)&local_110 + lVar38 + 7),__n_00);
  bVar55 = (byte)uStack_f7;
  bVar56 = (byte)((uint7)uStack_f7 >> 8);
  bVar57 = (byte)((uint7)uStack_f7 >> 0x10);
  bVar58 = (byte)((uint7)uStack_f7 >> 0x18);
  bVar59 = (byte)((uint7)uStack_f7 >> 0x20);
  bVar60 = (byte)((uint7)uStack_f7 >> 0x28);
  bVar61 = (byte)((uint7)uStack_f7 >> 0x30);
  bVar62 = (byte)((uint7)uStack_107 >> 8);
  bVar63 = (byte)((uint7)uStack_107 >> 0x10);
  bVar64 = (byte)((uint7)uStack_107 >> 0x18);
  bVar65 = (byte)((uint7)uStack_107 >> 0x20);
  bVar66 = (byte)((uint7)uStack_107 >> 0x28);
  bVar67 = (byte)((uint7)uStack_107 >> 0x30);
  uVar21 = CONCAT12(bVar55,(short)CONCAT71(uStack_f7,abStack_f9[1])) & 0xff00ff;
  uVar22 = CONCAT12(bVar56,(short)uStack_f7) & 0xff00ff;
  uVar23 = (undefined2)CONCAT71(uStack_107,local_108);
  uVar24 = CONCAT12((char)uStack_107,uVar23) & 0xff00ff;
  uVar25 = CONCAT12((char)uStack_107,uVar23) & 0xff00ff;
  uVar26 = CONCAT12(bVar62,(short)uStack_107) & 0xff00ff;
  sVar125 = (short)uVar22 + (ushort)abStack_f9[1] + (short)uVar25 + (short)uVar26;
  sVar132 = (ushort)(byte)(uVar22 >> 0x10) + (ushort)bVar55 + (ushort)(byte)(uVar25 >> 0x10) +
            (ushort)(byte)(uVar26 >> 0x10);
  sVar133 = (ushort)bVar57 + (ushort)bVar56 + (ushort)bVar62 + (ushort)bVar63;
  sVar135 = (ushort)bVar58 + (ushort)bVar57 + (ushort)bVar63 + (ushort)bVar64;
  sVar136 = (ushort)bVar59 + (ushort)bVar58 + (ushort)bVar64 + (ushort)bVar65;
  sVar138 = (ushort)bVar60 + (ushort)bVar59 + (ushort)bVar65 + (ushort)bVar66;
  sVar139 = (ushort)bVar61 + (ushort)bVar60 + (ushort)bVar66 + (ushort)bVar67;
  sVar141 = (ushort)bStack_f0 + (ushort)bVar61 + (ushort)bVar67 + (ushort)bStack_100;
  uVar22 = CONCAT12(bVar62,(short)uStack_107) & 0xff00ff;
  uVar39 = (undefined1)((ushort)(((short)uVar24 + (ushort)bVar55) * 2 + sVar125) >> 3);
  uVar41 = (undefined1)
           ((ushort)(((ushort)(byte)(uVar24 >> 0x10) + (ushort)bVar56) * 2 + sVar132) >> 3);
  uVar43 = (undefined1)((ushort)(((ushort)bVar62 + (ushort)bVar57) * 2 + sVar133) >> 3);
  uVar45 = (undefined1)((ushort)(((ushort)bVar63 + (ushort)bVar58) * 2 + sVar135) >> 3);
  uVar47 = (undefined1)((ushort)(((ushort)bVar64 + (ushort)bVar59) * 2 + sVar136) >> 3);
  uVar49 = (undefined1)((ushort)(((ushort)bVar65 + (ushort)bVar60) * 2 + sVar138) >> 3);
  uVar51 = (undefined1)((ushort)(((ushort)bVar66 + (ushort)bVar61) * 2 + sVar139) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar67 + (ushort)bStack_f0) * 2 + sVar141) >> 3);
  uVar40 = (undefined1)((ushort)(sVar125 + (short)uVar21 * 2 + (short)uVar22 * 2) >> 3);
  uVar42 = (undefined1)
           ((ushort)(sVar132 + (ushort)(byte)(uVar21 >> 0x10) * 2 +
                    (ushort)(byte)(uVar22 >> 0x10) * 2) >> 3);
  uVar44 = (undefined1)((ushort)(sVar133 + (ushort)bVar56 * 2 + (ushort)bVar63 * 2) >> 3);
  uVar46 = (undefined1)((ushort)(sVar135 + (ushort)bVar57 * 2 + (ushort)bVar64 * 2) >> 3);
  uVar48 = (undefined1)((ushort)(sVar136 + (ushort)bVar58 * 2 + (ushort)bVar65 * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar138 + (ushort)bVar59 * 2 + (ushort)bVar66 * 2) >> 3);
  uVar52 = (undefined1)((ushort)(sVar139 + (ushort)bVar60 * 2 + (ushort)bVar67 * 2) >> 3);
  uVar54 = (undefined1)((ushort)(sVar141 + (ushort)bVar61 * 2 + (ushort)bStack_100 * 2) >> 3);
  uVar78 = NEON_urhadd(CONCAT71(uStack_f7,abStack_f9[1]),
                       CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(uVar47,CONCAT13(
                                                  uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39)))))
                                               )),1);
  local_e0[0] = (byte)uVar78;
  local_e0[2] = (byte)((ulong)uVar78 >> 8);
  local_e0[4] = (byte)((ulong)uVar78 >> 0x10);
  local_e0[6] = (byte)((ulong)uVar78 >> 0x18);
  local_e0[8] = (byte)((ulong)uVar78 >> 0x20);
  local_e0[10] = (byte)((ulong)uVar78 >> 0x28);
  local_e0[0xc] = (byte)((ulong)uVar78 >> 0x30);
  local_e0[0xe] = (byte)((ulong)uVar78 >> 0x38);
  uVar78 = NEON_urhadd(CONCAT17(bStack_f0,uStack_f7),
                       CONCAT17(uVar54,CONCAT16(uVar52,CONCAT15(uVar50,CONCAT14(uVar48,CONCAT13(
                                                  uVar46,CONCAT12(uVar44,CONCAT11(uVar42,uVar40)))))
                                               )),1);
  local_e0[1] = (byte)uVar78;
  local_e0[3] = (byte)((ulong)uVar78 >> 8);
  local_e0[5] = (byte)((ulong)uVar78 >> 0x10);
  local_e0[7] = (byte)((ulong)uVar78 >> 0x18);
  local_e0[9] = (byte)((ulong)uVar78 >> 0x20);
  local_e0[0xb] = (byte)((ulong)uVar78 >> 0x28);
  local_e0[0xd] = (byte)((ulong)uVar78 >> 0x30);
  local_e0[0xf] = (byte)((ulong)uVar78 >> 0x38);
  uVar78 = NEON_urhadd(CONCAT71(uStack_107,local_108),
                       CONCAT17(uVar54,CONCAT16(uVar52,CONCAT15(uVar50,CONCAT14(uVar48,CONCAT13(
                                                  uVar46,CONCAT12(uVar44,CONCAT11(uVar42,uVar40)))))
                                               )),1);
  local_e0[0x20] = (byte)uVar78;
  local_e0[0x22] = (byte)((ulong)uVar78 >> 8);
  local_e0[0x24] = (byte)((ulong)uVar78 >> 0x10);
  local_e0[0x26] = (byte)((ulong)uVar78 >> 0x18);
  local_e0[0x28] = (byte)((ulong)uVar78 >> 0x20);
  local_e0[0x2a] = (byte)((ulong)uVar78 >> 0x28);
  local_e0[0x2c] = (byte)((ulong)uVar78 >> 0x30);
  local_e0[0x2e] = (byte)((ulong)uVar78 >> 0x38);
  uVar78 = NEON_urhadd(CONCAT17(bStack_100,uStack_107),
                       CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(uVar47,CONCAT13(
                                                  uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39)))))
                                               )),1);
  local_e0[0x21] = (byte)uVar78;
  local_e0[0x23] = (byte)((ulong)uVar78 >> 8);
  local_e0[0x25] = (byte)((ulong)uVar78 >> 0x10);
  local_e0[0x27] = (byte)((ulong)uVar78 >> 0x18);
  local_e0[0x29] = (byte)((ulong)uVar78 >> 0x20);
  local_e0[0x2b] = (byte)((ulong)uVar78 >> 0x28);
  local_e0[0x2d] = (byte)((ulong)uVar78 >> 0x30);
  local_e0[0x2f] = (byte)((ulong)uVar78 >> 0x38);
  memcpy(abStack_f9 + 1,local_140,__n);
  memcpy(&local_108,local_138,__n);
  memset(abStack_f9 + __n + 1,(uint)abStack_f9[lVar38],__n_00);
  memset(&local_108 + __n,(uint)*(byte *)((long)&local_110 + lVar38 + 7),__n_00);
  bVar55 = (byte)uStack_f7;
  bVar56 = (byte)((uint7)uStack_f7 >> 8);
  bVar57 = (byte)((uint7)uStack_f7 >> 0x10);
  bVar58 = (byte)((uint7)uStack_f7 >> 0x18);
  bVar59 = (byte)((uint7)uStack_f7 >> 0x20);
  bVar60 = (byte)((uint7)uStack_f7 >> 0x28);
  bVar61 = (byte)((uint7)uStack_f7 >> 0x30);
  bVar62 = (byte)((uint7)uStack_107 >> 8);
  bVar63 = (byte)((uint7)uStack_107 >> 0x10);
  bVar64 = (byte)((uint7)uStack_107 >> 0x18);
  bVar65 = (byte)((uint7)uStack_107 >> 0x20);
  bVar66 = (byte)((uint7)uStack_107 >> 0x28);
  bVar67 = (byte)((uint7)uStack_107 >> 0x30);
  uVar21 = CONCAT12(bVar55,(short)CONCAT71(uStack_f7,abStack_f9[1])) & 0xff00ff;
  uVar22 = CONCAT12(bVar56,(short)uStack_f7) & 0xff00ff;
  uVar23 = (undefined2)CONCAT71(uStack_107,local_108);
  uVar24 = CONCAT12((char)uStack_107,uVar23) & 0xff00ff;
  uVar25 = CONCAT12((char)uStack_107,uVar23) & 0xff00ff;
  uVar26 = CONCAT12(bVar62,(short)uStack_107) & 0xff00ff;
  sVar125 = (short)uVar22 + (ushort)abStack_f9[1] + (short)uVar25 + (short)uVar26;
  sVar132 = (ushort)(byte)(uVar22 >> 0x10) + (ushort)bVar55 + (ushort)(byte)(uVar25 >> 0x10) +
            (ushort)(byte)(uVar26 >> 0x10);
  sVar133 = (ushort)bVar57 + (ushort)bVar56 + (ushort)bVar62 + (ushort)bVar63;
  sVar135 = (ushort)bVar58 + (ushort)bVar57 + (ushort)bVar63 + (ushort)bVar64;
  sVar136 = (ushort)bVar59 + (ushort)bVar58 + (ushort)bVar64 + (ushort)bVar65;
  sVar138 = (ushort)bVar60 + (ushort)bVar59 + (ushort)bVar65 + (ushort)bVar66;
  sVar139 = (ushort)bVar61 + (ushort)bVar60 + (ushort)bVar66 + (ushort)bVar67;
  sVar141 = (ushort)bStack_f0 + (ushort)bVar61 + (ushort)bVar67 + (ushort)bStack_100;
  uVar22 = CONCAT12(bVar62,(short)uStack_107) & 0xff00ff;
  uVar39 = (undefined1)((ushort)(((short)uVar24 + (ushort)bVar55) * 2 + sVar125) >> 3);
  uVar41 = (undefined1)
           ((ushort)(((ushort)(byte)(uVar24 >> 0x10) + (ushort)bVar56) * 2 + sVar132) >> 3);
  uVar43 = (undefined1)((ushort)(((ushort)bVar62 + (ushort)bVar57) * 2 + sVar133) >> 3);
  uVar45 = (undefined1)((ushort)(((ushort)bVar63 + (ushort)bVar58) * 2 + sVar135) >> 3);
  uVar47 = (undefined1)((ushort)(((ushort)bVar64 + (ushort)bVar59) * 2 + sVar136) >> 3);
  uVar49 = (undefined1)((ushort)(((ushort)bVar65 + (ushort)bVar60) * 2 + sVar138) >> 3);
  uVar51 = (undefined1)((ushort)(((ushort)bVar66 + (ushort)bVar61) * 2 + sVar139) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar67 + (ushort)bStack_f0) * 2 + sVar141) >> 3);
  uVar40 = (undefined1)((ushort)(sVar125 + (short)uVar21 * 2 + (short)uVar22 * 2) >> 3);
  uVar42 = (undefined1)
           ((ushort)(sVar132 + (ushort)(byte)(uVar21 >> 0x10) * 2 +
                    (ushort)(byte)(uVar22 >> 0x10) * 2) >> 3);
  uVar44 = (undefined1)((ushort)(sVar133 + (ushort)bVar56 * 2 + (ushort)bVar63 * 2) >> 3);
  uVar46 = (undefined1)((ushort)(sVar135 + (ushort)bVar57 * 2 + (ushort)bVar64 * 2) >> 3);
  uVar48 = (undefined1)((ushort)(sVar136 + (ushort)bVar58 * 2 + (ushort)bVar65 * 2) >> 3);
  uVar50 = (undefined1)((ushort)(sVar138 + (ushort)bVar59 * 2 + (ushort)bVar66 * 2) >> 3);
  uVar52 = (undefined1)((ushort)(sVar139 + (ushort)bVar60 * 2 + (ushort)bVar67 * 2) >> 3);
  uVar54 = (undefined1)((ushort)(sVar141 + (ushort)bVar61 * 2 + (ushort)bStack_100 * 2) >> 3);
  uVar89 = NEON_urhadd(CONCAT71(uStack_f7,abStack_f9[1]),
                       CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(uVar47,CONCAT13(
                                                  uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39)))))
                                               )),1);
  uVar102 = NEON_urhadd(CONCAT17(bStack_f0,uStack_f7),
                        CONCAT17(uVar54,CONCAT16(uVar52,CONCAT15(uVar50,CONCAT14(uVar48,CONCAT13(
                                                  uVar46,CONCAT12(uVar44,CONCAT11(uVar42,uVar40)))))
                                                )),1);
  uVar78 = NEON_urhadd(CONCAT71(uStack_107,local_108),
                       CONCAT17(uVar54,CONCAT16(uVar52,CONCAT15(uVar50,CONCAT14(uVar48,CONCAT13(
                                                  uVar46,CONCAT12(uVar44,CONCAT11(uVar42,uVar40)))))
                                               )),1);
  uVar83 = NEON_urhadd(CONCAT17(bStack_100,uStack_107),
                       CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(uVar47,CONCAT13(
                                                  uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39)))))
                                               )),1);
  local_e0[0x10] = (char)uVar89;
  local_e0[0x11] = (char)uVar102;
  local_e0[0x12] = (char)((ulong)uVar89 >> 8);
  local_e0[0x13] = (char)((ulong)uVar102 >> 8);
  local_e0[0x14] = (char)((ulong)uVar89 >> 0x10);
  local_e0[0x15] = (char)((ulong)uVar102 >> 0x10);
  local_e0[0x16] = (char)((ulong)uVar89 >> 0x18);
  local_e0[0x17] = (char)((ulong)uVar102 >> 0x18);
  local_e0[0x18] = (char)((ulong)uVar89 >> 0x20);
  local_e0[0x19] = (char)((ulong)uVar102 >> 0x20);
  local_e0[0x1a] = (char)((ulong)uVar89 >> 0x28);
  local_e0[0x1b] = (char)((ulong)uVar102 >> 0x28);
  local_e0[0x1c] = (char)((ulong)uVar89 >> 0x30);
  local_e0[0x1d] = (char)((ulong)uVar102 >> 0x30);
  local_e0[0x1e] = (char)((ulong)uVar89 >> 0x38);
  local_e0[0x1f] = (char)((ulong)uVar102 >> 0x38);
  local_e0[0x30] = (char)uVar78;
  local_e0[0x31] = (char)uVar83;
  local_e0[0x32] = (char)((ulong)uVar78 >> 8);
  local_e0[0x33] = (char)((ulong)uVar83 >> 8);
  local_e0[0x34] = (char)((ulong)uVar78 >> 0x10);
  local_e0[0x35] = (char)((ulong)uVar83 >> 0x10);
  local_e0[0x36] = (char)((ulong)uVar78 >> 0x18);
  local_e0[0x37] = (char)((ulong)uVar83 >> 0x18);
  local_e0[0x38] = (char)((ulong)uVar78 >> 0x20);
  local_e0[0x39] = (char)((ulong)uVar83 >> 0x20);
  local_e0[0x3a] = (char)((ulong)uVar78 >> 0x28);
  local_e0[0x3b] = (char)((ulong)uVar83 >> 0x28);
  local_e0[0x3c] = (char)((ulong)uVar78 >> 0x30);
  local_e0[0x3d] = (char)((ulong)uVar83 >> 0x30);
  local_e0[0x3e] = (char)((ulong)uVar78 >> 0x38);
  local_e0[0x3f] = (char)((ulong)uVar83 >> 0x38);
  uVar2 = param_9 - uVar68;
  if ((int)uVar2 < 1) goto LAB_01158668;
  lVar38 = (long)(int)uVar68;
  uVar31 = (ulong)uVar2;
  if (uVar2 < 0x10) {
    lVar32 = 0;
LAB_01158060:
    lVar29 = lVar32 + lVar38 + -1;
    param_1 = param_1 + lVar29;
    lVar34 = uVar31 - lVar32;
    pbVar27 = local_e0 + lVar32 + 0x10;
    pcVar30 = param_7 + lVar29 * 3 + 5;
    do {
      param_1 = param_1 + 1;
      bVar55 = *pbVar27;
      uVar154 = (uint)*param_1 * 0x4a85 >> 8;
      uVar68 = (uVar154 + ((uint)pbVar27[-0x10] * 0x811a >> 8)) - 0x4515;
      if (uVar68 >> 0xe == 0) {
        cVar37 = (char)(uVar68 >> 6);
      }
      else {
        cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
      }
      uVar68 = ((uVar154 + 0x2204) - ((uint)pbVar27[-0x10] * 0x1913 >> 8)) -
               ((uint)bVar55 * 0x3408 >> 8);
      pcVar30[-2] = cVar37;
      if (uVar68 >> 0xe == 0) {
        cVar37 = (char)(uVar68 >> 6);
      }
      else {
        cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
      }
      uVar68 = (uVar154 + ((uint)bVar55 * 0x6625 >> 8)) - 0x379a;
      pcVar30[-1] = cVar37;
      if (uVar68 >> 0xe == 0) {
        cVar37 = (char)(uVar68 >> 6);
      }
      else {
        cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
      }
      *pcVar30 = cVar37;
      lVar34 = lVar34 + -1;
      pbVar27 = pbVar27 + 1;
      pcVar30 = pcVar30 + 3;
    } while (lVar34 != 0);
  }
  else {
    lVar29 = uVar31 - (uVar2 & 0xf);
    lVar32 = 0;
    if (lVar29 == 0) goto LAB_01158060;
    pcVar30 = param_7 + lVar38 * 3;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar31 - 1;
    uVar33 = (uVar31 - 1) * 3;
    if ((((CARRY8(uVar33,(ulong)(pcVar30 + 1))) || (SUB168(auVar3 * ZEXT816(3),8) != 0)) ||
        (CARRY8(uVar33,(ulong)(pcVar30 + 2)))) || (CARRY8(uVar33,(ulong)pcVar30)))
    goto LAB_01158060;
    lVar32 = 0;
    if ((param_7 + (lVar38 * 3 - 3U | 3) < param_1 + lVar38 + uVar31 &&
         param_1 + lVar38 < param_7 + lVar38 * 3 + uVar31 * 3) ||
       (param_7 + (lVar38 * 3 - 3U | 3) < local_e0 + uVar31 + 0x10 &&
        local_e0 < param_7 + lVar38 * 3 + uVar31 * 3)) goto LAB_01158060;
    pbVar28 = local_e0;
    pbVar27 = (byte *)(param_7 + lVar38 * 3);
    pbVar35 = param_1 + lVar38;
    lVar32 = lVar29;
    do {
      pbVar28 = pbVar28 + 0x10;
      auVar167._0_8_ =
           CONCAT17(0,CONCAT16(pbVar35[0xb],
                               (uint6)CONCAT14(pbVar35[10],
                                               (uint)CONCAT12(pbVar35[9],(ushort)pbVar35[8]))));
      auVar167[8] = pbVar35[0xc];
      auVar167[9] = 0;
      auVar167[10] = pbVar35[0xd];
      auVar167[0xb] = 0;
      auVar167[0xc] = pbVar35[0xe];
      auVar167[0xd] = 0;
      auVar167[0xe] = pbVar35[0xf];
      auVar167[0xf] = 0;
      auVar180._0_8_ =
           CONCAT17(0,CONCAT16(pbVar28[-5],
                               (uint6)CONCAT14(pbVar28[-6],
                                               (uint)CONCAT12(pbVar28[-7],(ushort)pbVar28[-8]))));
      auVar180[8] = pbVar28[-4];
      auVar180[9] = 0;
      auVar180[10] = pbVar28[-3];
      auVar180[0xb] = 0;
      auVar180[0xc] = pbVar28[-2];
      auVar180[0xd] = 0;
      auVar180[0xe] = pbVar28[-1];
      auVar180[0xf] = 0;
      auVar156._0_8_ =
           CONCAT17(0,CONCAT16(pbVar35[3],
                               (uint6)CONCAT14(pbVar35[2],
                                               (uint)CONCAT12(pbVar35[1],(ushort)*pbVar35))));
      auVar156[8] = pbVar35[4];
      auVar156[9] = 0;
      auVar156[10] = pbVar35[5];
      auVar156[0xb] = 0;
      auVar156[0xc] = pbVar35[6];
      auVar156[0xd] = 0;
      auVar156[0xe] = pbVar35[7];
      auVar156[0xf] = 0;
      auVar191._0_8_ =
           CONCAT17(0,CONCAT16(pbVar28[-0xd],
                               (uint6)CONCAT14(pbVar28[-0xe],
                                               (uint)CONCAT12(pbVar28[-0xf],(ushort)pbVar28[-0x10]))
                              ));
      auVar191[8] = pbVar28[-0xc];
      auVar191[9] = 0;
      auVar191[10] = pbVar28[-0xb];
      auVar191[0xb] = 0;
      auVar191[0xc] = pbVar28[-10];
      auVar191[0xd] = 0;
      auVar191[0xe] = pbVar28[-9];
      auVar191[0xf] = 0;
      auVar91 = NEON_ext(auVar167,auVar167,8,1);
      auVar169 = NEON_umull(auVar167._0_8_,0x4a854a854a854a85,2);
      auVar103 = NEON_umull(auVar180._0_8_,0x1913191319131913,2);
      auVar204._0_8_ =
           CONCAT17(0,CONCAT16(pbVar28[0xb],
                               (uint6)CONCAT14(pbVar28[10],
                                               (uint)CONCAT12(pbVar28[9],(ushort)pbVar28[8]))));
      auVar204[8] = pbVar28[0xc];
      auVar204[9] = 0;
      auVar204[10] = pbVar28[0xd];
      auVar204[0xb] = 0;
      auVar204[0xc] = pbVar28[0xe];
      auVar204[0xd] = 0;
      auVar204[0xe] = pbVar28[0xf];
      auVar204[0xf] = 0;
      auVar129._0_8_ =
           CONCAT17(0,CONCAT16(pbVar28[3],
                               (uint6)CONCAT14(pbVar28[2],
                                               (uint)CONCAT12(pbVar28[1],(ushort)*pbVar28))));
      auVar129[8] = pbVar28[4];
      auVar129[9] = 0;
      auVar129[10] = pbVar28[5];
      auVar129[0xb] = 0;
      auVar129[0xc] = pbVar28[6];
      auVar129[0xd] = 0;
      auVar129[0xe] = pbVar28[7];
      auVar129[0xf] = 0;
      auVar79 = NEON_ext(auVar156,auVar156,8,1);
      auVar158 = NEON_umull(auVar156._0_8_,0x4a854a854a854a85,2);
      auVar120 = NEON_umull(auVar191._0_8_,0x1913191319131913,2);
      auVar128 = NEON_umull(auVar129._0_8_,0x6625662566256625,2);
      auVar113 = NEON_umull(auVar204._0_8_,0x6625662566256625,2);
      uVar154 = auVar158._0_4_ >> 8;
      uVar159 = auVar158._4_4_ >> 8;
      uVar161 = auVar158._8_4_ >> 8;
      uVar163 = auVar158._12_4_ >> 8;
      uVar165 = auVar169._0_4_ >> 8;
      uVar171 = auVar169._4_4_ >> 8;
      uVar174 = auVar169._8_4_ >> 8;
      uVar177 = auVar169._12_4_ >> 8;
      auVar121 = NEON_ext(auVar180,auVar180,8,1);
      auVar143 = NEON_ext(auVar204,auVar204,8,1);
      auVar182 = NEON_umull(auVar180._0_8_,0x811a811a811a811a,2);
      auVar206 = NEON_umull(auVar204._0_8_,0x3408340834083408,2);
      auVar91 = NEON_umull(auVar91._0_8_,0x4a854a854a854a85,2);
      auVar114 = NEON_ext(auVar191,auVar191,8,1);
      auVar183 = NEON_ext(auVar129,auVar129,8,1);
      auVar193 = NEON_umull(auVar191._0_8_,0x811a811a811a811a,2);
      auVar131 = NEON_umull(auVar129._0_8_,0x3408340834083408,2);
      uVar72 = auVar91._0_4_ >> 8;
      uVar73 = auVar91._4_4_ >> 8;
      uVar74 = auVar91._8_4_ >> 8;
      uVar77 = auVar91._12_4_ >> 8;
      auVar79 = NEON_umull(auVar79._0_8_,0x4a854a854a854a85,2);
      auVar194 = NEON_umull(auVar121._0_8_,0x1913191319131913,2);
      uVar150 = (((auVar169._0_4_ >> 8) + 0x2204) - (auVar103._0_4_ >> 8)) - (auVar206._0_4_ >> 8);
      uVar151 = (((auVar169._4_4_ >> 8) + 0x2204) - (auVar103._4_4_ >> 8)) - (auVar206._4_4_ >> 8);
      uVar152 = (((auVar169._8_4_ >> 8) + 0x2204) - (auVar103._8_4_ >> 8)) - (auVar206._8_4_ >> 8);
      uVar153 = (((auVar169._12_4_ >> 8) + 0x2204) - (auVar103._12_4_ >> 8)) -
                (auVar206._12_4_ >> 8);
      auVar121 = NEON_umull(auVar121._0_8_,0x811a811a811a811a,2);
      uVar126 = (((auVar158._0_4_ >> 8) + 0x2204) - (auVar120._0_4_ >> 8)) - (auVar131._0_4_ >> 8);
      uVar134 = (((auVar158._4_4_ >> 8) + 0x2204) - (auVar120._4_4_ >> 8)) - (auVar131._4_4_ >> 8);
      uVar137 = (((auVar158._8_4_ >> 8) + 0x2204) - (auVar120._8_4_ >> 8)) - (auVar131._8_4_ >> 8);
      uVar140 = (((auVar158._12_4_ >> 8) + 0x2204) - (auVar120._12_4_ >> 8)) -
                (auVar131._12_4_ >> 8);
      auVar131 = NEON_umull(auVar143._0_8_,0x6625662566256625,2);
      uVar68 = auVar79._0_4_ >> 8;
      uVar69 = auVar79._4_4_ >> 8;
      uVar70 = auVar79._8_4_ >> 8;
      uVar71 = auVar79._12_4_ >> 8;
      auVar143 = NEON_umull(auVar143._0_8_,0x3408340834083408,2);
      auVar158 = NEON_umull(auVar114._0_8_,0x1913191319131913,2);
      auVar103 = NEON_umull(auVar114._0_8_,0x811a811a811a811a,2);
      auVar120 = NEON_umull(auVar183._0_8_,0x3408340834083408,2);
      uVar118 = (((auVar91._0_4_ >> 8) + 0x2204) - (auVar194._0_4_ >> 8)) - (auVar143._0_4_ >> 8);
      uVar122 = (((auVar91._4_4_ >> 8) + 0x2204) - (auVar194._4_4_ >> 8)) - (auVar143._4_4_ >> 8);
      uVar123 = (((auVar91._8_4_ >> 8) + 0x2204) - (auVar194._8_4_ >> 8)) - (auVar143._8_4_ >> 8);
      uVar124 = (((auVar91._12_4_ >> 8) + 0x2204) - (auVar194._12_4_ >> 8)) - (auVar143._12_4_ >> 8)
      ;
      uVar111 = (((auVar79._0_4_ >> 8) + 0x2204) - (auVar158._0_4_ >> 8)) - (auVar120._0_4_ >> 8);
      uVar115 = (((auVar79._4_4_ >> 8) + 0x2204) - (auVar158._4_4_ >> 8)) - (auVar120._4_4_ >> 8);
      uVar116 = (((auVar79._8_4_ >> 8) + 0x2204) - (auVar158._8_4_ >> 8)) - (auVar120._8_4_ >> 8);
      uVar117 = (((auVar79._12_4_ >> 8) + 0x2204) - (auVar158._12_4_ >> 8)) - (auVar120._12_4_ >> 8)
      ;
      bVar59 = 0xff - (char)((int)uVar126 >> 0x1f);
      bVar144 = 0xff - (char)((int)uVar134 >> 0x1f);
      bVar146 = 0xff - (char)((int)uVar137 >> 0x1f);
      bVar148 = 0xff - (char)((int)uVar140 >> 0x1f);
      uVar155 = (uVar154 + (auVar128._0_4_ >> 8)) - 0x379a;
      uVar160 = (uVar159 + (auVar128._4_4_ >> 8)) - 0x379a;
      uVar162 = (uVar161 + (auVar128._8_4_ >> 8)) - 0x379a;
      uVar164 = (uVar163 + (auVar128._12_4_ >> 8)) - 0x379a;
      bVar61 = 0xff - (char)((int)uVar150 >> 0x1f);
      bVar145 = 0xff - (char)((int)uVar151 >> 0x1f);
      bVar147 = 0xff - (char)((int)uVar152 >> 0x1f);
      bVar149 = 0xff - (char)((int)uVar153 >> 0x1f);
      uVar166 = (uVar165 + (auVar113._0_4_ >> 8)) - 0x379a;
      uVar172 = (uVar171 + (auVar113._4_4_ >> 8)) - 0x379a;
      uVar175 = (uVar174 + (auVar113._8_4_ >> 8)) - 0x379a;
      uVar178 = (uVar177 + (auVar113._12_4_ >> 8)) - 0x379a;
      bVar63 = (byte)(uVar155 >> 6);
      bVar64 = (byte)(uVar160 >> 6);
      bVar65 = (byte)(uVar162 >> 6);
      bVar66 = (byte)(uVar164 >> 6);
      auVar79 = NEON_umull(auVar183._0_8_,0x6625662566256625,2);
      uVar179 = (uVar154 + (auVar193._0_4_ >> 8)) - 0x4515;
      uVar185 = (uVar159 + (auVar193._4_4_ >> 8)) - 0x4515;
      uVar187 = (uVar161 + (auVar193._8_4_ >> 8)) - 0x4515;
      uVar189 = (uVar163 + (auVar193._12_4_ >> 8)) - 0x4515;
      bVar97 = (byte)(uVar166 >> 6);
      bVar98 = (byte)(uVar172 >> 6);
      bVar99 = (byte)(uVar175 >> 6);
      bVar100 = (byte)(uVar178 >> 6);
      uVar190 = (uVar165 + (auVar182._0_4_ >> 8)) - 0x4515;
      uVar197 = (uVar171 + (auVar182._4_4_ >> 8)) - 0x4515;
      uVar200 = (uVar174 + (auVar182._8_4_ >> 8)) - 0x4515;
      uVar203 = (uVar177 + (auVar182._12_4_ >> 8)) - 0x4515;
      bVar55 = 0xff - (char)((int)uVar179 >> 0x1f);
      bVar170 = 0xff - (char)((int)uVar185 >> 0x1f);
      bVar173 = 0xff - (char)((int)uVar187 >> 0x1f);
      bVar176 = 0xff - (char)((int)uVar189 >> 0x1f);
      bVar57 = 0xff - (char)((int)uVar190 >> 0x1f);
      bVar184 = 0xff - (char)((int)uVar197 >> 0x1f);
      bVar186 = 0xff - (char)((int)uVar200 >> 0x1f);
      bVar188 = 0xff - (char)((int)uVar203 >> 0x1f);
      bVar60 = 0xff - (char)((int)uVar111 >> 0x1f);
      bVar195 = 0xff - (char)((int)uVar115 >> 0x1f);
      bVar198 = 0xff - (char)((int)uVar116 >> 0x1f);
      bVar201 = 0xff - (char)((int)uVar117 >> 0x1f);
      uVar154 = (uVar68 + (auVar79._0_4_ >> 8)) - 0x379a;
      uVar159 = (uVar69 + (auVar79._4_4_ >> 8)) - 0x379a;
      uVar161 = (uVar70 + (auVar79._8_4_ >> 8)) - 0x379a;
      uVar163 = (uVar71 + (auVar79._12_4_ >> 8)) - 0x379a;
      bVar62 = 0xff - (char)((int)uVar118 >> 0x1f);
      bVar196 = 0xff - (char)((int)uVar122 >> 0x1f);
      bVar199 = 0xff - (char)((int)uVar123 >> 0x1f);
      bVar202 = 0xff - (char)((int)uVar124 >> 0x1f);
      uVar165 = (uVar72 + (auVar131._0_4_ >> 8)) - 0x379a;
      uVar171 = (uVar73 + (auVar131._4_4_ >> 8)) - 0x379a;
      uVar174 = (uVar74 + (auVar131._8_4_ >> 8)) - 0x379a;
      uVar177 = (uVar77 + (auVar131._12_4_ >> 8)) - 0x379a;
      bVar67 = (byte)(uVar154 >> 6);
      bVar88 = (byte)(uVar159 >> 6);
      bVar95 = (byte)(uVar161 >> 6);
      bVar96 = (byte)(uVar163 >> 6);
      uVar68 = (uVar68 + (auVar103._0_4_ >> 8)) - 0x4515;
      uVar69 = (uVar69 + (auVar103._4_4_ >> 8)) - 0x4515;
      uVar70 = (uVar70 + (auVar103._8_4_ >> 8)) - 0x4515;
      uVar71 = (uVar71 + (auVar103._12_4_ >> 8)) - 0x4515;
      bVar101 = (byte)(uVar165 >> 6);
      bVar104 = (byte)(uVar171 >> 6);
      bVar105 = (byte)(uVar174 >> 6);
      bVar106 = (byte)(uVar177 >> 6);
      uVar72 = (uVar72 + (auVar121._0_4_ >> 8)) - 0x4515;
      uVar73 = (uVar73 + (auVar121._4_4_ >> 8)) - 0x4515;
      uVar74 = (uVar74 + (auVar121._8_4_ >> 8)) - 0x4515;
      uVar77 = (uVar77 + (auVar121._12_4_ >> 8)) - 0x4515;
      bVar56 = 0xff - (char)((int)uVar68 >> 0x1f);
      bVar107 = 0xff - (char)((int)uVar69 >> 0x1f);
      bVar109 = 0xff - (char)((int)uVar70 >> 0x1f);
      bVar75 = 0xff - (char)((int)uVar71 >> 0x1f);
      bVar58 = 0xff - (char)((int)uVar72 >> 0x1f);
      bVar108 = 0xff - (char)((int)uVar73 >> 0x1f);
      bVar110 = 0xff - (char)((int)uVar74 >> 0x1f);
      bVar76 = 0xff - (char)((int)uVar77 >> 0x1f);
      *pbVar27 = bVar55 ^ (bVar55 ^ (byte)(uVar179 >> 6)) & -(uVar179 < 0x4000);
      pbVar27[1] = bVar59 ^ (bVar59 ^ (byte)(uVar126 >> 6)) & -(uVar126 < 0x4000);
      pbVar27[2] = bVar63 ^ (bVar63 ^ -(char)((int)uVar155 >> 0x1f) - 1U) & -(0x3fff < uVar155);
      pbVar27[3] = bVar170 ^ (bVar170 ^ (byte)(uVar185 >> 6)) & -(uVar185 < 0x4000);
      pbVar27[4] = bVar144 ^ (bVar144 ^ (byte)(uVar134 >> 6)) & -(uVar134 < 0x4000);
      pbVar27[5] = bVar64 ^ (bVar64 ^ 0xffU - (char)((int)uVar160 >> 0x1f)) & -(0x3fff < uVar160);
      pbVar27[6] = bVar173 ^ (bVar173 ^ (byte)(uVar187 >> 6)) & -(uVar187 < 0x4000);
      pbVar27[7] = bVar146 ^ (bVar146 ^ (byte)(uVar137 >> 6)) & -(uVar137 < 0x4000);
      pbVar27[8] = bVar65 ^ (bVar65 ^ 0xffU - (char)((int)uVar162 >> 0x1f)) & -(0x3fff < uVar162);
      pbVar27[9] = bVar176 ^ (bVar176 ^ (byte)(uVar189 >> 6)) & -(uVar189 < 0x4000);
      pbVar27[10] = bVar148 ^ (bVar148 ^ (byte)(uVar140 >> 6)) & -(uVar140 < 0x4000);
      pbVar27[0xb] = bVar66 ^ (bVar66 ^ 0xffU - (char)((int)uVar164 >> 0x1f)) & -(0x3fff < uVar164);
      pbVar27[0xc] = bVar56 ^ (bVar56 ^ (byte)(uVar68 >> 6)) & -(uVar68 < 0x4000);
      pbVar27[0xd] = bVar60 ^ (bVar60 ^ (byte)(uVar111 >> 6)) & -(uVar111 < 0x4000);
      pbVar27[0xe] = bVar67 ^ (bVar67 ^ -(char)((int)uVar154 >> 0x1f) - 1U) & -(0x3fff < uVar154);
      pbVar27[0xf] = bVar107 ^ (bVar107 ^ (byte)(uVar69 >> 6)) & -(uVar69 < 0x4000);
      pbVar27[0x10] = bVar195 ^ (bVar195 ^ (byte)(uVar115 >> 6)) & -(uVar115 < 0x4000);
      pbVar27[0x11] = bVar88 ^ (bVar88 ^ 0xffU - (char)((int)uVar159 >> 0x1f)) & -(0x3fff < uVar159)
      ;
      pbVar27[0x12] = bVar109 ^ (bVar109 ^ (byte)(uVar70 >> 6)) & -(uVar70 < 0x4000);
      pbVar27[0x13] = bVar198 ^ (bVar198 ^ (byte)(uVar116 >> 6)) & -(uVar116 < 0x4000);
      pbVar27[0x14] = bVar95 ^ (bVar95 ^ 0xffU - (char)((int)uVar161 >> 0x1f)) & -(0x3fff < uVar161)
      ;
      pbVar27[0x15] = bVar75 ^ (bVar75 ^ (byte)(uVar71 >> 6)) & -(uVar71 < 0x4000);
      pbVar27[0x16] = bVar201 ^ (bVar201 ^ (byte)(uVar117 >> 6)) & -(uVar117 < 0x4000);
      pbVar27[0x17] = bVar96 ^ (bVar96 ^ 0xffU - (char)((int)uVar163 >> 0x1f)) & -(0x3fff < uVar163)
      ;
      pbVar27[0x18] = bVar57 ^ (bVar57 ^ (byte)(uVar190 >> 6)) & -(uVar190 < 0x4000);
      pbVar27[0x19] = bVar61 ^ (bVar61 ^ (byte)(uVar150 >> 6)) & -(uVar150 < 0x4000);
      pbVar27[0x1a] = bVar97 ^ (bVar97 ^ -(char)((int)uVar166 >> 0x1f) - 1U) & -(0x3fff < uVar166);
      pbVar27[0x1b] = bVar184 ^ (bVar184 ^ (byte)(uVar197 >> 6)) & -(uVar197 < 0x4000);
      pbVar27[0x1c] = bVar145 ^ (bVar145 ^ (byte)(uVar151 >> 6)) & -(uVar151 < 0x4000);
      pbVar27[0x1d] = bVar98 ^ (bVar98 ^ 0xffU - (char)((int)uVar172 >> 0x1f)) & -(0x3fff < uVar172)
      ;
      pbVar27[0x1e] = bVar186 ^ (bVar186 ^ (byte)(uVar200 >> 6)) & -(uVar200 < 0x4000);
      pbVar27[0x1f] = bVar147 ^ (bVar147 ^ (byte)(uVar152 >> 6)) & -(uVar152 < 0x4000);
      pbVar27[0x20] = bVar99 ^ (bVar99 ^ 0xffU - (char)((int)uVar175 >> 0x1f)) & -(0x3fff < uVar175)
      ;
      pbVar27[0x21] = bVar188 ^ (bVar188 ^ (byte)(uVar203 >> 6)) & -(uVar203 < 0x4000);
      pbVar27[0x22] = bVar149 ^ (bVar149 ^ (byte)(uVar153 >> 6)) & -(uVar153 < 0x4000);
      pbVar27[0x23] =
           bVar100 ^ (bVar100 ^ 0xffU - (char)((int)uVar178 >> 0x1f)) & -(0x3fff < uVar178);
      pbVar27[0x24] = bVar58 ^ (bVar58 ^ (byte)(uVar72 >> 6)) & -(uVar72 < 0x4000);
      pbVar27[0x25] = bVar62 ^ (bVar62 ^ (byte)(uVar118 >> 6)) & -(uVar118 < 0x4000);
      pbVar27[0x26] = bVar101 ^ (bVar101 ^ -(char)((int)uVar165 >> 0x1f) - 1U) & -(0x3fff < uVar165)
      ;
      pbVar27[0x27] = bVar108 ^ (bVar108 ^ (byte)(uVar73 >> 6)) & -(uVar73 < 0x4000);
      pbVar27[0x28] = bVar196 ^ (bVar196 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000);
      pbVar27[0x29] =
           bVar104 ^ (bVar104 ^ 0xffU - (char)((int)uVar171 >> 0x1f)) & -(0x3fff < uVar171);
      pbVar27[0x2a] = bVar110 ^ (bVar110 ^ (byte)(uVar74 >> 6)) & -(uVar74 < 0x4000);
      pbVar27[0x2b] = bVar199 ^ (bVar199 ^ (byte)(uVar123 >> 6)) & -(uVar123 < 0x4000);
      pbVar27[0x2c] =
           bVar105 ^ (bVar105 ^ 0xffU - (char)((int)uVar174 >> 0x1f)) & -(0x3fff < uVar174);
      pbVar27[0x2d] = bVar76 ^ (bVar76 ^ (byte)(uVar77 >> 6)) & -(uVar77 < 0x4000);
      pbVar27[0x2e] = bVar202 ^ (bVar202 ^ (byte)(uVar124 >> 6)) & -(uVar124 < 0x4000);
      pbVar27[0x2f] =
           bVar106 ^ (bVar106 ^ 0xffU - (char)((int)uVar177 >> 0x1f)) & -(0x3fff < uVar177);
      pbVar27 = pbVar27 + 0x30;
      lVar32 = lVar32 + -0x10;
      pbVar35 = pbVar35 + 0x10;
    } while (lVar32 != 0);
    lVar32 = lVar29;
    if ((uVar2 & 0xf) != 0) goto LAB_01158060;
  }
  if ((param_2 != (byte *)0x0) && (0 < (int)uVar2)) {
    if (uVar2 < 0x10) {
      lVar32 = 0;
    }
    else {
      lVar32 = 0;
      lVar29 = uVar31 - (uVar2 & 0xf);
      if (lVar29 != 0) {
        pcVar30 = param_8 + lVar38 * 3;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar31 - 1;
        uVar33 = (uVar31 - 1) * 3;
        if ((((!CARRY8(uVar33,(ulong)(pcVar30 + 1))) && (SUB168(auVar4 * ZEXT816(3),8) == 0)) &&
            (!CARRY8(uVar33,(ulong)(pcVar30 + 2)))) && (!CARRY8(uVar33,(ulong)pcVar30))) {
          lVar32 = 0;
          if ((param_2 + lVar38 + uVar31 <= param_8 + (lVar38 * 3 - 3U | 3) ||
               param_8 + lVar38 * 3 + uVar31 * 3 <= param_2 + lVar38) &&
             (local_e0 + uVar31 + 0x30 <= param_8 + (lVar38 * 3 - 3U | 3) ||
              param_8 + lVar38 * 3 + uVar31 * 3 <= local_e0 + 0x20)) {
            pbVar27 = local_e0 + 0x30;
            pbVar28 = (byte *)(param_8 + lVar38 * 3);
            pbVar35 = param_2 + lVar38;
            lVar32 = lVar29;
            do {
              auVar168._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar35[0xb],
                                       (uint6)CONCAT14(pbVar35[10],
                                                       (uint)CONCAT12(pbVar35[9],(ushort)pbVar35[8])
                                                      )));
              auVar168[8] = pbVar35[0xc];
              auVar168[9] = 0;
              auVar168[10] = pbVar35[0xd];
              auVar168[0xb] = 0;
              auVar168[0xc] = pbVar35[0xe];
              auVar168[0xd] = 0;
              auVar168[0xe] = pbVar35[0xf];
              auVar168[0xf] = 0;
              auVar181._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar27[-5],
                                       (uint6)CONCAT14(pbVar27[-6],
                                                       (uint)CONCAT12(pbVar27[-7],
                                                                      (ushort)pbVar27[-8]))));
              auVar181[8] = pbVar27[-4];
              auVar181[9] = 0;
              auVar181[10] = pbVar27[-3];
              auVar181[0xb] = 0;
              auVar181[0xc] = pbVar27[-2];
              auVar181[0xd] = 0;
              auVar181[0xe] = pbVar27[-1];
              auVar181[0xf] = 0;
              auVar157._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar35[3],
                                       (uint6)CONCAT14(pbVar35[2],
                                                       (uint)CONCAT12(pbVar35[1],(ushort)*pbVar35)))
                           );
              auVar157[8] = pbVar35[4];
              auVar157[9] = 0;
              auVar157[10] = pbVar35[5];
              auVar157[0xb] = 0;
              auVar157[0xc] = pbVar35[6];
              auVar157[0xd] = 0;
              auVar157[0xe] = pbVar35[7];
              auVar157[0xf] = 0;
              auVar192._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar27[-0xd],
                                       (uint6)CONCAT14(pbVar27[-0xe],
                                                       (uint)CONCAT12(pbVar27[-0xf],
                                                                      (ushort)pbVar27[-0x10]))));
              auVar192[8] = pbVar27[-0xc];
              auVar192[9] = 0;
              auVar192[10] = pbVar27[-0xb];
              auVar192[0xb] = 0;
              auVar192[0xc] = pbVar27[-10];
              auVar192[0xd] = 0;
              auVar192[0xe] = pbVar27[-9];
              auVar192[0xf] = 0;
              auVar91 = NEON_ext(auVar168,auVar168,8,1);
              auVar169 = NEON_umull(auVar168._0_8_,0x4a854a854a854a85,2);
              auVar103 = NEON_umull(auVar181._0_8_,0x1913191319131913,2);
              auVar205._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar27[0xb],
                                       (uint6)CONCAT14(pbVar27[10],
                                                       (uint)CONCAT12(pbVar27[9],(ushort)pbVar27[8])
                                                      )));
              auVar205[8] = pbVar27[0xc];
              auVar205[9] = 0;
              auVar205[10] = pbVar27[0xd];
              auVar205[0xb] = 0;
              auVar205[0xc] = pbVar27[0xe];
              auVar205[0xd] = 0;
              auVar205[0xe] = pbVar27[0xf];
              auVar205[0xf] = 0;
              auVar130._0_8_ =
                   CONCAT17(0,CONCAT16(pbVar27[3],
                                       (uint6)CONCAT14(pbVar27[2],
                                                       (uint)CONCAT12(pbVar27[1],(ushort)*pbVar27)))
                           );
              auVar130[8] = pbVar27[4];
              auVar130[9] = 0;
              auVar130[10] = pbVar27[5];
              auVar130[0xb] = 0;
              auVar130[0xc] = pbVar27[6];
              auVar130[0xd] = 0;
              auVar130[0xe] = pbVar27[7];
              auVar130[0xf] = 0;
              auVar79 = NEON_ext(auVar157,auVar157,8,1);
              auVar158 = NEON_umull(auVar157._0_8_,0x4a854a854a854a85,2);
              auVar120 = NEON_umull(auVar192._0_8_,0x1913191319131913,2);
              auVar128 = NEON_umull(auVar130._0_8_,0x6625662566256625,2);
              auVar113 = NEON_umull(auVar205._0_8_,0x6625662566256625,2);
              uVar154 = auVar158._0_4_ >> 8;
              uVar159 = auVar158._4_4_ >> 8;
              uVar161 = auVar158._8_4_ >> 8;
              uVar163 = auVar158._12_4_ >> 8;
              uVar165 = auVar169._0_4_ >> 8;
              uVar171 = auVar169._4_4_ >> 8;
              uVar174 = auVar169._8_4_ >> 8;
              uVar177 = auVar169._12_4_ >> 8;
              auVar121 = NEON_ext(auVar181,auVar181,8,1);
              auVar143 = NEON_ext(auVar205,auVar205,8,1);
              auVar182 = NEON_umull(auVar181._0_8_,0x811a811a811a811a,2);
              auVar206 = NEON_umull(auVar205._0_8_,0x3408340834083408,2);
              auVar91 = NEON_umull(auVar91._0_8_,0x4a854a854a854a85,2);
              auVar114 = NEON_ext(auVar192,auVar192,8,1);
              auVar183 = NEON_ext(auVar130,auVar130,8,1);
              auVar193 = NEON_umull(auVar192._0_8_,0x811a811a811a811a,2);
              auVar131 = NEON_umull(auVar130._0_8_,0x3408340834083408,2);
              uVar72 = auVar91._0_4_ >> 8;
              uVar73 = auVar91._4_4_ >> 8;
              uVar74 = auVar91._8_4_ >> 8;
              uVar77 = auVar91._12_4_ >> 8;
              auVar79 = NEON_umull(auVar79._0_8_,0x4a854a854a854a85,2);
              auVar194 = NEON_umull(auVar121._0_8_,0x1913191319131913,2);
              uVar150 = (((auVar169._0_4_ >> 8) + 0x2204) - (auVar103._0_4_ >> 8)) -
                        (auVar206._0_4_ >> 8);
              uVar151 = (((auVar169._4_4_ >> 8) + 0x2204) - (auVar103._4_4_ >> 8)) -
                        (auVar206._4_4_ >> 8);
              uVar152 = (((auVar169._8_4_ >> 8) + 0x2204) - (auVar103._8_4_ >> 8)) -
                        (auVar206._8_4_ >> 8);
              uVar153 = (((auVar169._12_4_ >> 8) + 0x2204) - (auVar103._12_4_ >> 8)) -
                        (auVar206._12_4_ >> 8);
              auVar121 = NEON_umull(auVar121._0_8_,0x811a811a811a811a,2);
              uVar126 = (((auVar158._0_4_ >> 8) + 0x2204) - (auVar120._0_4_ >> 8)) -
                        (auVar131._0_4_ >> 8);
              uVar134 = (((auVar158._4_4_ >> 8) + 0x2204) - (auVar120._4_4_ >> 8)) -
                        (auVar131._4_4_ >> 8);
              uVar137 = (((auVar158._8_4_ >> 8) + 0x2204) - (auVar120._8_4_ >> 8)) -
                        (auVar131._8_4_ >> 8);
              uVar140 = (((auVar158._12_4_ >> 8) + 0x2204) - (auVar120._12_4_ >> 8)) -
                        (auVar131._12_4_ >> 8);
              auVar131 = NEON_umull(auVar143._0_8_,0x6625662566256625,2);
              uVar68 = auVar79._0_4_ >> 8;
              uVar69 = auVar79._4_4_ >> 8;
              uVar70 = auVar79._8_4_ >> 8;
              uVar71 = auVar79._12_4_ >> 8;
              auVar143 = NEON_umull(auVar143._0_8_,0x3408340834083408,2);
              auVar158 = NEON_umull(auVar114._0_8_,0x1913191319131913,2);
              auVar103 = NEON_umull(auVar114._0_8_,0x811a811a811a811a,2);
              auVar120 = NEON_umull(auVar183._0_8_,0x3408340834083408,2);
              uVar118 = (((auVar91._0_4_ >> 8) + 0x2204) - (auVar194._0_4_ >> 8)) -
                        (auVar143._0_4_ >> 8);
              uVar122 = (((auVar91._4_4_ >> 8) + 0x2204) - (auVar194._4_4_ >> 8)) -
                        (auVar143._4_4_ >> 8);
              uVar123 = (((auVar91._8_4_ >> 8) + 0x2204) - (auVar194._8_4_ >> 8)) -
                        (auVar143._8_4_ >> 8);
              uVar124 = (((auVar91._12_4_ >> 8) + 0x2204) - (auVar194._12_4_ >> 8)) -
                        (auVar143._12_4_ >> 8);
              uVar111 = (((auVar79._0_4_ >> 8) + 0x2204) - (auVar158._0_4_ >> 8)) -
                        (auVar120._0_4_ >> 8);
              uVar115 = (((auVar79._4_4_ >> 8) + 0x2204) - (auVar158._4_4_ >> 8)) -
                        (auVar120._4_4_ >> 8);
              uVar116 = (((auVar79._8_4_ >> 8) + 0x2204) - (auVar158._8_4_ >> 8)) -
                        (auVar120._8_4_ >> 8);
              uVar117 = (((auVar79._12_4_ >> 8) + 0x2204) - (auVar158._12_4_ >> 8)) -
                        (auVar120._12_4_ >> 8);
              bVar59 = 0xff - (char)((int)uVar126 >> 0x1f);
              bVar144 = 0xff - (char)((int)uVar134 >> 0x1f);
              bVar146 = 0xff - (char)((int)uVar137 >> 0x1f);
              bVar148 = 0xff - (char)((int)uVar140 >> 0x1f);
              uVar155 = (uVar154 + (auVar128._0_4_ >> 8)) - 0x379a;
              uVar160 = (uVar159 + (auVar128._4_4_ >> 8)) - 0x379a;
              uVar162 = (uVar161 + (auVar128._8_4_ >> 8)) - 0x379a;
              uVar164 = (uVar163 + (auVar128._12_4_ >> 8)) - 0x379a;
              bVar61 = 0xff - (char)((int)uVar150 >> 0x1f);
              bVar145 = 0xff - (char)((int)uVar151 >> 0x1f);
              bVar147 = 0xff - (char)((int)uVar152 >> 0x1f);
              bVar149 = 0xff - (char)((int)uVar153 >> 0x1f);
              uVar166 = (uVar165 + (auVar113._0_4_ >> 8)) - 0x379a;
              uVar172 = (uVar171 + (auVar113._4_4_ >> 8)) - 0x379a;
              uVar175 = (uVar174 + (auVar113._8_4_ >> 8)) - 0x379a;
              uVar178 = (uVar177 + (auVar113._12_4_ >> 8)) - 0x379a;
              bVar63 = (byte)(uVar155 >> 6);
              bVar64 = (byte)(uVar160 >> 6);
              bVar65 = (byte)(uVar162 >> 6);
              bVar66 = (byte)(uVar164 >> 6);
              auVar79 = NEON_umull(auVar183._0_8_,0x6625662566256625,2);
              uVar179 = (uVar154 + (auVar193._0_4_ >> 8)) - 0x4515;
              uVar185 = (uVar159 + (auVar193._4_4_ >> 8)) - 0x4515;
              uVar187 = (uVar161 + (auVar193._8_4_ >> 8)) - 0x4515;
              uVar189 = (uVar163 + (auVar193._12_4_ >> 8)) - 0x4515;
              bVar97 = (byte)(uVar166 >> 6);
              bVar98 = (byte)(uVar172 >> 6);
              bVar99 = (byte)(uVar175 >> 6);
              bVar100 = (byte)(uVar178 >> 6);
              uVar190 = (uVar165 + (auVar182._0_4_ >> 8)) - 0x4515;
              uVar197 = (uVar171 + (auVar182._4_4_ >> 8)) - 0x4515;
              uVar200 = (uVar174 + (auVar182._8_4_ >> 8)) - 0x4515;
              uVar203 = (uVar177 + (auVar182._12_4_ >> 8)) - 0x4515;
              bVar55 = 0xff - (char)((int)uVar179 >> 0x1f);
              bVar170 = 0xff - (char)((int)uVar185 >> 0x1f);
              bVar173 = 0xff - (char)((int)uVar187 >> 0x1f);
              bVar176 = 0xff - (char)((int)uVar189 >> 0x1f);
              bVar57 = 0xff - (char)((int)uVar190 >> 0x1f);
              bVar184 = 0xff - (char)((int)uVar197 >> 0x1f);
              bVar186 = 0xff - (char)((int)uVar200 >> 0x1f);
              bVar188 = 0xff - (char)((int)uVar203 >> 0x1f);
              bVar60 = 0xff - (char)((int)uVar111 >> 0x1f);
              bVar195 = 0xff - (char)((int)uVar115 >> 0x1f);
              bVar198 = 0xff - (char)((int)uVar116 >> 0x1f);
              bVar201 = 0xff - (char)((int)uVar117 >> 0x1f);
              uVar154 = (uVar68 + (auVar79._0_4_ >> 8)) - 0x379a;
              uVar159 = (uVar69 + (auVar79._4_4_ >> 8)) - 0x379a;
              uVar161 = (uVar70 + (auVar79._8_4_ >> 8)) - 0x379a;
              uVar163 = (uVar71 + (auVar79._12_4_ >> 8)) - 0x379a;
              bVar62 = 0xff - (char)((int)uVar118 >> 0x1f);
              bVar196 = 0xff - (char)((int)uVar122 >> 0x1f);
              bVar199 = 0xff - (char)((int)uVar123 >> 0x1f);
              bVar202 = 0xff - (char)((int)uVar124 >> 0x1f);
              uVar165 = (uVar72 + (auVar131._0_4_ >> 8)) - 0x379a;
              uVar171 = (uVar73 + (auVar131._4_4_ >> 8)) - 0x379a;
              uVar174 = (uVar74 + (auVar131._8_4_ >> 8)) - 0x379a;
              uVar177 = (uVar77 + (auVar131._12_4_ >> 8)) - 0x379a;
              bVar67 = (byte)(uVar154 >> 6);
              bVar88 = (byte)(uVar159 >> 6);
              bVar95 = (byte)(uVar161 >> 6);
              bVar96 = (byte)(uVar163 >> 6);
              uVar68 = (uVar68 + (auVar103._0_4_ >> 8)) - 0x4515;
              uVar69 = (uVar69 + (auVar103._4_4_ >> 8)) - 0x4515;
              uVar70 = (uVar70 + (auVar103._8_4_ >> 8)) - 0x4515;
              uVar71 = (uVar71 + (auVar103._12_4_ >> 8)) - 0x4515;
              bVar101 = (byte)(uVar165 >> 6);
              bVar104 = (byte)(uVar171 >> 6);
              bVar105 = (byte)(uVar174 >> 6);
              bVar106 = (byte)(uVar177 >> 6);
              uVar72 = (uVar72 + (auVar121._0_4_ >> 8)) - 0x4515;
              uVar73 = (uVar73 + (auVar121._4_4_ >> 8)) - 0x4515;
              uVar74 = (uVar74 + (auVar121._8_4_ >> 8)) - 0x4515;
              uVar77 = (uVar77 + (auVar121._12_4_ >> 8)) - 0x4515;
              bVar56 = 0xff - (char)((int)uVar68 >> 0x1f);
              bVar107 = 0xff - (char)((int)uVar69 >> 0x1f);
              bVar109 = 0xff - (char)((int)uVar70 >> 0x1f);
              bVar75 = 0xff - (char)((int)uVar71 >> 0x1f);
              bVar58 = 0xff - (char)((int)uVar72 >> 0x1f);
              bVar108 = 0xff - (char)((int)uVar73 >> 0x1f);
              bVar110 = 0xff - (char)((int)uVar74 >> 0x1f);
              bVar76 = 0xff - (char)((int)uVar77 >> 0x1f);
              *pbVar28 = bVar55 ^ (bVar55 ^ (byte)(uVar179 >> 6)) & -(uVar179 < 0x4000);
              pbVar28[1] = bVar59 ^ (bVar59 ^ (byte)(uVar126 >> 6)) & -(uVar126 < 0x4000);
              pbVar28[2] = bVar63 ^ (bVar63 ^ -(char)((int)uVar155 >> 0x1f) - 1U) &
                                    -(0x3fff < uVar155);
              pbVar28[3] = bVar170 ^ (bVar170 ^ (byte)(uVar185 >> 6)) & -(uVar185 < 0x4000);
              pbVar28[4] = bVar144 ^ (bVar144 ^ (byte)(uVar134 >> 6)) & -(uVar134 < 0x4000);
              pbVar28[5] = bVar64 ^ (bVar64 ^ 0xffU - (char)((int)uVar160 >> 0x1f)) &
                                    -(0x3fff < uVar160);
              pbVar28[6] = bVar173 ^ (bVar173 ^ (byte)(uVar187 >> 6)) & -(uVar187 < 0x4000);
              pbVar28[7] = bVar146 ^ (bVar146 ^ (byte)(uVar137 >> 6)) & -(uVar137 < 0x4000);
              pbVar28[8] = bVar65 ^ (bVar65 ^ 0xffU - (char)((int)uVar162 >> 0x1f)) &
                                    -(0x3fff < uVar162);
              pbVar28[9] = bVar176 ^ (bVar176 ^ (byte)(uVar189 >> 6)) & -(uVar189 < 0x4000);
              pbVar28[10] = bVar148 ^ (bVar148 ^ (byte)(uVar140 >> 6)) & -(uVar140 < 0x4000);
              pbVar28[0xb] = bVar66 ^ (bVar66 ^ 0xffU - (char)((int)uVar164 >> 0x1f)) &
                                      -(0x3fff < uVar164);
              pbVar28[0xc] = bVar56 ^ (bVar56 ^ (byte)(uVar68 >> 6)) & -(uVar68 < 0x4000);
              pbVar28[0xd] = bVar60 ^ (bVar60 ^ (byte)(uVar111 >> 6)) & -(uVar111 < 0x4000);
              pbVar28[0xe] = bVar67 ^ (bVar67 ^ -(char)((int)uVar154 >> 0x1f) - 1U) &
                                      -(0x3fff < uVar154);
              pbVar28[0xf] = bVar107 ^ (bVar107 ^ (byte)(uVar69 >> 6)) & -(uVar69 < 0x4000);
              pbVar28[0x10] = bVar195 ^ (bVar195 ^ (byte)(uVar115 >> 6)) & -(uVar115 < 0x4000);
              pbVar28[0x11] =
                   bVar88 ^ (bVar88 ^ 0xffU - (char)((int)uVar159 >> 0x1f)) & -(0x3fff < uVar159);
              pbVar28[0x12] = bVar109 ^ (bVar109 ^ (byte)(uVar70 >> 6)) & -(uVar70 < 0x4000);
              pbVar28[0x13] = bVar198 ^ (bVar198 ^ (byte)(uVar116 >> 6)) & -(uVar116 < 0x4000);
              pbVar28[0x14] =
                   bVar95 ^ (bVar95 ^ 0xffU - (char)((int)uVar161 >> 0x1f)) & -(0x3fff < uVar161);
              pbVar28[0x15] = bVar75 ^ (bVar75 ^ (byte)(uVar71 >> 6)) & -(uVar71 < 0x4000);
              pbVar28[0x16] = bVar201 ^ (bVar201 ^ (byte)(uVar117 >> 6)) & -(uVar117 < 0x4000);
              pbVar28[0x17] =
                   bVar96 ^ (bVar96 ^ 0xffU - (char)((int)uVar163 >> 0x1f)) & -(0x3fff < uVar163);
              pbVar28[0x18] = bVar57 ^ (bVar57 ^ (byte)(uVar190 >> 6)) & -(uVar190 < 0x4000);
              pbVar28[0x19] = bVar61 ^ (bVar61 ^ (byte)(uVar150 >> 6)) & -(uVar150 < 0x4000);
              pbVar28[0x1a] =
                   bVar97 ^ (bVar97 ^ -(char)((int)uVar166 >> 0x1f) - 1U) & -(0x3fff < uVar166);
              pbVar28[0x1b] = bVar184 ^ (bVar184 ^ (byte)(uVar197 >> 6)) & -(uVar197 < 0x4000);
              pbVar28[0x1c] = bVar145 ^ (bVar145 ^ (byte)(uVar151 >> 6)) & -(uVar151 < 0x4000);
              pbVar28[0x1d] =
                   bVar98 ^ (bVar98 ^ 0xffU - (char)((int)uVar172 >> 0x1f)) & -(0x3fff < uVar172);
              pbVar28[0x1e] = bVar186 ^ (bVar186 ^ (byte)(uVar200 >> 6)) & -(uVar200 < 0x4000);
              pbVar28[0x1f] = bVar147 ^ (bVar147 ^ (byte)(uVar152 >> 6)) & -(uVar152 < 0x4000);
              pbVar28[0x20] =
                   bVar99 ^ (bVar99 ^ 0xffU - (char)((int)uVar175 >> 0x1f)) & -(0x3fff < uVar175);
              pbVar28[0x21] = bVar188 ^ (bVar188 ^ (byte)(uVar203 >> 6)) & -(uVar203 < 0x4000);
              pbVar28[0x22] = bVar149 ^ (bVar149 ^ (byte)(uVar153 >> 6)) & -(uVar153 < 0x4000);
              pbVar28[0x23] =
                   bVar100 ^ (bVar100 ^ 0xffU - (char)((int)uVar178 >> 0x1f)) & -(0x3fff < uVar178);
              pbVar28[0x24] = bVar58 ^ (bVar58 ^ (byte)(uVar72 >> 6)) & -(uVar72 < 0x4000);
              pbVar28[0x25] = bVar62 ^ (bVar62 ^ (byte)(uVar118 >> 6)) & -(uVar118 < 0x4000);
              pbVar28[0x26] =
                   bVar101 ^ (bVar101 ^ -(char)((int)uVar165 >> 0x1f) - 1U) & -(0x3fff < uVar165);
              pbVar28[0x27] = bVar108 ^ (bVar108 ^ (byte)(uVar73 >> 6)) & -(uVar73 < 0x4000);
              pbVar28[0x28] = bVar196 ^ (bVar196 ^ (byte)(uVar122 >> 6)) & -(uVar122 < 0x4000);
              pbVar28[0x29] =
                   bVar104 ^ (bVar104 ^ 0xffU - (char)((int)uVar171 >> 0x1f)) & -(0x3fff < uVar171);
              pbVar28[0x2a] = bVar110 ^ (bVar110 ^ (byte)(uVar74 >> 6)) & -(uVar74 < 0x4000);
              pbVar28[0x2b] = bVar199 ^ (bVar199 ^ (byte)(uVar123 >> 6)) & -(uVar123 < 0x4000);
              pbVar28[0x2c] =
                   bVar105 ^ (bVar105 ^ 0xffU - (char)((int)uVar174 >> 0x1f)) & -(0x3fff < uVar174);
              pbVar28[0x2d] = bVar76 ^ (bVar76 ^ (byte)(uVar77 >> 6)) & -(uVar77 < 0x4000);
              pbVar28[0x2e] = bVar202 ^ (bVar202 ^ (byte)(uVar124 >> 6)) & -(uVar124 < 0x4000);
              pbVar28[0x2f] =
                   bVar106 ^ (bVar106 ^ 0xffU - (char)((int)uVar177 >> 0x1f)) & -(0x3fff < uVar177);
              pbVar28 = pbVar28 + 0x30;
              lVar32 = lVar32 + -0x10;
              pbVar27 = pbVar27 + 0x10;
              pbVar35 = pbVar35 + 0x10;
            } while (lVar32 != 0);
            lVar32 = lVar29;
            if ((uVar2 & 0xf) == 0) goto LAB_01158668;
          }
        }
      }
    }
    lVar29 = lVar32 + lVar38 + -1;
    param_2 = param_2 + lVar29;
    lVar38 = uVar31 - lVar32;
    pbVar27 = local_e0 + lVar32 + 0x30;
    pcVar30 = param_8 + lVar29 * 3 + 5;
    do {
      param_2 = param_2 + 1;
      bVar55 = *pbVar27;
      uVar2 = (uint)*param_2 * 0x4a85 >> 8;
      uVar68 = (uVar2 + ((uint)pbVar27[-0x10] * 0x811a >> 8)) - 0x4515;
      if (uVar68 >> 0xe == 0) {
        cVar37 = (char)(uVar68 >> 6);
      }
      else {
        cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
      }
      uVar68 = ((uVar2 + 0x2204) - ((uint)pbVar27[-0x10] * 0x1913 >> 8)) -
               ((uint)bVar55 * 0x3408 >> 8);
      pcVar30[-2] = cVar37;
      if (uVar68 >> 0xe == 0) {
        cVar37 = (char)(uVar68 >> 6);
      }
      else {
        cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
      }
      uVar68 = (uVar2 + ((uint)bVar55 * 0x6625 >> 8)) - 0x379a;
      pcVar30[-1] = cVar37;
      if (uVar68 >> 0xe == 0) {
        cVar37 = (char)(uVar68 >> 6);
      }
      else {
        cVar37 = ((byte)((int)uVar68 >> 0x1f) & 1) - 1;
      }
      *pcVar30 = cVar37;
      lVar38 = lVar38 + -1;
      pbVar27 = pbVar27 + 1;
      pcVar30 = pcVar30 + 3;
    } while (lVar38 != 0);
  }
LAB_01158668:
  if (*(long *)(local_110 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


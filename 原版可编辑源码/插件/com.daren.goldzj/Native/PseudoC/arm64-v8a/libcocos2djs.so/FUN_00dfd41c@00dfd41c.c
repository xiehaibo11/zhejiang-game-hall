
void FUN_00dfd41c(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,byte *param_7,byte *param_8,int param_9)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint3 uVar29;
  uint3 uVar30;
  uint3 uVar31;
  undefined2 uVar32;
  uint3 uVar33;
  uint3 uVar34;
  uint3 uVar35;
  uint3 uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  byte *pbVar42;
  uint uVar43;
  uint uVar44;
  byte *pbVar45;
  uint uVar46;
  int iVar47;
  size_t __n;
  long lVar48;
  size_t __n_00;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  ushort uVar66;
  ushort uVar67;
  undefined8 uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  byte bVar74;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined7 uVar75;
  byte bVar82;
  undefined8 uVar76;
  byte bVar83;
  byte bVar84;
  undefined1 auVar78 [16];
  ulong uVar77;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  undefined8 uVar85;
  byte bVar99;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  ulong uVar86;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  byte bVar95;
  undefined1 auVar91 [16];
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined8 uVar100;
  byte bVar108;
  undefined1 auVar101 [16];
  undefined8 uVar109;
  undefined1 auVar110 [16];
  undefined8 uVar111;
  undefined1 auVar112 [16];
  short sVar113;
  short sVar116;
  short sVar117;
  short sVar118;
  undefined8 uVar114;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  undefined1 auVar115 [16];
  undefined8 uVar123;
  undefined1 auVar124 [16];
  byte *local_100;
  byte *local_f8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  byte bStack_d0;
  byte abStack_c9 [2];
  undefined7 uStack_c7;
  byte bStack_c0;
  byte local_b0 [4];
  byte bStack_ac;
  byte bStack_ab;
  byte bStack_aa;
  byte bStack_a9;
  byte local_a8;
  byte bStack_a7;
  byte bStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  byte bStack_a3;
  byte bStack_a2;
  byte bStack_a1;
  byte local_a0 [4];
  byte bStack_9c;
  byte bStack_9b;
  byte bStack_9a;
  byte bStack_99;
  byte local_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  byte local_90 [4];
  byte bStack_8c;
  byte bStack_8b;
  byte bStack_8a;
  byte bStack_89;
  byte local_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  byte bStack_82;
  byte bStack_81;
  byte local_80 [4];
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  long local_68;
  
  local_e0 = tpidr_el0;
  local_68 = *(long *)(local_e0 + 0x28);
  uVar43 = (uint)*param_1 * 0x4a85 >> 8;
  iVar47 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar37 = iVar1 + (uint)*param_4 >> 1;
  uVar46 = (uVar43 + (uVar37 * 0x6625 >> 8)) - 0x379a;
  uVar44 = iVar47 + (uint)*param_3 >> 1;
  if (uVar46 >> 0xe == 0) {
    bVar74 = (byte)(uVar46 >> 6);
  }
  else {
    bVar74 = ((byte)((int)uVar46 >> 0x1f) & 1) - 1;
  }
  uVar46 = ((uVar43 + 0x2204) - (uVar44 * 0x1913 >> 8)) - (uVar37 * 0x3408 >> 8);
  if (uVar46 >> 0xe == 0) {
    uVar46 = uVar46 >> 6;
  }
  else {
    uVar46 = ((int)uVar46 >> 0x1f & 0xffffff01U) + 0xff;
  }
  uVar37 = ((int)(param_9 + 1U) >> 1) + -1 >> 3;
  uVar43 = (uVar43 + (uVar44 * 0x811a >> 8)) - 0x4515;
  if (uVar43 >> 0xe == 0) {
    uVar43 = uVar43 >> 6;
  }
  else {
    uVar43 = ((int)uVar43 >> 0x1f & 0xffffff01U) + 0xff;
  }
  lVar48 = ((long)((ulong)(param_9 + 1U) << 0x20) >> 0x21) + (long)(int)uVar37 * -8;
  *param_7 = bVar74 & 0xf8 | (byte)(uVar46 >> 5);
  param_7[1] = (byte)((uVar46 & 0x1c) << 3) | (byte)(uVar43 >> 3);
  if (param_2 != (byte *)0x0) {
    uVar43 = iVar1 + (uint)*param_6 >> 1;
    uVar44 = (uint)*param_2 * 0x4a85 >> 8;
    uVar46 = (uVar44 + (uVar43 * 0x6625 >> 8)) - 0x379a;
    uVar39 = iVar47 + (uint)*param_5 >> 1;
    if (uVar46 >> 0xe == 0) {
      bVar74 = (byte)(uVar46 >> 6);
    }
    else {
      bVar74 = ((byte)((int)uVar46 >> 0x1f) & 1) - 1;
    }
    uVar46 = ((uVar44 + 0x2204) - (uVar39 * 0x1913 >> 8)) - (uVar43 * 0x3408 >> 8);
    if (uVar46 >> 0xe == 0) {
      uVar46 = uVar46 >> 6;
    }
    else {
      uVar46 = ((int)uVar46 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar43 = (uVar44 + (uVar39 * 0x811a >> 8)) - 0x4515;
    if (uVar43 >> 0xe == 0) {
      uVar43 = uVar43 >> 6;
    }
    else {
      uVar43 = ((int)uVar43 >> 0x1f & 0xffffff01U) + 0xff;
    }
    *param_8 = bVar74 & 0xf8 | (byte)(uVar46 >> 5);
    param_8[1] = (byte)((uVar46 & 0x1c) << 3) | (byte)(uVar43 >> 3);
  }
  uVar46 = uVar37 << 4 | 1;
  local_100 = param_4;
  local_f8 = param_6;
  if (0 < (int)uVar37) {
    lVar2 = (ulong)(uVar37 - 1) * 8 + 8;
    uVar40 = (ulong)uVar37;
    iVar47 = 0x12;
    lVar41 = 0x100000000;
    pbVar3 = param_3 + lVar2;
    local_100 = param_4 + lVar2;
    pbVar42 = param_5;
    pbVar45 = param_6;
    do {
      uVar68 = *(undefined8 *)param_3;
      uVar76 = *(undefined8 *)(param_3 + 1);
      uVar85 = *(undefined8 *)pbVar42;
      uVar100 = *(undefined8 *)(pbVar42 + 1);
      bVar74 = (byte)((ulong)uVar68 >> 8);
      bVar82 = (byte)((ulong)uVar68 >> 0x10);
      bVar57 = (byte)((ulong)uVar68 >> 0x18);
      bVar58 = (byte)((ulong)uVar68 >> 0x20);
      bVar59 = (byte)((ulong)uVar68 >> 0x28);
      bVar60 = (byte)((ulong)uVar68 >> 0x30);
      bVar61 = (byte)((ulong)uVar68 >> 0x38);
      bVar95 = (byte)((ulong)uVar76 >> 8);
      bVar62 = (byte)((ulong)uVar76 >> 0x10);
      bVar63 = (byte)((ulong)uVar76 >> 0x18);
      bVar64 = (byte)((ulong)uVar76 >> 0x20);
      bVar65 = (byte)((ulong)uVar76 >> 0x28);
      bVar83 = (byte)((ulong)uVar76 >> 0x30);
      bVar84 = (byte)((ulong)uVar76 >> 0x38);
      uVar29 = CONCAT12(bVar74,(short)uVar68) & 0xff00ff;
      bVar92 = (byte)((ulong)uVar85 >> 8);
      bVar93 = (byte)((ulong)uVar85 >> 0x10);
      bVar94 = (byte)((ulong)uVar85 >> 0x18);
      bVar96 = (byte)((ulong)uVar85 >> 0x20);
      bVar97 = (byte)((ulong)uVar85 >> 0x28);
      bVar98 = (byte)((ulong)uVar85 >> 0x30);
      bVar99 = (byte)((ulong)uVar85 >> 0x38);
      uVar30 = CONCAT12(bVar95,(short)uVar76) & 0xff00ff;
      uVar31 = CONCAT12(bVar92,(short)uVar85) & 0xff00ff;
      bVar102 = (byte)((ulong)uVar100 >> 8);
      bVar103 = (byte)((ulong)uVar100 >> 0x10);
      bVar104 = (byte)((ulong)uVar100 >> 0x18);
      bVar105 = (byte)((ulong)uVar100 >> 0x20);
      bVar106 = (byte)((ulong)uVar100 >> 0x28);
      bVar107 = (byte)((ulong)uVar100 >> 0x30);
      bVar108 = (byte)((ulong)uVar100 >> 0x38);
      sVar113 = (ushort)(byte)uVar76 + (short)uVar29 + (short)uVar31 + (ushort)(byte)uVar100;
      sVar116 = (ushort)bVar95 + (ushort)(byte)(uVar29 >> 0x10) + (ushort)(byte)(uVar31 >> 0x10) +
                (ushort)bVar102;
      sVar117 = (ushort)bVar62 + (ushort)bVar82 + (ushort)bVar93 + (ushort)bVar103;
      sVar118 = (ushort)bVar63 + (ushort)bVar57 + (ushort)bVar94 + (ushort)bVar104;
      sVar119 = (ushort)bVar64 + (ushort)bVar58 + (ushort)bVar96 + (ushort)bVar105;
      sVar120 = (ushort)bVar65 + (ushort)bVar59 + (ushort)bVar97 + (ushort)bVar106;
      sVar121 = (ushort)bVar83 + (ushort)bVar60 + (ushort)bVar98 + (ushort)bVar107;
      sVar122 = (ushort)bVar84 + (ushort)bVar61 + (ushort)bVar99 + (ushort)bVar108;
      uVar29 = CONCAT12(bVar102,(short)uVar100) & 0xff00ff;
      uVar111 = CONCAT17((char)((ushort)(((ushort)bVar99 + (ushort)bVar84) * 2 + sVar122) >> 3),
                         CONCAT16((char)((ushort)(((ushort)bVar98 + (ushort)bVar83) * 2 + sVar121)
                                        >> 3),
                                  CONCAT15((char)((ushort)(((ushort)bVar97 + (ushort)bVar65) * 2 +
                                                          sVar120) >> 3),
                                           CONCAT14((char)((ushort)(((ushort)bVar96 + (ushort)bVar64
                                                                    ) * 2 + sVar119) >> 3),
                                                    CONCAT13((char)((ushort)(((ushort)bVar94 +
                                                                             (ushort)bVar63) * 2 +
                                                                            sVar118) >> 3),
                                                             CONCAT12((char)((ushort)(((ushort)
                                                  bVar93 + (ushort)bVar62) * 2 + sVar117) >> 3),
                                                  CONCAT11((char)((ushort)(((ushort)bVar92 +
                                                                           (ushort)(byte)(uVar30 >>
                                                                                         0x10)) * 2
                                                                          + sVar116) >> 3),
                                                           (char)((ushort)(((ushort)(byte)uVar85 +
                                                                           (short)uVar30) * 2 +
                                                                          sVar113) >> 3))))))));
      uVar109 = CONCAT17((char)((ushort)(sVar122 + (ushort)bVar61 * 2 + (ushort)bVar108 * 2) >> 3),
                         CONCAT16((char)((ushort)(sVar121 + (ushort)bVar60 * 2 + (ushort)bVar107 * 2
                                                 ) >> 3),
                                  CONCAT15((char)((ushort)(sVar120 + (ushort)bVar59 * 2 +
                                                          (ushort)bVar106 * 2) >> 3),
                                           CONCAT14((char)((ushort)(sVar119 + (ushort)bVar58 * 2 +
                                                                   (ushort)bVar105 * 2) >> 3),
                                                    CONCAT13((char)((ushort)(sVar118 + (ushort)
                                                  bVar57 * 2 + (ushort)bVar104 * 2) >> 3),
                                                  CONCAT12((char)((ushort)(sVar117 + (ushort)bVar82
                                                                                     * 2 +
                                                                          (ushort)bVar103 * 2) >> 3)
                                                           ,CONCAT11((char)((ushort)(sVar116 + (
                                                  ushort)bVar74 * 2 +
                                                  (ushort)(byte)(uVar29 >> 0x10) * 2) >> 3),
                                                  (char)((ushort)(sVar113 + (ushort)(byte)uVar68 * 2
                                                                 + (short)uVar29 * 2) >> 3))))))));
      uVar114 = NEON_urhadd(uVar68,uVar111,1);
      uVar123 = NEON_urhadd(uVar76,uVar109,1);
      uVar68 = NEON_urhadd(uVar85,uVar109,1);
      uVar76 = NEON_urhadd(uVar100,uVar111,1);
      local_b0[0] = (byte)uVar114;
      local_b0[1] = (byte)uVar123;
      local_b0[2] = (byte)((ulong)uVar114 >> 8);
      local_b0[3] = (byte)((ulong)uVar123 >> 8);
      bStack_ac = (byte)((ulong)uVar114 >> 0x10);
      bStack_ab = (byte)((ulong)uVar123 >> 0x10);
      bStack_aa = (byte)((ulong)uVar114 >> 0x18);
      bStack_a9 = (byte)((ulong)uVar123 >> 0x18);
      local_a8 = (byte)((ulong)uVar114 >> 0x20);
      bStack_a7 = (byte)((ulong)uVar123 >> 0x20);
      bStack_a6 = (byte)((ulong)uVar114 >> 0x28);
      bStack_a5 = (byte)((ulong)uVar123 >> 0x28);
      bStack_a4 = (byte)((ulong)uVar114 >> 0x30);
      bStack_a3 = (byte)((ulong)uVar123 >> 0x30);
      bStack_a2 = (byte)((ulong)uVar114 >> 0x38);
      bStack_a1 = (byte)((ulong)uVar123 >> 0x38);
      local_90[0] = (byte)uVar68;
      local_90[1] = (byte)uVar76;
      local_90[2] = (byte)((ulong)uVar68 >> 8);
      local_90[3] = (byte)((ulong)uVar76 >> 8);
      bStack_8c = (byte)((ulong)uVar68 >> 0x10);
      bStack_8b = (byte)((ulong)uVar76 >> 0x10);
      bStack_8a = (byte)((ulong)uVar68 >> 0x18);
      bStack_89 = (byte)((ulong)uVar76 >> 0x18);
      local_88 = (byte)((ulong)uVar68 >> 0x20);
      bStack_87 = (byte)((ulong)uVar76 >> 0x20);
      bStack_86 = (byte)((ulong)uVar68 >> 0x28);
      bStack_85 = (byte)((ulong)uVar76 >> 0x28);
      bStack_84 = (byte)((ulong)uVar68 >> 0x30);
      bStack_83 = (byte)((ulong)uVar76 >> 0x30);
      bStack_82 = (byte)((ulong)uVar68 >> 0x38);
      bStack_81 = (byte)((ulong)uVar76 >> 0x38);
      uVar68 = *(undefined8 *)param_4;
      uVar85 = *(undefined8 *)(param_4 + 1);
      uVar100 = *(undefined8 *)pbVar45;
      uVar76 = *(undefined8 *)(pbVar45 + 1);
      bVar74 = (byte)((ulong)uVar68 >> 8);
      bVar82 = (byte)((ulong)uVar68 >> 0x10);
      bVar57 = (byte)((ulong)uVar68 >> 0x18);
      bVar58 = (byte)((ulong)uVar68 >> 0x20);
      bVar59 = (byte)((ulong)uVar68 >> 0x28);
      bVar60 = (byte)((ulong)uVar68 >> 0x30);
      bVar61 = (byte)((ulong)uVar68 >> 0x38);
      bVar92 = (byte)((ulong)uVar85 >> 8);
      bVar93 = (byte)((ulong)uVar85 >> 0x10);
      bVar94 = (byte)((ulong)uVar85 >> 0x18);
      bVar96 = (byte)((ulong)uVar85 >> 0x20);
      bVar97 = (byte)((ulong)uVar85 >> 0x28);
      bVar98 = (byte)((ulong)uVar85 >> 0x30);
      bVar99 = (byte)((ulong)uVar85 >> 0x38);
      uVar29 = CONCAT12(bVar74,(short)uVar68) & 0xff00ff;
      bVar102 = (byte)((ulong)uVar100 >> 8);
      bVar103 = (byte)((ulong)uVar100 >> 0x10);
      bVar104 = (byte)((ulong)uVar100 >> 0x18);
      bVar105 = (byte)((ulong)uVar100 >> 0x20);
      bVar106 = (byte)((ulong)uVar100 >> 0x28);
      bVar107 = (byte)((ulong)uVar100 >> 0x30);
      bVar108 = (byte)((ulong)uVar100 >> 0x38);
      uVar30 = CONCAT12(bVar92,(short)uVar85) & 0xff00ff;
      uVar31 = CONCAT12(bVar102,(short)uVar100) & 0xff00ff;
      bVar95 = (byte)((ulong)uVar76 >> 8);
      bVar62 = (byte)((ulong)uVar76 >> 0x10);
      bVar63 = (byte)((ulong)uVar76 >> 0x18);
      bVar64 = (byte)((ulong)uVar76 >> 0x20);
      bVar65 = (byte)((ulong)uVar76 >> 0x28);
      bVar83 = (byte)((ulong)uVar76 >> 0x30);
      bVar84 = (byte)((ulong)uVar76 >> 0x38);
      sVar113 = (ushort)(byte)uVar85 + (short)uVar29 + (short)uVar31 + (ushort)(byte)uVar76;
      sVar116 = (ushort)bVar92 + (ushort)(byte)(uVar29 >> 0x10) + (ushort)(byte)(uVar31 >> 0x10) +
                (ushort)bVar95;
      sVar117 = (ushort)bVar93 + (ushort)bVar82 + (ushort)bVar103 + (ushort)bVar62;
      sVar118 = (ushort)bVar94 + (ushort)bVar57 + (ushort)bVar104 + (ushort)bVar63;
      sVar119 = (ushort)bVar96 + (ushort)bVar58 + (ushort)bVar105 + (ushort)bVar64;
      sVar120 = (ushort)bVar97 + (ushort)bVar59 + (ushort)bVar106 + (ushort)bVar65;
      sVar121 = (ushort)bVar98 + (ushort)bVar60 + (ushort)bVar107 + (ushort)bVar83;
      sVar122 = (ushort)bVar99 + (ushort)bVar61 + (ushort)bVar108 + (ushort)bVar84;
      uVar29 = CONCAT12(bVar95,(short)uVar76) & 0xff00ff;
      uVar111 = CONCAT17((char)((ushort)(((ushort)bVar108 + (ushort)bVar99) * 2 + sVar122) >> 3),
                         CONCAT16((char)((ushort)(((ushort)bVar107 + (ushort)bVar98) * 2 + sVar121)
                                        >> 3),
                                  CONCAT15((char)((ushort)(((ushort)bVar106 + (ushort)bVar97) * 2 +
                                                          sVar120) >> 3),
                                           CONCAT14((char)((ushort)(((ushort)bVar105 +
                                                                    (ushort)bVar96) * 2 + sVar119)
                                                          >> 3),
                                                    CONCAT13((char)((ushort)(((ushort)bVar104 +
                                                                             (ushort)bVar94) * 2 +
                                                                            sVar118) >> 3),
                                                             CONCAT12((char)((ushort)(((ushort)
                                                  bVar103 + (ushort)bVar93) * 2 + sVar117) >> 3),
                                                  CONCAT11((char)((ushort)(((ushort)bVar102 +
                                                                           (ushort)(byte)(uVar30 >>
                                                                                         0x10)) * 2
                                                                          + sVar116) >> 3),
                                                           (char)((ushort)(((ushort)(byte)uVar100 +
                                                                           (short)uVar30) * 2 +
                                                                          sVar113) >> 3))))))));
      uVar109 = CONCAT17((char)((ushort)(sVar122 + (ushort)bVar61 * 2 + (ushort)bVar84 * 2) >> 3),
                         CONCAT16((char)((ushort)(sVar121 + (ushort)bVar60 * 2 + (ushort)bVar83 * 2)
                                        >> 3),
                                  CONCAT15((char)((ushort)(sVar120 + (ushort)bVar59 * 2 +
                                                          (ushort)bVar65 * 2) >> 3),
                                           CONCAT14((char)((ushort)(sVar119 + (ushort)bVar58 * 2 +
                                                                   (ushort)bVar64 * 2) >> 3),
                                                    CONCAT13((char)((ushort)(sVar118 + (ushort)
                                                  bVar57 * 2 + (ushort)bVar63 * 2) >> 3),
                                                  CONCAT12((char)((ushort)(sVar117 + (ushort)bVar82
                                                                                     * 2 +
                                                                          (ushort)bVar62 * 2) >> 3),
                                                           CONCAT11((char)((ushort)(sVar116 + (
                                                  ushort)bVar74 * 2 +
                                                  (ushort)(byte)(uVar29 >> 0x10) * 2) >> 3),
                                                  (char)((ushort)(sVar113 + (ushort)(byte)uVar68 * 2
                                                                 + (short)uVar29 * 2) >> 3))))))));
      uVar114 = NEON_urhadd(uVar68,uVar111,1);
      uVar85 = NEON_urhadd(uVar85,uVar109,1);
      uVar68 = NEON_urhadd(uVar100,uVar109,1);
      uVar76 = NEON_urhadd(uVar76,uVar111,1);
      local_a0[0] = (byte)uVar114;
      local_a0[1] = (byte)uVar85;
      local_a0[2] = (byte)((ulong)uVar114 >> 8);
      local_a0[3] = (byte)((ulong)uVar85 >> 8);
      bStack_9c = (byte)((ulong)uVar114 >> 0x10);
      bStack_9b = (byte)((ulong)uVar85 >> 0x10);
      bStack_9a = (byte)((ulong)uVar114 >> 0x18);
      bStack_99 = (byte)((ulong)uVar85 >> 0x18);
      local_98 = (byte)((ulong)uVar114 >> 0x20);
      bStack_97 = (byte)((ulong)uVar85 >> 0x20);
      bStack_96 = (byte)((ulong)uVar114 >> 0x28);
      bStack_95 = (byte)((ulong)uVar85 >> 0x28);
      bStack_94 = (byte)((ulong)uVar114 >> 0x30);
      bStack_93 = (byte)((ulong)uVar85 >> 0x30);
      bStack_92 = (byte)((ulong)uVar114 >> 0x38);
      bStack_91 = (byte)((ulong)uVar85 >> 0x38);
      local_80[0] = (byte)uVar68;
      local_80[1] = (byte)uVar76;
      local_80[2] = (byte)((ulong)uVar68 >> 8);
      local_80[3] = (byte)((ulong)uVar76 >> 8);
      bStack_7c = (byte)((ulong)uVar68 >> 0x10);
      bStack_7b = (byte)((ulong)uVar76 >> 0x10);
      bStack_7a = (byte)((ulong)uVar68 >> 0x18);
      bStack_79 = (byte)((ulong)uVar76 >> 0x18);
      local_78 = (byte)((ulong)uVar68 >> 0x20);
      bStack_77 = (byte)((ulong)uVar76 >> 0x20);
      bStack_76 = (byte)((ulong)uVar68 >> 0x28);
      bStack_75 = (byte)((ulong)uVar76 >> 0x28);
      bStack_74 = (byte)((ulong)uVar68 >> 0x30);
      bStack_73 = (byte)((ulong)uVar76 >> 0x30);
      bStack_72 = (byte)((ulong)uVar68 >> 0x38);
      bStack_71 = (byte)((ulong)uVar76 >> 0x38);
      uVar68 = *(undefined8 *)(param_1 + (lVar41 >> 0x20));
      auVar69._0_2_ = (ushort)(byte)uVar68 << 7;
      auVar69._2_2_ = (ushort)(byte)((ulong)uVar68 >> 8) << 7;
      auVar69._4_2_ = (ushort)(byte)((ulong)uVar68 >> 0x10) << 7;
      auVar69._6_2_ = (ushort)(byte)((ulong)uVar68 >> 0x18) << 7;
      auVar69._8_2_ = (ushort)(byte)((ulong)uVar68 >> 0x20) << 7;
      auVar69._10_2_ = (ushort)(byte)((ulong)uVar68 >> 0x28) << 7;
      auVar69._12_2_ = (ushort)(byte)((ulong)uVar68 >> 0x30) << 7;
      auVar69._14_2_ = (ushort)(byte)((ulong)uVar68 >> 0x38) << 7;
      auVar78._0_8_ =
           CONCAT26((ushort)local_b0[3] << 7,
                    CONCAT24((ushort)local_b0[2] << 7,
                             CONCAT22((ushort)local_b0[1] << 7,(ushort)local_b0[0] << 7)));
      auVar78._8_2_ = (ushort)bStack_ac << 7;
      auVar78._10_2_ = (ushort)bStack_ab << 7;
      auVar78._12_2_ = (ushort)bStack_aa << 7;
      auVar78._14_2_ = (ushort)bStack_a9 << 7;
      auVar87._0_2_ = (ushort)local_a0[0] << 7;
      auVar87._2_2_ = (ushort)local_a0[1] << 7;
      auVar87._4_2_ = (ushort)local_a0[2] << 7;
      auVar87._6_2_ = (ushort)local_a0[3] << 7;
      auVar87._8_2_ = (ushort)bStack_9c << 7;
      auVar87._10_2_ = (ushort)bStack_9b << 7;
      auVar87._12_2_ = (ushort)bStack_9a << 7;
      auVar87._14_2_ = (ushort)bStack_99 << 7;
      auVar70._8_2_ = 0x4a85;
      auVar70._0_8_ = 0x4a854a854a854a85;
      auVar70._10_2_ = 0x4a85;
      auVar70._12_2_ = 0x4a85;
      auVar70._14_2_ = 0x4a85;
      auVar70 = NEON_sqdmulh(auVar69,auVar70,2);
      auVar101._8_2_ = 0x6625;
      auVar101._0_8_ = 0x6625662566256625;
      auVar101._10_2_ = 0x6625;
      auVar101._12_2_ = 0x6625;
      auVar101._14_2_ = 0x6625;
      auVar101 = NEON_sqdmulh(auVar87,auVar101,2);
      auVar112._8_2_ = 0x1913;
      auVar112._0_8_ = 0x1913191319131913;
      auVar112._10_2_ = 0x1913;
      auVar112._12_2_ = 0x1913;
      auVar112._14_2_ = 0x1913;
      auVar110 = NEON_sqdmulh(auVar78,auVar112,2);
      auVar124._8_2_ = 0x3408;
      auVar124._0_8_ = 0x3408340834083408;
      auVar124._10_2_ = 0x3408;
      auVar124._12_2_ = 0x3408;
      auVar124._14_2_ = 0x3408;
      auVar88 = NEON_sqdmulh(auVar87,auVar124,2);
      auVar13._8_2_ = 0x11a;
      auVar13._0_8_ = 0x11a011a011a011a;
      auVar13._10_2_ = 0x11a;
      auVar13._12_2_ = 0x11a;
      auVar13._14_2_ = 0x11a;
      auVar112 = NEON_sqdmulh(auVar78,auVar13,2);
      auVar17._8_2_ = 0xc866;
      auVar17._0_8_ = 0xc866c866c866c866;
      auVar17._10_2_ = 0xc866;
      auVar17._12_2_ = 0xc866;
      auVar17._14_2_ = 0xc866;
      auVar115 = NEON_sqadd(auVar70,auVar17,2);
      auVar21._8_2_ = 0x2204;
      auVar21._0_8_ = 0x2204220422042204;
      auVar21._10_2_ = 0x2204;
      auVar21._12_2_ = 0x2204;
      auVar21._14_2_ = 0x2204;
      auVar124 = NEON_sqadd(auVar70,auVar21,2);
      auVar25._8_2_ = 0xbaeb;
      auVar25._0_8_ = 0xbaebbaebbaebbaeb;
      auVar25._10_2_ = 0xbaeb;
      auVar25._12_2_ = 0xbaeb;
      auVar25._14_2_ = 0xbaeb;
      auVar70 = NEON_sqadd(auVar70,auVar25,2);
      auVar88 = NEON_sqadd(auVar110,auVar88,2);
      auVar70 = NEON_sqadd(auVar112,auVar70,2);
      auVar88 = NEON_sqsub(auVar124,auVar88,2);
      auVar101 = NEON_sqadd(auVar101,auVar115,2);
      auVar70 = NEON_sqadd(auVar70,auVar78,2);
      uVar85 = NEON_sqshrun(auVar88._0_8_,auVar88,6,2);
      uVar77 = NEON_sqshrun(auVar78._0_8_,auVar101,6,2);
      uVar76 = NEON_sqshrun(auVar70._0_8_,auVar70,6,2);
      bVar57 = (byte)((ulong)uVar85 >> 8);
      bVar58 = (byte)((ulong)uVar85 >> 0x10);
      bVar74 = (byte)((ulong)uVar85 >> 0x18);
      bVar59 = (byte)((ulong)uVar85 >> 0x20);
      bVar60 = (byte)((ulong)uVar85 >> 0x28);
      bVar61 = (byte)((ulong)uVar85 >> 0x30);
      bVar95 = (byte)((ulong)uVar85 >> 0x38);
      uVar77 = uVar77 & 0xf8f8f8f8f8f8f8f8;
      uVar86 = CONCAT17(bVar95 << 3,
                        CONCAT16(bVar61 << 3,
                                 CONCAT15(bVar60 << 3,
                                          CONCAT14(bVar59 << 3,
                                                   CONCAT13(bVar74 << 3,
                                                            CONCAT12(bVar58 << 3,
                                                                     CONCAT11(bVar57 << 3,
                                                                              (byte)uVar85 << 3)))))
                                )) & 0xe0e0e0e0e0e0e0e0;
      bVar82 = bVar74 >> 5 | (byte)(uVar77 >> 0x18);
      bVar74 = (byte)((ulong)uVar76 >> 0x3b) | (byte)(uVar86 >> 0x38);
      uVar75 = CONCAT16(bVar82,(uint6)CONCAT14(bVar58 >> 5 | (byte)(uVar77 >> 0x10),
                                               (uint)(byte)(bVar57 >> 5 | (byte)(uVar77 >> 8)) <<
                                               0x10));
      uVar68 = CONCAT17(bVar74,CONCAT16(bVar95 >> 5 | (byte)(uVar77 >> 0x38),
                                        (uint6)CONCAT14(bVar61 >> 5 | (byte)(uVar77 >> 0x30),
                                                        (uint)(byte)(bVar60 >> 5 |
                                                                    (byte)(uVar77 >> 0x28)) << 0x10)
                                       ));
      *(ulong *)(param_7 + (iVar47 + -0x10) + 8) =
           CONCAT17(bVar74,(int7)CONCAT26((short)((ulong)uVar68 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar76 >> 0x30) >> 3 |
                                                   (byte)(uVar86 >> 0x30),
                                                   (int5)CONCAT44((int)((ulong)uVar68 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar76 >>
                                                                                 0x28) >> 3 |
                                                                           (byte)(uVar86 >> 0x28),
                                                                           (int3)CONCAT62((int6)((
                                                  ulong)uVar68 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar76 >> 0x20) >> 3 |
                                                           (byte)(uVar86 >> 0x20),
                                                           bVar59 >> 5 | (byte)(uVar77 >> 0x20))))))
                                         ));
      *(ulong *)(param_7 + (iVar47 + -0x10)) =
           CONCAT17((byte)((ulong)uVar76 >> 0x18) >> 3 | (byte)(uVar86 >> 0x18),
                    CONCAT16(bVar82,CONCAT15((byte)((ulong)uVar76 >> 0x10) >> 3 |
                                             (byte)(uVar86 >> 0x10),
                                             (int5)CONCAT34((int3)((uint7)uVar75 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar76 >> 8) >> 3
                                                                     | (byte)(uVar86 >> 8),
                                                                     (int3)CONCAT52((int5)((uint7)
                                                  uVar75 >> 0x10),
                                                  CONCAT11((byte)uVar76 >> 3 | (byte)uVar86,
                                                           (byte)uVar85 >> 5 | (byte)uVar77)))))));
      uVar68 = *(undefined8 *)(param_1 + (lVar41 >> 0x20) + 8);
      auVar71._0_2_ = (ushort)(byte)uVar68 << 7;
      auVar71._2_2_ = (ushort)(byte)((ulong)uVar68 >> 8) << 7;
      auVar71._4_2_ = (ushort)(byte)((ulong)uVar68 >> 0x10) << 7;
      auVar71._6_2_ = (ushort)(byte)((ulong)uVar68 >> 0x18) << 7;
      auVar71._8_2_ = (ushort)(byte)((ulong)uVar68 >> 0x20) << 7;
      auVar71._10_2_ = (ushort)(byte)((ulong)uVar68 >> 0x28) << 7;
      auVar71._12_2_ = (ushort)(byte)((ulong)uVar68 >> 0x30) << 7;
      auVar71._14_2_ = (ushort)(byte)((ulong)uVar68 >> 0x38) << 7;
      auVar79._0_8_ =
           CONCAT26((ushort)bStack_a5 << 7,
                    CONCAT24((ushort)bStack_a6 << 7,
                             CONCAT22((ushort)bStack_a7 << 7,(ushort)local_a8 << 7)));
      auVar79._8_2_ = (ushort)bStack_a4 << 7;
      auVar79._10_2_ = (ushort)bStack_a3 << 7;
      auVar79._12_2_ = (ushort)bStack_a2 << 7;
      auVar79._14_2_ = (ushort)bStack_a1 << 7;
      auVar89._0_2_ = (ushort)local_98 << 7;
      auVar89._2_2_ = (ushort)bStack_97 << 7;
      auVar89._4_2_ = (ushort)bStack_96 << 7;
      auVar89._6_2_ = (ushort)bStack_95 << 7;
      auVar89._8_2_ = (ushort)bStack_94 << 7;
      auVar89._10_2_ = (ushort)bStack_93 << 7;
      auVar89._12_2_ = (ushort)bStack_92 << 7;
      auVar89._14_2_ = (ushort)bStack_91 << 7;
      auVar88._8_2_ = 0x4a85;
      auVar88._0_8_ = 0x4a854a854a854a85;
      auVar88._10_2_ = 0x4a85;
      auVar88._12_2_ = 0x4a85;
      auVar88._14_2_ = 0x4a85;
      auVar70 = NEON_sqdmulh(auVar71,auVar88,2);
      auVar110._8_2_ = 0x6625;
      auVar110._0_8_ = 0x6625662566256625;
      auVar110._10_2_ = 0x6625;
      auVar110._12_2_ = 0x6625;
      auVar110._14_2_ = 0x6625;
      auVar101 = NEON_sqdmulh(auVar89,auVar110,2);
      auVar115._8_2_ = 0x1913;
      auVar115._0_8_ = 0x1913191319131913;
      auVar115._10_2_ = 0x1913;
      auVar115._12_2_ = 0x1913;
      auVar115._14_2_ = 0x1913;
      auVar110 = NEON_sqdmulh(auVar79,auVar115,2);
      auVar10._8_2_ = 0x3408;
      auVar10._0_8_ = 0x3408340834083408;
      auVar10._10_2_ = 0x3408;
      auVar10._12_2_ = 0x3408;
      auVar10._14_2_ = 0x3408;
      auVar88 = NEON_sqdmulh(auVar89,auVar10,2);
      auVar14._8_2_ = 0x11a;
      auVar14._0_8_ = 0x11a011a011a011a;
      auVar14._10_2_ = 0x11a;
      auVar14._12_2_ = 0x11a;
      auVar14._14_2_ = 0x11a;
      auVar112 = NEON_sqdmulh(auVar79,auVar14,2);
      auVar18._8_2_ = 0xc866;
      auVar18._0_8_ = 0xc866c866c866c866;
      auVar18._10_2_ = 0xc866;
      auVar18._12_2_ = 0xc866;
      auVar18._14_2_ = 0xc866;
      auVar115 = NEON_sqadd(auVar70,auVar18,2);
      auVar22._8_2_ = 0x2204;
      auVar22._0_8_ = 0x2204220422042204;
      auVar22._10_2_ = 0x2204;
      auVar22._12_2_ = 0x2204;
      auVar22._14_2_ = 0x2204;
      auVar124 = NEON_sqadd(auVar70,auVar22,2);
      auVar26._8_2_ = 0xbaeb;
      auVar26._0_8_ = 0xbaebbaebbaebbaeb;
      auVar26._10_2_ = 0xbaeb;
      auVar26._12_2_ = 0xbaeb;
      auVar26._14_2_ = 0xbaeb;
      auVar70 = NEON_sqadd(auVar70,auVar26,2);
      auVar88 = NEON_sqadd(auVar110,auVar88,2);
      auVar70 = NEON_sqadd(auVar112,auVar70,2);
      auVar88 = NEON_sqsub(auVar124,auVar88,2);
      auVar101 = NEON_sqadd(auVar101,auVar115,2);
      auVar70 = NEON_sqadd(auVar70,auVar79,2);
      uVar85 = NEON_sqshrun(auVar88._0_8_,auVar88,6,2);
      uVar77 = NEON_sqshrun(auVar79._0_8_,auVar101,6,2);
      uVar76 = NEON_sqshrun(auVar70._0_8_,auVar70,6,2);
      bVar57 = (byte)((ulong)uVar85 >> 8);
      bVar58 = (byte)((ulong)uVar85 >> 0x10);
      bVar74 = (byte)((ulong)uVar85 >> 0x18);
      bVar59 = (byte)((ulong)uVar85 >> 0x20);
      bVar60 = (byte)((ulong)uVar85 >> 0x28);
      bVar61 = (byte)((ulong)uVar85 >> 0x30);
      bVar95 = (byte)((ulong)uVar85 >> 0x38);
      uVar77 = uVar77 & 0xf8f8f8f8f8f8f8f8;
      uVar86 = CONCAT17(bVar95 << 3,
                        CONCAT16(bVar61 << 3,
                                 CONCAT15(bVar60 << 3,
                                          CONCAT14(bVar59 << 3,
                                                   CONCAT13(bVar74 << 3,
                                                            CONCAT12(bVar58 << 3,
                                                                     CONCAT11(bVar57 << 3,
                                                                              (byte)uVar85 << 3)))))
                                )) & 0xe0e0e0e0e0e0e0e0;
      bVar82 = bVar74 >> 5 | (byte)(uVar77 >> 0x18);
      bVar74 = (byte)((ulong)uVar76 >> 0x3b) | (byte)(uVar86 >> 0x38);
      uVar75 = CONCAT16(bVar82,(uint6)CONCAT14(bVar58 >> 5 | (byte)(uVar77 >> 0x10),
                                               (uint)(byte)(bVar57 >> 5 | (byte)(uVar77 >> 8)) <<
                                               0x10));
      uVar68 = CONCAT17(bVar74,CONCAT16(bVar95 >> 5 | (byte)(uVar77 >> 0x38),
                                        (uint6)CONCAT14(bVar61 >> 5 | (byte)(uVar77 >> 0x30),
                                                        (uint)(byte)(bVar60 >> 5 |
                                                                    (byte)(uVar77 >> 0x28)) << 0x10)
                                       ));
      *(ulong *)(param_7 + iVar47 + 8) =
           CONCAT17(bVar74,(int7)CONCAT26((short)((ulong)uVar68 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar76 >> 0x30) >> 3 |
                                                   (byte)(uVar86 >> 0x30),
                                                   (int5)CONCAT44((int)((ulong)uVar68 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar76 >>
                                                                                 0x28) >> 3 |
                                                                           (byte)(uVar86 >> 0x28),
                                                                           (int3)CONCAT62((int6)((
                                                  ulong)uVar68 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar76 >> 0x20) >> 3 |
                                                           (byte)(uVar86 >> 0x20),
                                                           bVar59 >> 5 | (byte)(uVar77 >> 0x20))))))
                                         ));
      *(ulong *)(param_7 + iVar47) =
           CONCAT17((byte)((ulong)uVar76 >> 0x18) >> 3 | (byte)(uVar86 >> 0x18),
                    CONCAT16(bVar82,CONCAT15((byte)((ulong)uVar76 >> 0x10) >> 3 |
                                             (byte)(uVar86 >> 0x10),
                                             (int5)CONCAT34((int3)((uint7)uVar75 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar76 >> 8) >> 3
                                                                     | (byte)(uVar86 >> 8),
                                                                     (int3)CONCAT52((int5)((uint7)
                                                  uVar75 >> 0x10),
                                                  CONCAT11((byte)uVar76 >> 3 | (byte)uVar86,
                                                           (byte)uVar85 >> 5 | (byte)uVar77)))))));
      if (param_2 != (byte *)0x0) {
        uVar68 = *(undefined8 *)(param_2 + (lVar41 >> 0x20));
        auVar72._0_2_ = (ushort)local_90[0] << 7;
        auVar72._2_2_ = (ushort)local_90[1] << 7;
        auVar72._4_2_ = (ushort)local_90[2] << 7;
        auVar72._6_2_ = (ushort)local_90[3] << 7;
        auVar72._8_2_ = (ushort)bStack_8c << 7;
        auVar72._10_2_ = (ushort)bStack_8b << 7;
        auVar72._12_2_ = (ushort)bStack_8a << 7;
        auVar72._14_2_ = (ushort)bStack_89 << 7;
        auVar80._0_2_ = (ushort)local_80[0] << 7;
        auVar80._2_2_ = (ushort)local_80[1] << 7;
        auVar80._4_2_ = (ushort)local_80[2] << 7;
        auVar80._6_2_ = (ushort)local_80[3] << 7;
        auVar80._8_2_ = (ushort)bStack_7c << 7;
        auVar80._10_2_ = (ushort)bStack_7b << 7;
        auVar80._12_2_ = (ushort)bStack_7a << 7;
        auVar80._14_2_ = (ushort)bStack_79 << 7;
        auVar90._0_2_ = (ushort)(byte)uVar68 << 7;
        auVar90._2_2_ = (ushort)(byte)((ulong)uVar68 >> 8) << 7;
        auVar90._4_2_ = (ushort)(byte)((ulong)uVar68 >> 0x10) << 7;
        auVar90._6_2_ = (ushort)(byte)((ulong)uVar68 >> 0x18) << 7;
        auVar90._8_2_ = (ushort)(byte)((ulong)uVar68 >> 0x20) << 7;
        auVar90._10_2_ = (ushort)(byte)((ulong)uVar68 >> 0x28) << 7;
        auVar90._12_2_ = (ushort)(byte)((ulong)uVar68 >> 0x30) << 7;
        auVar90._14_2_ = (ushort)(byte)((ulong)uVar68 >> 0x38) << 7;
        auVar6._8_2_ = 0x6625;
        auVar6._0_8_ = 0x6625662566256625;
        auVar6._10_2_ = 0x6625;
        auVar6._12_2_ = 0x6625;
        auVar6._14_2_ = 0x6625;
        auVar110 = NEON_sqdmulh(auVar80,auVar6,2);
        auVar8._8_2_ = 0x1913;
        auVar8._0_8_ = 0x1913191319131913;
        auVar8._10_2_ = 0x1913;
        auVar8._12_2_ = 0x1913;
        auVar8._14_2_ = 0x1913;
        auVar101 = NEON_sqdmulh(auVar72,auVar8,2);
        auVar11._8_2_ = 0x3408;
        auVar11._0_8_ = 0x3408340834083408;
        auVar11._10_2_ = 0x3408;
        auVar11._12_2_ = 0x3408;
        auVar11._14_2_ = 0x3408;
        auVar70 = NEON_sqdmulh(auVar80,auVar11,2);
        auVar4._8_2_ = 0x4a85;
        auVar4._0_8_ = 0x4a854a854a854a85;
        auVar4._10_2_ = 0x4a85;
        auVar4._12_2_ = 0x4a85;
        auVar4._14_2_ = 0x4a85;
        auVar88 = NEON_sqdmulh(auVar90,auVar4,2);
        auVar15._8_2_ = 0x11a;
        auVar15._0_8_ = 0x11a011a011a011a;
        auVar15._10_2_ = 0x11a;
        auVar15._12_2_ = 0x11a;
        auVar15._14_2_ = 0x11a;
        auVar115 = NEON_sqdmulh(auVar72,auVar15,2);
        auVar70 = NEON_sqadd(auVar101,auVar70,2);
        auVar19._8_2_ = 0xc866;
        auVar19._0_8_ = 0xc866c866c866c866;
        auVar19._10_2_ = 0xc866;
        auVar19._12_2_ = 0xc866;
        auVar19._14_2_ = 0xc866;
        auVar112 = NEON_sqadd(auVar88,auVar19,2);
        auVar23._8_2_ = 0x2204;
        auVar23._0_8_ = 0x2204220422042204;
        auVar23._10_2_ = 0x2204;
        auVar23._12_2_ = 0x2204;
        auVar23._14_2_ = 0x2204;
        auVar124 = NEON_sqadd(auVar88,auVar23,2);
        auVar27._8_2_ = 0xbaeb;
        auVar27._0_8_ = 0xbaebbaebbaebbaeb;
        auVar27._10_2_ = 0xbaeb;
        auVar27._12_2_ = 0xbaeb;
        auVar27._14_2_ = 0xbaeb;
        auVar88 = NEON_sqadd(auVar88,auVar27,2);
        auVar101 = NEON_sqadd(auVar115,auVar88,2);
        auVar88 = NEON_sqsub(auVar124,auVar70,2);
        auVar110 = NEON_sqadd(auVar110,auVar112,2);
        auVar70 = NEON_sqadd(auVar101,auVar72,2);
        uVar85 = NEON_sqshrun(auVar88._0_8_,auVar88,6,2);
        uVar86 = NEON_sqshrun(auVar101._0_8_,auVar110,6,2);
        uVar76 = NEON_sqshrun(auVar70._0_8_,auVar70,6,2);
        bVar82 = (byte)((ulong)uVar85 >> 8);
        bVar57 = (byte)((ulong)uVar85 >> 0x10);
        bVar74 = (byte)((ulong)uVar85 >> 0x18);
        bVar58 = (byte)((ulong)uVar85 >> 0x20);
        bVar59 = (byte)((ulong)uVar85 >> 0x28);
        bVar60 = (byte)((ulong)uVar85 >> 0x30);
        bVar61 = (byte)((ulong)uVar85 >> 0x38);
        uVar86 = uVar86 & 0xf8f8f8f8f8f8f8f8;
        uVar77 = CONCAT17(bVar61 << 3,
                          CONCAT16(bVar60 << 3,
                                   CONCAT15(bVar59 << 3,
                                            CONCAT14(bVar58 << 3,
                                                     CONCAT13(bVar74 << 3,
                                                              CONCAT12(bVar57 << 3,
                                                                       CONCAT11(bVar82 << 3,
                                                                                (byte)uVar85 << 3)))
                                                    )))) & 0xe0e0e0e0e0e0e0e0;
        bVar95 = bVar74 >> 5 | (byte)(uVar86 >> 0x18);
        bVar74 = (byte)((ulong)uVar76 >> 0x3b) | (byte)(uVar77 >> 0x38);
        uVar75 = CONCAT16(bVar95,(uint6)CONCAT14(bVar57 >> 5 | (byte)(uVar86 >> 0x10),
                                                 (uint)(byte)(bVar82 >> 5 | (byte)(uVar86 >> 8)) <<
                                                 0x10));
        uVar68 = CONCAT17(bVar74,CONCAT16(bVar61 >> 5 | (byte)(uVar86 >> 0x38),
                                          (uint6)CONCAT14(bVar60 >> 5 | (byte)(uVar86 >> 0x30),
                                                          (uint)(byte)(bVar59 >> 5 |
                                                                      (byte)(uVar86 >> 0x28)) <<
                                                          0x10)));
        *(ulong *)(param_8 + (iVar47 + -0x10) + 8) =
             CONCAT17(bVar74,(int7)CONCAT26((short)((ulong)uVar68 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar76 >> 0x30) >> 3 |
                                                     (byte)(uVar77 >> 0x30),
                                                     (int5)CONCAT44((int)((ulong)uVar68 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar76 >>
                                                                                   0x28) >> 3 |
                                                                             (byte)(uVar77 >> 0x28),
                                                                             (int3)CONCAT62((int6)((
                                                  ulong)uVar68 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar76 >> 0x20) >> 3 |
                                                           (byte)(uVar77 >> 0x20),
                                                           bVar58 >> 5 | (byte)(uVar86 >> 0x20))))))
                                           ));
        *(ulong *)(param_8 + (iVar47 + -0x10)) =
             CONCAT17((byte)((ulong)uVar76 >> 0x18) >> 3 | (byte)(uVar77 >> 0x18),
                      CONCAT16(bVar95,CONCAT15((byte)((ulong)uVar76 >> 0x10) >> 3 |
                                               (byte)(uVar77 >> 0x10),
                                               (int5)CONCAT34((int3)((uint7)uVar75 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar76 >> 8) >>
                                                                       3 | (byte)(uVar77 >> 8),
                                                                       (int3)CONCAT52((int5)((uint7)
                                                  uVar75 >> 0x10),
                                                  CONCAT11((byte)uVar76 >> 3 | (byte)uVar77,
                                                           (byte)uVar85 >> 5 | (byte)uVar86)))))));
        uVar68 = *(undefined8 *)(param_2 + (lVar41 >> 0x20) + 8);
        auVar73._0_2_ = (ushort)(byte)uVar68 << 7;
        auVar73._2_2_ = (ushort)(byte)((ulong)uVar68 >> 8) << 7;
        auVar73._4_2_ = (ushort)(byte)((ulong)uVar68 >> 0x10) << 7;
        auVar73._6_2_ = (ushort)(byte)((ulong)uVar68 >> 0x18) << 7;
        auVar73._8_2_ = (ushort)(byte)((ulong)uVar68 >> 0x20) << 7;
        auVar73._10_2_ = (ushort)(byte)((ulong)uVar68 >> 0x28) << 7;
        auVar73._12_2_ = (ushort)(byte)((ulong)uVar68 >> 0x30) << 7;
        auVar73._14_2_ = (ushort)(byte)((ulong)uVar68 >> 0x38) << 7;
        auVar81._0_8_ =
             CONCAT26((ushort)bStack_85 << 7,
                      CONCAT24((ushort)bStack_86 << 7,
                               CONCAT22((ushort)bStack_87 << 7,(ushort)local_88 << 7)));
        auVar81._8_2_ = (ushort)bStack_84 << 7;
        auVar81._10_2_ = (ushort)bStack_83 << 7;
        auVar81._12_2_ = (ushort)bStack_82 << 7;
        auVar81._14_2_ = (ushort)bStack_81 << 7;
        auVar91._0_2_ = (ushort)local_78 << 7;
        auVar91._2_2_ = (ushort)bStack_77 << 7;
        auVar91._4_2_ = (ushort)bStack_76 << 7;
        auVar91._6_2_ = (ushort)bStack_75 << 7;
        auVar91._8_2_ = (ushort)bStack_74 << 7;
        auVar91._10_2_ = (ushort)bStack_73 << 7;
        auVar91._12_2_ = (ushort)bStack_72 << 7;
        auVar91._14_2_ = (ushort)bStack_71 << 7;
        auVar5._8_2_ = 0x4a85;
        auVar5._0_8_ = 0x4a854a854a854a85;
        auVar5._10_2_ = 0x4a85;
        auVar5._12_2_ = 0x4a85;
        auVar5._14_2_ = 0x4a85;
        auVar70 = NEON_sqdmulh(auVar73,auVar5,2);
        auVar7._8_2_ = 0x6625;
        auVar7._0_8_ = 0x6625662566256625;
        auVar7._10_2_ = 0x6625;
        auVar7._12_2_ = 0x6625;
        auVar7._14_2_ = 0x6625;
        auVar101 = NEON_sqdmulh(auVar91,auVar7,2);
        auVar9._8_2_ = 0x1913;
        auVar9._0_8_ = 0x1913191319131913;
        auVar9._10_2_ = 0x1913;
        auVar9._12_2_ = 0x1913;
        auVar9._14_2_ = 0x1913;
        auVar110 = NEON_sqdmulh(auVar81,auVar9,2);
        auVar12._8_2_ = 0x3408;
        auVar12._0_8_ = 0x3408340834083408;
        auVar12._10_2_ = 0x3408;
        auVar12._12_2_ = 0x3408;
        auVar12._14_2_ = 0x3408;
        auVar88 = NEON_sqdmulh(auVar91,auVar12,2);
        auVar16._8_2_ = 0x11a;
        auVar16._0_8_ = 0x11a011a011a011a;
        auVar16._10_2_ = 0x11a;
        auVar16._12_2_ = 0x11a;
        auVar16._14_2_ = 0x11a;
        auVar112 = NEON_sqdmulh(auVar81,auVar16,2);
        auVar20._8_2_ = 0xc866;
        auVar20._0_8_ = 0xc866c866c866c866;
        auVar20._10_2_ = 0xc866;
        auVar20._12_2_ = 0xc866;
        auVar20._14_2_ = 0xc866;
        auVar115 = NEON_sqadd(auVar70,auVar20,2);
        auVar24._8_2_ = 0x2204;
        auVar24._0_8_ = 0x2204220422042204;
        auVar24._10_2_ = 0x2204;
        auVar24._12_2_ = 0x2204;
        auVar24._14_2_ = 0x2204;
        auVar124 = NEON_sqadd(auVar70,auVar24,2);
        auVar28._8_2_ = 0xbaeb;
        auVar28._0_8_ = 0xbaebbaebbaebbaeb;
        auVar28._10_2_ = 0xbaeb;
        auVar28._12_2_ = 0xbaeb;
        auVar28._14_2_ = 0xbaeb;
        auVar70 = NEON_sqadd(auVar70,auVar28,2);
        auVar88 = NEON_sqadd(auVar110,auVar88,2);
        auVar70 = NEON_sqadd(auVar112,auVar70,2);
        auVar88 = NEON_sqsub(auVar124,auVar88,2);
        auVar101 = NEON_sqadd(auVar101,auVar115,2);
        auVar70 = NEON_sqadd(auVar70,auVar81,2);
        uVar85 = NEON_sqshrun(auVar88._0_8_,auVar88,6,2);
        uVar77 = NEON_sqshrun(auVar81._0_8_,auVar101,6,2);
        uVar76 = NEON_sqshrun(auVar70._0_8_,auVar70,6,2);
        bVar57 = (byte)((ulong)uVar85 >> 8);
        bVar58 = (byte)((ulong)uVar85 >> 0x10);
        bVar74 = (byte)((ulong)uVar85 >> 0x18);
        bVar59 = (byte)((ulong)uVar85 >> 0x20);
        bVar60 = (byte)((ulong)uVar85 >> 0x28);
        bVar61 = (byte)((ulong)uVar85 >> 0x30);
        bVar95 = (byte)((ulong)uVar85 >> 0x38);
        uVar77 = uVar77 & 0xf8f8f8f8f8f8f8f8;
        uVar86 = CONCAT17(bVar95 << 3,
                          CONCAT16(bVar61 << 3,
                                   CONCAT15(bVar60 << 3,
                                            CONCAT14(bVar59 << 3,
                                                     CONCAT13(bVar74 << 3,
                                                              CONCAT12(bVar58 << 3,
                                                                       CONCAT11(bVar57 << 3,
                                                                                (byte)uVar85 << 3)))
                                                    )))) & 0xe0e0e0e0e0e0e0e0;
        bVar82 = bVar74 >> 5 | (byte)(uVar77 >> 0x18);
        bVar74 = (byte)((ulong)uVar76 >> 0x3b) | (byte)(uVar86 >> 0x38);
        uVar75 = CONCAT16(bVar82,(uint6)CONCAT14(bVar58 >> 5 | (byte)(uVar77 >> 0x10),
                                                 (uint)(byte)(bVar57 >> 5 | (byte)(uVar77 >> 8)) <<
                                                 0x10));
        uVar68 = CONCAT17(bVar74,CONCAT16(bVar95 >> 5 | (byte)(uVar77 >> 0x38),
                                          (uint6)CONCAT14(bVar61 >> 5 | (byte)(uVar77 >> 0x30),
                                                          (uint)(byte)(bVar60 >> 5 |
                                                                      (byte)(uVar77 >> 0x28)) <<
                                                          0x10)));
        *(ulong *)(param_8 + iVar47 + 8) =
             CONCAT17(bVar74,(int7)CONCAT26((short)((ulong)uVar68 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar76 >> 0x30) >> 3 |
                                                     (byte)(uVar86 >> 0x30),
                                                     (int5)CONCAT44((int)((ulong)uVar68 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar76 >>
                                                                                   0x28) >> 3 |
                                                                             (byte)(uVar86 >> 0x28),
                                                                             (int3)CONCAT62((int6)((
                                                  ulong)uVar68 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar76 >> 0x20) >> 3 |
                                                           (byte)(uVar86 >> 0x20),
                                                           bVar59 >> 5 | (byte)(uVar77 >> 0x20))))))
                                           ));
        *(ulong *)(param_8 + iVar47) =
             CONCAT17((byte)((ulong)uVar76 >> 0x18) >> 3 | (byte)(uVar86 >> 0x18),
                      CONCAT16(bVar82,CONCAT15((byte)((ulong)uVar76 >> 0x10) >> 3 |
                                               (byte)(uVar86 >> 0x10),
                                               (int5)CONCAT34((int3)((uint7)uVar75 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar76 >> 8) >>
                                                                       3 | (byte)(uVar86 >> 8),
                                                                       (int3)CONCAT52((int5)((uint7)
                                                  uVar75 >> 0x10),
                                                  CONCAT11((byte)uVar76 >> 3 | (byte)uVar86,
                                                           (byte)uVar85 >> 5 | (byte)uVar77)))))));
      }
      iVar47 = iVar47 + 0x20;
      lVar41 = lVar41 + 0x1000000000;
      uVar40 = uVar40 - 1;
      param_3 = param_3 + 8;
      pbVar42 = pbVar42 + 8;
      param_4 = param_4 + 8;
      pbVar45 = pbVar45 + 8;
    } while (uVar40 != 0);
    param_5 = param_5 + lVar2;
    local_f8 = param_6 + lVar2;
    param_3 = pbVar3;
  }
  __n = (size_t)(int)lVar48;
  memcpy(abStack_c9 + 1,param_3,__n);
  memcpy(&local_d8,param_5,__n);
  __n_00 = (size_t)(9 - (int)lVar48);
  memset(abStack_c9 + __n + 1,(uint)abStack_c9[lVar48],__n_00);
  memset(&local_d8 + __n,(uint)*(byte *)((long)&local_e0 + lVar48 + 7),__n_00);
  bVar74 = (byte)((uint7)uStack_c7 >> 8);
  bVar82 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar57 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar58 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar59 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar60 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar61 = (byte)((uint7)uStack_d7 >> 8);
  bVar95 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar62 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar63 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar64 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar65 = (byte)((uint7)uStack_d7 >> 0x30);
  uVar32 = (undefined2)CONCAT71(uStack_c7,abStack_c9[1]);
  uVar29 = CONCAT12((char)uStack_c7,uVar32) & 0xff00ff;
  uVar30 = CONCAT12(bVar74,(short)uStack_c7) & 0xff00ff;
  uVar31 = CONCAT12((char)uStack_c7,uVar32) & 0xff00ff;
  uVar32 = (undefined2)CONCAT71(uStack_d7,local_d8);
  uVar33 = CONCAT12((char)uStack_d7,uVar32) & 0xff00ff;
  uVar34 = CONCAT12(bVar74,(short)uStack_c7) & 0xff00ff;
  uVar35 = CONCAT12((char)uStack_d7,uVar32) & 0xff00ff;
  uVar36 = CONCAT12(bVar61,(short)uStack_d7) & 0xff00ff;
  sVar113 = (short)uVar30 + (short)uVar31 + (short)uVar35 + (short)uVar36;
  sVar116 = (ushort)(byte)(uVar30 >> 0x10) + (ushort)(byte)(uVar31 >> 0x10) +
            (ushort)(byte)(uVar35 >> 0x10) + (ushort)(byte)(uVar36 >> 0x10);
  sVar117 = (ushort)bVar82 + (ushort)bVar74 + (ushort)bVar61 + (ushort)bVar95;
  sVar118 = (ushort)bVar57 + (ushort)bVar82 + (ushort)bVar95 + (ushort)bVar62;
  sVar119 = (ushort)bVar58 + (ushort)bVar57 + (ushort)bVar62 + (ushort)bVar63;
  sVar120 = (ushort)bVar59 + (ushort)bVar58 + (ushort)bVar63 + (ushort)bVar64;
  sVar121 = (ushort)bVar60 + (ushort)bVar59 + (ushort)bVar64 + (ushort)bVar65;
  sVar122 = (ushort)bStack_c0 + (ushort)bVar60 + (ushort)bVar65 + (ushort)bStack_d0;
  uVar30 = CONCAT12(bVar61,(short)uStack_d7) & 0xff00ff;
  uVar66 = sVar116 + (ushort)(byte)(uVar29 >> 0x10) * 2 + (ushort)(byte)(uVar30 >> 0x10) * 2;
  uVar67 = sVar117 + (ushort)bVar74 * 2 + (ushort)bVar95 * 2;
  uVar49 = (undefined1)((ushort)(((short)uVar33 + (short)uVar34) * 2 + sVar113) >> 3);
  uVar50 = (undefined1)
           ((ushort)(((ushort)(byte)(uVar33 >> 0x10) + (ushort)(byte)(uVar34 >> 0x10)) * 2 + sVar116
                    ) >> 3);
  uVar51 = (undefined1)((ushort)(((ushort)bVar61 + (ushort)bVar82) * 2 + sVar117) >> 3);
  uVar52 = (undefined1)((ushort)(((ushort)bVar95 + (ushort)bVar57) * 2 + sVar118) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar62 + (ushort)bVar58) * 2 + sVar119) >> 3);
  uVar54 = (undefined1)((ushort)(((ushort)bVar63 + (ushort)bVar59) * 2 + sVar120) >> 3);
  uVar55 = (undefined1)((ushort)(((ushort)bVar64 + (ushort)bVar60) * 2 + sVar121) >> 3);
  uVar56 = (undefined1)((ushort)(((ushort)bVar65 + (ushort)bStack_c0) * 2 + sVar122) >> 3);
  uVar76 = CONCAT17((char)((ushort)(sVar122 + (ushort)bVar60 * 2 + (ushort)bStack_d0 * 2) >> 3),
                    CONCAT16((char)((ushort)(sVar121 + (ushort)bVar59 * 2 + (ushort)bVar65 * 2) >> 3
                                   ),CONCAT15((char)((ushort)(sVar120 + (ushort)bVar58 * 2 +
                                                             (ushort)bVar64 * 2) >> 3),
                                              CONCAT14((char)((ushort)(sVar119 + (ushort)bVar57 * 2
                                                                      + (ushort)bVar63 * 2) >> 3),
                                                       CONCAT13((char)((ushort)(sVar118 + (ushort)
                                                  bVar82 * 2 + (ushort)bVar62 * 2) >> 3),
                                                  CONCAT12((char)(uVar67 >> 3),
                                                           CONCAT11((char)(uVar66 >> 3),
                                                                    (char)(((ulong)CONCAT24(uVar67,
                                                  CONCAT22(uVar66,sVar113 + (short)uVar29 * 2 +
                                                                  (short)uVar30 * 2)) & 0xfff8) >> 3
                                                  ))))))));
  uVar68 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),
                       CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)))))
                                               )),1);
  local_b0[0] = (byte)uVar68;
  local_b0[2] = (byte)((ulong)uVar68 >> 8);
  bStack_ac = (byte)((ulong)uVar68 >> 0x10);
  bStack_aa = (byte)((ulong)uVar68 >> 0x18);
  local_a8 = (byte)((ulong)uVar68 >> 0x20);
  bStack_a6 = (byte)((ulong)uVar68 >> 0x28);
  bStack_a4 = (byte)((ulong)uVar68 >> 0x30);
  bStack_a2 = (byte)((ulong)uVar68 >> 0x38);
  uVar68 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),uVar76,1);
  local_b0[1] = (byte)uVar68;
  local_b0[3] = (byte)((ulong)uVar68 >> 8);
  bStack_ab = (byte)((ulong)uVar68 >> 0x10);
  bStack_a9 = (byte)((ulong)uVar68 >> 0x18);
  bStack_a7 = (byte)((ulong)uVar68 >> 0x20);
  bStack_a5 = (byte)((ulong)uVar68 >> 0x28);
  bStack_a3 = (byte)((ulong)uVar68 >> 0x30);
  bStack_a1 = (byte)((ulong)uVar68 >> 0x38);
  uVar68 = NEON_urhadd(CONCAT71(uStack_d7,local_d8),uVar76,1);
  local_90[0] = (byte)uVar68;
  local_90[2] = (byte)((ulong)uVar68 >> 8);
  bStack_8c = (byte)((ulong)uVar68 >> 0x10);
  bStack_8a = (byte)((ulong)uVar68 >> 0x18);
  local_88 = (byte)((ulong)uVar68 >> 0x20);
  bStack_86 = (byte)((ulong)uVar68 >> 0x28);
  bStack_84 = (byte)((ulong)uVar68 >> 0x30);
  bStack_82 = (byte)((ulong)uVar68 >> 0x38);
  uVar68 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),
                       CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)))))
                                               )),1);
  local_90[1] = (byte)uVar68;
  local_90[3] = (byte)((ulong)uVar68 >> 8);
  bStack_8b = (byte)((ulong)uVar68 >> 0x10);
  bStack_89 = (byte)((ulong)uVar68 >> 0x18);
  bStack_87 = (byte)((ulong)uVar68 >> 0x20);
  bStack_85 = (byte)((ulong)uVar68 >> 0x28);
  bStack_83 = (byte)((ulong)uVar68 >> 0x30);
  bStack_81 = (byte)((ulong)uVar68 >> 0x38);
  memcpy(abStack_c9 + 1,local_100,__n);
  memcpy(&local_d8,local_f8,__n);
  memset(abStack_c9 + __n + 1,(uint)abStack_c9[lVar48],__n_00);
  memset(&local_d8 + __n,(uint)*(byte *)((long)&local_e0 + lVar48 + 7),__n_00);
  bVar74 = (byte)((uint7)uStack_c7 >> 8);
  bVar82 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar57 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar58 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar59 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar60 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar61 = (byte)((uint7)uStack_d7 >> 8);
  bVar95 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar62 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar63 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar64 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar65 = (byte)((uint7)uStack_d7 >> 0x30);
  uVar32 = (undefined2)CONCAT71(uStack_c7,abStack_c9[1]);
  uVar29 = CONCAT12((char)uStack_c7,uVar32) & 0xff00ff;
  uVar30 = CONCAT12(bVar74,(short)uStack_c7) & 0xff00ff;
  uVar31 = CONCAT12((char)uStack_c7,uVar32) & 0xff00ff;
  uVar32 = (undefined2)CONCAT71(uStack_d7,local_d8);
  uVar33 = CONCAT12((char)uStack_d7,uVar32) & 0xff00ff;
  uVar34 = CONCAT12(bVar74,(short)uStack_c7) & 0xff00ff;
  uVar35 = CONCAT12((char)uStack_d7,uVar32) & 0xff00ff;
  uVar36 = CONCAT12(bVar61,(short)uStack_d7) & 0xff00ff;
  sVar113 = (short)uVar30 + (short)uVar31 + (short)uVar35 + (short)uVar36;
  sVar116 = (ushort)(byte)(uVar30 >> 0x10) + (ushort)(byte)(uVar31 >> 0x10) +
            (ushort)(byte)(uVar35 >> 0x10) + (ushort)(byte)(uVar36 >> 0x10);
  sVar117 = (ushort)bVar82 + (ushort)bVar74 + (ushort)bVar61 + (ushort)bVar95;
  sVar118 = (ushort)bVar57 + (ushort)bVar82 + (ushort)bVar95 + (ushort)bVar62;
  sVar119 = (ushort)bVar58 + (ushort)bVar57 + (ushort)bVar62 + (ushort)bVar63;
  sVar120 = (ushort)bVar59 + (ushort)bVar58 + (ushort)bVar63 + (ushort)bVar64;
  sVar121 = (ushort)bVar60 + (ushort)bVar59 + (ushort)bVar64 + (ushort)bVar65;
  sVar122 = (ushort)bStack_c0 + (ushort)bVar60 + (ushort)bVar65 + (ushort)bStack_d0;
  uVar30 = CONCAT12(bVar61,(short)uStack_d7) & 0xff00ff;
  uVar66 = sVar116 + (ushort)(byte)(uVar29 >> 0x10) * 2 + (ushort)(byte)(uVar30 >> 0x10) * 2;
  uVar67 = sVar117 + (ushort)bVar74 * 2 + (ushort)bVar95 * 2;
  uVar49 = (undefined1)((ushort)(((short)uVar33 + (short)uVar34) * 2 + sVar113) >> 3);
  uVar50 = (undefined1)
           ((ushort)(((ushort)(byte)(uVar33 >> 0x10) + (ushort)(byte)(uVar34 >> 0x10)) * 2 + sVar116
                    ) >> 3);
  uVar51 = (undefined1)((ushort)(((ushort)bVar61 + (ushort)bVar82) * 2 + sVar117) >> 3);
  uVar52 = (undefined1)((ushort)(((ushort)bVar95 + (ushort)bVar57) * 2 + sVar118) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar62 + (ushort)bVar58) * 2 + sVar119) >> 3);
  uVar54 = (undefined1)((ushort)(((ushort)bVar63 + (ushort)bVar59) * 2 + sVar120) >> 3);
  uVar55 = (undefined1)((ushort)(((ushort)bVar64 + (ushort)bVar60) * 2 + sVar121) >> 3);
  uVar56 = (undefined1)((ushort)(((ushort)bVar65 + (ushort)bStack_c0) * 2 + sVar122) >> 3);
  uVar68 = CONCAT17((char)((ushort)(sVar122 + (ushort)bVar60 * 2 + (ushort)bStack_d0 * 2) >> 3),
                    CONCAT16((char)((ushort)(sVar121 + (ushort)bVar59 * 2 + (ushort)bVar65 * 2) >> 3
                                   ),CONCAT15((char)((ushort)(sVar120 + (ushort)bVar58 * 2 +
                                                             (ushort)bVar64 * 2) >> 3),
                                              CONCAT14((char)((ushort)(sVar119 + (ushort)bVar57 * 2
                                                                      + (ushort)bVar63 * 2) >> 3),
                                                       CONCAT13((char)((ushort)(sVar118 + (ushort)
                                                  bVar82 * 2 + (ushort)bVar62 * 2) >> 3),
                                                  CONCAT12((char)(uVar67 >> 3),
                                                           CONCAT11((char)(uVar66 >> 3),
                                                                    (char)(((ulong)CONCAT24(uVar67,
                                                  CONCAT22(uVar66,sVar113 + (short)uVar29 * 2 +
                                                                  (short)uVar30 * 2)) & 0xfff8) >> 3
                                                  ))))))));
  uVar85 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),
                       CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)))))
                                               )),1);
  uVar100 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),uVar68,1);
  uVar68 = NEON_urhadd(CONCAT71(uStack_d7,local_d8),uVar68,1);
  uVar76 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),
                       CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)))))
                                               )),1);
  local_a0[0] = (byte)uVar85;
  local_a0[1] = (char)uVar100;
  local_a0[2] = (char)((ulong)uVar85 >> 8);
  local_a0[3] = (char)((ulong)uVar100 >> 8);
  bStack_9c = (char)((ulong)uVar85 >> 0x10);
  bStack_9b = (char)((ulong)uVar100 >> 0x10);
  bStack_9a = (char)((ulong)uVar85 >> 0x18);
  bStack_99 = (char)((ulong)uVar100 >> 0x18);
  local_98 = (char)((ulong)uVar85 >> 0x20);
  bStack_97 = (char)((ulong)uVar100 >> 0x20);
  bStack_96 = (char)((ulong)uVar85 >> 0x28);
  bStack_95 = (char)((ulong)uVar100 >> 0x28);
  bStack_94 = (char)((ulong)uVar85 >> 0x30);
  bStack_93 = (char)((ulong)uVar100 >> 0x30);
  bStack_92 = (char)((ulong)uVar85 >> 0x38);
  bStack_91 = (char)((ulong)uVar100 >> 0x38);
  local_80[0] = (byte)uVar68;
  local_80[1] = (char)uVar76;
  local_80[2] = (char)((ulong)uVar68 >> 8);
  local_80[3] = (char)((ulong)uVar76 >> 8);
  bStack_7c = (char)((ulong)uVar68 >> 0x10);
  bStack_7b = (char)((ulong)uVar76 >> 0x10);
  bStack_7a = (char)((ulong)uVar68 >> 0x18);
  bStack_79 = (char)((ulong)uVar76 >> 0x18);
  local_78 = (char)((ulong)uVar68 >> 0x20);
  bStack_77 = (char)((ulong)uVar76 >> 0x20);
  bStack_76 = (char)((ulong)uVar68 >> 0x28);
  bStack_75 = (char)((ulong)uVar76 >> 0x28);
  bStack_74 = (char)((ulong)uVar68 >> 0x30);
  bStack_73 = (char)((ulong)uVar76 >> 0x30);
  bStack_72 = (char)((ulong)uVar68 >> 0x38);
  bStack_71 = (char)((ulong)uVar76 >> 0x38);
  uVar43 = param_9 - uVar46;
  if (0 < (int)uVar43) {
    uVar77 = (ulong)uVar43;
    pbVar42 = local_a0;
    uVar44 = uVar37 << 5 | 2;
    param_1 = param_1 + (int)uVar46;
    uVar40 = uVar77;
    do {
      uVar38 = (uint)*param_1 * 0x4a85 >> 8;
      uVar39 = (uVar38 + ((uint)*pbVar42 * 0x6625 >> 8)) - 0x379a;
      if (uVar39 >> 0xe == 0) {
        bVar74 = (byte)(uVar39 >> 6);
      }
      else {
        bVar74 = ((byte)((int)uVar39 >> 0x1f) & 1) - 1;
      }
      uVar39 = ((uVar38 + 0x2204) - ((uint)pbVar42[-0x10] * 0x1913 >> 8)) -
               ((uint)*pbVar42 * 0x3408 >> 8);
      if (uVar39 >> 0xe == 0) {
        uVar39 = uVar39 >> 6;
      }
      else {
        uVar39 = ((int)uVar39 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar38 = (uVar38 + ((uint)pbVar42[-0x10] * 0x811a >> 8)) - 0x4515;
      lVar48 = (long)(int)uVar44;
      if (uVar38 >> 0xe == 0) {
        uVar38 = uVar38 >> 6;
      }
      else {
        uVar38 = ((int)uVar38 >> 0x1f & 0xffffff01U) + 0xff;
      }
      pbVar42 = pbVar42 + 1;
      uVar44 = uVar44 + 2;
      uVar40 = uVar40 - 1;
      param_1 = param_1 + 1;
      param_7[lVar48] = bVar74 & 0xf8 | (byte)(uVar39 >> 5);
      (param_7 + lVar48)[1] = (byte)((uVar39 & 0x1c) << 3) | (byte)(uVar38 >> 3);
    } while (uVar40 != 0);
    if ((param_2 != (byte *)0x0) && (0 < (int)uVar43)) {
      pbVar42 = local_80;
      param_2 = param_2 + (int)uVar46;
      uVar46 = uVar37 << 5 | 2;
      do {
        uVar37 = (uint)*param_2 * 0x4a85 >> 8;
        uVar43 = (uVar37 + ((uint)*pbVar42 * 0x6625 >> 8)) - 0x379a;
        if (uVar43 >> 0xe == 0) {
          bVar74 = (byte)(uVar43 >> 6);
        }
        else {
          bVar74 = ((byte)((int)uVar43 >> 0x1f) & 1) - 1;
        }
        uVar43 = ((uVar37 + 0x2204) - ((uint)pbVar42[-0x10] * 0x1913 >> 8)) -
                 ((uint)*pbVar42 * 0x3408 >> 8);
        if (uVar43 >> 0xe == 0) {
          uVar43 = uVar43 >> 6;
        }
        else {
          uVar43 = ((int)uVar43 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar37 = (uVar37 + ((uint)pbVar42[-0x10] * 0x811a >> 8)) - 0x4515;
        lVar48 = (long)(int)uVar46;
        if (uVar37 >> 0xe == 0) {
          uVar37 = uVar37 >> 6;
        }
        else {
          uVar37 = ((int)uVar37 >> 0x1f & 0xffffff01U) + 0xff;
        }
        pbVar42 = pbVar42 + 1;
        uVar46 = uVar46 + 2;
        uVar77 = uVar77 - 1;
        param_2 = param_2 + 1;
        param_8[lVar48] = bVar74 & 0xf8 | (byte)(uVar43 >> 5);
        (param_8 + lVar48)[1] = (byte)((uVar43 & 0x1c) << 3) | (byte)(uVar37 >> 3);
      } while (uVar77 != 0);
    }
  }
  if (*(long *)(local_e0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


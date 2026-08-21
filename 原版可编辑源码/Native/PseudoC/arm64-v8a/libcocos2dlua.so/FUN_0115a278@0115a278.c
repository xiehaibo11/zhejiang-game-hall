
void FUN_0115a278(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,byte *param_7,byte *param_8,int param_9)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint3 uVar31;
  uint3 uVar32;
  uint3 uVar33;
  undefined2 uVar34;
  uint3 uVar35;
  uint3 uVar36;
  uint3 uVar37;
  uint3 uVar38;
  uint7 uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  byte *pbVar44;
  uint uVar45;
  byte *pbVar46;
  uint uVar47;
  int iVar48;
  size_t __n;
  long lVar49;
  size_t __n_00;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
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
  ushort uVar68;
  ushort uVar69;
  undefined7 uVar70;
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  byte bVar84;
  undefined8 uVar77;
  byte bVar85;
  undefined1 auVar80 [16];
  ulong uVar78;
  undefined1 auVar81 [16];
  ulong uVar79;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined7 uVar86;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  undefined8 uVar87;
  byte bVar98;
  byte bVar99;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  byte bVar100;
  undefined1 auVar90 [16];
  byte bVar101;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined8 uVar102;
  byte bVar110;
  undefined1 auVar103 [16];
  undefined8 uVar111;
  undefined1 auVar112 [16];
  undefined8 uVar113;
  undefined1 auVar114 [16];
  short sVar115;
  short sVar118;
  short sVar119;
  short sVar120;
  undefined8 uVar116;
  short sVar121;
  short sVar122;
  short sVar123;
  short sVar124;
  undefined1 auVar117 [16];
  undefined8 uVar125;
  undefined1 auVar126 [16];
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
  uVar40 = (uint)*param_1 * 0x4a85 >> 8;
  iVar48 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar4 = iVar1 + (uint)*param_4 >> 1;
  uVar47 = (uVar40 + (uVar4 * 0x6625 >> 8)) - 0x379a;
  uVar45 = iVar48 + (uint)*param_3 >> 1;
  if (uVar47 >> 0xe == 0) {
    bVar100 = (byte)(uVar47 >> 6);
  }
  else {
    bVar100 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
  }
  uVar47 = ((uVar40 + 0x2204) - (uVar45 * 0x1913 >> 8)) - (uVar4 * 0x3408 >> 8);
  if (uVar47 >> 0xe == 0) {
    uVar47 = uVar47 >> 6;
  }
  else {
    uVar47 = ((int)uVar47 >> 0x1f & 0xffffff01U) + 0xff;
  }
  uVar4 = ((int)(param_9 + 1U) >> 1) + -1 >> 3;
  uVar40 = (uVar40 + (uVar45 * 0x811a >> 8)) - 0x4515;
  if (uVar40 >> 0xe == 0) {
    bVar101 = (byte)(uVar40 >> 6);
  }
  else {
    bVar101 = ((byte)((int)uVar40 >> 0x1f) & 1) - 1;
  }
  lVar49 = ((long)((ulong)(param_9 + 1U) << 0x20) >> 0x21) + (long)(int)uVar4 * -8;
  *param_7 = bVar100 & 0xf0 | (byte)(uVar47 >> 4);
  param_7[1] = bVar101 | 0xf;
  if (param_2 != (byte *)0x0) {
    uVar40 = iVar1 + (uint)*param_6 >> 1;
    uVar45 = (uint)*param_2 * 0x4a85 >> 8;
    uVar47 = (uVar45 + (uVar40 * 0x6625 >> 8)) - 0x379a;
    uVar41 = iVar48 + (uint)*param_5 >> 1;
    if (uVar47 >> 0xe == 0) {
      bVar100 = (byte)(uVar47 >> 6);
    }
    else {
      bVar100 = ((byte)((int)uVar47 >> 0x1f) & 1) - 1;
    }
    uVar47 = ((uVar45 + 0x2204) - (uVar41 * 0x1913 >> 8)) - (uVar40 * 0x3408 >> 8);
    if (uVar47 >> 0xe == 0) {
      uVar47 = uVar47 >> 6;
    }
    else {
      uVar47 = ((int)uVar47 >> 0x1f & 0xffffff01U) + 0xff;
    }
    uVar40 = (uVar45 + (uVar41 * 0x811a >> 8)) - 0x4515;
    if (uVar40 >> 0xe == 0) {
      bVar101 = (byte)(uVar40 >> 6);
    }
    else {
      bVar101 = ((byte)((int)uVar40 >> 0x1f) & 1) - 1;
    }
    *param_8 = bVar100 & 0xf0 | (byte)(uVar47 >> 4);
    param_8[1] = bVar101 | 0xf;
  }
  uVar47 = uVar4 << 4 | 1;
  local_100 = param_4;
  local_f8 = param_6;
  if (0 < (int)uVar4) {
    lVar2 = (ulong)(uVar4 - 1) * 8 + 8;
    uVar42 = (ulong)uVar4;
    iVar48 = 0x12;
    lVar43 = 0x100000000;
    pbVar3 = param_3 + lVar2;
    local_100 = param_4 + lVar2;
    pbVar44 = param_5;
    pbVar46 = param_6;
    do {
      uVar71 = *(undefined8 *)param_3;
      uVar77 = *(undefined8 *)(param_3 + 1);
      uVar87 = *(undefined8 *)pbVar44;
      uVar102 = *(undefined8 *)(pbVar44 + 1);
      bVar100 = (byte)((ulong)uVar71 >> 8);
      bVar101 = (byte)((ulong)uVar71 >> 0x10);
      bVar58 = (byte)((ulong)uVar71 >> 0x18);
      bVar59 = (byte)((ulong)uVar71 >> 0x20);
      bVar60 = (byte)((ulong)uVar71 >> 0x28);
      bVar61 = (byte)((ulong)uVar71 >> 0x30);
      bVar62 = (byte)((ulong)uVar71 >> 0x38);
      bVar63 = (byte)((ulong)uVar77 >> 8);
      bVar64 = (byte)((ulong)uVar77 >> 0x10);
      bVar65 = (byte)((ulong)uVar77 >> 0x18);
      bVar66 = (byte)((ulong)uVar77 >> 0x20);
      bVar67 = (byte)((ulong)uVar77 >> 0x28);
      bVar84 = (byte)((ulong)uVar77 >> 0x30);
      bVar85 = (byte)((ulong)uVar77 >> 0x38);
      uVar31 = CONCAT12(bVar100,(short)uVar71) & 0xff00ff;
      bVar93 = (byte)((ulong)uVar87 >> 8);
      bVar94 = (byte)((ulong)uVar87 >> 0x10);
      bVar95 = (byte)((ulong)uVar87 >> 0x18);
      bVar96 = (byte)((ulong)uVar87 >> 0x20);
      bVar97 = (byte)((ulong)uVar87 >> 0x28);
      bVar98 = (byte)((ulong)uVar87 >> 0x30);
      bVar99 = (byte)((ulong)uVar87 >> 0x38);
      uVar32 = CONCAT12(bVar63,(short)uVar77) & 0xff00ff;
      uVar33 = CONCAT12(bVar93,(short)uVar87) & 0xff00ff;
      bVar104 = (byte)((ulong)uVar102 >> 8);
      bVar105 = (byte)((ulong)uVar102 >> 0x10);
      bVar106 = (byte)((ulong)uVar102 >> 0x18);
      bVar107 = (byte)((ulong)uVar102 >> 0x20);
      bVar108 = (byte)((ulong)uVar102 >> 0x28);
      bVar109 = (byte)((ulong)uVar102 >> 0x30);
      bVar110 = (byte)((ulong)uVar102 >> 0x38);
      sVar115 = (ushort)(byte)uVar77 + (short)uVar31 + (short)uVar33 + (ushort)(byte)uVar102;
      sVar118 = (ushort)bVar63 + (ushort)(byte)(uVar31 >> 0x10) + (ushort)(byte)(uVar33 >> 0x10) +
                (ushort)bVar104;
      sVar119 = (ushort)bVar64 + (ushort)bVar101 + (ushort)bVar94 + (ushort)bVar105;
      sVar120 = (ushort)bVar65 + (ushort)bVar58 + (ushort)bVar95 + (ushort)bVar106;
      sVar121 = (ushort)bVar66 + (ushort)bVar59 + (ushort)bVar96 + (ushort)bVar107;
      sVar122 = (ushort)bVar67 + (ushort)bVar60 + (ushort)bVar97 + (ushort)bVar108;
      sVar123 = (ushort)bVar84 + (ushort)bVar61 + (ushort)bVar98 + (ushort)bVar109;
      sVar124 = (ushort)bVar85 + (ushort)bVar62 + (ushort)bVar99 + (ushort)bVar110;
      uVar31 = CONCAT12(bVar104,(short)uVar102) & 0xff00ff;
      uVar113 = CONCAT17((char)((ushort)(((ushort)bVar99 + (ushort)bVar85) * 2 + sVar124) >> 3),
                         CONCAT16((char)((ushort)(((ushort)bVar98 + (ushort)bVar84) * 2 + sVar123)
                                        >> 3),
                                  CONCAT15((char)((ushort)(((ushort)bVar97 + (ushort)bVar67) * 2 +
                                                          sVar122) >> 3),
                                           CONCAT14((char)((ushort)(((ushort)bVar96 + (ushort)bVar66
                                                                    ) * 2 + sVar121) >> 3),
                                                    CONCAT13((char)((ushort)(((ushort)bVar95 +
                                                                             (ushort)bVar65) * 2 +
                                                                            sVar120) >> 3),
                                                             CONCAT12((char)((ushort)(((ushort)
                                                  bVar94 + (ushort)bVar64) * 2 + sVar119) >> 3),
                                                  CONCAT11((char)((ushort)(((ushort)bVar93 +
                                                                           (ushort)(byte)(uVar32 >>
                                                                                         0x10)) * 2
                                                                          + sVar118) >> 3),
                                                           (char)((ushort)(((ushort)(byte)uVar87 +
                                                                           (short)uVar32) * 2 +
                                                                          sVar115) >> 3))))))));
      uVar111 = CONCAT17((char)((ushort)(sVar124 + (ushort)bVar62 * 2 + (ushort)bVar110 * 2) >> 3),
                         CONCAT16((char)((ushort)(sVar123 + (ushort)bVar61 * 2 + (ushort)bVar109 * 2
                                                 ) >> 3),
                                  CONCAT15((char)((ushort)(sVar122 + (ushort)bVar60 * 2 +
                                                          (ushort)bVar108 * 2) >> 3),
                                           CONCAT14((char)((ushort)(sVar121 + (ushort)bVar59 * 2 +
                                                                   (ushort)bVar107 * 2) >> 3),
                                                    CONCAT13((char)((ushort)(sVar120 + (ushort)
                                                  bVar58 * 2 + (ushort)bVar106 * 2) >> 3),
                                                  CONCAT12((char)((ushort)(sVar119 + (ushort)bVar101
                                                                                     * 2 +
                                                                          (ushort)bVar105 * 2) >> 3)
                                                           ,CONCAT11((char)((ushort)(sVar118 + (
                                                  ushort)bVar100 * 2 +
                                                  (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3),
                                                  (char)((ushort)(sVar115 + (ushort)(byte)uVar71 * 2
                                                                 + (short)uVar31 * 2) >> 3))))))));
      uVar116 = NEON_urhadd(uVar71,uVar113,1);
      uVar125 = NEON_urhadd(uVar77,uVar111,1);
      uVar71 = NEON_urhadd(uVar87,uVar111,1);
      uVar77 = NEON_urhadd(uVar102,uVar113,1);
      local_b0[0] = (byte)uVar116;
      local_b0[1] = (byte)uVar125;
      local_b0[2] = (byte)((ulong)uVar116 >> 8);
      local_b0[3] = (byte)((ulong)uVar125 >> 8);
      bStack_ac = (byte)((ulong)uVar116 >> 0x10);
      bStack_ab = (byte)((ulong)uVar125 >> 0x10);
      bStack_aa = (byte)((ulong)uVar116 >> 0x18);
      bStack_a9 = (byte)((ulong)uVar125 >> 0x18);
      local_a8 = (byte)((ulong)uVar116 >> 0x20);
      bStack_a7 = (byte)((ulong)uVar125 >> 0x20);
      bStack_a6 = (byte)((ulong)uVar116 >> 0x28);
      bStack_a5 = (byte)((ulong)uVar125 >> 0x28);
      bStack_a4 = (byte)((ulong)uVar116 >> 0x30);
      bStack_a3 = (byte)((ulong)uVar125 >> 0x30);
      bStack_a2 = (byte)((ulong)uVar116 >> 0x38);
      bStack_a1 = (byte)((ulong)uVar125 >> 0x38);
      local_90[0] = (byte)uVar71;
      local_90[1] = (byte)uVar77;
      local_90[2] = (byte)((ulong)uVar71 >> 8);
      local_90[3] = (byte)((ulong)uVar77 >> 8);
      bStack_8c = (byte)((ulong)uVar71 >> 0x10);
      bStack_8b = (byte)((ulong)uVar77 >> 0x10);
      bStack_8a = (byte)((ulong)uVar71 >> 0x18);
      bStack_89 = (byte)((ulong)uVar77 >> 0x18);
      local_88 = (byte)((ulong)uVar71 >> 0x20);
      bStack_87 = (byte)((ulong)uVar77 >> 0x20);
      bStack_86 = (byte)((ulong)uVar71 >> 0x28);
      bStack_85 = (byte)((ulong)uVar77 >> 0x28);
      bStack_84 = (byte)((ulong)uVar71 >> 0x30);
      bStack_83 = (byte)((ulong)uVar77 >> 0x30);
      bStack_82 = (byte)((ulong)uVar71 >> 0x38);
      bStack_81 = (byte)((ulong)uVar77 >> 0x38);
      uVar71 = *(undefined8 *)param_4;
      uVar87 = *(undefined8 *)(param_4 + 1);
      uVar102 = *(undefined8 *)pbVar46;
      uVar77 = *(undefined8 *)(pbVar46 + 1);
      bVar100 = (byte)((ulong)uVar71 >> 8);
      bVar101 = (byte)((ulong)uVar71 >> 0x10);
      bVar58 = (byte)((ulong)uVar71 >> 0x18);
      bVar59 = (byte)((ulong)uVar71 >> 0x20);
      bVar60 = (byte)((ulong)uVar71 >> 0x28);
      bVar61 = (byte)((ulong)uVar71 >> 0x30);
      bVar62 = (byte)((ulong)uVar71 >> 0x38);
      bVar93 = (byte)((ulong)uVar87 >> 8);
      bVar94 = (byte)((ulong)uVar87 >> 0x10);
      bVar95 = (byte)((ulong)uVar87 >> 0x18);
      bVar96 = (byte)((ulong)uVar87 >> 0x20);
      bVar97 = (byte)((ulong)uVar87 >> 0x28);
      bVar98 = (byte)((ulong)uVar87 >> 0x30);
      bVar99 = (byte)((ulong)uVar87 >> 0x38);
      uVar31 = CONCAT12(bVar100,(short)uVar71) & 0xff00ff;
      bVar104 = (byte)((ulong)uVar102 >> 8);
      bVar105 = (byte)((ulong)uVar102 >> 0x10);
      bVar106 = (byte)((ulong)uVar102 >> 0x18);
      bVar107 = (byte)((ulong)uVar102 >> 0x20);
      bVar108 = (byte)((ulong)uVar102 >> 0x28);
      bVar109 = (byte)((ulong)uVar102 >> 0x30);
      bVar110 = (byte)((ulong)uVar102 >> 0x38);
      uVar32 = CONCAT12(bVar93,(short)uVar87) & 0xff00ff;
      uVar33 = CONCAT12(bVar104,(short)uVar102) & 0xff00ff;
      bVar63 = (byte)((ulong)uVar77 >> 8);
      bVar64 = (byte)((ulong)uVar77 >> 0x10);
      bVar65 = (byte)((ulong)uVar77 >> 0x18);
      bVar66 = (byte)((ulong)uVar77 >> 0x20);
      bVar67 = (byte)((ulong)uVar77 >> 0x28);
      bVar84 = (byte)((ulong)uVar77 >> 0x30);
      bVar85 = (byte)((ulong)uVar77 >> 0x38);
      sVar115 = (ushort)(byte)uVar87 + (short)uVar31 + (short)uVar33 + (ushort)(byte)uVar77;
      sVar118 = (ushort)bVar93 + (ushort)(byte)(uVar31 >> 0x10) + (ushort)(byte)(uVar33 >> 0x10) +
                (ushort)bVar63;
      sVar119 = (ushort)bVar94 + (ushort)bVar101 + (ushort)bVar105 + (ushort)bVar64;
      sVar120 = (ushort)bVar95 + (ushort)bVar58 + (ushort)bVar106 + (ushort)bVar65;
      sVar121 = (ushort)bVar96 + (ushort)bVar59 + (ushort)bVar107 + (ushort)bVar66;
      sVar122 = (ushort)bVar97 + (ushort)bVar60 + (ushort)bVar108 + (ushort)bVar67;
      sVar123 = (ushort)bVar98 + (ushort)bVar61 + (ushort)bVar109 + (ushort)bVar84;
      sVar124 = (ushort)bVar99 + (ushort)bVar62 + (ushort)bVar110 + (ushort)bVar85;
      uVar31 = CONCAT12(bVar63,(short)uVar77) & 0xff00ff;
      uVar113 = CONCAT17((char)((ushort)(((ushort)bVar110 + (ushort)bVar99) * 2 + sVar124) >> 3),
                         CONCAT16((char)((ushort)(((ushort)bVar109 + (ushort)bVar98) * 2 + sVar123)
                                        >> 3),
                                  CONCAT15((char)((ushort)(((ushort)bVar108 + (ushort)bVar97) * 2 +
                                                          sVar122) >> 3),
                                           CONCAT14((char)((ushort)(((ushort)bVar107 +
                                                                    (ushort)bVar96) * 2 + sVar121)
                                                          >> 3),
                                                    CONCAT13((char)((ushort)(((ushort)bVar106 +
                                                                             (ushort)bVar95) * 2 +
                                                                            sVar120) >> 3),
                                                             CONCAT12((char)((ushort)(((ushort)
                                                  bVar105 + (ushort)bVar94) * 2 + sVar119) >> 3),
                                                  CONCAT11((char)((ushort)(((ushort)bVar104 +
                                                                           (ushort)(byte)(uVar32 >>
                                                                                         0x10)) * 2
                                                                          + sVar118) >> 3),
                                                           (char)((ushort)(((ushort)(byte)uVar102 +
                                                                           (short)uVar32) * 2 +
                                                                          sVar115) >> 3))))))));
      uVar111 = CONCAT17((char)((ushort)(sVar124 + (ushort)bVar62 * 2 + (ushort)bVar85 * 2) >> 3),
                         CONCAT16((char)((ushort)(sVar123 + (ushort)bVar61 * 2 + (ushort)bVar84 * 2)
                                        >> 3),
                                  CONCAT15((char)((ushort)(sVar122 + (ushort)bVar60 * 2 +
                                                          (ushort)bVar67 * 2) >> 3),
                                           CONCAT14((char)((ushort)(sVar121 + (ushort)bVar59 * 2 +
                                                                   (ushort)bVar66 * 2) >> 3),
                                                    CONCAT13((char)((ushort)(sVar120 + (ushort)
                                                  bVar58 * 2 + (ushort)bVar65 * 2) >> 3),
                                                  CONCAT12((char)((ushort)(sVar119 + (ushort)bVar101
                                                                                     * 2 +
                                                                          (ushort)bVar64 * 2) >> 3),
                                                           CONCAT11((char)((ushort)(sVar118 + (
                                                  ushort)bVar100 * 2 +
                                                  (ushort)(byte)(uVar31 >> 0x10) * 2) >> 3),
                                                  (char)((ushort)(sVar115 + (ushort)(byte)uVar71 * 2
                                                                 + (short)uVar31 * 2) >> 3))))))));
      uVar116 = NEON_urhadd(uVar71,uVar113,1);
      uVar87 = NEON_urhadd(uVar87,uVar111,1);
      uVar71 = NEON_urhadd(uVar102,uVar111,1);
      uVar77 = NEON_urhadd(uVar77,uVar113,1);
      local_a0[0] = (byte)uVar116;
      local_a0[1] = (byte)uVar87;
      local_a0[2] = (byte)((ulong)uVar116 >> 8);
      local_a0[3] = (byte)((ulong)uVar87 >> 8);
      bStack_9c = (byte)((ulong)uVar116 >> 0x10);
      bStack_9b = (byte)((ulong)uVar87 >> 0x10);
      bStack_9a = (byte)((ulong)uVar116 >> 0x18);
      bStack_99 = (byte)((ulong)uVar87 >> 0x18);
      local_98 = (byte)((ulong)uVar116 >> 0x20);
      bStack_97 = (byte)((ulong)uVar87 >> 0x20);
      bStack_96 = (byte)((ulong)uVar116 >> 0x28);
      bStack_95 = (byte)((ulong)uVar87 >> 0x28);
      bStack_94 = (byte)((ulong)uVar116 >> 0x30);
      bStack_93 = (byte)((ulong)uVar87 >> 0x30);
      bStack_92 = (byte)((ulong)uVar116 >> 0x38);
      bStack_91 = (byte)((ulong)uVar87 >> 0x38);
      local_80[0] = (byte)uVar71;
      local_80[1] = (byte)uVar77;
      local_80[2] = (byte)((ulong)uVar71 >> 8);
      local_80[3] = (byte)((ulong)uVar77 >> 8);
      bStack_7c = (byte)((ulong)uVar71 >> 0x10);
      bStack_7b = (byte)((ulong)uVar77 >> 0x10);
      bStack_7a = (byte)((ulong)uVar71 >> 0x18);
      bStack_79 = (byte)((ulong)uVar77 >> 0x18);
      local_78 = (byte)((ulong)uVar71 >> 0x20);
      bStack_77 = (byte)((ulong)uVar77 >> 0x20);
      bStack_76 = (byte)((ulong)uVar71 >> 0x28);
      bStack_75 = (byte)((ulong)uVar77 >> 0x28);
      bStack_74 = (byte)((ulong)uVar71 >> 0x30);
      bStack_73 = (byte)((ulong)uVar77 >> 0x30);
      bStack_72 = (byte)((ulong)uVar71 >> 0x38);
      bStack_71 = (byte)((ulong)uVar77 >> 0x38);
      uVar71 = *(undefined8 *)(param_1 + (lVar43 >> 0x20));
      auVar72._0_2_ = (ushort)(byte)uVar71 << 7;
      auVar72._2_2_ = (ushort)(byte)((ulong)uVar71 >> 8) << 7;
      auVar72._4_2_ = (ushort)(byte)((ulong)uVar71 >> 0x10) << 7;
      auVar72._6_2_ = (ushort)(byte)((ulong)uVar71 >> 0x18) << 7;
      auVar72._8_2_ = (ushort)(byte)((ulong)uVar71 >> 0x20) << 7;
      auVar72._10_2_ = (ushort)(byte)((ulong)uVar71 >> 0x28) << 7;
      auVar72._12_2_ = (ushort)(byte)((ulong)uVar71 >> 0x30) << 7;
      auVar72._14_2_ = (ushort)(byte)((ulong)uVar71 >> 0x38) << 7;
      auVar80._0_8_ =
           CONCAT26((ushort)local_b0[3] << 7,
                    CONCAT24((ushort)local_b0[2] << 7,
                             CONCAT22((ushort)local_b0[1] << 7,(ushort)local_b0[0] << 7)));
      auVar80._8_2_ = (ushort)bStack_ac << 7;
      auVar80._10_2_ = (ushort)bStack_ab << 7;
      auVar80._12_2_ = (ushort)bStack_aa << 7;
      auVar80._14_2_ = (ushort)bStack_a9 << 7;
      auVar88._0_2_ = (ushort)local_a0[0] << 7;
      auVar88._2_2_ = (ushort)local_a0[1] << 7;
      auVar88._4_2_ = (ushort)local_a0[2] << 7;
      auVar88._6_2_ = (ushort)local_a0[3] << 7;
      auVar88._8_2_ = (ushort)bStack_9c << 7;
      auVar88._10_2_ = (ushort)bStack_9b << 7;
      auVar88._12_2_ = (ushort)bStack_9a << 7;
      auVar88._14_2_ = (ushort)bStack_99 << 7;
      auVar73._8_2_ = 0x4a85;
      auVar73._0_8_ = 0x4a854a854a854a85;
      auVar73._10_2_ = 0x4a85;
      auVar73._12_2_ = 0x4a85;
      auVar73._14_2_ = 0x4a85;
      auVar73 = NEON_sqdmulh(auVar72,auVar73,2);
      auVar103._8_2_ = 0x6625;
      auVar103._0_8_ = 0x6625662566256625;
      auVar103._10_2_ = 0x6625;
      auVar103._12_2_ = 0x6625;
      auVar103._14_2_ = 0x6625;
      auVar103 = NEON_sqdmulh(auVar88,auVar103,2);
      auVar114._8_2_ = 0x1913;
      auVar114._0_8_ = 0x1913191319131913;
      auVar114._10_2_ = 0x1913;
      auVar114._12_2_ = 0x1913;
      auVar114._14_2_ = 0x1913;
      auVar112 = NEON_sqdmulh(auVar80,auVar114,2);
      auVar126._8_2_ = 0x3408;
      auVar126._0_8_ = 0x3408340834083408;
      auVar126._10_2_ = 0x3408;
      auVar126._12_2_ = 0x3408;
      auVar126._14_2_ = 0x3408;
      auVar89 = NEON_sqdmulh(auVar88,auVar126,2);
      auVar15._8_2_ = 0x11a;
      auVar15._0_8_ = 0x11a011a011a011a;
      auVar15._10_2_ = 0x11a;
      auVar15._12_2_ = 0x11a;
      auVar15._14_2_ = 0x11a;
      auVar114 = NEON_sqdmulh(auVar80,auVar15,2);
      auVar19._8_2_ = 0xc866;
      auVar19._0_8_ = 0xc866c866c866c866;
      auVar19._10_2_ = 0xc866;
      auVar19._12_2_ = 0xc866;
      auVar19._14_2_ = 0xc866;
      auVar117 = NEON_sqadd(auVar73,auVar19,2);
      auVar23._8_2_ = 0x2204;
      auVar23._0_8_ = 0x2204220422042204;
      auVar23._10_2_ = 0x2204;
      auVar23._12_2_ = 0x2204;
      auVar23._14_2_ = 0x2204;
      auVar126 = NEON_sqadd(auVar73,auVar23,2);
      auVar27._8_2_ = 0xbaeb;
      auVar27._0_8_ = 0xbaebbaebbaebbaeb;
      auVar27._10_2_ = 0xbaeb;
      auVar27._12_2_ = 0xbaeb;
      auVar27._14_2_ = 0xbaeb;
      auVar73 = NEON_sqadd(auVar73,auVar27,2);
      auVar89 = NEON_sqadd(auVar112,auVar89,2);
      auVar103 = NEON_sqadd(auVar103,auVar117,2);
      auVar73 = NEON_sqadd(auVar114,auVar73,2);
      auVar89 = NEON_sqsub(auVar126,auVar89,2);
      auVar73 = NEON_sqadd(auVar73,auVar80,2);
      uVar78 = NEON_sqshrun(auVar80._0_8_,auVar103,6,2);
      uVar102 = NEON_sqshrun(auVar89._0_8_,auVar89,6,2);
      uVar87 = NEON_sqshrun(auVar73._0_8_,auVar73,6,2);
      uVar78 = uVar78 & 0xf0f0f0f0f0f0f0f0;
      bVar100 = (byte)((ulong)uVar102 >> 0x3c);
      uVar39 = (uint7)uVar87 | 0xf0f0f0f;
      uVar50 = (undefined1)((ulong)uVar87 >> 0x38);
      uVar71 = CONCAT17(bVar100,CONCAT16((byte)((ulong)uVar102 >> 0x18) >> 4 |
                                         (byte)(uVar78 >> 0x18),
                                         (uint6)CONCAT14((byte)((ulong)uVar102 >> 0x10) >> 4 |
                                                         (byte)(uVar78 >> 0x10),
                                                         (uint)(byte)((byte)((ulong)uVar102 >> 8) >>
                                                                      4 | (byte)(uVar78 >> 8)) <<
                                                         0x10)));
      uVar77 = CONCAT17(uVar50,CONCAT16(bVar100 | (byte)(uVar78 >> 0x38),
                                        (uint6)CONCAT14((byte)((ulong)uVar102 >> 0x30) >> 4 |
                                                        (byte)(uVar78 >> 0x30),
                                                        (uint)(byte)((byte)((ulong)uVar102 >> 0x28)
                                                                     >> 4 | (byte)(uVar78 >> 0x28))
                                                        << 0x10)));
      *(ulong *)(param_7 + (iVar48 + -0x10) + 8) =
           CONCAT17(uVar50,(int7)CONCAT26((short)((ulong)uVar77 >> 0x30),
                                          CONCAT15((char)((ulong)uVar87 >> 0x30),
                                                   (int5)CONCAT44((int)((ulong)uVar77 >> 0x20),
                                                                  CONCAT13((char)((ulong)uVar87 >>
                                                                                 0x28),
                                                                           (int3)CONCAT62((int6)((
                                                  ulong)uVar77 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar87 >> 0x20),
                                                           (byte)((ulong)uVar102 >> 0x20) >> 4 |
                                                           (byte)(uVar78 >> 0x20)))))))) |
           0xf000f000f000f00;
      *(ulong *)(param_7 + (iVar48 + -0x10)) =
           CONCAT17((char)(uVar39 >> 0x18),
                    (int7)CONCAT26((short)((ulong)uVar71 >> 0x30),
                                   CONCAT15((char)(uVar39 >> 0x10),
                                            (int5)CONCAT44((int)((ulong)uVar71 >> 0x20),
                                                           CONCAT13((char)(uVar39 >> 8),
                                                                    (int3)CONCAT62((int6)((ulong)
                                                  uVar71 >> 0x10),
                                                  CONCAT11((char)uVar39,
                                                           (byte)uVar102 >> 4 | (byte)uVar78)))))));
      uVar71 = *(undefined8 *)(param_1 + (lVar43 >> 0x20) + 8);
      auVar74._0_2_ = (ushort)(byte)uVar71 << 7;
      auVar74._2_2_ = (ushort)(byte)((ulong)uVar71 >> 8) << 7;
      auVar74._4_2_ = (ushort)(byte)((ulong)uVar71 >> 0x10) << 7;
      auVar74._6_2_ = (ushort)(byte)((ulong)uVar71 >> 0x18) << 7;
      auVar74._8_2_ = (ushort)(byte)((ulong)uVar71 >> 0x20) << 7;
      auVar74._10_2_ = (ushort)(byte)((ulong)uVar71 >> 0x28) << 7;
      auVar74._12_2_ = (ushort)(byte)((ulong)uVar71 >> 0x30) << 7;
      auVar74._14_2_ = (ushort)(byte)((ulong)uVar71 >> 0x38) << 7;
      auVar81._0_8_ =
           CONCAT26((ushort)bStack_a5 << 7,
                    CONCAT24((ushort)bStack_a6 << 7,
                             CONCAT22((ushort)bStack_a7 << 7,(ushort)local_a8 << 7)));
      auVar81._8_2_ = (ushort)bStack_a4 << 7;
      auVar81._10_2_ = (ushort)bStack_a3 << 7;
      auVar81._12_2_ = (ushort)bStack_a2 << 7;
      auVar81._14_2_ = (ushort)bStack_a1 << 7;
      auVar90._0_2_ = (ushort)local_98 << 7;
      auVar90._2_2_ = (ushort)bStack_97 << 7;
      auVar90._4_2_ = (ushort)bStack_96 << 7;
      auVar90._6_2_ = (ushort)bStack_95 << 7;
      auVar90._8_2_ = (ushort)bStack_94 << 7;
      auVar90._10_2_ = (ushort)bStack_93 << 7;
      auVar90._12_2_ = (ushort)bStack_92 << 7;
      auVar90._14_2_ = (ushort)bStack_91 << 7;
      auVar89._8_2_ = 0x4a85;
      auVar89._0_8_ = 0x4a854a854a854a85;
      auVar89._10_2_ = 0x4a85;
      auVar89._12_2_ = 0x4a85;
      auVar89._14_2_ = 0x4a85;
      auVar73 = NEON_sqdmulh(auVar74,auVar89,2);
      auVar112._8_2_ = 0x6625;
      auVar112._0_8_ = 0x6625662566256625;
      auVar112._10_2_ = 0x6625;
      auVar112._12_2_ = 0x6625;
      auVar112._14_2_ = 0x6625;
      auVar103 = NEON_sqdmulh(auVar90,auVar112,2);
      auVar117._8_2_ = 0x1913;
      auVar117._0_8_ = 0x1913191319131913;
      auVar117._10_2_ = 0x1913;
      auVar117._12_2_ = 0x1913;
      auVar117._14_2_ = 0x1913;
      auVar112 = NEON_sqdmulh(auVar81,auVar117,2);
      auVar12._8_2_ = 0x3408;
      auVar12._0_8_ = 0x3408340834083408;
      auVar12._10_2_ = 0x3408;
      auVar12._12_2_ = 0x3408;
      auVar12._14_2_ = 0x3408;
      auVar89 = NEON_sqdmulh(auVar90,auVar12,2);
      auVar16._8_2_ = 0x11a;
      auVar16._0_8_ = 0x11a011a011a011a;
      auVar16._10_2_ = 0x11a;
      auVar16._12_2_ = 0x11a;
      auVar16._14_2_ = 0x11a;
      auVar114 = NEON_sqdmulh(auVar81,auVar16,2);
      auVar20._8_2_ = 0xc866;
      auVar20._0_8_ = 0xc866c866c866c866;
      auVar20._10_2_ = 0xc866;
      auVar20._12_2_ = 0xc866;
      auVar20._14_2_ = 0xc866;
      auVar117 = NEON_sqadd(auVar73,auVar20,2);
      auVar24._8_2_ = 0x2204;
      auVar24._0_8_ = 0x2204220422042204;
      auVar24._10_2_ = 0x2204;
      auVar24._12_2_ = 0x2204;
      auVar24._14_2_ = 0x2204;
      auVar126 = NEON_sqadd(auVar73,auVar24,2);
      auVar28._8_2_ = 0xbaeb;
      auVar28._0_8_ = 0xbaebbaebbaebbaeb;
      auVar28._10_2_ = 0xbaeb;
      auVar28._12_2_ = 0xbaeb;
      auVar28._14_2_ = 0xbaeb;
      auVar73 = NEON_sqadd(auVar73,auVar28,2);
      auVar89 = NEON_sqadd(auVar112,auVar89,2);
      auVar103 = NEON_sqadd(auVar103,auVar117,2);
      auVar73 = NEON_sqadd(auVar114,auVar73,2);
      auVar89 = NEON_sqsub(auVar126,auVar89,2);
      auVar73 = NEON_sqadd(auVar73,auVar81,2);
      uVar79 = NEON_sqshrun(auVar81._0_8_,auVar103,6,2);
      uVar77 = NEON_sqshrun(auVar89._0_8_,auVar89,6,2);
      uVar78 = NEON_sqshrun(auVar73._0_8_,auVar73,6,2);
      uVar79 = uVar79 & 0xf0f0f0f0f0f0f0f0;
      bVar101 = (byte)((ulong)uVar77 >> 0x3c);
      uVar39 = (uint7)uVar78 | 0xf0f0f0f0f0f;
      bVar100 = bVar101 | (byte)(uVar79 >> 0x38);
      uVar71 = CONCAT17(bVar101,CONCAT16((byte)((ulong)uVar77 >> 0x18) >> 4 | (byte)(uVar79 >> 0x18)
                                         ,(uint6)CONCAT14((byte)((ulong)uVar77 >> 0x10) >> 4 |
                                                          (byte)(uVar79 >> 0x10),
                                                          (uint)(byte)((byte)((ulong)uVar77 >> 8) >>
                                                                       4 | (byte)(uVar79 >> 8)) <<
                                                          0x10)));
      uVar70 = CONCAT16(bVar100,(uint6)CONCAT14((byte)((ulong)uVar77 >> 0x30) >> 4 |
                                                (byte)(uVar79 >> 0x30),
                                                (uint)(byte)((byte)((ulong)uVar77 >> 0x28) >> 4 |
                                                            (byte)(uVar79 >> 0x28)) << 0x10));
      *(ulong *)(param_7 + iVar48 + 8) =
           CONCAT17((char)(uVar78 >> 0x38),
                    CONCAT16(bVar100,CONCAT15((char)(uVar78 >> 0x30),
                                              (int5)CONCAT34((int3)((uint7)uVar70 >> 0x20),
                                                             CONCAT13((char)(uVar39 >> 0x28),
                                                                      (int3)CONCAT52((int5)((uint7)
                                                  uVar70 >> 0x10),
                                                  CONCAT11((char)(uVar39 >> 0x20),
                                                           (byte)((ulong)uVar77 >> 0x20) >> 4 |
                                                           (byte)(uVar79 >> 0x20)))))))) |
           0xf000f0000000000;
      *(ulong *)(param_7 + iVar48) =
           CONCAT17((char)((uVar78 | 0xf0f0f0f0f0f) >> 0x18),
                    (int7)CONCAT26((short)((ulong)uVar71 >> 0x30),
                                   CONCAT15((char)((uVar78 | 0xf0f0f0f0f0f) >> 0x10),
                                            (int5)CONCAT44((int)((ulong)uVar71 >> 0x20),
                                                           CONCAT13((char)((uVar78 | 0xf0f) >> 8),
                                                                    (int3)CONCAT62((int6)((ulong)
                                                  uVar71 >> 0x10),
                                                  CONCAT11((char)(uVar78 | 0xf0f),
                                                           (byte)uVar77 >> 4 | (byte)uVar79)))))));
      if (param_2 != (byte *)0x0) {
        uVar71 = *(undefined8 *)(param_2 + (lVar43 >> 0x20));
        auVar75._0_2_ = (ushort)local_90[0] << 7;
        auVar75._2_2_ = (ushort)local_90[1] << 7;
        auVar75._4_2_ = (ushort)local_90[2] << 7;
        auVar75._6_2_ = (ushort)local_90[3] << 7;
        auVar75._8_2_ = (ushort)bStack_8c << 7;
        auVar75._10_2_ = (ushort)bStack_8b << 7;
        auVar75._12_2_ = (ushort)bStack_8a << 7;
        auVar75._14_2_ = (ushort)bStack_89 << 7;
        auVar82._0_2_ = (ushort)local_80[0] << 7;
        auVar82._2_2_ = (ushort)local_80[1] << 7;
        auVar82._4_2_ = (ushort)local_80[2] << 7;
        auVar82._6_2_ = (ushort)local_80[3] << 7;
        auVar82._8_2_ = (ushort)bStack_7c << 7;
        auVar82._10_2_ = (ushort)bStack_7b << 7;
        auVar82._12_2_ = (ushort)bStack_7a << 7;
        auVar82._14_2_ = (ushort)bStack_79 << 7;
        auVar91._0_2_ = (ushort)(byte)uVar71 << 7;
        auVar91._2_2_ = (ushort)(byte)((ulong)uVar71 >> 8) << 7;
        auVar91._4_2_ = (ushort)(byte)((ulong)uVar71 >> 0x10) << 7;
        auVar91._6_2_ = (ushort)(byte)((ulong)uVar71 >> 0x18) << 7;
        auVar91._8_2_ = (ushort)(byte)((ulong)uVar71 >> 0x20) << 7;
        auVar91._10_2_ = (ushort)(byte)((ulong)uVar71 >> 0x28) << 7;
        auVar91._12_2_ = (ushort)(byte)((ulong)uVar71 >> 0x30) << 7;
        auVar91._14_2_ = (ushort)(byte)((ulong)uVar71 >> 0x38) << 7;
        auVar8._8_2_ = 0x6625;
        auVar8._0_8_ = 0x6625662566256625;
        auVar8._10_2_ = 0x6625;
        auVar8._12_2_ = 0x6625;
        auVar8._14_2_ = 0x6625;
        auVar103 = NEON_sqdmulh(auVar82,auVar8,2);
        auVar10._8_2_ = 0x1913;
        auVar10._0_8_ = 0x1913191319131913;
        auVar10._10_2_ = 0x1913;
        auVar10._12_2_ = 0x1913;
        auVar10._14_2_ = 0x1913;
        auVar112 = NEON_sqdmulh(auVar75,auVar10,2);
        auVar13._8_2_ = 0x3408;
        auVar13._0_8_ = 0x3408340834083408;
        auVar13._10_2_ = 0x3408;
        auVar13._12_2_ = 0x3408;
        auVar13._14_2_ = 0x3408;
        auVar73 = NEON_sqdmulh(auVar82,auVar13,2);
        auVar6._8_2_ = 0x4a85;
        auVar6._0_8_ = 0x4a854a854a854a85;
        auVar6._10_2_ = 0x4a85;
        auVar6._12_2_ = 0x4a85;
        auVar6._14_2_ = 0x4a85;
        auVar89 = NEON_sqdmulh(auVar91,auVar6,2);
        auVar17._8_2_ = 0x11a;
        auVar17._0_8_ = 0x11a011a011a011a;
        auVar17._10_2_ = 0x11a;
        auVar17._12_2_ = 0x11a;
        auVar17._14_2_ = 0x11a;
        auVar114 = NEON_sqdmulh(auVar75,auVar17,2);
        auVar73 = NEON_sqadd(auVar112,auVar73,2);
        auVar21._8_2_ = 0xc866;
        auVar21._0_8_ = 0xc866c866c866c866;
        auVar21._10_2_ = 0xc866;
        auVar21._12_2_ = 0xc866;
        auVar21._14_2_ = 0xc866;
        auVar112 = NEON_sqadd(auVar89,auVar21,2);
        auVar25._8_2_ = 0x2204;
        auVar25._0_8_ = 0x2204220422042204;
        auVar25._10_2_ = 0x2204;
        auVar25._12_2_ = 0x2204;
        auVar25._14_2_ = 0x2204;
        auVar117 = NEON_sqadd(auVar89,auVar25,2);
        auVar29._8_2_ = 0xbaeb;
        auVar29._0_8_ = 0xbaebbaebbaebbaeb;
        auVar29._10_2_ = 0xbaeb;
        auVar29._12_2_ = 0xbaeb;
        auVar29._14_2_ = 0xbaeb;
        auVar89 = NEON_sqadd(auVar89,auVar29,2);
        auVar112 = NEON_sqadd(auVar103,auVar112,2);
        auVar103 = NEON_sqadd(auVar114,auVar89,2);
        auVar89 = NEON_sqsub(auVar117,auVar73,2);
        auVar73 = NEON_sqadd(auVar103,auVar75,2);
        uVar79 = NEON_sqshrun(auVar103._0_8_,auVar112,6,2);
        uVar71 = NEON_sqshrun(auVar89._0_8_,auVar89,6,2);
        uVar78 = NEON_sqshrun(auVar73._0_8_,auVar73,6,2);
        uVar79 = uVar79 & 0xf0f0f0f0f0f0f0f0;
        uVar39 = (uint7)uVar78 | 0xf0f0f0f0f0f;
        bVar100 = (byte)((ulong)uVar71 >> 0x18) >> 4 | (byte)(uVar79 >> 0x18);
        bVar101 = (byte)((ulong)uVar71 >> 0x3c) | (byte)(uVar79 >> 0x38);
        uVar86 = CONCAT16(bVar100,(uint6)CONCAT14((byte)((ulong)uVar71 >> 0x10) >> 4 |
                                                  (byte)(uVar79 >> 0x10),
                                                  (uint)(byte)((byte)((ulong)uVar71 >> 8) >> 4 |
                                                              (byte)(uVar79 >> 8)) << 0x10));
        uVar70 = CONCAT16(bVar101,(uint6)CONCAT14((byte)((ulong)uVar71 >> 0x30) >> 4 |
                                                  (byte)(uVar79 >> 0x30),
                                                  (uint)(byte)((byte)((ulong)uVar71 >> 0x28) >> 4 |
                                                              (byte)(uVar79 >> 0x28)) << 0x10));
        *(ulong *)(param_8 + (iVar48 + -0x10) + 8) =
             CONCAT17((char)(uVar78 >> 0x38),
                      CONCAT16(bVar101,CONCAT15((char)(uVar78 >> 0x30),
                                                (int5)CONCAT34((int3)((uint7)uVar70 >> 0x20),
                                                               CONCAT13((char)(uVar39 >> 0x28),
                                                                        (int3)CONCAT52((int5)((uint7
                                                  )uVar70 >> 0x10),
                                                  CONCAT11((char)(uVar39 >> 0x20),
                                                           (byte)((ulong)uVar71 >> 0x20) >> 4 |
                                                           (byte)(uVar79 >> 0x20)))))))) |
             0xf000f0000000000;
        *(ulong *)(param_8 + (iVar48 + -0x10)) =
             CONCAT17((char)((uVar78 | 0xf0f0f0f0f0f) >> 0x18),
                      CONCAT16(bVar100,CONCAT15((char)((uVar78 | 0xf0f0f0f0f0f) >> 0x10),
                                                (int5)CONCAT34((int3)((uint7)uVar86 >> 0x20),
                                                               CONCAT13((char)((uVar78 | 0xf0f) >> 8
                                                                              ),(int3)CONCAT52((int5
                                                  )((uint7)uVar86 >> 0x10),
                                                  CONCAT11((char)(uVar78 | 0xf0f),
                                                           (byte)uVar71 >> 4 | (byte)uVar79)))))));
        uVar71 = *(undefined8 *)(param_2 + (lVar43 >> 0x20) + 8);
        auVar76._0_2_ = (ushort)(byte)uVar71 << 7;
        auVar76._2_2_ = (ushort)(byte)((ulong)uVar71 >> 8) << 7;
        auVar76._4_2_ = (ushort)(byte)((ulong)uVar71 >> 0x10) << 7;
        auVar76._6_2_ = (ushort)(byte)((ulong)uVar71 >> 0x18) << 7;
        auVar76._8_2_ = (ushort)(byte)((ulong)uVar71 >> 0x20) << 7;
        auVar76._10_2_ = (ushort)(byte)((ulong)uVar71 >> 0x28) << 7;
        auVar76._12_2_ = (ushort)(byte)((ulong)uVar71 >> 0x30) << 7;
        auVar76._14_2_ = (ushort)(byte)((ulong)uVar71 >> 0x38) << 7;
        auVar83._0_8_ =
             CONCAT26((ushort)bStack_85 << 7,
                      CONCAT24((ushort)bStack_86 << 7,
                               CONCAT22((ushort)bStack_87 << 7,(ushort)local_88 << 7)));
        auVar83._8_2_ = (ushort)bStack_84 << 7;
        auVar83._10_2_ = (ushort)bStack_83 << 7;
        auVar83._12_2_ = (ushort)bStack_82 << 7;
        auVar83._14_2_ = (ushort)bStack_81 << 7;
        auVar92._0_2_ = (ushort)local_78 << 7;
        auVar92._2_2_ = (ushort)bStack_77 << 7;
        auVar92._4_2_ = (ushort)bStack_76 << 7;
        auVar92._6_2_ = (ushort)bStack_75 << 7;
        auVar92._8_2_ = (ushort)bStack_74 << 7;
        auVar92._10_2_ = (ushort)bStack_73 << 7;
        auVar92._12_2_ = (ushort)bStack_72 << 7;
        auVar92._14_2_ = (ushort)bStack_71 << 7;
        auVar7._8_2_ = 0x4a85;
        auVar7._0_8_ = 0x4a854a854a854a85;
        auVar7._10_2_ = 0x4a85;
        auVar7._12_2_ = 0x4a85;
        auVar7._14_2_ = 0x4a85;
        auVar73 = NEON_sqdmulh(auVar76,auVar7,2);
        auVar9._8_2_ = 0x6625;
        auVar9._0_8_ = 0x6625662566256625;
        auVar9._10_2_ = 0x6625;
        auVar9._12_2_ = 0x6625;
        auVar9._14_2_ = 0x6625;
        auVar103 = NEON_sqdmulh(auVar92,auVar9,2);
        auVar11._8_2_ = 0x1913;
        auVar11._0_8_ = 0x1913191319131913;
        auVar11._10_2_ = 0x1913;
        auVar11._12_2_ = 0x1913;
        auVar11._14_2_ = 0x1913;
        auVar112 = NEON_sqdmulh(auVar83,auVar11,2);
        auVar14._8_2_ = 0x3408;
        auVar14._0_8_ = 0x3408340834083408;
        auVar14._10_2_ = 0x3408;
        auVar14._12_2_ = 0x3408;
        auVar14._14_2_ = 0x3408;
        auVar89 = NEON_sqdmulh(auVar92,auVar14,2);
        auVar18._8_2_ = 0x11a;
        auVar18._0_8_ = 0x11a011a011a011a;
        auVar18._10_2_ = 0x11a;
        auVar18._12_2_ = 0x11a;
        auVar18._14_2_ = 0x11a;
        auVar114 = NEON_sqdmulh(auVar83,auVar18,2);
        auVar22._8_2_ = 0xc866;
        auVar22._0_8_ = 0xc866c866c866c866;
        auVar22._10_2_ = 0xc866;
        auVar22._12_2_ = 0xc866;
        auVar22._14_2_ = 0xc866;
        auVar117 = NEON_sqadd(auVar73,auVar22,2);
        auVar26._8_2_ = 0x2204;
        auVar26._0_8_ = 0x2204220422042204;
        auVar26._10_2_ = 0x2204;
        auVar26._12_2_ = 0x2204;
        auVar26._14_2_ = 0x2204;
        auVar126 = NEON_sqadd(auVar73,auVar26,2);
        auVar30._8_2_ = 0xbaeb;
        auVar30._0_8_ = 0xbaebbaebbaebbaeb;
        auVar30._10_2_ = 0xbaeb;
        auVar30._12_2_ = 0xbaeb;
        auVar30._14_2_ = 0xbaeb;
        auVar73 = NEON_sqadd(auVar73,auVar30,2);
        auVar89 = NEON_sqadd(auVar112,auVar89,2);
        auVar103 = NEON_sqadd(auVar103,auVar117,2);
        auVar73 = NEON_sqadd(auVar114,auVar73,2);
        auVar89 = NEON_sqsub(auVar126,auVar89,2);
        auVar73 = NEON_sqadd(auVar73,auVar83,2);
        uVar79 = NEON_sqshrun(auVar83._0_8_,auVar103,6,2);
        uVar77 = NEON_sqshrun(auVar89._0_8_,auVar89,6,2);
        uVar78 = NEON_sqshrun(auVar73._0_8_,auVar73,6,2);
        uVar79 = uVar79 & 0xf0f0f0f0f0f0f0f0;
        bVar101 = (byte)((ulong)uVar77 >> 0x3c);
        uVar39 = (uint7)uVar78 | 0xf0f0f0f0f0f;
        bVar100 = bVar101 | (byte)(uVar79 >> 0x38);
        uVar71 = CONCAT17(bVar101,CONCAT16((byte)((ulong)uVar77 >> 0x18) >> 4 |
                                           (byte)(uVar79 >> 0x18),
                                           (uint6)CONCAT14((byte)((ulong)uVar77 >> 0x10) >> 4 |
                                                           (byte)(uVar79 >> 0x10),
                                                           (uint)(byte)((byte)((ulong)uVar77 >> 8)
                                                                        >> 4 | (byte)(uVar79 >> 8))
                                                           << 0x10)));
        uVar70 = CONCAT16(bVar100,(uint6)CONCAT14((byte)((ulong)uVar77 >> 0x30) >> 4 |
                                                  (byte)(uVar79 >> 0x30),
                                                  (uint)(byte)((byte)((ulong)uVar77 >> 0x28) >> 4 |
                                                              (byte)(uVar79 >> 0x28)) << 0x10));
        *(ulong *)(param_8 + iVar48 + 8) =
             CONCAT17((char)(uVar78 >> 0x38),
                      CONCAT16(bVar100,CONCAT15((char)(uVar78 >> 0x30),
                                                (int5)CONCAT34((int3)((uint7)uVar70 >> 0x20),
                                                               CONCAT13((char)(uVar39 >> 0x28),
                                                                        (int3)CONCAT52((int5)((uint7
                                                  )uVar70 >> 0x10),
                                                  CONCAT11((char)(uVar39 >> 0x20),
                                                           (byte)((ulong)uVar77 >> 0x20) >> 4 |
                                                           (byte)(uVar79 >> 0x20)))))))) |
             0xf000f0000000000;
        *(ulong *)(param_8 + iVar48) =
             CONCAT17((char)((uVar78 | 0xf0f0f0f0f0f) >> 0x18),
                      (int7)CONCAT26((short)((ulong)uVar71 >> 0x30),
                                     CONCAT15((char)((uVar78 | 0xf0f0f0f0f0f) >> 0x10),
                                              (int5)CONCAT44((int)((ulong)uVar71 >> 0x20),
                                                             CONCAT13((char)((uVar78 | 0xf0f) >> 8),
                                                                      (int3)CONCAT62((int6)((ulong)
                                                  uVar71 >> 0x10),
                                                  CONCAT11((char)(uVar78 | 0xf0f),
                                                           (byte)uVar77 >> 4 | (byte)uVar79)))))));
      }
      iVar48 = iVar48 + 0x20;
      lVar43 = lVar43 + 0x1000000000;
      uVar42 = uVar42 - 1;
      param_3 = param_3 + 8;
      pbVar44 = pbVar44 + 8;
      param_4 = param_4 + 8;
      pbVar46 = pbVar46 + 8;
    } while (uVar42 != 0);
    param_5 = param_5 + lVar2;
    local_f8 = param_6 + lVar2;
    param_3 = pbVar3;
  }
  __n = (size_t)(int)lVar49;
  memcpy(abStack_c9 + 1,param_3,__n);
  memcpy(&local_d8,param_5,__n);
  __n_00 = (size_t)(9 - (int)lVar49);
  memset(abStack_c9 + __n + 1,(uint)abStack_c9[lVar49],__n_00);
  memset(&local_d8 + __n,(uint)*(byte *)((long)&local_e0 + lVar49 + 7),__n_00);
  bVar100 = (byte)((uint7)uStack_c7 >> 8);
  bVar101 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar58 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar59 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar60 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar61 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar62 = (byte)((uint7)uStack_d7 >> 8);
  bVar63 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar64 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar65 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar66 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar67 = (byte)((uint7)uStack_d7 >> 0x30);
  uVar34 = (undefined2)CONCAT71(uStack_c7,abStack_c9[1]);
  uVar31 = CONCAT12((char)uStack_c7,uVar34) & 0xff00ff;
  uVar32 = CONCAT12(bVar100,(short)uStack_c7) & 0xff00ff;
  uVar33 = CONCAT12((char)uStack_c7,uVar34) & 0xff00ff;
  uVar34 = (undefined2)CONCAT71(uStack_d7,local_d8);
  uVar35 = CONCAT12((char)uStack_d7,uVar34) & 0xff00ff;
  uVar36 = CONCAT12(bVar100,(short)uStack_c7) & 0xff00ff;
  uVar37 = CONCAT12((char)uStack_d7,uVar34) & 0xff00ff;
  uVar38 = CONCAT12(bVar62,(short)uStack_d7) & 0xff00ff;
  sVar115 = (short)uVar32 + (short)uVar33 + (short)uVar37 + (short)uVar38;
  sVar118 = (ushort)(byte)(uVar32 >> 0x10) + (ushort)(byte)(uVar33 >> 0x10) +
            (ushort)(byte)(uVar37 >> 0x10) + (ushort)(byte)(uVar38 >> 0x10);
  sVar119 = (ushort)bVar101 + (ushort)bVar100 + (ushort)bVar62 + (ushort)bVar63;
  sVar120 = (ushort)bVar58 + (ushort)bVar101 + (ushort)bVar63 + (ushort)bVar64;
  sVar121 = (ushort)bVar59 + (ushort)bVar58 + (ushort)bVar64 + (ushort)bVar65;
  sVar122 = (ushort)bVar60 + (ushort)bVar59 + (ushort)bVar65 + (ushort)bVar66;
  sVar123 = (ushort)bVar61 + (ushort)bVar60 + (ushort)bVar66 + (ushort)bVar67;
  sVar124 = (ushort)bStack_c0 + (ushort)bVar61 + (ushort)bVar67 + (ushort)bStack_d0;
  uVar32 = CONCAT12(bVar62,(short)uStack_d7) & 0xff00ff;
  uVar68 = sVar118 + (ushort)(byte)(uVar31 >> 0x10) * 2 + (ushort)(byte)(uVar32 >> 0x10) * 2;
  uVar69 = sVar119 + (ushort)bVar100 * 2 + (ushort)bVar63 * 2;
  uVar50 = (undefined1)((ushort)(((short)uVar35 + (short)uVar36) * 2 + sVar115) >> 3);
  uVar51 = (undefined1)
           ((ushort)(((ushort)(byte)(uVar35 >> 0x10) + (ushort)(byte)(uVar36 >> 0x10)) * 2 + sVar118
                    ) >> 3);
  uVar52 = (undefined1)((ushort)(((ushort)bVar62 + (ushort)bVar101) * 2 + sVar119) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar63 + (ushort)bVar58) * 2 + sVar120) >> 3);
  uVar54 = (undefined1)((ushort)(((ushort)bVar64 + (ushort)bVar59) * 2 + sVar121) >> 3);
  uVar55 = (undefined1)((ushort)(((ushort)bVar65 + (ushort)bVar60) * 2 + sVar122) >> 3);
  uVar56 = (undefined1)((ushort)(((ushort)bVar66 + (ushort)bVar61) * 2 + sVar123) >> 3);
  uVar57 = (undefined1)((ushort)(((ushort)bVar67 + (ushort)bStack_c0) * 2 + sVar124) >> 3);
  uVar77 = CONCAT17((char)((ushort)(sVar124 + (ushort)bVar61 * 2 + (ushort)bStack_d0 * 2) >> 3),
                    CONCAT16((char)((ushort)(sVar123 + (ushort)bVar60 * 2 + (ushort)bVar67 * 2) >> 3
                                   ),CONCAT15((char)((ushort)(sVar122 + (ushort)bVar59 * 2 +
                                                             (ushort)bVar66 * 2) >> 3),
                                              CONCAT14((char)((ushort)(sVar121 + (ushort)bVar58 * 2
                                                                      + (ushort)bVar65 * 2) >> 3),
                                                       CONCAT13((char)((ushort)(sVar120 + (ushort)
                                                  bVar101 * 2 + (ushort)bVar64 * 2) >> 3),
                                                  CONCAT12((char)(uVar69 >> 3),
                                                           CONCAT11((char)(uVar68 >> 3),
                                                                    (char)(((ulong)CONCAT24(uVar69,
                                                  CONCAT22(uVar68,sVar115 + (short)uVar31 * 2 +
                                                                  (short)uVar32 * 2)) & 0xfff8) >> 3
                                                  ))))))));
  uVar71 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),
                       CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14(uVar54,CONCAT13(
                                                  uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)))))
                                               )),1);
  local_b0[0] = (byte)uVar71;
  local_b0[2] = (byte)((ulong)uVar71 >> 8);
  bStack_ac = (byte)((ulong)uVar71 >> 0x10);
  bStack_aa = (byte)((ulong)uVar71 >> 0x18);
  local_a8 = (byte)((ulong)uVar71 >> 0x20);
  bStack_a6 = (byte)((ulong)uVar71 >> 0x28);
  bStack_a4 = (byte)((ulong)uVar71 >> 0x30);
  bStack_a2 = (byte)((ulong)uVar71 >> 0x38);
  uVar71 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),uVar77,1);
  local_b0[1] = (byte)uVar71;
  local_b0[3] = (byte)((ulong)uVar71 >> 8);
  bStack_ab = (byte)((ulong)uVar71 >> 0x10);
  bStack_a9 = (byte)((ulong)uVar71 >> 0x18);
  bStack_a7 = (byte)((ulong)uVar71 >> 0x20);
  bStack_a5 = (byte)((ulong)uVar71 >> 0x28);
  bStack_a3 = (byte)((ulong)uVar71 >> 0x30);
  bStack_a1 = (byte)((ulong)uVar71 >> 0x38);
  uVar71 = NEON_urhadd(CONCAT71(uStack_d7,local_d8),uVar77,1);
  local_90[0] = (byte)uVar71;
  local_90[2] = (byte)((ulong)uVar71 >> 8);
  bStack_8c = (byte)((ulong)uVar71 >> 0x10);
  bStack_8a = (byte)((ulong)uVar71 >> 0x18);
  local_88 = (byte)((ulong)uVar71 >> 0x20);
  bStack_86 = (byte)((ulong)uVar71 >> 0x28);
  bStack_84 = (byte)((ulong)uVar71 >> 0x30);
  bStack_82 = (byte)((ulong)uVar71 >> 0x38);
  uVar71 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),
                       CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14(uVar54,CONCAT13(
                                                  uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)))))
                                               )),1);
  local_90[1] = (byte)uVar71;
  local_90[3] = (byte)((ulong)uVar71 >> 8);
  bStack_8b = (byte)((ulong)uVar71 >> 0x10);
  bStack_89 = (byte)((ulong)uVar71 >> 0x18);
  bStack_87 = (byte)((ulong)uVar71 >> 0x20);
  bStack_85 = (byte)((ulong)uVar71 >> 0x28);
  bStack_83 = (byte)((ulong)uVar71 >> 0x30);
  bStack_81 = (byte)((ulong)uVar71 >> 0x38);
  memcpy(abStack_c9 + 1,local_100,__n);
  memcpy(&local_d8,local_f8,__n);
  memset(abStack_c9 + __n + 1,(uint)abStack_c9[lVar49],__n_00);
  memset(&local_d8 + __n,(uint)*(byte *)((long)&local_e0 + lVar49 + 7),__n_00);
  bVar100 = (byte)((uint7)uStack_c7 >> 8);
  bVar101 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar58 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar59 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar60 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar61 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar62 = (byte)((uint7)uStack_d7 >> 8);
  bVar63 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar64 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar65 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar66 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar67 = (byte)((uint7)uStack_d7 >> 0x30);
  uVar34 = (undefined2)CONCAT71(uStack_c7,abStack_c9[1]);
  uVar31 = CONCAT12((char)uStack_c7,uVar34) & 0xff00ff;
  uVar32 = CONCAT12(bVar100,(short)uStack_c7) & 0xff00ff;
  uVar33 = CONCAT12((char)uStack_c7,uVar34) & 0xff00ff;
  uVar34 = (undefined2)CONCAT71(uStack_d7,local_d8);
  uVar35 = CONCAT12((char)uStack_d7,uVar34) & 0xff00ff;
  uVar36 = CONCAT12(bVar100,(short)uStack_c7) & 0xff00ff;
  uVar37 = CONCAT12((char)uStack_d7,uVar34) & 0xff00ff;
  uVar38 = CONCAT12(bVar62,(short)uStack_d7) & 0xff00ff;
  sVar115 = (short)uVar32 + (short)uVar33 + (short)uVar37 + (short)uVar38;
  sVar118 = (ushort)(byte)(uVar32 >> 0x10) + (ushort)(byte)(uVar33 >> 0x10) +
            (ushort)(byte)(uVar37 >> 0x10) + (ushort)(byte)(uVar38 >> 0x10);
  sVar119 = (ushort)bVar101 + (ushort)bVar100 + (ushort)bVar62 + (ushort)bVar63;
  sVar120 = (ushort)bVar58 + (ushort)bVar101 + (ushort)bVar63 + (ushort)bVar64;
  sVar121 = (ushort)bVar59 + (ushort)bVar58 + (ushort)bVar64 + (ushort)bVar65;
  sVar122 = (ushort)bVar60 + (ushort)bVar59 + (ushort)bVar65 + (ushort)bVar66;
  sVar123 = (ushort)bVar61 + (ushort)bVar60 + (ushort)bVar66 + (ushort)bVar67;
  sVar124 = (ushort)bStack_c0 + (ushort)bVar61 + (ushort)bVar67 + (ushort)bStack_d0;
  uVar32 = CONCAT12(bVar62,(short)uStack_d7) & 0xff00ff;
  uVar68 = sVar118 + (ushort)(byte)(uVar31 >> 0x10) * 2 + (ushort)(byte)(uVar32 >> 0x10) * 2;
  uVar69 = sVar119 + (ushort)bVar100 * 2 + (ushort)bVar63 * 2;
  uVar50 = (undefined1)((ushort)(((short)uVar35 + (short)uVar36) * 2 + sVar115) >> 3);
  uVar51 = (undefined1)
           ((ushort)(((ushort)(byte)(uVar35 >> 0x10) + (ushort)(byte)(uVar36 >> 0x10)) * 2 + sVar118
                    ) >> 3);
  uVar52 = (undefined1)((ushort)(((ushort)bVar62 + (ushort)bVar101) * 2 + sVar119) >> 3);
  uVar53 = (undefined1)((ushort)(((ushort)bVar63 + (ushort)bVar58) * 2 + sVar120) >> 3);
  uVar54 = (undefined1)((ushort)(((ushort)bVar64 + (ushort)bVar59) * 2 + sVar121) >> 3);
  uVar55 = (undefined1)((ushort)(((ushort)bVar65 + (ushort)bVar60) * 2 + sVar122) >> 3);
  uVar56 = (undefined1)((ushort)(((ushort)bVar66 + (ushort)bVar61) * 2 + sVar123) >> 3);
  uVar57 = (undefined1)((ushort)(((ushort)bVar67 + (ushort)bStack_c0) * 2 + sVar124) >> 3);
  uVar71 = CONCAT17((char)((ushort)(sVar124 + (ushort)bVar61 * 2 + (ushort)bStack_d0 * 2) >> 3),
                    CONCAT16((char)((ushort)(sVar123 + (ushort)bVar60 * 2 + (ushort)bVar67 * 2) >> 3
                                   ),CONCAT15((char)((ushort)(sVar122 + (ushort)bVar59 * 2 +
                                                             (ushort)bVar66 * 2) >> 3),
                                              CONCAT14((char)((ushort)(sVar121 + (ushort)bVar58 * 2
                                                                      + (ushort)bVar65 * 2) >> 3),
                                                       CONCAT13((char)((ushort)(sVar120 + (ushort)
                                                  bVar101 * 2 + (ushort)bVar64 * 2) >> 3),
                                                  CONCAT12((char)(uVar69 >> 3),
                                                           CONCAT11((char)(uVar68 >> 3),
                                                                    (char)(((ulong)CONCAT24(uVar69,
                                                  CONCAT22(uVar68,sVar115 + (short)uVar31 * 2 +
                                                                  (short)uVar32 * 2)) & 0xfff8) >> 3
                                                  ))))))));
  uVar87 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),
                       CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14(uVar54,CONCAT13(
                                                  uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)))))
                                               )),1);
  uVar102 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),uVar71,1);
  uVar71 = NEON_urhadd(CONCAT71(uStack_d7,local_d8),uVar71,1);
  uVar77 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),
                       CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14(uVar54,CONCAT13(
                                                  uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)))))
                                               )),1);
  local_a0[0] = (byte)uVar87;
  local_a0[1] = (char)uVar102;
  local_a0[2] = (char)((ulong)uVar87 >> 8);
  local_a0[3] = (char)((ulong)uVar102 >> 8);
  bStack_9c = (char)((ulong)uVar87 >> 0x10);
  bStack_9b = (char)((ulong)uVar102 >> 0x10);
  bStack_9a = (char)((ulong)uVar87 >> 0x18);
  bStack_99 = (char)((ulong)uVar102 >> 0x18);
  local_98 = (char)((ulong)uVar87 >> 0x20);
  bStack_97 = (char)((ulong)uVar102 >> 0x20);
  bStack_96 = (char)((ulong)uVar87 >> 0x28);
  bStack_95 = (char)((ulong)uVar102 >> 0x28);
  bStack_94 = (char)((ulong)uVar87 >> 0x30);
  bStack_93 = (char)((ulong)uVar102 >> 0x30);
  bStack_92 = (char)((ulong)uVar87 >> 0x38);
  bStack_91 = (char)((ulong)uVar102 >> 0x38);
  local_80[0] = (byte)uVar71;
  local_80[1] = (char)uVar77;
  local_80[2] = (char)((ulong)uVar71 >> 8);
  local_80[3] = (char)((ulong)uVar77 >> 8);
  bStack_7c = (char)((ulong)uVar71 >> 0x10);
  bStack_7b = (char)((ulong)uVar77 >> 0x10);
  bStack_7a = (char)((ulong)uVar71 >> 0x18);
  bStack_79 = (char)((ulong)uVar77 >> 0x18);
  local_78 = (char)((ulong)uVar71 >> 0x20);
  bStack_77 = (char)((ulong)uVar77 >> 0x20);
  bStack_76 = (char)((ulong)uVar71 >> 0x28);
  bStack_75 = (char)((ulong)uVar77 >> 0x28);
  bStack_74 = (char)((ulong)uVar71 >> 0x30);
  bStack_73 = (char)((ulong)uVar77 >> 0x30);
  bStack_72 = (char)((ulong)uVar71 >> 0x38);
  bStack_71 = (char)((ulong)uVar77 >> 0x38);
  uVar40 = param_9 - uVar47;
  if (0 < (int)uVar40) {
    uVar78 = (ulong)uVar40;
    pbVar44 = local_a0;
    uVar45 = uVar4 << 5 | 2;
    param_1 = param_1 + (int)uVar47;
    uVar42 = uVar78;
    do {
      uVar5 = (uint)*param_1 * 0x4a85 >> 8;
      uVar41 = (uVar5 + ((uint)*pbVar44 * 0x6625 >> 8)) - 0x379a;
      if (uVar41 >> 0xe == 0) {
        bVar100 = (byte)(uVar41 >> 6);
      }
      else {
        bVar100 = ((byte)((int)uVar41 >> 0x1f) & 1) - 1;
      }
      uVar41 = ((uVar5 + 0x2204) - ((uint)pbVar44[-0x10] * 0x1913 >> 8)) -
               ((uint)*pbVar44 * 0x3408 >> 8);
      if (uVar41 >> 0xe == 0) {
        uVar41 = uVar41 >> 6;
      }
      else {
        uVar41 = ((int)uVar41 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar5 = (uVar5 + ((uint)pbVar44[-0x10] * 0x811a >> 8)) - 0x4515;
      lVar49 = (long)(int)uVar45;
      if (uVar5 >> 0xe == 0) {
        bVar101 = (byte)(uVar5 >> 6);
      }
      else {
        bVar101 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
      }
      pbVar44 = pbVar44 + 1;
      uVar45 = uVar45 + 2;
      uVar42 = uVar42 - 1;
      param_1 = param_1 + 1;
      (param_7 + lVar49)[1] = bVar101 | 0xf;
      param_7[lVar49] = bVar100 & 0xf0 | (byte)(uVar41 >> 4);
    } while (uVar42 != 0);
    if ((param_2 != (byte *)0x0) && (0 < (int)uVar40)) {
      pbVar44 = local_80;
      param_2 = param_2 + (int)uVar47;
      uVar47 = uVar4 << 5 | 2;
      do {
        uVar4 = (uint)*param_2 * 0x4a85 >> 8;
        uVar40 = (uVar4 + ((uint)*pbVar44 * 0x6625 >> 8)) - 0x379a;
        if (uVar40 >> 0xe == 0) {
          bVar100 = (byte)(uVar40 >> 6);
        }
        else {
          bVar100 = ((byte)((int)uVar40 >> 0x1f) & 1) - 1;
        }
        uVar40 = ((uVar4 + 0x2204) - ((uint)pbVar44[-0x10] * 0x1913 >> 8)) -
                 ((uint)*pbVar44 * 0x3408 >> 8);
        if (uVar40 >> 0xe == 0) {
          uVar40 = uVar40 >> 6;
        }
        else {
          uVar40 = ((int)uVar40 >> 0x1f & 0xffffff01U) + 0xff;
        }
        uVar4 = (uVar4 + ((uint)pbVar44[-0x10] * 0x811a >> 8)) - 0x4515;
        lVar49 = (long)(int)uVar47;
        if (uVar4 >> 0xe == 0) {
          bVar101 = (byte)(uVar4 >> 6);
        }
        else {
          bVar101 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
        }
        pbVar44 = pbVar44 + 1;
        uVar47 = uVar47 + 2;
        uVar78 = uVar78 - 1;
        param_2 = param_2 + 1;
        (param_8 + lVar49)[1] = bVar101 | 0xf;
        param_8[lVar49] = bVar100 & 0xf0 | (byte)(uVar40 >> 4);
      } while (uVar78 != 0);
    }
  }
  if (*(long *)(local_e0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


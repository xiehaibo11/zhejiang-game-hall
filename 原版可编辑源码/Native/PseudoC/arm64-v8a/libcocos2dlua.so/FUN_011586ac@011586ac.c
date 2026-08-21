
void FUN_011586ac(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6,char *param_7,char *param_8,int param_9)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  byte *pbVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  int iVar41;
  char cVar42;
  size_t __n;
  long lVar43;
  size_t __n_00;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  undefined8 uVar69;
  byte bVar81;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  undefined8 uVar82;
  byte bVar90;
  undefined1 auVar83 [16];
  undefined8 uVar91;
  undefined1 auVar92 [16];
  undefined8 uVar93;
  undefined1 auVar94 [16];
  short sVar95;
  short sVar98;
  short sVar99;
  short sVar100;
  undefined8 uVar96;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  undefined1 auVar97 [16];
  undefined8 uVar105;
  undefined1 auVar106 [16];
  byte *local_100;
  byte *local_f8;
  undefined8 local_e0;
  byte local_d8;
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
  uVar5 = (uint)*param_1 * 0x4a85 >> 8;
  iVar41 = ((uint)*param_5 + (uint)*param_3 >> 1) + 1;
  iVar1 = ((uint)*param_6 + (uint)*param_4 >> 1) + 1;
  uVar7 = iVar41 + (uint)*param_3 >> 1 & 0xff;
  uVar38 = (uVar5 + (uVar7 * 0x811a >> 8)) - 0x4515;
  uVar39 = iVar1 + (uint)*param_4 >> 1 & 0xff;
  if (uVar38 >> 0xe == 0) {
    cVar42 = (char)(uVar38 >> 6);
  }
  else {
    cVar42 = ((byte)((int)uVar38 >> 0x1f) & 1) - 1;
  }
  uVar38 = ((uVar5 + 0x2204) - (uVar7 * 0x1913 >> 8)) - (uVar39 * 0x3408 >> 8);
  *param_7 = cVar42;
  if (uVar38 >> 0xe == 0) {
    cVar42 = (char)(uVar38 >> 6);
  }
  else {
    cVar42 = ((byte)((int)uVar38 >> 0x1f) & 1) - 1;
  }
  uVar7 = ((int)(param_9 + 1U) >> 1) + -1 >> 3;
  uVar38 = (uVar5 + (uVar39 * 0x6625 >> 8)) - 0x379a;
  param_7[1] = cVar42;
  if (uVar38 >> 0xe == 0) {
    cVar42 = (char)(uVar38 >> 6);
  }
  else {
    cVar42 = ((byte)((int)uVar38 >> 0x1f) & 1) - 1;
  }
  lVar43 = ((long)((ulong)(param_9 + 1U) << 0x20) >> 0x21) + (long)(int)uVar7 * -8;
  param_7[2] = cVar42;
  param_7[3] = -1;
  if (param_2 != (byte *)0x0) {
    uVar39 = iVar41 + (uint)*param_5 >> 1 & 0xff;
    uVar5 = (uint)*param_2 * 0x4a85 >> 8;
    uVar38 = (uVar5 + (uVar39 * 0x811a >> 8)) - 0x4515;
    uVar8 = iVar1 + (uint)*param_6 >> 1 & 0xff;
    if (uVar38 >> 0xe == 0) {
      cVar42 = (char)(uVar38 >> 6);
    }
    else {
      cVar42 = ((byte)((int)uVar38 >> 0x1f) & 1) - 1;
    }
    uVar38 = ((uVar5 + 0x2204) - (uVar39 * 0x1913 >> 8)) - (uVar8 * 0x3408 >> 8);
    *param_8 = cVar42;
    if (uVar38 >> 0xe == 0) {
      cVar42 = (char)(uVar38 >> 6);
    }
    else {
      cVar42 = ((byte)((int)uVar38 >> 0x1f) & 1) - 1;
    }
    uVar38 = (uVar5 + (uVar8 * 0x6625 >> 8)) - 0x379a;
    param_8[1] = cVar42;
    if (uVar38 >> 0xe == 0) {
      cVar42 = (char)(uVar38 >> 6);
    }
    else {
      cVar42 = ((byte)((int)uVar38 >> 0x1f) & 1) - 1;
    }
    param_8[2] = cVar42;
    param_8[3] = -1;
  }
  uVar38 = uVar7 << 4 | 1;
  local_100 = param_4;
  local_f8 = param_6;
  if (0 < (int)uVar7) {
    lVar2 = (ulong)(uVar7 - 1) * 8 + 8;
    uVar34 = (ulong)uVar7;
    iVar41 = 0x24;
    lVar36 = 0x100000000;
    pbVar3 = param_3 + lVar2;
    local_100 = param_4 + lVar2;
    pbVar37 = param_5;
    pbVar40 = param_6;
    do {
      uVar58 = *(undefined8 *)param_3;
      uVar64 = *(undefined8 *)(param_3 + 1);
      uVar69 = *(undefined8 *)pbVar37;
      uVar82 = *(undefined8 *)(pbVar37 + 1);
      bVar44 = (byte)((ulong)uVar58 >> 8);
      bVar45 = (byte)((ulong)uVar58 >> 0x10);
      bVar46 = (byte)((ulong)uVar58 >> 0x18);
      bVar47 = (byte)((ulong)uVar58 >> 0x20);
      bVar48 = (byte)((ulong)uVar58 >> 0x28);
      bVar49 = (byte)((ulong)uVar58 >> 0x30);
      bVar50 = (byte)((ulong)uVar58 >> 0x38);
      bVar51 = (byte)((ulong)uVar64 >> 8);
      bVar52 = (byte)((ulong)uVar64 >> 0x10);
      bVar53 = (byte)((ulong)uVar64 >> 0x18);
      bVar54 = (byte)((ulong)uVar64 >> 0x20);
      bVar55 = (byte)((ulong)uVar64 >> 0x28);
      bVar56 = (byte)((ulong)uVar64 >> 0x30);
      bVar57 = (byte)((ulong)uVar64 >> 0x38);
      bVar75 = (byte)((ulong)uVar69 >> 8);
      bVar76 = (byte)((ulong)uVar69 >> 0x10);
      bVar77 = (byte)((ulong)uVar69 >> 0x18);
      bVar78 = (byte)((ulong)uVar69 >> 0x20);
      bVar79 = (byte)((ulong)uVar69 >> 0x28);
      bVar80 = (byte)((ulong)uVar69 >> 0x30);
      bVar81 = (byte)((ulong)uVar69 >> 0x38);
      bVar84 = (byte)((ulong)uVar82 >> 8);
      bVar85 = (byte)((ulong)uVar82 >> 0x10);
      bVar86 = (byte)((ulong)uVar82 >> 0x18);
      bVar87 = (byte)((ulong)uVar82 >> 0x20);
      bVar88 = (byte)((ulong)uVar82 >> 0x28);
      bVar89 = (byte)((ulong)uVar82 >> 0x30);
      bVar90 = (byte)((ulong)uVar82 >> 0x38);
      sVar95 = (ushort)(byte)uVar64 + (ushort)(byte)uVar58 + (ushort)(byte)uVar69 +
               (ushort)(byte)uVar82;
      sVar98 = (ushort)bVar51 + (ushort)bVar44 + (ushort)bVar75 + (ushort)bVar84;
      sVar99 = (ushort)bVar52 + (ushort)bVar45 + (ushort)bVar76 + (ushort)bVar85;
      sVar100 = (ushort)bVar53 + (ushort)bVar46 + (ushort)bVar77 + (ushort)bVar86;
      sVar101 = (ushort)bVar54 + (ushort)bVar47 + (ushort)bVar78 + (ushort)bVar87;
      sVar102 = (ushort)bVar55 + (ushort)bVar48 + (ushort)bVar79 + (ushort)bVar88;
      sVar103 = (ushort)bVar56 + (ushort)bVar49 + (ushort)bVar80 + (ushort)bVar89;
      sVar104 = (ushort)bVar57 + (ushort)bVar50 + (ushort)bVar81 + (ushort)bVar90;
      uVar93 = CONCAT17((char)((ushort)(((ushort)bVar81 + (ushort)bVar57) * 2 + sVar104) >> 3),
                        CONCAT16((char)((ushort)(((ushort)bVar80 + (ushort)bVar56) * 2 + sVar103) >>
                                       3),CONCAT15((char)((ushort)(((ushort)bVar79 + (ushort)bVar55)
                                                                   * 2 + sVar102) >> 3),
                                                   CONCAT14((char)((ushort)(((ushort)bVar78 +
                                                                            (ushort)bVar54) * 2 +
                                                                           sVar101) >> 3),
                                                            CONCAT13((char)((ushort)(((ushort)bVar77
                                                                                     + (ushort)
                                                  bVar53) * 2 + sVar100) >> 3),
                                                  CONCAT12((char)((ushort)(((ushort)bVar76 +
                                                                           (ushort)bVar52) * 2 +
                                                                          sVar99) >> 3),
                                                           CONCAT11((char)((ushort)(((ushort)bVar75
                                                                                    + (ushort)bVar51
                                                                                    ) * 2 + sVar98)
                                                                          >> 3),
                                                                    (char)((ushort)(((ushort)(byte)
                                                  uVar69 + (ushort)(byte)uVar64) * 2 + sVar95) >> 3)
                                                  )))))));
      uVar91 = CONCAT17((char)((ushort)(sVar104 + (ushort)bVar50 * 2 + (ushort)bVar90 * 2) >> 3),
                        CONCAT16((char)((ushort)(sVar103 + (ushort)bVar49 * 2 + (ushort)bVar89 * 2)
                                       >> 3),
                                 CONCAT15((char)((ushort)(sVar102 + (ushort)bVar48 * 2 +
                                                         (ushort)bVar88 * 2) >> 3),
                                          CONCAT14((char)((ushort)(sVar101 + (ushort)bVar47 * 2 +
                                                                  (ushort)bVar87 * 2) >> 3),
                                                   CONCAT13((char)((ushort)(sVar100 + (ushort)bVar46
                                                                                      * 2 +
                                                                           (ushort)bVar86 * 2) >> 3)
                                                            ,CONCAT12((char)((ushort)(sVar99 + (
                                                  ushort)bVar45 * 2 + (ushort)bVar85 * 2) >> 3),
                                                  CONCAT11((char)((ushort)(sVar98 + (ushort)bVar44 *
                                                                                    2 +
                                                                          (ushort)bVar84 * 2) >> 3),
                                                           (char)((ushort)(sVar95 + (ushort)(byte)
                                                  uVar58 * 2 + (ushort)(byte)uVar82 * 2) >> 3)))))))
                       );
      uVar96 = NEON_urhadd(uVar58,uVar93,1);
      uVar105 = NEON_urhadd(uVar64,uVar91,1);
      uVar58 = NEON_urhadd(uVar69,uVar91,1);
      uVar64 = NEON_urhadd(uVar82,uVar93,1);
      local_b0[0] = (byte)uVar96;
      local_b0[1] = (byte)uVar105;
      local_b0[2] = (byte)((ulong)uVar96 >> 8);
      local_b0[3] = (byte)((ulong)uVar105 >> 8);
      bStack_ac = (byte)((ulong)uVar96 >> 0x10);
      bStack_ab = (byte)((ulong)uVar105 >> 0x10);
      bStack_aa = (byte)((ulong)uVar96 >> 0x18);
      bStack_a9 = (byte)((ulong)uVar105 >> 0x18);
      local_a8 = (byte)((ulong)uVar96 >> 0x20);
      bStack_a7 = (byte)((ulong)uVar105 >> 0x20);
      bStack_a6 = (byte)((ulong)uVar96 >> 0x28);
      bStack_a5 = (byte)((ulong)uVar105 >> 0x28);
      bStack_a4 = (byte)((ulong)uVar96 >> 0x30);
      bStack_a3 = (byte)((ulong)uVar105 >> 0x30);
      bStack_a2 = (byte)((ulong)uVar96 >> 0x38);
      bStack_a1 = (byte)((ulong)uVar105 >> 0x38);
      local_90[0] = (byte)uVar58;
      local_90[1] = (byte)uVar64;
      local_90[2] = (byte)((ulong)uVar58 >> 8);
      local_90[3] = (byte)((ulong)uVar64 >> 8);
      bStack_8c = (byte)((ulong)uVar58 >> 0x10);
      bStack_8b = (byte)((ulong)uVar64 >> 0x10);
      bStack_8a = (byte)((ulong)uVar58 >> 0x18);
      bStack_89 = (byte)((ulong)uVar64 >> 0x18);
      local_88 = (byte)((ulong)uVar58 >> 0x20);
      bStack_87 = (byte)((ulong)uVar64 >> 0x20);
      bStack_86 = (byte)((ulong)uVar58 >> 0x28);
      bStack_85 = (byte)((ulong)uVar64 >> 0x28);
      bStack_84 = (byte)((ulong)uVar58 >> 0x30);
      bStack_83 = (byte)((ulong)uVar64 >> 0x30);
      bStack_82 = (byte)((ulong)uVar58 >> 0x38);
      bStack_81 = (byte)((ulong)uVar64 >> 0x38);
      uVar58 = *(undefined8 *)param_4;
      uVar69 = *(undefined8 *)(param_4 + 1);
      uVar82 = *(undefined8 *)pbVar40;
      uVar64 = *(undefined8 *)(pbVar40 + 1);
      bVar44 = (byte)((ulong)uVar58 >> 8);
      bVar45 = (byte)((ulong)uVar58 >> 0x10);
      bVar46 = (byte)((ulong)uVar58 >> 0x18);
      bVar47 = (byte)((ulong)uVar58 >> 0x20);
      bVar48 = (byte)((ulong)uVar58 >> 0x28);
      bVar49 = (byte)((ulong)uVar58 >> 0x30);
      bVar50 = (byte)((ulong)uVar58 >> 0x38);
      bVar75 = (byte)((ulong)uVar69 >> 8);
      bVar76 = (byte)((ulong)uVar69 >> 0x10);
      bVar77 = (byte)((ulong)uVar69 >> 0x18);
      bVar78 = (byte)((ulong)uVar69 >> 0x20);
      bVar79 = (byte)((ulong)uVar69 >> 0x28);
      bVar80 = (byte)((ulong)uVar69 >> 0x30);
      bVar81 = (byte)((ulong)uVar69 >> 0x38);
      bVar84 = (byte)((ulong)uVar82 >> 8);
      bVar85 = (byte)((ulong)uVar82 >> 0x10);
      bVar86 = (byte)((ulong)uVar82 >> 0x18);
      bVar87 = (byte)((ulong)uVar82 >> 0x20);
      bVar88 = (byte)((ulong)uVar82 >> 0x28);
      bVar89 = (byte)((ulong)uVar82 >> 0x30);
      bVar90 = (byte)((ulong)uVar82 >> 0x38);
      bVar51 = (byte)((ulong)uVar64 >> 8);
      bVar52 = (byte)((ulong)uVar64 >> 0x10);
      bVar53 = (byte)((ulong)uVar64 >> 0x18);
      bVar54 = (byte)((ulong)uVar64 >> 0x20);
      bVar55 = (byte)((ulong)uVar64 >> 0x28);
      bVar56 = (byte)((ulong)uVar64 >> 0x30);
      bVar57 = (byte)((ulong)uVar64 >> 0x38);
      sVar95 = (ushort)(byte)uVar69 + (ushort)(byte)uVar58 + (ushort)(byte)uVar82 +
               (ushort)(byte)uVar64;
      sVar98 = (ushort)bVar75 + (ushort)bVar44 + (ushort)bVar84 + (ushort)bVar51;
      sVar99 = (ushort)bVar76 + (ushort)bVar45 + (ushort)bVar85 + (ushort)bVar52;
      sVar100 = (ushort)bVar77 + (ushort)bVar46 + (ushort)bVar86 + (ushort)bVar53;
      sVar101 = (ushort)bVar78 + (ushort)bVar47 + (ushort)bVar87 + (ushort)bVar54;
      sVar102 = (ushort)bVar79 + (ushort)bVar48 + (ushort)bVar88 + (ushort)bVar55;
      sVar103 = (ushort)bVar80 + (ushort)bVar49 + (ushort)bVar89 + (ushort)bVar56;
      sVar104 = (ushort)bVar81 + (ushort)bVar50 + (ushort)bVar90 + (ushort)bVar57;
      uVar93 = CONCAT17((char)((ushort)(((ushort)bVar90 + (ushort)bVar81) * 2 + sVar104) >> 3),
                        CONCAT16((char)((ushort)(((ushort)bVar89 + (ushort)bVar80) * 2 + sVar103) >>
                                       3),CONCAT15((char)((ushort)(((ushort)bVar88 + (ushort)bVar79)
                                                                   * 2 + sVar102) >> 3),
                                                   CONCAT14((char)((ushort)(((ushort)bVar87 +
                                                                            (ushort)bVar78) * 2 +
                                                                           sVar101) >> 3),
                                                            CONCAT13((char)((ushort)(((ushort)bVar86
                                                                                     + (ushort)
                                                  bVar77) * 2 + sVar100) >> 3),
                                                  CONCAT12((char)((ushort)(((ushort)bVar85 +
                                                                           (ushort)bVar76) * 2 +
                                                                          sVar99) >> 3),
                                                           CONCAT11((char)((ushort)(((ushort)bVar84
                                                                                    + (ushort)bVar75
                                                                                    ) * 2 + sVar98)
                                                                          >> 3),
                                                                    (char)((ushort)(((ushort)(byte)
                                                  uVar82 + (ushort)(byte)uVar69) * 2 + sVar95) >> 3)
                                                  )))))));
      uVar91 = CONCAT17((char)((ushort)(sVar104 + (ushort)bVar50 * 2 + (ushort)bVar57 * 2) >> 3),
                        CONCAT16((char)((ushort)(sVar103 + (ushort)bVar49 * 2 + (ushort)bVar56 * 2)
                                       >> 3),
                                 CONCAT15((char)((ushort)(sVar102 + (ushort)bVar48 * 2 +
                                                         (ushort)bVar55 * 2) >> 3),
                                          CONCAT14((char)((ushort)(sVar101 + (ushort)bVar47 * 2 +
                                                                  (ushort)bVar54 * 2) >> 3),
                                                   CONCAT13((char)((ushort)(sVar100 + (ushort)bVar46
                                                                                      * 2 +
                                                                           (ushort)bVar53 * 2) >> 3)
                                                            ,CONCAT12((char)((ushort)(sVar99 + (
                                                  ushort)bVar45 * 2 + (ushort)bVar52 * 2) >> 3),
                                                  CONCAT11((char)((ushort)(sVar98 + (ushort)bVar44 *
                                                                                    2 +
                                                                          (ushort)bVar51 * 2) >> 3),
                                                           (char)((ushort)(sVar95 + (ushort)(byte)
                                                  uVar58 * 2 + (ushort)(byte)uVar64 * 2) >> 3)))))))
                       );
      uVar96 = NEON_urhadd(uVar58,uVar93,1);
      uVar69 = NEON_urhadd(uVar69,uVar91,1);
      uVar58 = NEON_urhadd(uVar82,uVar91,1);
      uVar64 = NEON_urhadd(uVar64,uVar93,1);
      local_a0[0] = (byte)uVar96;
      local_a0[1] = (byte)uVar69;
      local_a0[2] = (byte)((ulong)uVar96 >> 8);
      local_a0[3] = (byte)((ulong)uVar69 >> 8);
      bStack_9c = (byte)((ulong)uVar96 >> 0x10);
      bStack_9b = (byte)((ulong)uVar69 >> 0x10);
      bStack_9a = (byte)((ulong)uVar96 >> 0x18);
      bStack_99 = (byte)((ulong)uVar69 >> 0x18);
      local_98 = (byte)((ulong)uVar96 >> 0x20);
      bStack_97 = (byte)((ulong)uVar69 >> 0x20);
      bStack_96 = (byte)((ulong)uVar96 >> 0x28);
      bStack_95 = (byte)((ulong)uVar69 >> 0x28);
      bStack_94 = (byte)((ulong)uVar96 >> 0x30);
      bStack_93 = (byte)((ulong)uVar69 >> 0x30);
      bStack_92 = (byte)((ulong)uVar96 >> 0x38);
      bStack_91 = (byte)((ulong)uVar69 >> 0x38);
      local_80[0] = (byte)uVar58;
      local_80[1] = (byte)uVar64;
      local_80[2] = (byte)((ulong)uVar58 >> 8);
      local_80[3] = (byte)((ulong)uVar64 >> 8);
      bStack_7c = (byte)((ulong)uVar58 >> 0x10);
      bStack_7b = (byte)((ulong)uVar64 >> 0x10);
      bStack_7a = (byte)((ulong)uVar58 >> 0x18);
      bStack_79 = (byte)((ulong)uVar64 >> 0x18);
      local_78 = (byte)((ulong)uVar58 >> 0x20);
      bStack_77 = (byte)((ulong)uVar64 >> 0x20);
      bStack_76 = (byte)((ulong)uVar58 >> 0x28);
      bStack_75 = (byte)((ulong)uVar64 >> 0x28);
      bStack_74 = (byte)((ulong)uVar58 >> 0x30);
      bStack_73 = (byte)((ulong)uVar64 >> 0x30);
      bStack_72 = (byte)((ulong)uVar58 >> 0x38);
      bStack_71 = (byte)((ulong)uVar64 >> 0x38);
      uVar58 = *(undefined8 *)(param_1 + (lVar36 >> 0x20));
      auVar59._0_2_ = (ushort)(byte)uVar58 << 7;
      auVar59._2_2_ = (ushort)(byte)((ulong)uVar58 >> 8) << 7;
      auVar59._4_2_ = (ushort)(byte)((ulong)uVar58 >> 0x10) << 7;
      auVar59._6_2_ = (ushort)(byte)((ulong)uVar58 >> 0x18) << 7;
      auVar59._8_2_ = (ushort)(byte)((ulong)uVar58 >> 0x20) << 7;
      auVar59._10_2_ = (ushort)(byte)((ulong)uVar58 >> 0x28) << 7;
      auVar59._12_2_ = (ushort)(byte)((ulong)uVar58 >> 0x30) << 7;
      auVar59._14_2_ = (ushort)(byte)((ulong)uVar58 >> 0x38) << 7;
      auVar65._0_2_ = (ushort)local_b0[0] << 7;
      auVar65._2_2_ = (ushort)local_b0[1] << 7;
      auVar65._4_2_ = (ushort)local_b0[2] << 7;
      auVar65._6_2_ = (ushort)local_b0[3] << 7;
      auVar65._8_2_ = (ushort)bStack_ac << 7;
      auVar65._10_2_ = (ushort)bStack_ab << 7;
      auVar65._12_2_ = (ushort)bStack_aa << 7;
      auVar65._14_2_ = (ushort)bStack_a9 << 7;
      auVar70._0_2_ = (ushort)local_a0[0] << 7;
      auVar70._2_2_ = (ushort)local_a0[1] << 7;
      auVar70._4_2_ = (ushort)local_a0[2] << 7;
      auVar70._6_2_ = (ushort)local_a0[3] << 7;
      auVar70._8_2_ = (ushort)bStack_9c << 7;
      auVar70._10_2_ = (ushort)bStack_9b << 7;
      auVar70._12_2_ = (ushort)bStack_9a << 7;
      auVar70._14_2_ = (ushort)bStack_99 << 7;
      auVar60._8_2_ = 0x4a85;
      auVar60._0_8_ = 0x4a854a854a854a85;
      auVar60._10_2_ = 0x4a85;
      auVar60._12_2_ = 0x4a85;
      auVar60._14_2_ = 0x4a85;
      auVar60 = NEON_sqdmulh(auVar59,auVar60,2);
      auVar83._8_2_ = 0x6625;
      auVar83._0_8_ = 0x6625662566256625;
      auVar83._10_2_ = 0x6625;
      auVar83._12_2_ = 0x6625;
      auVar83._14_2_ = 0x6625;
      auVar83 = NEON_sqdmulh(auVar70,auVar83,2);
      auVar94._8_2_ = 0x1913;
      auVar94._0_8_ = 0x1913191319131913;
      auVar94._10_2_ = 0x1913;
      auVar94._12_2_ = 0x1913;
      auVar94._14_2_ = 0x1913;
      auVar92 = NEON_sqdmulh(auVar65,auVar94,2);
      auVar106._8_2_ = 0x3408;
      auVar106._0_8_ = 0x3408340834083408;
      auVar106._10_2_ = 0x3408;
      auVar106._12_2_ = 0x3408;
      auVar106._14_2_ = 0x3408;
      auVar71 = NEON_sqdmulh(auVar70,auVar106,2);
      auVar22._8_2_ = 0xc866;
      auVar22._0_8_ = 0xc866c866c866c866;
      auVar22._10_2_ = 0xc866;
      auVar22._12_2_ = 0xc866;
      auVar22._14_2_ = 0xc866;
      auVar97 = NEON_sqadd(auVar60,auVar22,2);
      auVar18._8_2_ = 0x11a;
      auVar18._0_8_ = 0x11a011a011a011a;
      auVar18._10_2_ = 0x11a;
      auVar18._12_2_ = 0x11a;
      auVar18._14_2_ = 0x11a;
      auVar94 = NEON_sqdmulh(auVar65,auVar18,2);
      auVar26._8_2_ = 0x2204;
      auVar26._0_8_ = 0x2204220422042204;
      auVar26._10_2_ = 0x2204;
      auVar26._12_2_ = 0x2204;
      auVar26._14_2_ = 0x2204;
      auVar106 = NEON_sqadd(auVar60,auVar26,2);
      auVar30._8_2_ = 0xbaeb;
      auVar30._0_8_ = 0xbaebbaebbaebbaeb;
      auVar30._10_2_ = 0xbaeb;
      auVar30._12_2_ = 0xbaeb;
      auVar30._14_2_ = 0xbaeb;
      auVar60 = NEON_sqadd(auVar60,auVar30,2);
      auVar71 = NEON_sqadd(auVar92,auVar71,2);
      auVar83 = NEON_sqadd(auVar83,auVar97,2);
      auVar60 = NEON_sqadd(auVar94,auVar60,2);
      auVar71 = NEON_sqsub(auVar106,auVar71,2);
      in_d5 = NEON_sqshrun(in_d5,auVar83,6,2);
      auVar60 = NEON_sqadd(auVar60,auVar65,2);
      in_d4 = NEON_sqshrun(in_d4,auVar71,6,2);
      pcVar4 = param_7 + (iVar41 + -0x20);
      in_d3 = NEON_sqshrun(in_d3,auVar60,6,2);
      *pcVar4 = (char)in_d3;
      pcVar4[1] = (char)in_d4;
      pcVar4[2] = (char)in_d5;
      pcVar4[3] = -1;
      pcVar4[4] = (char)((ulong)in_d3 >> 8);
      pcVar4[5] = (char)((ulong)in_d4 >> 8);
      pcVar4[6] = (char)((ulong)in_d5 >> 8);
      pcVar4[7] = -1;
      pcVar4[8] = (char)((ulong)in_d3 >> 0x10);
      pcVar4[9] = (char)((ulong)in_d4 >> 0x10);
      pcVar4[10] = (char)((ulong)in_d5 >> 0x10);
      pcVar4[0xb] = -1;
      pcVar4[0xc] = (char)((ulong)in_d3 >> 0x18);
      pcVar4[0xd] = (char)((ulong)in_d4 >> 0x18);
      pcVar4[0xe] = (char)((ulong)in_d5 >> 0x18);
      pcVar4[0xf] = -1;
      pcVar4[0x10] = (char)((ulong)in_d3 >> 0x20);
      pcVar4[0x11] = (char)((ulong)in_d4 >> 0x20);
      pcVar4[0x12] = (char)((ulong)in_d5 >> 0x20);
      pcVar4[0x13] = -1;
      pcVar4[0x14] = (char)((ulong)in_d3 >> 0x28);
      pcVar4[0x15] = (char)((ulong)in_d4 >> 0x28);
      pcVar4[0x16] = (char)((ulong)in_d5 >> 0x28);
      pcVar4[0x17] = -1;
      pcVar4[0x18] = (char)((ulong)in_d3 >> 0x30);
      pcVar4[0x19] = (char)((ulong)in_d4 >> 0x30);
      pcVar4[0x1a] = (char)((ulong)in_d5 >> 0x30);
      pcVar4[0x1b] = -1;
      pcVar4[0x1c] = (char)((ulong)in_d3 >> 0x38);
      pcVar4[0x1d] = (char)((ulong)in_d4 >> 0x38);
      pcVar4[0x1e] = (char)((ulong)in_d5 >> 0x38);
      pcVar4[0x1f] = -1;
      uVar58 = *(undefined8 *)(param_1 + (lVar36 >> 0x20) + 8);
      auVar61._0_2_ = (ushort)(byte)uVar58 << 7;
      auVar61._2_2_ = (ushort)(byte)((ulong)uVar58 >> 8) << 7;
      auVar61._4_2_ = (ushort)(byte)((ulong)uVar58 >> 0x10) << 7;
      auVar61._6_2_ = (ushort)(byte)((ulong)uVar58 >> 0x18) << 7;
      auVar61._8_2_ = (ushort)(byte)((ulong)uVar58 >> 0x20) << 7;
      auVar61._10_2_ = (ushort)(byte)((ulong)uVar58 >> 0x28) << 7;
      auVar61._12_2_ = (ushort)(byte)((ulong)uVar58 >> 0x30) << 7;
      auVar61._14_2_ = (ushort)(byte)((ulong)uVar58 >> 0x38) << 7;
      auVar66._0_2_ = (ushort)local_a8 << 7;
      auVar66._2_2_ = (ushort)bStack_a7 << 7;
      auVar66._4_2_ = (ushort)bStack_a6 << 7;
      auVar66._6_2_ = (ushort)bStack_a5 << 7;
      auVar66._8_2_ = (ushort)bStack_a4 << 7;
      auVar66._10_2_ = (ushort)bStack_a3 << 7;
      auVar66._12_2_ = (ushort)bStack_a2 << 7;
      auVar66._14_2_ = (ushort)bStack_a1 << 7;
      auVar72._0_2_ = (ushort)local_98 << 7;
      auVar72._2_2_ = (ushort)bStack_97 << 7;
      auVar72._4_2_ = (ushort)bStack_96 << 7;
      auVar72._6_2_ = (ushort)bStack_95 << 7;
      auVar72._8_2_ = (ushort)bStack_94 << 7;
      auVar72._10_2_ = (ushort)bStack_93 << 7;
      auVar72._12_2_ = (ushort)bStack_92 << 7;
      auVar72._14_2_ = (ushort)bStack_91 << 7;
      auVar71._8_2_ = 0x4a85;
      auVar71._0_8_ = 0x4a854a854a854a85;
      auVar71._10_2_ = 0x4a85;
      auVar71._12_2_ = 0x4a85;
      auVar71._14_2_ = 0x4a85;
      auVar60 = NEON_sqdmulh(auVar61,auVar71,2);
      auVar92._8_2_ = 0x6625;
      auVar92._0_8_ = 0x6625662566256625;
      auVar92._10_2_ = 0x6625;
      auVar92._12_2_ = 0x6625;
      auVar92._14_2_ = 0x6625;
      auVar83 = NEON_sqdmulh(auVar72,auVar92,2);
      auVar97._8_2_ = 0x1913;
      auVar97._0_8_ = 0x1913191319131913;
      auVar97._10_2_ = 0x1913;
      auVar97._12_2_ = 0x1913;
      auVar97._14_2_ = 0x1913;
      auVar92 = NEON_sqdmulh(auVar66,auVar97,2);
      auVar15._8_2_ = 0x3408;
      auVar15._0_8_ = 0x3408340834083408;
      auVar15._10_2_ = 0x3408;
      auVar15._12_2_ = 0x3408;
      auVar15._14_2_ = 0x3408;
      auVar71 = NEON_sqdmulh(auVar72,auVar15,2);
      auVar23._8_2_ = 0xc866;
      auVar23._0_8_ = 0xc866c866c866c866;
      auVar23._10_2_ = 0xc866;
      auVar23._12_2_ = 0xc866;
      auVar23._14_2_ = 0xc866;
      auVar97 = NEON_sqadd(auVar60,auVar23,2);
      auVar19._8_2_ = 0x11a;
      auVar19._0_8_ = 0x11a011a011a011a;
      auVar19._10_2_ = 0x11a;
      auVar19._12_2_ = 0x11a;
      auVar19._14_2_ = 0x11a;
      auVar94 = NEON_sqdmulh(auVar66,auVar19,2);
      auVar27._8_2_ = 0x2204;
      auVar27._0_8_ = 0x2204220422042204;
      auVar27._10_2_ = 0x2204;
      auVar27._12_2_ = 0x2204;
      auVar27._14_2_ = 0x2204;
      auVar106 = NEON_sqadd(auVar60,auVar27,2);
      auVar31._8_2_ = 0xbaeb;
      auVar31._0_8_ = 0xbaebbaebbaebbaeb;
      auVar31._10_2_ = 0xbaeb;
      auVar31._12_2_ = 0xbaeb;
      auVar31._14_2_ = 0xbaeb;
      auVar60 = NEON_sqadd(auVar60,auVar31,2);
      auVar71 = NEON_sqadd(auVar92,auVar71,2);
      auVar83 = NEON_sqadd(auVar83,auVar97,2);
      auVar60 = NEON_sqadd(auVar94,auVar60,2);
      auVar71 = NEON_sqsub(auVar106,auVar71,2);
      uVar69 = NEON_sqshrun(auVar94._0_8_,auVar83,6,2);
      auVar60 = NEON_sqadd(auVar60,auVar66,2);
      uVar64 = NEON_sqshrun(auVar92._0_8_,auVar71,6,2);
      uVar58 = NEON_sqshrun(auVar83._0_8_,auVar60,6,2);
      pcVar4 = param_7 + iVar41;
      *pcVar4 = (char)uVar58;
      pcVar4[1] = (char)uVar64;
      pcVar4[2] = (char)uVar69;
      pcVar4[3] = -1;
      pcVar4[4] = (char)((ulong)uVar58 >> 8);
      pcVar4[5] = (char)((ulong)uVar64 >> 8);
      pcVar4[6] = (char)((ulong)uVar69 >> 8);
      pcVar4[7] = -1;
      pcVar4[8] = (char)((ulong)uVar58 >> 0x10);
      pcVar4[9] = (char)((ulong)uVar64 >> 0x10);
      pcVar4[10] = (char)((ulong)uVar69 >> 0x10);
      pcVar4[0xb] = -1;
      pcVar4[0xc] = (char)((ulong)uVar58 >> 0x18);
      pcVar4[0xd] = (char)((ulong)uVar64 >> 0x18);
      pcVar4[0xe] = (char)((ulong)uVar69 >> 0x18);
      pcVar4[0xf] = -1;
      pcVar4[0x10] = (char)((ulong)uVar58 >> 0x20);
      pcVar4[0x11] = (char)((ulong)uVar64 >> 0x20);
      pcVar4[0x12] = (char)((ulong)uVar69 >> 0x20);
      pcVar4[0x13] = -1;
      pcVar4[0x14] = (char)((ulong)uVar58 >> 0x28);
      pcVar4[0x15] = (char)((ulong)uVar64 >> 0x28);
      pcVar4[0x16] = (char)((ulong)uVar69 >> 0x28);
      pcVar4[0x17] = -1;
      pcVar4[0x18] = (char)((ulong)uVar58 >> 0x30);
      pcVar4[0x19] = (char)((ulong)uVar64 >> 0x30);
      pcVar4[0x1a] = (char)((ulong)uVar69 >> 0x30);
      pcVar4[0x1b] = -1;
      pcVar4[0x1c] = (char)((ulong)uVar58 >> 0x38);
      pcVar4[0x1d] = (char)((ulong)uVar64 >> 0x38);
      pcVar4[0x1e] = (char)((ulong)uVar69 >> 0x38);
      pcVar4[0x1f] = -1;
      if (param_2 != (byte *)0x0) {
        uVar58 = *(undefined8 *)(param_2 + (lVar36 >> 0x20));
        pcVar4 = param_8 + (iVar41 + -0x20);
        auVar62._0_2_ = (ushort)local_90[0] << 7;
        auVar62._2_2_ = (ushort)local_90[1] << 7;
        auVar62._4_2_ = (ushort)local_90[2] << 7;
        auVar62._6_2_ = (ushort)local_90[3] << 7;
        auVar62._8_2_ = (ushort)bStack_8c << 7;
        auVar62._10_2_ = (ushort)bStack_8b << 7;
        auVar62._12_2_ = (ushort)bStack_8a << 7;
        auVar62._14_2_ = (ushort)bStack_89 << 7;
        auVar67._0_2_ = (ushort)local_80[0] << 7;
        auVar67._2_2_ = (ushort)local_80[1] << 7;
        auVar67._4_2_ = (ushort)local_80[2] << 7;
        auVar67._6_2_ = (ushort)local_80[3] << 7;
        auVar67._8_2_ = (ushort)bStack_7c << 7;
        auVar67._10_2_ = (ushort)bStack_7b << 7;
        auVar67._12_2_ = (ushort)bStack_7a << 7;
        auVar67._14_2_ = (ushort)bStack_79 << 7;
        auVar73._0_2_ = (ushort)(byte)uVar58 << 7;
        auVar73._2_2_ = (ushort)(byte)((ulong)uVar58 >> 8) << 7;
        auVar73._4_2_ = (ushort)(byte)((ulong)uVar58 >> 0x10) << 7;
        auVar73._6_2_ = (ushort)(byte)((ulong)uVar58 >> 0x18) << 7;
        auVar73._8_2_ = (ushort)(byte)((ulong)uVar58 >> 0x20) << 7;
        auVar73._10_2_ = (ushort)(byte)((ulong)uVar58 >> 0x28) << 7;
        auVar73._12_2_ = (ushort)(byte)((ulong)uVar58 >> 0x30) << 7;
        auVar73._14_2_ = (ushort)(byte)((ulong)uVar58 >> 0x38) << 7;
        auVar11._8_2_ = 0x6625;
        auVar11._0_8_ = 0x6625662566256625;
        auVar11._10_2_ = 0x6625;
        auVar11._12_2_ = 0x6625;
        auVar11._14_2_ = 0x6625;
        auVar83 = NEON_sqdmulh(auVar67,auVar11,2);
        auVar13._8_2_ = 0x1913;
        auVar13._0_8_ = 0x1913191319131913;
        auVar13._10_2_ = 0x1913;
        auVar13._12_2_ = 0x1913;
        auVar13._14_2_ = 0x1913;
        auVar92 = NEON_sqdmulh(auVar62,auVar13,2);
        auVar16._8_2_ = 0x3408;
        auVar16._0_8_ = 0x3408340834083408;
        auVar16._10_2_ = 0x3408;
        auVar16._12_2_ = 0x3408;
        auVar16._14_2_ = 0x3408;
        auVar60 = NEON_sqdmulh(auVar67,auVar16,2);
        auVar9._8_2_ = 0x4a85;
        auVar9._0_8_ = 0x4a854a854a854a85;
        auVar9._10_2_ = 0x4a85;
        auVar9._12_2_ = 0x4a85;
        auVar9._14_2_ = 0x4a85;
        auVar71 = NEON_sqdmulh(auVar73,auVar9,2);
        auVar20._8_2_ = 0x11a;
        auVar20._0_8_ = 0x11a011a011a011a;
        auVar20._10_2_ = 0x11a;
        auVar20._12_2_ = 0x11a;
        auVar20._14_2_ = 0x11a;
        auVar97 = NEON_sqdmulh(auVar62,auVar20,2);
        auVar60 = NEON_sqadd(auVar92,auVar60,2);
        auVar24._8_2_ = 0xc866;
        auVar24._0_8_ = 0xc866c866c866c866;
        auVar24._10_2_ = 0xc866;
        auVar24._12_2_ = 0xc866;
        auVar24._14_2_ = 0xc866;
        auVar94 = NEON_sqadd(auVar71,auVar24,2);
        auVar28._8_2_ = 0x2204;
        auVar28._0_8_ = 0x2204220422042204;
        auVar28._10_2_ = 0x2204;
        auVar28._12_2_ = 0x2204;
        auVar28._14_2_ = 0x2204;
        auVar106 = NEON_sqadd(auVar71,auVar28,2);
        auVar32._8_2_ = 0xbaeb;
        auVar32._0_8_ = 0xbaebbaebbaebbaeb;
        auVar32._10_2_ = 0xbaeb;
        auVar32._12_2_ = 0xbaeb;
        auVar32._14_2_ = 0xbaeb;
        auVar71 = NEON_sqadd(auVar71,auVar32,2);
        auVar92 = NEON_sqadd(auVar83,auVar94,2);
        auVar83 = NEON_sqadd(auVar97,auVar71,2);
        auVar71 = NEON_sqsub(auVar106,auVar60,2);
        auVar60 = NEON_sqadd(auVar83,auVar62,2);
        uVar69 = NEON_sqshrun(auVar94._0_8_,auVar92,6,2);
        uVar64 = NEON_sqshrun(auVar92._0_8_,auVar71,6,2);
        uVar58 = NEON_sqshrun(auVar83._0_8_,auVar60,6,2);
        *pcVar4 = (char)uVar58;
        pcVar4[1] = (char)uVar64;
        pcVar4[2] = (char)uVar69;
        pcVar4[3] = -1;
        pcVar4[4] = (char)((ulong)uVar58 >> 8);
        pcVar4[5] = (char)((ulong)uVar64 >> 8);
        pcVar4[6] = (char)((ulong)uVar69 >> 8);
        pcVar4[7] = -1;
        pcVar4[8] = (char)((ulong)uVar58 >> 0x10);
        pcVar4[9] = (char)((ulong)uVar64 >> 0x10);
        pcVar4[10] = (char)((ulong)uVar69 >> 0x10);
        pcVar4[0xb] = -1;
        pcVar4[0xc] = (char)((ulong)uVar58 >> 0x18);
        pcVar4[0xd] = (char)((ulong)uVar64 >> 0x18);
        pcVar4[0xe] = (char)((ulong)uVar69 >> 0x18);
        pcVar4[0xf] = -1;
        pcVar4[0x10] = (char)((ulong)uVar58 >> 0x20);
        pcVar4[0x11] = (char)((ulong)uVar64 >> 0x20);
        pcVar4[0x12] = (char)((ulong)uVar69 >> 0x20);
        pcVar4[0x13] = -1;
        pcVar4[0x14] = (char)((ulong)uVar58 >> 0x28);
        pcVar4[0x15] = (char)((ulong)uVar64 >> 0x28);
        pcVar4[0x16] = (char)((ulong)uVar69 >> 0x28);
        pcVar4[0x17] = -1;
        pcVar4[0x18] = (char)((ulong)uVar58 >> 0x30);
        pcVar4[0x19] = (char)((ulong)uVar64 >> 0x30);
        pcVar4[0x1a] = (char)((ulong)uVar69 >> 0x30);
        pcVar4[0x1b] = -1;
        pcVar4[0x1c] = (char)((ulong)uVar58 >> 0x38);
        pcVar4[0x1d] = (char)((ulong)uVar64 >> 0x38);
        pcVar4[0x1e] = (char)((ulong)uVar69 >> 0x38);
        pcVar4[0x1f] = -1;
        uVar58 = *(undefined8 *)(param_2 + (lVar36 >> 0x20) + 8);
        pcVar4 = param_8 + iVar41;
        auVar63._0_2_ = (ushort)(byte)uVar58 << 7;
        auVar63._2_2_ = (ushort)(byte)((ulong)uVar58 >> 8) << 7;
        auVar63._4_2_ = (ushort)(byte)((ulong)uVar58 >> 0x10) << 7;
        auVar63._6_2_ = (ushort)(byte)((ulong)uVar58 >> 0x18) << 7;
        auVar63._8_2_ = (ushort)(byte)((ulong)uVar58 >> 0x20) << 7;
        auVar63._10_2_ = (ushort)(byte)((ulong)uVar58 >> 0x28) << 7;
        auVar63._12_2_ = (ushort)(byte)((ulong)uVar58 >> 0x30) << 7;
        auVar63._14_2_ = (ushort)(byte)((ulong)uVar58 >> 0x38) << 7;
        auVar68._0_2_ = (ushort)local_88 << 7;
        auVar68._2_2_ = (ushort)bStack_87 << 7;
        auVar68._4_2_ = (ushort)bStack_86 << 7;
        auVar68._6_2_ = (ushort)bStack_85 << 7;
        auVar68._8_2_ = (ushort)bStack_84 << 7;
        auVar68._10_2_ = (ushort)bStack_83 << 7;
        auVar68._12_2_ = (ushort)bStack_82 << 7;
        auVar68._14_2_ = (ushort)bStack_81 << 7;
        auVar74._0_2_ = (ushort)local_78 << 7;
        auVar74._2_2_ = (ushort)bStack_77 << 7;
        auVar74._4_2_ = (ushort)bStack_76 << 7;
        auVar74._6_2_ = (ushort)bStack_75 << 7;
        auVar74._8_2_ = (ushort)bStack_74 << 7;
        auVar74._10_2_ = (ushort)bStack_73 << 7;
        auVar74._12_2_ = (ushort)bStack_72 << 7;
        auVar74._14_2_ = (ushort)bStack_71 << 7;
        auVar10._8_2_ = 0x4a85;
        auVar10._0_8_ = 0x4a854a854a854a85;
        auVar10._10_2_ = 0x4a85;
        auVar10._12_2_ = 0x4a85;
        auVar10._14_2_ = 0x4a85;
        auVar60 = NEON_sqdmulh(auVar63,auVar10,2);
        auVar12._8_2_ = 0x6625;
        auVar12._0_8_ = 0x6625662566256625;
        auVar12._10_2_ = 0x6625;
        auVar12._12_2_ = 0x6625;
        auVar12._14_2_ = 0x6625;
        auVar83 = NEON_sqdmulh(auVar74,auVar12,2);
        auVar14._8_2_ = 0x1913;
        auVar14._0_8_ = 0x1913191319131913;
        auVar14._10_2_ = 0x1913;
        auVar14._12_2_ = 0x1913;
        auVar14._14_2_ = 0x1913;
        auVar92 = NEON_sqdmulh(auVar68,auVar14,2);
        auVar17._8_2_ = 0x3408;
        auVar17._0_8_ = 0x3408340834083408;
        auVar17._10_2_ = 0x3408;
        auVar17._12_2_ = 0x3408;
        auVar17._14_2_ = 0x3408;
        auVar71 = NEON_sqdmulh(auVar74,auVar17,2);
        auVar25._8_2_ = 0xc866;
        auVar25._0_8_ = 0xc866c866c866c866;
        auVar25._10_2_ = 0xc866;
        auVar25._12_2_ = 0xc866;
        auVar25._14_2_ = 0xc866;
        auVar97 = NEON_sqadd(auVar60,auVar25,2);
        auVar21._8_2_ = 0x11a;
        auVar21._0_8_ = 0x11a011a011a011a;
        auVar21._10_2_ = 0x11a;
        auVar21._12_2_ = 0x11a;
        auVar21._14_2_ = 0x11a;
        auVar94 = NEON_sqdmulh(auVar68,auVar21,2);
        auVar29._8_2_ = 0x2204;
        auVar29._0_8_ = 0x2204220422042204;
        auVar29._10_2_ = 0x2204;
        auVar29._12_2_ = 0x2204;
        auVar29._14_2_ = 0x2204;
        auVar106 = NEON_sqadd(auVar60,auVar29,2);
        auVar33._8_2_ = 0xbaeb;
        auVar33._0_8_ = 0xbaebbaebbaebbaeb;
        auVar33._10_2_ = 0xbaeb;
        auVar33._12_2_ = 0xbaeb;
        auVar33._14_2_ = 0xbaeb;
        auVar60 = NEON_sqadd(auVar60,auVar33,2);
        auVar71 = NEON_sqadd(auVar92,auVar71,2);
        auVar83 = NEON_sqadd(auVar83,auVar97,2);
        auVar60 = NEON_sqadd(auVar94,auVar60,2);
        auVar71 = NEON_sqsub(auVar106,auVar71,2);
        uVar69 = NEON_sqshrun(auVar94._0_8_,auVar83,6,2);
        auVar60 = NEON_sqadd(auVar60,auVar68,2);
        uVar64 = NEON_sqshrun(auVar92._0_8_,auVar71,6,2);
        uVar58 = NEON_sqshrun(auVar83._0_8_,auVar60,6,2);
        *pcVar4 = (char)uVar58;
        pcVar4[1] = (char)uVar64;
        pcVar4[2] = (char)uVar69;
        pcVar4[3] = -1;
        pcVar4[4] = (char)((ulong)uVar58 >> 8);
        pcVar4[5] = (char)((ulong)uVar64 >> 8);
        pcVar4[6] = (char)((ulong)uVar69 >> 8);
        pcVar4[7] = -1;
        pcVar4[8] = (char)((ulong)uVar58 >> 0x10);
        pcVar4[9] = (char)((ulong)uVar64 >> 0x10);
        pcVar4[10] = (char)((ulong)uVar69 >> 0x10);
        pcVar4[0xb] = -1;
        pcVar4[0xc] = (char)((ulong)uVar58 >> 0x18);
        pcVar4[0xd] = (char)((ulong)uVar64 >> 0x18);
        pcVar4[0xe] = (char)((ulong)uVar69 >> 0x18);
        pcVar4[0xf] = -1;
        pcVar4[0x10] = (char)((ulong)uVar58 >> 0x20);
        pcVar4[0x11] = (char)((ulong)uVar64 >> 0x20);
        pcVar4[0x12] = (char)((ulong)uVar69 >> 0x20);
        pcVar4[0x13] = -1;
        pcVar4[0x14] = (char)((ulong)uVar58 >> 0x28);
        pcVar4[0x15] = (char)((ulong)uVar64 >> 0x28);
        pcVar4[0x16] = (char)((ulong)uVar69 >> 0x28);
        pcVar4[0x17] = -1;
        pcVar4[0x18] = (char)((ulong)uVar58 >> 0x30);
        pcVar4[0x19] = (char)((ulong)uVar64 >> 0x30);
        pcVar4[0x1a] = (char)((ulong)uVar69 >> 0x30);
        pcVar4[0x1b] = -1;
        pcVar4[0x1c] = (char)((ulong)uVar58 >> 0x38);
        pcVar4[0x1d] = (char)((ulong)uVar64 >> 0x38);
        pcVar4[0x1e] = (char)((ulong)uVar69 >> 0x38);
        pcVar4[0x1f] = -1;
      }
      iVar41 = iVar41 + 0x40;
      lVar36 = lVar36 + 0x1000000000;
      uVar34 = uVar34 - 1;
      param_3 = param_3 + 8;
      pbVar37 = pbVar37 + 8;
      param_4 = param_4 + 8;
      pbVar40 = pbVar40 + 8;
    } while (uVar34 != 0);
    param_5 = param_5 + lVar2;
    local_f8 = param_6 + lVar2;
    param_3 = pbVar3;
  }
  __n = (size_t)(int)lVar43;
  memcpy(abStack_c9 + 1,param_3,__n);
  memcpy(&local_d8,param_5,__n);
  __n_00 = (size_t)(9 - (int)lVar43);
  memset(abStack_c9 + __n + 1,(uint)abStack_c9[lVar43],__n_00);
  memset(&local_d8 + __n,(uint)*(byte *)((long)&local_e0 + lVar43 + 7),__n_00);
  bVar44 = (byte)uStack_c7;
  bVar45 = (byte)((uint7)uStack_c7 >> 8);
  bVar46 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar47 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar48 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar49 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar50 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar51 = (byte)uStack_d7;
  bVar52 = (byte)((uint7)uStack_d7 >> 8);
  bVar53 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar54 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar55 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar56 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar57 = (byte)((uint7)uStack_d7 >> 0x30);
  sVar95 = (ushort)bVar44 + (ushort)abStack_c9[1] + (ushort)local_d8 + (ushort)bVar51;
  sVar98 = (ushort)bVar45 + (ushort)bVar44 + (ushort)bVar51 + (ushort)bVar52;
  sVar99 = (ushort)bVar46 + (ushort)bVar45 + (ushort)bVar52 + (ushort)bVar53;
  sVar100 = (ushort)bVar47 + (ushort)bVar46 + (ushort)bVar53 + (ushort)bVar54;
  sVar101 = (ushort)bVar48 + (ushort)bVar47 + (ushort)bVar54 + (ushort)bVar55;
  sVar102 = (ushort)bVar49 + (ushort)bVar48 + (ushort)bVar55 + (ushort)bVar56;
  sVar103 = (ushort)bVar50 + (ushort)bVar49 + (ushort)bVar56 + (ushort)bVar57;
  sVar104 = (ushort)bStack_c0 + (ushort)bVar50 + (ushort)bVar57 + (ushort)bStack_d0;
  uVar69 = CONCAT17((char)((ushort)(((ushort)bVar57 + (ushort)bStack_c0) * 2 + sVar104) >> 3),
                    CONCAT16((char)((ushort)(((ushort)bVar56 + (ushort)bVar50) * 2 + sVar103) >> 3),
                             CONCAT15((char)((ushort)(((ushort)bVar55 + (ushort)bVar49) * 2 +
                                                     sVar102) >> 3),
                                      CONCAT14((char)((ushort)(((ushort)bVar54 + (ushort)bVar48) * 2
                                                              + sVar101) >> 3),
                                               CONCAT13((char)((ushort)(((ushort)bVar53 +
                                                                        (ushort)bVar47) * 2 +
                                                                       sVar100) >> 3),
                                                        CONCAT12((char)((ushort)(((ushort)bVar52 +
                                                                                 (ushort)bVar46) * 2
                                                                                + sVar99) >> 3),
                                                                 CONCAT11((char)((ushort)(((ushort)
                                                  bVar51 + (ushort)bVar45) * 2 + sVar98) >> 3),
                                                  (char)((ushort)(((ushort)local_d8 + (ushort)bVar44
                                                                  ) * 2 + sVar95) >> 3))))))));
  uVar64 = CONCAT17((char)((ushort)(sVar104 + (ushort)bVar50 * 2 + (ushort)bStack_d0 * 2) >> 3),
                    CONCAT16((char)((ushort)(sVar103 + (ushort)bVar49 * 2 + (ushort)bVar57 * 2) >> 3
                                   ),CONCAT15((char)((ushort)(sVar102 + (ushort)bVar48 * 2 +
                                                             (ushort)bVar56 * 2) >> 3),
                                              CONCAT14((char)((ushort)(sVar101 + (ushort)bVar47 * 2
                                                                      + (ushort)bVar55 * 2) >> 3),
                                                       CONCAT13((char)((ushort)(sVar100 + (ushort)
                                                  bVar46 * 2 + (ushort)bVar54 * 2) >> 3),
                                                  CONCAT12((char)((ushort)(sVar99 + (ushort)bVar45 *
                                                                                    2 +
                                                                          (ushort)bVar53 * 2) >> 3),
                                                           CONCAT11((char)((ushort)(sVar98 + (ushort
                                                  )bVar44 * 2 + (ushort)bVar52 * 2) >> 3),
                                                  (char)((ushort)(sVar95 + ((ushort)CONCAT71(
                                                  uStack_c7,abStack_c9[1]) & 0xff) * 2 +
                                                  ((ushort)uStack_d7 & 0xff) * 2) >> 3))))))));
  uVar82 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),uVar69,1);
  uVar58 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),uVar64,1);
  local_b0[1] = (byte)uVar58;
  local_b0[3] = (byte)((ulong)uVar58 >> 8);
  bStack_ab = (byte)((ulong)uVar58 >> 0x10);
  bStack_a9 = (byte)((ulong)uVar58 >> 0x18);
  bStack_a7 = (byte)((ulong)uVar58 >> 0x20);
  bStack_a5 = (byte)((ulong)uVar58 >> 0x28);
  bStack_a3 = (byte)((ulong)uVar58 >> 0x30);
  bStack_a1 = (byte)((ulong)uVar58 >> 0x38);
  uVar58 = NEON_urhadd(CONCAT71(uStack_d7,local_d8),uVar64,1);
  local_90[0] = (byte)uVar58;
  local_90[2] = (byte)((ulong)uVar58 >> 8);
  bStack_8c = (byte)((ulong)uVar58 >> 0x10);
  bStack_8a = (byte)((ulong)uVar58 >> 0x18);
  local_88 = (byte)((ulong)uVar58 >> 0x20);
  bStack_86 = (byte)((ulong)uVar58 >> 0x28);
  bStack_84 = (byte)((ulong)uVar58 >> 0x30);
  bStack_82 = (byte)((ulong)uVar58 >> 0x38);
  uVar58 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),uVar69,1);
  local_90[1] = (byte)uVar58;
  local_90[3] = (byte)((ulong)uVar58 >> 8);
  bStack_8b = (byte)((ulong)uVar58 >> 0x10);
  bStack_89 = (byte)((ulong)uVar58 >> 0x18);
  bStack_87 = (byte)((ulong)uVar58 >> 0x20);
  bStack_85 = (byte)((ulong)uVar58 >> 0x28);
  bStack_83 = (byte)((ulong)uVar58 >> 0x30);
  bStack_81 = (byte)((ulong)uVar58 >> 0x38);
  local_b0[0] = (byte)uVar82;
  local_b0[2] = (byte)((ulong)uVar82 >> 8);
  bStack_ac = (byte)((ulong)uVar82 >> 0x10);
  bStack_aa = (byte)((ulong)uVar82 >> 0x18);
  local_a8 = (byte)((ulong)uVar82 >> 0x20);
  bStack_a6 = (byte)((ulong)uVar82 >> 0x28);
  bStack_a4 = (byte)((ulong)uVar82 >> 0x30);
  bStack_a2 = (byte)((ulong)uVar82 >> 0x38);
  memcpy(abStack_c9 + 1,local_100,__n);
  memcpy(&local_d8,local_f8,__n);
  memset(abStack_c9 + __n + 1,(uint)abStack_c9[lVar43],__n_00);
  memset(&local_d8 + __n,(uint)*(byte *)((long)&local_e0 + lVar43 + 7),__n_00);
  bVar44 = (byte)uStack_c7;
  bVar45 = (byte)((uint7)uStack_c7 >> 8);
  bVar46 = (byte)((uint7)uStack_c7 >> 0x10);
  bVar47 = (byte)((uint7)uStack_c7 >> 0x18);
  bVar48 = (byte)((uint7)uStack_c7 >> 0x20);
  bVar49 = (byte)((uint7)uStack_c7 >> 0x28);
  bVar50 = (byte)((uint7)uStack_c7 >> 0x30);
  bVar51 = (byte)uStack_d7;
  bVar52 = (byte)((uint7)uStack_d7 >> 8);
  bVar53 = (byte)((uint7)uStack_d7 >> 0x10);
  bVar54 = (byte)((uint7)uStack_d7 >> 0x18);
  bVar55 = (byte)((uint7)uStack_d7 >> 0x20);
  bVar56 = (byte)((uint7)uStack_d7 >> 0x28);
  bVar57 = (byte)((uint7)uStack_d7 >> 0x30);
  sVar95 = (ushort)bVar44 + (ushort)abStack_c9[1] + (ushort)local_d8 + (ushort)bVar51;
  sVar98 = (ushort)bVar45 + (ushort)bVar44 + (ushort)bVar51 + (ushort)bVar52;
  sVar99 = (ushort)bVar46 + (ushort)bVar45 + (ushort)bVar52 + (ushort)bVar53;
  sVar100 = (ushort)bVar47 + (ushort)bVar46 + (ushort)bVar53 + (ushort)bVar54;
  sVar101 = (ushort)bVar48 + (ushort)bVar47 + (ushort)bVar54 + (ushort)bVar55;
  sVar102 = (ushort)bVar49 + (ushort)bVar48 + (ushort)bVar55 + (ushort)bVar56;
  sVar103 = (ushort)bVar50 + (ushort)bVar49 + (ushort)bVar56 + (ushort)bVar57;
  sVar104 = (ushort)bStack_c0 + (ushort)bVar50 + (ushort)bVar57 + (ushort)bStack_d0;
  uVar64 = CONCAT17((char)((ushort)(((ushort)bVar57 + (ushort)bStack_c0) * 2 + sVar104) >> 3),
                    CONCAT16((char)((ushort)(((ushort)bVar56 + (ushort)bVar50) * 2 + sVar103) >> 3),
                             CONCAT15((char)((ushort)(((ushort)bVar55 + (ushort)bVar49) * 2 +
                                                     sVar102) >> 3),
                                      CONCAT14((char)((ushort)(((ushort)bVar54 + (ushort)bVar48) * 2
                                                              + sVar101) >> 3),
                                               CONCAT13((char)((ushort)(((ushort)bVar53 +
                                                                        (ushort)bVar47) * 2 +
                                                                       sVar100) >> 3),
                                                        CONCAT12((char)((ushort)(((ushort)bVar52 +
                                                                                 (ushort)bVar46) * 2
                                                                                + sVar99) >> 3),
                                                                 CONCAT11((char)((ushort)(((ushort)
                                                  bVar51 + (ushort)bVar45) * 2 + sVar98) >> 3),
                                                  (char)((ushort)(((ushort)local_d8 + (ushort)bVar44
                                                                  ) * 2 + sVar95) >> 3))))))));
  uVar58 = CONCAT17((char)((ushort)(sVar104 + (ushort)bVar50 * 2 + (ushort)bStack_d0 * 2) >> 3),
                    CONCAT16((char)((ushort)(sVar103 + (ushort)bVar49 * 2 + (ushort)bVar57 * 2) >> 3
                                   ),CONCAT15((char)((ushort)(sVar102 + (ushort)bVar48 * 2 +
                                                             (ushort)bVar56 * 2) >> 3),
                                              CONCAT14((char)((ushort)(sVar101 + (ushort)bVar47 * 2
                                                                      + (ushort)bVar55 * 2) >> 3),
                                                       CONCAT13((char)((ushort)(sVar100 + (ushort)
                                                  bVar46 * 2 + (ushort)bVar54 * 2) >> 3),
                                                  CONCAT12((char)((ushort)(sVar99 + (ushort)bVar45 *
                                                                                    2 +
                                                                          (ushort)bVar53 * 2) >> 3),
                                                           CONCAT11((char)((ushort)(sVar98 + (ushort
                                                  )bVar44 * 2 + (ushort)bVar52 * 2) >> 3),
                                                  (char)((ushort)(sVar95 + ((ushort)CONCAT71(
                                                  uStack_c7,abStack_c9[1]) & 0xff) * 2 +
                                                  ((ushort)uStack_d7 & 0xff) * 2) >> 3))))))));
  uVar82 = NEON_urhadd(CONCAT71(uStack_c7,abStack_c9[1]),uVar64,1);
  uVar69 = NEON_urhadd(CONCAT17(bStack_c0,uStack_c7),uVar58,1);
  uVar58 = NEON_urhadd(CONCAT71(uStack_d7,local_d8),uVar58,1);
  uVar64 = NEON_urhadd(CONCAT17(bStack_d0,uStack_d7),uVar64,1);
  local_a0[0] = (byte)uVar82;
  local_a0[1] = (char)uVar69;
  local_a0[2] = (char)((ulong)uVar82 >> 8);
  local_a0[3] = (char)((ulong)uVar69 >> 8);
  bStack_9c = (char)((ulong)uVar82 >> 0x10);
  bStack_9b = (char)((ulong)uVar69 >> 0x10);
  bStack_9a = (char)((ulong)uVar82 >> 0x18);
  bStack_99 = (char)((ulong)uVar69 >> 0x18);
  local_98 = (char)((ulong)uVar82 >> 0x20);
  bStack_97 = (char)((ulong)uVar69 >> 0x20);
  bStack_96 = (char)((ulong)uVar82 >> 0x28);
  bStack_95 = (char)((ulong)uVar69 >> 0x28);
  bStack_94 = (char)((ulong)uVar82 >> 0x30);
  bStack_93 = (char)((ulong)uVar69 >> 0x30);
  bStack_92 = (char)((ulong)uVar82 >> 0x38);
  bStack_91 = (char)((ulong)uVar69 >> 0x38);
  local_80[0] = (byte)uVar58;
  local_80[1] = (char)uVar64;
  local_80[2] = (char)((ulong)uVar58 >> 8);
  local_80[3] = (char)((ulong)uVar64 >> 8);
  bStack_7c = (char)((ulong)uVar58 >> 0x10);
  bStack_7b = (char)((ulong)uVar64 >> 0x10);
  bStack_7a = (char)((ulong)uVar58 >> 0x18);
  bStack_79 = (char)((ulong)uVar64 >> 0x18);
  local_78 = (char)((ulong)uVar58 >> 0x20);
  bStack_77 = (char)((ulong)uVar64 >> 0x20);
  bStack_76 = (char)((ulong)uVar58 >> 0x28);
  bStack_75 = (char)((ulong)uVar64 >> 0x28);
  bStack_74 = (char)((ulong)uVar58 >> 0x30);
  bStack_73 = (char)((ulong)uVar64 >> 0x30);
  bStack_72 = (char)((ulong)uVar58 >> 0x38);
  bStack_71 = (char)((ulong)uVar64 >> 0x38);
  uVar5 = param_9 - uVar38;
  if (0 < (int)uVar5) {
    uVar35 = (ulong)uVar5;
    pbVar37 = local_a0;
    uVar39 = uVar7 << 6 | 4;
    param_1 = param_1 + (int)uVar38;
    uVar34 = uVar35;
    do {
      bVar44 = *pbVar37;
      uVar6 = (uint)*param_1 * 0x4a85 >> 8;
      uVar8 = (uVar6 + ((uint)pbVar37[-0x10] * 0x811a >> 8)) - 0x4515;
      pcVar4 = param_7 + (int)uVar39;
      if (uVar8 >> 0xe == 0) {
        cVar42 = (char)(uVar8 >> 6);
      }
      else {
        cVar42 = ((byte)((int)uVar8 >> 0x1f) & 1) - 1;
      }
      uVar8 = ((uVar6 + 0x2204) - ((uint)pbVar37[-0x10] * 0x1913 >> 8)) -
              ((uint)bVar44 * 0x3408 >> 8);
      *pcVar4 = cVar42;
      if (uVar8 >> 0xe == 0) {
        cVar42 = (char)(uVar8 >> 6);
      }
      else {
        cVar42 = ((byte)((int)uVar8 >> 0x1f) & 1) - 1;
      }
      uVar8 = (uVar6 + ((uint)bVar44 * 0x6625 >> 8)) - 0x379a;
      pcVar4[1] = cVar42;
      if (uVar8 >> 0xe == 0) {
        cVar42 = (char)(uVar8 >> 6);
      }
      else {
        cVar42 = ((byte)((int)uVar8 >> 0x1f) & 1) - 1;
      }
      pbVar37 = pbVar37 + 1;
      uVar39 = uVar39 + 4;
      uVar34 = uVar34 - 1;
      param_1 = param_1 + 1;
      pcVar4[2] = cVar42;
      pcVar4[3] = -1;
    } while (uVar34 != 0);
    if ((param_2 != (byte *)0x0) && (0 < (int)uVar5)) {
      pbVar37 = local_80;
      param_2 = param_2 + (int)uVar38;
      uVar38 = uVar7 << 6 | 4;
      do {
        bVar44 = *pbVar37;
        uVar7 = (uint)*param_2 * 0x4a85 >> 8;
        uVar5 = (uVar7 + ((uint)pbVar37[-0x10] * 0x811a >> 8)) - 0x4515;
        pcVar4 = param_8 + (int)uVar38;
        if (uVar5 >> 0xe == 0) {
          cVar42 = (char)(uVar5 >> 6);
        }
        else {
          cVar42 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
        }
        uVar5 = ((uVar7 + 0x2204) - ((uint)pbVar37[-0x10] * 0x1913 >> 8)) -
                ((uint)bVar44 * 0x3408 >> 8);
        *pcVar4 = cVar42;
        if (uVar5 >> 0xe == 0) {
          cVar42 = (char)(uVar5 >> 6);
        }
        else {
          cVar42 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
        }
        uVar5 = (uVar7 + ((uint)bVar44 * 0x6625 >> 8)) - 0x379a;
        pcVar4[1] = cVar42;
        if (uVar5 >> 0xe == 0) {
          cVar42 = (char)(uVar5 >> 6);
        }
        else {
          cVar42 = ((byte)((int)uVar5 >> 0x1f) & 1) - 1;
        }
        pbVar37 = pbVar37 + 1;
        uVar38 = uVar38 + 4;
        uVar35 = uVar35 - 1;
        param_2 = param_2 + 1;
        pcVar4[2] = cVar42;
        pcVar4[3] = -1;
      } while (uVar35 != 0);
    }
  }
  if (*(long *)(local_e0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


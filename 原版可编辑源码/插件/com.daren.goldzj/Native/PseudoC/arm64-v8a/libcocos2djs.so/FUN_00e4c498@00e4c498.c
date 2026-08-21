
undefined8 FUN_00e4c498(long param_1,long *param_2,uint param_3,uint param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint3 uVar6;
  uint3 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  short *psVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
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
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  uint5 uVar58;
  byte bVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  undefined1 uVar71;
  undefined1 uVar72;
  uint uVar69;
  undefined1 uVar73;
  uint5 uVar70;
  byte bVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  uint5 uVar81;
  byte bVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  uint5 uVar92;
  byte bVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  uint5 uVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  uint5 uVar105;
  byte bVar106;
  uint5 uVar107;
  uint5 uVar108;
  byte bVar109;
  uint5 uVar110;
  byte bVar111;
  byte bVar112;
  uint5 uVar113;
  byte bVar114;
  uint5 uVar115;
  uint5 uVar116;
  uint5 uVar117;
  uint5 uVar118;
  
  lVar20 = *param_2;
  if (lVar20 == 0) {
    return 0x23;
  }
  if (*(uint *)(lVar20 + 0x20) <= param_3) {
    return 6;
  }
  lVar23 = *(long *)(lVar20 + 0x210);
  uVar19 = *(undefined8 *)(lVar20 + 0xc0);
  psVar11 = (short *)(lVar23 + (ulong)param_3 * 0x18);
  sVar2 = psVar11[3];
  iVar1 = (int)psVar11[4] + (int)sVar2;
  *(int *)(param_1 + 0x98) = iVar1;
  sVar3 = psVar11[1];
  sVar4 = *psVar11;
  *(undefined2 *)(param_1 + 0xb0) = 1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  iVar5 = (int)sVar3 - (int)sVar4;
  *(int *)(param_1 + 0x9c) = iVar5;
  uVar69 = *(uint *)(lVar20 + 0x230) & 3;
  if (7 < (1 << (ulong)uVar69) - 1U) {
    return 3;
  }
  switch(uVar69) {
  case 0:
    uVar69 = iVar5 + 7U >> 3;
    break;
  case 1:
    uVar69 = iVar5 + 0xfU >> 3 & 0x1ffffffe;
    break;
  case 2:
    uVar69 = iVar5 + 0x1fU >> 3 & 0x1ffffffc;
    break;
  case 3:
    uVar69 = iVar5 + 0x3fU >> 3 & 0x1ffffff8;
  }
  *(uint *)(param_1 + 0xa0) = uVar69;
  *(int *)(param_1 + 0xc0) = (int)sVar4;
  *(int *)(param_1 + 0xc4) = (int)sVar2;
  *(undefined4 *)(param_1 + 0x90) = 0x62697473;
  sVar3 = *(short *)(lVar23 + (ulong)param_3 * 0x18 + 4);
  *(long *)(param_1 + 0x30) = (long)(iVar5 * 0x40);
  *(ulong *)(param_1 + 0x38) = (ulong)(uint)(iVar1 * 0x40);
  *(long *)(param_1 + 0x40) = (long)(int)sVar4 << 6;
  *(long *)(param_1 + 0x48) = (long)(int)sVar2 << 6;
  *(long *)(param_1 + 0x50) = (long)sVar3 << 6;
  FUN_00e16d8c((long *)(param_1 + 0x30),
               (*(long *)(lVar20 + 0x188) + *(long *)(lVar20 + 0x180)) * 0x40);
  if ((param_4 >> 0x16 & 1) == 0) {
    lVar21 = (long)*(int *)(param_1 + 0xa0);
    uVar22 = (ulong)*(uint *)(param_1 + 0x98);
    uVar18 = uVar22 * lVar21;
    uVar8 = FUN_00e15340(param_1,uVar18);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar8 = FUN_00e1bb5c(uVar19,*(undefined8 *)(lVar23 + (ulong)param_3 * 0x18 + 0x10));
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar19 = FUN_00e1bbd0(uVar19,*(undefined8 *)(param_1 + 0xa8),uVar18);
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    uVar9 = *(ulong *)(lVar20 + 0x230);
    if ((((uint)uVar9 >> 3 & 1) == 0) && (uVar18 != 0)) {
      pbVar12 = *(byte **)(param_1 + 0xa8);
      uVar14 = lVar21 * uVar22;
      uVar9 = uVar18;
      if (0xf < uVar14) {
        uVar16 = uVar14 & 0xfffffffffffffff0;
        uVar9 = uVar18 - uVar16;
        pbVar13 = pbVar12;
        uVar17 = uVar16;
        do {
          uVar8 = *(undefined8 *)(pbVar13 + 8);
          uVar19 = *(undefined8 *)pbVar13;
          uVar17 = uVar17 - 0x10;
          uVar6 = CONCAT12((char)((ulong)uVar19 >> 8),(short)uVar19) & 0xff00ff;
          bVar67 = (byte)((ulong)uVar19 >> 0x10);
          bVar79 = (byte)((ulong)uVar19 >> 0x18);
          bVar90 = (byte)((ulong)uVar19 >> 0x20);
          bVar96 = (byte)((ulong)uVar19 >> 0x28);
          bVar103 = (byte)((ulong)uVar19 >> 0x30);
          bVar106 = (byte)((ulong)uVar19 >> 0x38);
          uVar7 = CONCAT12((char)((ulong)uVar8 >> 8),(short)uVar8) & 0xff00ff;
          bVar74 = (byte)((ulong)uVar8 >> 0x10);
          bVar85 = (byte)((ulong)uVar8 >> 0x18);
          bVar102 = (byte)((ulong)uVar8 >> 0x28);
          bVar104 = (byte)((ulong)uVar8 >> 0x30);
          uVar69 = (uint)CONCAT12(bVar102,(ushort)(byte)((ulong)uVar8 >> 0x20));
          bVar109 = (byte)((ulong)uVar8 >> 0x38);
          bVar56 = (byte)(uVar6 >> 0x10);
          bVar62 = (byte)(uVar7 >> 0x10);
          uVar81 = CONCAT14(bVar96 << 1,(uint)(byte)((bVar90 & 0x55) << 1)) & 0xaaffffffff;
          uVar92 = CONCAT14(bVar106 << 1,(uint)(byte)((bVar103 & 0x55) << 1)) & 0xaaffffffff;
          uVar117 = CONCAT14(bVar56 << 1,(uint)((byte)((uVar6 & 0xffff) << 1) & 0xaa)) &
                    0xaaffffffff;
          uVar118 = CONCAT14(bVar79 << 1,(uint)(byte)((bVar67 & 0x55) << 1)) & 0xaaffffffff;
          uVar115 = CONCAT14(bVar62 << 1,(uint)((byte)((uVar7 & 0xffff) << 1) & 0xaa)) &
                    0xaaffffffff;
          uVar116 = CONCAT14(bVar85 << 1,(uint)(byte)((bVar74 & 0x55) << 1)) & 0xaaffffffff;
          uVar101 = CONCAT14(bVar106 >> 1,(uint)(bVar103 >> 1 & 0x55)) & 0x55ffffffff;
          uVar105 = CONCAT14(bVar79 >> 1,(uint)(bVar67 >> 1 & 0x55)) & 0x55ffffffff;
          uVar110 = CONCAT14(bVar62 >> 1,(uint)((byte)((uVar7 & 0xffff) >> 1) & 0x55)) &
                    0x55ffffffff;
          uVar113 = CONCAT14(bVar85 >> 1,(uint)(bVar74 >> 1 & 0x55)) & 0x55ffffffff;
          uVar58 = CONCAT14(bVar102 << 1,(uint)((byte)((uVar69 & 0xffff) << 1) & 0xaa)) &
                   0xaaffffffff;
          uVar70 = CONCAT14(bVar109 << 1,(uint)(byte)((bVar104 & 0x55) << 1)) & 0xaaffffffff;
          uVar107 = CONCAT14(bVar102 >> 1,(uint)((byte)((uVar69 & 0xffff) >> 1) & 0x55)) &
                    0x55ffffffff;
          uVar108 = CONCAT14(bVar109 >> 1,(uint)(bVar104 >> 1 & 0x55)) & 0x55ffffffff;
          bVar109 = (byte)uVar110 | (byte)uVar115;
          bVar111 = (byte)(uVar110 >> 0x20) | (byte)(uVar115 >> 0x20);
          bVar112 = (byte)uVar113 | (byte)uVar116;
          bVar114 = (byte)(uVar113 >> 0x20) | (byte)(uVar116 >> 0x20);
          bVar102 = (byte)((ushort)uVar6 >> 1) & 0x55 | (byte)uVar117;
          bVar103 = bVar56 >> 1 & 0x55 | (byte)(uVar117 >> 0x20);
          bVar104 = (byte)uVar105 | (byte)uVar118;
          bVar106 = (byte)(uVar105 >> 0x20) | (byte)(uVar118 >> 0x20);
          bVar79 = bVar90 >> 1 & 0x55 | (byte)uVar81;
          bVar85 = bVar96 >> 1 & 0x55 | (byte)(uVar81 >> 0x20);
          bVar90 = (byte)uVar101 | (byte)uVar92;
          bVar96 = (byte)(uVar101 >> 0x20) | (byte)(uVar92 >> 0x20);
          bVar56 = (byte)uVar107 | (byte)uVar58;
          bVar62 = (byte)(uVar107 >> 0x20) | (byte)(uVar58 >> 0x20);
          bVar67 = (byte)uVar108 | (byte)uVar70;
          bVar74 = (byte)(uVar108 >> 0x20) | (byte)(uVar70 >> 0x20);
          uVar107 = CONCAT14(bVar103 >> 2,(uint)(bVar102 >> 2 & 0x33)) & 0x33ffffffff;
          uVar108 = CONCAT14(bVar106 >> 2,(uint)(bVar104 >> 2 & 0x33)) & 0x33ffffffff;
          uVar101 = CONCAT14(bVar96 >> 2,(uint)(bVar90 >> 2 & 0x33)) & 0x33ffffffff;
          uVar110 = CONCAT14(bVar111 << 2,(uint)(byte)((bVar109 & 0x33) << 2)) & 0xccffffffff;
          uVar113 = CONCAT14(bVar114 << 2,(uint)(byte)((bVar112 & 0x33) << 2)) & 0xccffffffff;
          uVar105 = CONCAT14(bVar106 << 2,(uint)(byte)((bVar104 & 0x33) << 2)) & 0xccffffffff;
          uVar81 = CONCAT14(bVar85 << 2,(uint)(byte)((bVar79 & 0x33) << 2)) & 0xccffffffff;
          uVar92 = CONCAT14(bVar96 << 2,(uint)(byte)((bVar90 & 0x33) << 2)) & 0xccffffffff;
          uVar115 = CONCAT14(bVar62 >> 2,(uint)(bVar56 >> 2 & 0x33)) & 0x33ffffffff;
          uVar116 = CONCAT14(bVar74 >> 2,(uint)(bVar67 >> 2 & 0x33)) & 0x33ffffffff;
          uVar58 = CONCAT14(bVar62 << 2,(uint)(byte)((bVar56 & 0x33) << 2)) & 0xccffffffff;
          uVar70 = CONCAT14(bVar74 << 2,(uint)(byte)((bVar67 & 0x33) << 2)) & 0xccffffffff;
          bVar79 = bVar79 >> 2 & 0x33 | (byte)uVar81;
          bVar85 = bVar85 >> 2 & 0x33 | (byte)(uVar81 >> 0x20);
          bVar90 = (byte)uVar101 | (byte)uVar92;
          bVar96 = (byte)(uVar101 >> 0x20) | (byte)(uVar92 >> 0x20);
          bVar102 = (byte)uVar107 | (bVar102 & 0x33) << 2;
          bVar103 = (byte)(uVar107 >> 0x20) | (bVar103 & 0x33) << 2;
          bVar104 = (byte)uVar108 | (byte)uVar105;
          bVar106 = (byte)(uVar108 >> 0x20) | (byte)(uVar105 >> 0x20);
          bVar109 = bVar109 >> 2 & 0x33 | (byte)uVar110;
          bVar111 = bVar111 >> 2 & 0x33 | (byte)(uVar110 >> 0x20);
          bVar112 = bVar112 >> 2 & 0x33 | (byte)uVar113;
          bVar114 = bVar114 >> 2 & 0x33 | (byte)(uVar113 >> 0x20);
          bVar56 = (byte)uVar115 | (byte)uVar58;
          bVar62 = (byte)(uVar115 >> 0x20) | (byte)(uVar58 >> 0x20);
          bVar67 = (byte)uVar116 | (byte)uVar70;
          bVar74 = (byte)(uVar116 >> 0x20) | (byte)(uVar70 >> 0x20);
          *(ulong *)(pbVar13 + 8) =
               CONCAT17(bVar74 >> 4 | bVar74 << 4,
                        CONCAT16(bVar67 >> 4 | bVar67 << 4,
                                 CONCAT15(bVar62 >> 4 | bVar62 << 4,
                                          CONCAT14(bVar56 >> 4 | bVar56 << 4,
                                                   CONCAT13(bVar114 >> 4 | bVar114 << 4,
                                                            CONCAT12(bVar112 >> 4 | bVar112 << 4,
                                                                     CONCAT11(bVar111 >> 4 |
                                                                              bVar111 << 4,
                                                                              bVar109 >> 4 |
                                                                              bVar109 << 4)))))));
          *(ulong *)pbVar13 =
               CONCAT17(bVar96 >> 4 | bVar96 << 4,
                        CONCAT16(bVar90 >> 4 | bVar90 << 4,
                                 CONCAT15(bVar85 >> 4 | bVar85 << 4,
                                          CONCAT14(bVar79 >> 4 | bVar79 << 4,
                                                   CONCAT13(bVar106 >> 4 | bVar106 << 4,
                                                            CONCAT12(bVar104 >> 4 | bVar104 << 4,
                                                                     CONCAT11(bVar103 >> 4 |
                                                                              bVar103 << 4,
                                                                              bVar102 >> 4 |
                                                                              bVar102 << 4)))))));
          pbVar13 = pbVar13 + 0x10;
        } while (uVar17 != 0);
        pbVar12 = pbVar12 + uVar16;
        uVar14 = uVar14 - uVar16;
        goto joined_r0x00e4c794;
      }
      do {
        uVar9 = uVar9 - 1;
        uVar69 = (*pbVar12 & 0xaaaaaaaa) >> 1 | (*pbVar12 & 0x55555555) << 1;
        uVar69 = (uVar69 & 0xcccccccc) >> 2 | (uVar69 & 0x33333333) << 2;
        *pbVar12 = (byte)(uVar69 >> 4) | (byte)((uVar69 & 0xf0f0f0f) << 4);
        pbVar12 = pbVar12 + 1;
        uVar14 = uVar9;
joined_r0x00e4c794:
      } while (uVar14 != 0);
      uVar9 = *(ulong *)(lVar20 + 0x230);
    }
    if ((((uint)(uVar9 >> 2) & 0x3fffffff ^ (uint)uVar9 >> 3) & 1) != 0) {
      iVar1 = 1 << (ulong)((uint)uVar9 >> 4 & 3);
      if (iVar1 == 4) {
        if (3 < uVar18) {
          puVar15 = *(undefined1 **)(param_1 + 0xa8);
          uVar22 = (lVar21 * uVar22 - 4 >> 2) + 1;
          puVar10 = puVar15;
          if (0x1f < uVar22) {
            uVar14 = uVar22 & 0x7fffffffffffffe0;
            puVar10 = puVar15 + uVar14 * 4;
            uVar18 = uVar18 + uVar14 * -4;
            puVar15 = puVar15 + 0x40;
            uVar9 = uVar14;
            do {
              uVar24 = *puVar15;
              uVar40 = puVar15[1];
              uVar25 = puVar15[4];
              uVar41 = puVar15[5];
              uVar26 = puVar15[8];
              uVar42 = puVar15[9];
              uVar27 = puVar15[0xc];
              uVar43 = puVar15[0xd];
              uVar28 = puVar15[0x10];
              uVar44 = puVar15[0x11];
              uVar29 = puVar15[0x14];
              uVar45 = puVar15[0x15];
              uVar30 = puVar15[0x18];
              uVar46 = puVar15[0x19];
              uVar31 = puVar15[0x1c];
              uVar47 = puVar15[0x1d];
              uVar32 = puVar15[0x20];
              uVar48 = puVar15[0x21];
              uVar33 = puVar15[0x24];
              uVar49 = puVar15[0x25];
              uVar34 = puVar15[0x28];
              uVar50 = puVar15[0x29];
              uVar35 = puVar15[0x2c];
              uVar51 = puVar15[0x2d];
              uVar36 = puVar15[0x30];
              uVar52 = puVar15[0x31];
              uVar37 = puVar15[0x34];
              uVar53 = puVar15[0x35];
              uVar38 = puVar15[0x38];
              uVar54 = puVar15[0x39];
              uVar39 = puVar15[0x3c];
              uVar55 = puVar15[0x3d];
              uVar57 = puVar15[-0x40];
              uVar80 = puVar15[-0x3f];
              uVar59 = puVar15[-0x3c];
              uVar82 = puVar15[-0x3b];
              uVar60 = puVar15[-0x38];
              uVar83 = puVar15[-0x37];
              uVar61 = puVar15[-0x34];
              uVar84 = puVar15[-0x33];
              uVar63 = puVar15[-0x30];
              uVar86 = puVar15[-0x2f];
              uVar64 = puVar15[-0x2c];
              uVar87 = puVar15[-0x2b];
              uVar65 = puVar15[-0x28];
              uVar88 = puVar15[-0x27];
              uVar66 = puVar15[-0x24];
              uVar89 = puVar15[-0x23];
              uVar68 = puVar15[-0x20];
              uVar91 = puVar15[-0x1f];
              uVar71 = puVar15[-0x1c];
              uVar93 = puVar15[-0x1b];
              uVar72 = puVar15[-0x18];
              uVar94 = puVar15[-0x17];
              uVar73 = puVar15[-0x14];
              uVar95 = puVar15[-0x13];
              uVar75 = puVar15[-0x10];
              uVar97 = puVar15[-0xf];
              uVar76 = puVar15[-0xc];
              uVar98 = puVar15[-0xb];
              uVar77 = puVar15[-8];
              uVar99 = puVar15[-7];
              uVar78 = puVar15[-4];
              uVar100 = puVar15[-3];
              uVar9 = uVar9 - 0x20;
              puVar15[-0x40] = puVar15[-0x3d];
              puVar15[-0x3f] = puVar15[-0x3e];
              puVar15[-0x3e] = uVar80;
              puVar15[-0x3d] = uVar57;
              puVar15[-0x3c] = puVar15[-0x39];
              puVar15[-0x3b] = puVar15[-0x3a];
              puVar15[-0x3a] = uVar82;
              puVar15[-0x39] = uVar59;
              puVar15[-0x38] = puVar15[-0x35];
              puVar15[-0x37] = puVar15[-0x36];
              puVar15[-0x36] = uVar83;
              puVar15[-0x35] = uVar60;
              puVar15[-0x34] = puVar15[-0x31];
              puVar15[-0x33] = puVar15[-0x32];
              puVar15[-0x32] = uVar84;
              puVar15[-0x31] = uVar61;
              puVar15[-0x30] = puVar15[-0x2d];
              puVar15[-0x2f] = puVar15[-0x2e];
              puVar15[-0x2e] = uVar86;
              puVar15[-0x2d] = uVar63;
              puVar15[-0x2c] = puVar15[-0x29];
              puVar15[-0x2b] = puVar15[-0x2a];
              puVar15[-0x2a] = uVar87;
              puVar15[-0x29] = uVar64;
              puVar15[-0x28] = puVar15[-0x25];
              puVar15[-0x27] = puVar15[-0x26];
              puVar15[-0x26] = uVar88;
              puVar15[-0x25] = uVar65;
              puVar15[-0x24] = puVar15[-0x21];
              puVar15[-0x23] = puVar15[-0x22];
              puVar15[-0x22] = uVar89;
              puVar15[-0x21] = uVar66;
              puVar15[-0x20] = puVar15[-0x1d];
              puVar15[-0x1f] = puVar15[-0x1e];
              puVar15[-0x1e] = uVar91;
              puVar15[-0x1d] = uVar68;
              puVar15[-0x1c] = puVar15[-0x19];
              puVar15[-0x1b] = puVar15[-0x1a];
              puVar15[-0x1a] = uVar93;
              puVar15[-0x19] = uVar71;
              puVar15[-0x18] = puVar15[-0x15];
              puVar15[-0x17] = puVar15[-0x16];
              puVar15[-0x16] = uVar94;
              puVar15[-0x15] = uVar72;
              puVar15[-0x14] = puVar15[-0x11];
              puVar15[-0x13] = puVar15[-0x12];
              puVar15[-0x12] = uVar95;
              puVar15[-0x11] = uVar73;
              puVar15[-0x10] = puVar15[-0xd];
              puVar15[-0xf] = puVar15[-0xe];
              puVar15[-0xe] = uVar97;
              puVar15[-0xd] = uVar75;
              puVar15[-0xc] = puVar15[-9];
              puVar15[-0xb] = puVar15[-10];
              puVar15[-10] = uVar98;
              puVar15[-9] = uVar76;
              puVar15[-8] = puVar15[-5];
              puVar15[-7] = puVar15[-6];
              puVar15[-6] = uVar99;
              puVar15[-5] = uVar77;
              puVar15[-4] = puVar15[-1];
              puVar15[-3] = puVar15[-2];
              puVar15[-2] = uVar100;
              puVar15[-1] = uVar78;
              *puVar15 = puVar15[3];
              puVar15[1] = puVar15[2];
              puVar15[2] = uVar40;
              puVar15[3] = uVar24;
              puVar15[4] = puVar15[7];
              puVar15[5] = puVar15[6];
              puVar15[6] = uVar41;
              puVar15[7] = uVar25;
              puVar15[8] = puVar15[0xb];
              puVar15[9] = puVar15[10];
              puVar15[10] = uVar42;
              puVar15[0xb] = uVar26;
              puVar15[0xc] = puVar15[0xf];
              puVar15[0xd] = puVar15[0xe];
              puVar15[0xe] = uVar43;
              puVar15[0xf] = uVar27;
              puVar15[0x10] = puVar15[0x13];
              puVar15[0x11] = puVar15[0x12];
              puVar15[0x12] = uVar44;
              puVar15[0x13] = uVar28;
              puVar15[0x14] = puVar15[0x17];
              puVar15[0x15] = puVar15[0x16];
              puVar15[0x16] = uVar45;
              puVar15[0x17] = uVar29;
              puVar15[0x18] = puVar15[0x1b];
              puVar15[0x19] = puVar15[0x1a];
              puVar15[0x1a] = uVar46;
              puVar15[0x1b] = uVar30;
              puVar15[0x1c] = puVar15[0x1f];
              puVar15[0x1d] = puVar15[0x1e];
              puVar15[0x1e] = uVar47;
              puVar15[0x1f] = uVar31;
              puVar15[0x20] = puVar15[0x23];
              puVar15[0x21] = puVar15[0x22];
              puVar15[0x22] = uVar48;
              puVar15[0x23] = uVar32;
              puVar15[0x24] = puVar15[0x27];
              puVar15[0x25] = puVar15[0x26];
              puVar15[0x26] = uVar49;
              puVar15[0x27] = uVar33;
              puVar15[0x28] = puVar15[0x2b];
              puVar15[0x29] = puVar15[0x2a];
              puVar15[0x2a] = uVar50;
              puVar15[0x2b] = uVar34;
              puVar15[0x2c] = puVar15[0x2f];
              puVar15[0x2d] = puVar15[0x2e];
              puVar15[0x2e] = uVar51;
              puVar15[0x2f] = uVar35;
              puVar15[0x30] = puVar15[0x33];
              puVar15[0x31] = puVar15[0x32];
              puVar15[0x32] = uVar52;
              puVar15[0x33] = uVar36;
              puVar15[0x34] = puVar15[0x37];
              puVar15[0x35] = puVar15[0x36];
              puVar15[0x36] = uVar53;
              puVar15[0x37] = uVar37;
              puVar15[0x38] = puVar15[0x3b];
              puVar15[0x39] = puVar15[0x3a];
              puVar15[0x3a] = uVar54;
              puVar15[0x3b] = uVar38;
              puVar15[0x3c] = puVar15[0x3f];
              puVar15[0x3d] = puVar15[0x3e];
              puVar15[0x3e] = uVar55;
              puVar15[0x3f] = uVar39;
              puVar15 = puVar15 + 0x80;
            } while (uVar9 != 0);
            if (uVar22 == uVar14) {
              return 0;
            }
          }
          do {
            uVar24 = *puVar10;
            uVar25 = puVar10[1];
            uVar18 = uVar18 - 4;
            *puVar10 = puVar10[3];
            puVar10[3] = uVar24;
            puVar10[1] = puVar10[2];
            puVar10[2] = uVar25;
            puVar10 = puVar10 + 4;
          } while (3 < uVar18);
          return 0;
        }
      }
      else if ((iVar1 == 2) && (1 < uVar18)) {
        puVar15 = *(undefined1 **)(param_1 + 0xa8);
        uVar22 = (lVar21 * uVar22 - 2 >> 1) + 1;
        puVar10 = puVar15;
        if (0x1f < uVar22) {
          uVar14 = uVar22 & 0xffffffffffffffe0;
          puVar10 = puVar15 + uVar14 * 2;
          uVar18 = uVar18 + uVar14 * -2;
          puVar15 = puVar15 + 0x20;
          uVar9 = uVar14;
          do {
            uVar24 = *puVar15;
            uVar25 = puVar15[2];
            uVar26 = puVar15[4];
            uVar27 = puVar15[6];
            uVar28 = puVar15[8];
            uVar29 = puVar15[10];
            uVar30 = puVar15[0xc];
            uVar31 = puVar15[0xe];
            uVar32 = puVar15[0x10];
            uVar33 = puVar15[0x12];
            uVar34 = puVar15[0x14];
            uVar35 = puVar15[0x16];
            uVar36 = puVar15[0x18];
            uVar37 = puVar15[0x1a];
            uVar38 = puVar15[0x1c];
            uVar39 = puVar15[0x1e];
            uVar40 = puVar15[-0x20];
            uVar41 = puVar15[-0x1e];
            uVar42 = puVar15[-0x1c];
            uVar43 = puVar15[-0x1a];
            uVar44 = puVar15[-0x18];
            uVar45 = puVar15[-0x16];
            uVar46 = puVar15[-0x14];
            uVar47 = puVar15[-0x12];
            uVar48 = puVar15[-0x10];
            uVar49 = puVar15[-0xe];
            uVar50 = puVar15[-0xc];
            uVar51 = puVar15[-10];
            uVar52 = puVar15[-8];
            uVar53 = puVar15[-6];
            uVar54 = puVar15[-4];
            uVar55 = puVar15[-2];
            uVar9 = uVar9 - 0x20;
            puVar15[-0x20] = puVar15[-0x1f];
            puVar15[-0x1f] = uVar40;
            puVar15[-0x1e] = puVar15[-0x1d];
            puVar15[-0x1d] = uVar41;
            puVar15[-0x1c] = puVar15[-0x1b];
            puVar15[-0x1b] = uVar42;
            puVar15[-0x1a] = puVar15[-0x19];
            puVar15[-0x19] = uVar43;
            puVar15[-0x18] = puVar15[-0x17];
            puVar15[-0x17] = uVar44;
            puVar15[-0x16] = puVar15[-0x15];
            puVar15[-0x15] = uVar45;
            puVar15[-0x14] = puVar15[-0x13];
            puVar15[-0x13] = uVar46;
            puVar15[-0x12] = puVar15[-0x11];
            puVar15[-0x11] = uVar47;
            puVar15[-0x10] = puVar15[-0xf];
            puVar15[-0xf] = uVar48;
            puVar15[-0xe] = puVar15[-0xd];
            puVar15[-0xd] = uVar49;
            puVar15[-0xc] = puVar15[-0xb];
            puVar15[-0xb] = uVar50;
            puVar15[-10] = puVar15[-9];
            puVar15[-9] = uVar51;
            puVar15[-8] = puVar15[-7];
            puVar15[-7] = uVar52;
            puVar15[-6] = puVar15[-5];
            puVar15[-5] = uVar53;
            puVar15[-4] = puVar15[-3];
            puVar15[-3] = uVar54;
            puVar15[-2] = puVar15[-1];
            puVar15[-1] = uVar55;
            *puVar15 = puVar15[1];
            puVar15[1] = uVar24;
            puVar15[2] = puVar15[3];
            puVar15[3] = uVar25;
            puVar15[4] = puVar15[5];
            puVar15[5] = uVar26;
            puVar15[6] = puVar15[7];
            puVar15[7] = uVar27;
            puVar15[8] = puVar15[9];
            puVar15[9] = uVar28;
            puVar15[10] = puVar15[0xb];
            puVar15[0xb] = uVar29;
            puVar15[0xc] = puVar15[0xd];
            puVar15[0xd] = uVar30;
            puVar15[0xe] = puVar15[0xf];
            puVar15[0xf] = uVar31;
            puVar15[0x10] = puVar15[0x11];
            puVar15[0x11] = uVar32;
            puVar15[0x12] = puVar15[0x13];
            puVar15[0x13] = uVar33;
            puVar15[0x14] = puVar15[0x15];
            puVar15[0x15] = uVar34;
            puVar15[0x16] = puVar15[0x17];
            puVar15[0x17] = uVar35;
            puVar15[0x18] = puVar15[0x19];
            puVar15[0x19] = uVar36;
            puVar15[0x1a] = puVar15[0x1b];
            puVar15[0x1b] = uVar37;
            puVar15[0x1c] = puVar15[0x1d];
            puVar15[0x1d] = uVar38;
            puVar15[0x1e] = puVar15[0x1f];
            puVar15[0x1f] = uVar39;
            puVar15 = puVar15 + 0x40;
          } while (uVar9 != 0);
          if (uVar22 == uVar14) {
            return 0;
          }
        }
        do {
          uVar24 = *puVar10;
          uVar18 = uVar18 - 2;
          *puVar10 = puVar10[1];
          puVar10[1] = uVar24;
          puVar10 = puVar10 + 2;
        } while (1 < uVar18);
        return 0;
      }
    }
  }
  return 0;
}



undefined8 FUN_01091808(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  ulong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint3 uVar10;
  uint3 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  short *psVar24;
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
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  uint5 uVar59;
  byte bVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  undefined1 uVar72;
  undefined1 uVar73;
  uint uVar70;
  undefined1 uVar74;
  uint5 uVar71;
  byte bVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  uint5 uVar82;
  byte bVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  byte bVar91;
  undefined1 uVar92;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  uint5 uVar93;
  byte bVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  uint5 uVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  uint5 uVar106;
  byte bVar107;
  uint5 uVar108;
  uint5 uVar109;
  byte bVar110;
  uint5 uVar111;
  byte bVar112;
  byte bVar113;
  uint5 uVar114;
  byte bVar115;
  uint5 uVar116;
  uint5 uVar117;
  uint5 uVar118;
  uint5 uVar119;
  
  lVar22 = *param_2;
  if (lVar22 == 0) {
    return 0x23;
  }
  if (*(uint *)(lVar22 + 0x20) <= param_3) {
    return 6;
  }
  lVar23 = *(long *)(lVar22 + 0x210);
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = (ulong)(param_3 - 1);
  }
  psVar24 = (short *)(lVar23 + uVar4 * 0x18);
  uVar21 = *(undefined8 *)(lVar22 + 0xc0);
  iVar2 = (int)psVar24[4] + (int)psVar24[3];
  *(int *)(param_1 + 0x98) = iVar2;
  sVar6 = psVar24[1];
  sVar5 = *psVar24;
  *(undefined2 *)(param_1 + 0xb0) = 1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  iVar9 = (int)sVar6 - (int)sVar5;
  *(int *)(param_1 + 0x9c) = iVar9;
  uVar15 = *(uint *)(lVar22 + 0x230) & 3;
  if (7 < (1 << (ulong)uVar15 & 0xfU) - 1) {
    return 3;
  }
  switch(uVar15) {
  case 0:
    uVar15 = iVar9 + 7U >> 3;
    break;
  case 1:
    uVar15 = iVar9 + 0xfU >> 3 & 0x1ffffffe;
    break;
  case 2:
    uVar15 = iVar9 + 0x1fU >> 3 & 0x1ffffffc;
    break;
  case 3:
    uVar15 = iVar9 + 0x3fU >> 3 & 0x1ffffff8;
  }
  uVar8 = iVar2 * uVar15;
  uVar20 = (ulong)uVar8;
  *(uint *)(param_1 + 0xa0) = uVar15;
  uVar12 = ft_glyphslot_alloc_bitmap(param_1,uVar20);
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  uVar12 = FT_Stream_Seek(uVar21,*(undefined8 *)(lVar23 + uVar4 * 0x18 + 0x10));
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  uVar21 = FT_Stream_Read(uVar21,*(undefined8 *)(param_1 + 0xa8),uVar20);
  if ((int)uVar21 != 0) {
    return uVar21;
  }
  uVar13 = *(ulong *)(lVar22 + 0x230);
  if ((((uint)uVar13 >> 3 & 1) == 0) && (uVar8 != 0)) {
    pbVar16 = *(byte **)(param_1 + 0xa8);
    uVar13 = uVar20;
    if (uVar8 < 0x10) {
LAB_01091aa4:
      do {
                    /* try { // try from 01091aa4 to 01191ac3 has its CatchHandler @ 01091c88 */
        uVar13 = uVar13 - 1;
        uVar15 = (*pbVar16 & 0xaaaaaaaa) >> 1 | (*pbVar16 & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        *pbVar16 = (byte)(uVar15 >> 4) | (byte)((uVar15 & 0xf0f0f0f) << 4);
        pbVar16 = pbVar16 + 1;
      } while (uVar13 != 0);
    }
    else {
      uVar15 = uVar8 & 0xf;
      lVar17 = uVar20 - uVar15;
      if (lVar17 == 0) goto LAB_01091aa4;
      pbVar3 = pbVar16 + lVar17;
      do {
        uVar12 = *(undefined8 *)(pbVar16 + 8);
        uVar21 = *(undefined8 *)pbVar16;
        lVar17 = lVar17 + -0x10;
        uVar10 = CONCAT12((char)((ulong)uVar21 >> 8),(short)uVar21) & 0xff00ff;
        bVar68 = (byte)((ulong)uVar21 >> 0x10);
        bVar80 = (byte)((ulong)uVar21 >> 0x18);
        bVar91 = (byte)((ulong)uVar21 >> 0x20);
        bVar97 = (byte)((ulong)uVar21 >> 0x28);
        bVar104 = (byte)((ulong)uVar21 >> 0x30);
        bVar107 = (byte)((ulong)uVar21 >> 0x38);
        uVar11 = CONCAT12((char)((ulong)uVar12 >> 8),(short)uVar12) & 0xff00ff;
        bVar75 = (byte)((ulong)uVar12 >> 0x10);
        bVar86 = (byte)((ulong)uVar12 >> 0x18);
        bVar103 = (byte)((ulong)uVar12 >> 0x28);
        bVar105 = (byte)((ulong)uVar12 >> 0x30);
        uVar70 = (uint)CONCAT12(bVar103,(ushort)(byte)((ulong)uVar12 >> 0x20));
        bVar110 = (byte)((ulong)uVar12 >> 0x38);
        bVar57 = (byte)(uVar10 >> 0x10);
        bVar63 = (byte)(uVar11 >> 0x10);
        uVar82 = CONCAT14(bVar97 << 1,(uint)(byte)((bVar91 & 0x55) << 1)) & 0xaaffffffff;
        uVar93 = CONCAT14(bVar107 << 1,(uint)(byte)((bVar104 & 0x55) << 1)) & 0xaaffffffff;
        uVar118 = CONCAT14(bVar57 << 1,(uint)((byte)((uVar10 & 0xffff) << 1) & 0xaa)) & 0xaaffffffff
        ;
        uVar119 = CONCAT14(bVar80 << 1,(uint)(byte)((bVar68 & 0x55) << 1)) & 0xaaffffffff;
        uVar116 = CONCAT14(bVar63 << 1,(uint)((byte)((uVar11 & 0xffff) << 1) & 0xaa)) & 0xaaffffffff
        ;
        uVar117 = CONCAT14(bVar86 << 1,(uint)(byte)((bVar75 & 0x55) << 1)) & 0xaaffffffff;
        uVar102 = CONCAT14(bVar107 >> 1,(uint)(bVar104 >> 1 & 0x55)) & 0x55ffffffff;
        uVar106 = CONCAT14(bVar80 >> 1,(uint)(bVar68 >> 1 & 0x55)) & 0x55ffffffff;
        uVar111 = CONCAT14(bVar63 >> 1,(uint)((byte)((uVar11 & 0xffff) >> 1) & 0x55)) & 0x55ffffffff
        ;
        uVar114 = CONCAT14(bVar86 >> 1,(uint)(bVar75 >> 1 & 0x55)) & 0x55ffffffff;
        uVar59 = CONCAT14(bVar103 << 1,(uint)((byte)((uVar70 & 0xffff) << 1) & 0xaa)) & 0xaaffffffff
        ;
        uVar71 = CONCAT14(bVar110 << 1,(uint)(byte)((bVar105 & 0x55) << 1)) & 0xaaffffffff;
        uVar108 = CONCAT14(bVar103 >> 1,(uint)((byte)((uVar70 & 0xffff) >> 1) & 0x55)) &
                  0x55ffffffff;
        uVar109 = CONCAT14(bVar110 >> 1,(uint)(bVar105 >> 1 & 0x55)) & 0x55ffffffff;
        bVar110 = (byte)uVar111 | (byte)uVar116;
        bVar112 = (byte)(uVar111 >> 0x20) | (byte)(uVar116 >> 0x20);
        bVar113 = (byte)uVar114 | (byte)uVar117;
        bVar115 = (byte)(uVar114 >> 0x20) | (byte)(uVar117 >> 0x20);
        bVar103 = (byte)((ushort)uVar10 >> 1) & 0x55 | (byte)uVar118;
        bVar104 = bVar57 >> 1 & 0x55 | (byte)(uVar118 >> 0x20);
        bVar105 = (byte)uVar106 | (byte)uVar119;
        bVar107 = (byte)(uVar106 >> 0x20) | (byte)(uVar119 >> 0x20);
        bVar80 = bVar91 >> 1 & 0x55 | (byte)uVar82;
        bVar86 = bVar97 >> 1 & 0x55 | (byte)(uVar82 >> 0x20);
        bVar91 = (byte)uVar102 | (byte)uVar93;
        bVar97 = (byte)(uVar102 >> 0x20) | (byte)(uVar93 >> 0x20);
        bVar57 = (byte)uVar108 | (byte)uVar59;
        bVar63 = (byte)(uVar108 >> 0x20) | (byte)(uVar59 >> 0x20);
        bVar68 = (byte)uVar109 | (byte)uVar71;
        bVar75 = (byte)(uVar109 >> 0x20) | (byte)(uVar71 >> 0x20);
                    /* try { // try from 01091a18 to 01191a23 has its CatchHandler @ 01091c60 */
        uVar108 = CONCAT14(bVar104 >> 2,(uint)(bVar103 >> 2 & 0x33)) & 0x33ffffffff;
        uVar109 = CONCAT14(bVar107 >> 2,(uint)(bVar105 >> 2 & 0x33)) & 0x33ffffffff;
        uVar102 = CONCAT14(bVar97 >> 2,(uint)(bVar91 >> 2 & 0x33)) & 0x33ffffffff;
        uVar111 = CONCAT14(bVar112 << 2,(uint)(byte)((bVar110 & 0x33) << 2)) & 0xccffffffff;
        uVar114 = CONCAT14(bVar115 << 2,(uint)(byte)((bVar113 & 0x33) << 2)) & 0xccffffffff;
        uVar106 = CONCAT14(bVar107 << 2,(uint)(byte)((bVar105 & 0x33) << 2)) & 0xccffffffff;
        uVar82 = CONCAT14(bVar86 << 2,(uint)(byte)((bVar80 & 0x33) << 2)) & 0xccffffffff;
        uVar93 = CONCAT14(bVar97 << 2,(uint)(byte)((bVar91 & 0x33) << 2)) & 0xccffffffff;
        uVar116 = CONCAT14(bVar63 >> 2,(uint)(bVar57 >> 2 & 0x33)) & 0x33ffffffff;
        uVar117 = CONCAT14(bVar75 >> 2,(uint)(bVar68 >> 2 & 0x33)) & 0x33ffffffff;
        uVar59 = CONCAT14(bVar63 << 2,(uint)(byte)((bVar57 & 0x33) << 2)) & 0xccffffffff;
        uVar71 = CONCAT14(bVar75 << 2,(uint)(byte)((bVar68 & 0x33) << 2)) & 0xccffffffff;
        bVar80 = bVar80 >> 2 & 0x33 | (byte)uVar82;
        bVar86 = bVar86 >> 2 & 0x33 | (byte)(uVar82 >> 0x20);
        bVar91 = (byte)uVar102 | (byte)uVar93;
        bVar97 = (byte)(uVar102 >> 0x20) | (byte)(uVar93 >> 0x20);
        bVar103 = (byte)uVar108 | (bVar103 & 0x33) << 2;
        bVar104 = (byte)(uVar108 >> 0x20) | (bVar104 & 0x33) << 2;
        bVar105 = (byte)uVar109 | (byte)uVar106;
        bVar107 = (byte)(uVar109 >> 0x20) | (byte)(uVar106 >> 0x20);
        bVar110 = bVar110 >> 2 & 0x33 | (byte)uVar111;
        bVar112 = bVar112 >> 2 & 0x33 | (byte)(uVar111 >> 0x20);
        bVar113 = bVar113 >> 2 & 0x33 | (byte)uVar114;
        bVar115 = bVar115 >> 2 & 0x33 | (byte)(uVar114 >> 0x20);
        bVar57 = (byte)uVar116 | (byte)uVar59;
        bVar63 = (byte)(uVar116 >> 0x20) | (byte)(uVar59 >> 0x20);
        bVar68 = (byte)uVar117 | (byte)uVar71;
        bVar75 = (byte)(uVar117 >> 0x20) | (byte)(uVar71 >> 0x20);
                    /* try { // try from 01091a70 to 01191a7b has its CatchHandler @ 01091c1c */
        *(ulong *)(pbVar16 + 8) =
             CONCAT17(bVar75 >> 4 | bVar75 << 4,
                      CONCAT16(bVar68 >> 4 | bVar68 << 4,
                               CONCAT15(bVar63 >> 4 | bVar63 << 4,
                                        CONCAT14(bVar57 >> 4 | bVar57 << 4,
                                                 CONCAT13(bVar115 >> 4 | bVar115 << 4,
                                                          CONCAT12(bVar113 >> 4 | bVar113 << 4,
                                                                   CONCAT11(bVar112 >> 4 |
                                                                            bVar112 << 4,
                                                                            bVar110 >> 4 |
                                                                            bVar110 << 4)))))));
        *(ulong *)pbVar16 =
             CONCAT17(bVar97 >> 4 | bVar97 << 4,
                      CONCAT16(bVar91 >> 4 | bVar91 << 4,
                               CONCAT15(bVar86 >> 4 | bVar86 << 4,
                                        CONCAT14(bVar80 >> 4 | bVar80 << 4,
                                                 CONCAT13(bVar107 >> 4 | bVar107 << 4,
                                                          CONCAT12(bVar105 >> 4 | bVar105 << 4,
                                                                   CONCAT11(bVar104 >> 4 |
                                                                            bVar104 << 4,
                                                                            bVar103 >> 4 |
                                                                            bVar103 << 4)))))));
        pbVar16 = pbVar16 + 0x10;
      } while (lVar17 != 0);
      uVar13 = (ulong)uVar15;
      pbVar16 = pbVar3;
      if (uVar15 != 0) goto LAB_01091aa4;
    }
    uVar13 = *(ulong *)(lVar22 + 0x230);
  }
                    /* try { // try from 01091ac4 to 01191d33 has its CatchHandler @ 01091648 */
  if ((((uint)(uVar13 >> 2) & 0x3fffffff ^ (uint)uVar13 >> 3) & 1) != 0) {
    uVar15 = 1 << (ulong)((uint)uVar13 >> 4 & 3) & 0xf;
    if (uVar15 == 4) {
      if (3 < uVar8) {
        puVar18 = *(undefined1 **)(param_1 + 0xa8);
        uVar13 = (uVar20 - 4 >> 2) + 1;
        if (0x1f < uVar13) {
          uVar14 = uVar13 & 0x1f;
          lVar17 = uVar13 - uVar14;
          if (lVar17 != 0) {
            lVar1 = lVar17 * 4;
            uVar20 = (uVar20 + uVar14 * 4 + -4) - (uVar20 - 4 & 0xfffffffffffffffc);
            puVar19 = puVar18 + 0x40;
            do {
              uVar25 = *puVar19;
              uVar41 = puVar19[1];
              uVar26 = puVar19[4];
              uVar42 = puVar19[5];
              uVar27 = puVar19[8];
              uVar43 = puVar19[9];
              uVar28 = puVar19[0xc];
              uVar44 = puVar19[0xd];
              uVar29 = puVar19[0x10];
              uVar45 = puVar19[0x11];
              uVar30 = puVar19[0x14];
              uVar46 = puVar19[0x15];
              uVar31 = puVar19[0x18];
              uVar47 = puVar19[0x19];
              uVar32 = puVar19[0x1c];
              uVar48 = puVar19[0x1d];
              uVar33 = puVar19[0x20];
              uVar49 = puVar19[0x21];
              uVar34 = puVar19[0x24];
              uVar50 = puVar19[0x25];
              uVar35 = puVar19[0x28];
              uVar51 = puVar19[0x29];
              uVar36 = puVar19[0x2c];
              uVar52 = puVar19[0x2d];
              uVar37 = puVar19[0x30];
              uVar53 = puVar19[0x31];
              uVar38 = puVar19[0x34];
              uVar54 = puVar19[0x35];
              uVar39 = puVar19[0x38];
              uVar55 = puVar19[0x39];
              uVar40 = puVar19[0x3c];
              uVar56 = puVar19[0x3d];
              uVar58 = puVar19[-0x40];
              uVar81 = puVar19[-0x3f];
              uVar60 = puVar19[-0x3c];
              uVar83 = puVar19[-0x3b];
              uVar61 = puVar19[-0x38];
              uVar84 = puVar19[-0x37];
              uVar62 = puVar19[-0x34];
              uVar85 = puVar19[-0x33];
              uVar64 = puVar19[-0x30];
              uVar87 = puVar19[-0x2f];
              uVar65 = puVar19[-0x2c];
              uVar88 = puVar19[-0x2b];
              uVar66 = puVar19[-0x28];
              uVar89 = puVar19[-0x27];
              uVar67 = puVar19[-0x24];
              uVar90 = puVar19[-0x23];
              uVar69 = puVar19[-0x20];
              uVar92 = puVar19[-0x1f];
              uVar72 = puVar19[-0x1c];
              uVar94 = puVar19[-0x1b];
              uVar73 = puVar19[-0x18];
              uVar95 = puVar19[-0x17];
              uVar74 = puVar19[-0x14];
              uVar96 = puVar19[-0x13];
              uVar76 = puVar19[-0x10];
              uVar98 = puVar19[-0xf];
              uVar77 = puVar19[-0xc];
              uVar99 = puVar19[-0xb];
              uVar78 = puVar19[-8];
              uVar100 = puVar19[-7];
              uVar79 = puVar19[-4];
              uVar101 = puVar19[-3];
              lVar17 = lVar17 + -0x20;
              puVar19[-0x40] = puVar19[-0x3d];
              puVar19[-0x3f] = puVar19[-0x3e];
              puVar19[-0x3e] = uVar81;
              puVar19[-0x3d] = uVar58;
              puVar19[-0x3c] = puVar19[-0x39];
              puVar19[-0x3b] = puVar19[-0x3a];
              puVar19[-0x3a] = uVar83;
              puVar19[-0x39] = uVar60;
              puVar19[-0x38] = puVar19[-0x35];
              puVar19[-0x37] = puVar19[-0x36];
              puVar19[-0x36] = uVar84;
              puVar19[-0x35] = uVar61;
              puVar19[-0x34] = puVar19[-0x31];
              puVar19[-0x33] = puVar19[-0x32];
              puVar19[-0x32] = uVar85;
              puVar19[-0x31] = uVar62;
              puVar19[-0x30] = puVar19[-0x2d];
              puVar19[-0x2f] = puVar19[-0x2e];
              puVar19[-0x2e] = uVar87;
              puVar19[-0x2d] = uVar64;
              puVar19[-0x2c] = puVar19[-0x29];
              puVar19[-0x2b] = puVar19[-0x2a];
              puVar19[-0x2a] = uVar88;
              puVar19[-0x29] = uVar65;
              puVar19[-0x28] = puVar19[-0x25];
              puVar19[-0x27] = puVar19[-0x26];
              puVar19[-0x26] = uVar89;
              puVar19[-0x25] = uVar66;
              puVar19[-0x24] = puVar19[-0x21];
              puVar19[-0x23] = puVar19[-0x22];
              puVar19[-0x22] = uVar90;
              puVar19[-0x21] = uVar67;
              puVar19[-0x20] = puVar19[-0x1d];
              puVar19[-0x1f] = puVar19[-0x1e];
              puVar19[-0x1e] = uVar92;
              puVar19[-0x1d] = uVar69;
              puVar19[-0x1c] = puVar19[-0x19];
              puVar19[-0x1b] = puVar19[-0x1a];
              puVar19[-0x1a] = uVar94;
              puVar19[-0x19] = uVar72;
              puVar19[-0x18] = puVar19[-0x15];
              puVar19[-0x17] = puVar19[-0x16];
              puVar19[-0x16] = uVar95;
              puVar19[-0x15] = uVar73;
              puVar19[-0x14] = puVar19[-0x11];
              puVar19[-0x13] = puVar19[-0x12];
              puVar19[-0x12] = uVar96;
              puVar19[-0x11] = uVar74;
              puVar19[-0x10] = puVar19[-0xd];
              puVar19[-0xf] = puVar19[-0xe];
              puVar19[-0xe] = uVar98;
              puVar19[-0xd] = uVar76;
              puVar19[-0xc] = puVar19[-9];
              puVar19[-0xb] = puVar19[-10];
              puVar19[-10] = uVar99;
              puVar19[-9] = uVar77;
              puVar19[-8] = puVar19[-5];
              puVar19[-7] = puVar19[-6];
              puVar19[-6] = uVar100;
              puVar19[-5] = uVar78;
              puVar19[-4] = puVar19[-1];
              puVar19[-3] = puVar19[-2];
              puVar19[-2] = uVar101;
              puVar19[-1] = uVar79;
              *puVar19 = puVar19[3];
              puVar19[1] = puVar19[2];
              puVar19[2] = uVar41;
              puVar19[3] = uVar25;
              puVar19[4] = puVar19[7];
              puVar19[5] = puVar19[6];
              puVar19[6] = uVar42;
              puVar19[7] = uVar26;
              puVar19[8] = puVar19[0xb];
              puVar19[9] = puVar19[10];
              puVar19[10] = uVar43;
              puVar19[0xb] = uVar27;
              puVar19[0xc] = puVar19[0xf];
              puVar19[0xd] = puVar19[0xe];
              puVar19[0xe] = uVar44;
              puVar19[0xf] = uVar28;
              puVar19[0x10] = puVar19[0x13];
              puVar19[0x11] = puVar19[0x12];
              puVar19[0x12] = uVar45;
              puVar19[0x13] = uVar29;
              puVar19[0x14] = puVar19[0x17];
              puVar19[0x15] = puVar19[0x16];
              puVar19[0x16] = uVar46;
              puVar19[0x17] = uVar30;
              puVar19[0x18] = puVar19[0x1b];
              puVar19[0x19] = puVar19[0x1a];
              puVar19[0x1a] = uVar47;
              puVar19[0x1b] = uVar31;
              puVar19[0x1c] = puVar19[0x1f];
              puVar19[0x1d] = puVar19[0x1e];
              puVar19[0x1e] = uVar48;
              puVar19[0x1f] = uVar32;
              puVar19[0x20] = puVar19[0x23];
              puVar19[0x21] = puVar19[0x22];
              puVar19[0x22] = uVar49;
              puVar19[0x23] = uVar33;
              puVar19[0x24] = puVar19[0x27];
              puVar19[0x25] = puVar19[0x26];
              puVar19[0x26] = uVar50;
              puVar19[0x27] = uVar34;
              puVar19[0x28] = puVar19[0x2b];
              puVar19[0x29] = puVar19[0x2a];
              puVar19[0x2a] = uVar51;
              puVar19[0x2b] = uVar35;
              puVar19[0x2c] = puVar19[0x2f];
              puVar19[0x2d] = puVar19[0x2e];
              puVar19[0x2e] = uVar52;
              puVar19[0x2f] = uVar36;
              puVar19[0x30] = puVar19[0x33];
              puVar19[0x31] = puVar19[0x32];
              puVar19[0x32] = uVar53;
              puVar19[0x33] = uVar37;
              puVar19[0x34] = puVar19[0x37];
              puVar19[0x35] = puVar19[0x36];
              puVar19[0x36] = uVar54;
              puVar19[0x37] = uVar38;
              puVar19[0x38] = puVar19[0x3b];
              puVar19[0x39] = puVar19[0x3a];
              puVar19[0x3a] = uVar55;
              puVar19[0x3b] = uVar39;
              puVar19[0x3c] = puVar19[0x3f];
              puVar19[0x3d] = puVar19[0x3e];
              puVar19[0x3e] = uVar56;
              puVar19[0x3f] = uVar40;
              puVar19 = puVar19 + 0x80;
            } while (lVar17 != 0);
            puVar18 = puVar18 + lVar1;
            if (uVar14 == 0) goto LAB_01091c58;
          }
        }
        do {
          uVar25 = *puVar18;
          uVar26 = puVar18[1];
          uVar20 = uVar20 - 4;
          *puVar18 = puVar18[3];
          puVar18[3] = uVar25;
          puVar18[1] = puVar18[2];
          puVar18[2] = uVar26;
          puVar18 = puVar18 + 4;
        } while (3 < uVar20);
      }
    }
    else if ((uVar15 == 2) && (1 < uVar8)) {
      puVar18 = *(undefined1 **)(param_1 + 0xa8);
      uVar13 = (uVar20 - 2 >> 1) + 1;
      if (0x1f < uVar13) {
        uVar14 = uVar13 & 0x1f;
        lVar17 = uVar13 - uVar14;
        if (lVar17 != 0) {
          lVar1 = lVar17 * 2;
          uVar20 = (uVar20 + uVar14 * 2 + -2) - (uVar20 - 2 & 0xfffffffffffffffe);
          puVar19 = puVar18 + 0x20;
          do {
            uVar25 = *puVar19;
            uVar26 = puVar19[2];
            uVar27 = puVar19[4];
            uVar28 = puVar19[6];
            uVar29 = puVar19[8];
            uVar30 = puVar19[10];
            uVar31 = puVar19[0xc];
            uVar32 = puVar19[0xe];
            uVar33 = puVar19[0x10];
            uVar34 = puVar19[0x12];
            uVar35 = puVar19[0x14];
            uVar36 = puVar19[0x16];
            uVar37 = puVar19[0x18];
            uVar38 = puVar19[0x1a];
            uVar39 = puVar19[0x1c];
            uVar40 = puVar19[0x1e];
            uVar41 = puVar19[-0x20];
            uVar42 = puVar19[-0x1e];
            uVar43 = puVar19[-0x1c];
            uVar44 = puVar19[-0x1a];
            uVar45 = puVar19[-0x18];
            uVar46 = puVar19[-0x16];
            uVar47 = puVar19[-0x14];
            uVar48 = puVar19[-0x12];
            uVar49 = puVar19[-0x10];
            uVar50 = puVar19[-0xe];
            uVar51 = puVar19[-0xc];
            uVar52 = puVar19[-10];
            uVar53 = puVar19[-8];
            uVar54 = puVar19[-6];
            uVar55 = puVar19[-4];
            uVar56 = puVar19[-2];
            lVar17 = lVar17 + -0x20;
            puVar19[-0x20] = puVar19[-0x1f];
            puVar19[-0x1f] = uVar41;
            puVar19[-0x1e] = puVar19[-0x1d];
            puVar19[-0x1d] = uVar42;
            puVar19[-0x1c] = puVar19[-0x1b];
            puVar19[-0x1b] = uVar43;
            puVar19[-0x1a] = puVar19[-0x19];
            puVar19[-0x19] = uVar44;
            puVar19[-0x18] = puVar19[-0x17];
            puVar19[-0x17] = uVar45;
            puVar19[-0x16] = puVar19[-0x15];
            puVar19[-0x15] = uVar46;
            puVar19[-0x14] = puVar19[-0x13];
            puVar19[-0x13] = uVar47;
            puVar19[-0x12] = puVar19[-0x11];
            puVar19[-0x11] = uVar48;
            puVar19[-0x10] = puVar19[-0xf];
            puVar19[-0xf] = uVar49;
            puVar19[-0xe] = puVar19[-0xd];
            puVar19[-0xd] = uVar50;
            puVar19[-0xc] = puVar19[-0xb];
            puVar19[-0xb] = uVar51;
            puVar19[-10] = puVar19[-9];
            puVar19[-9] = uVar52;
            puVar19[-8] = puVar19[-7];
            puVar19[-7] = uVar53;
            puVar19[-6] = puVar19[-5];
            puVar19[-5] = uVar54;
            puVar19[-4] = puVar19[-3];
            puVar19[-3] = uVar55;
            puVar19[-2] = puVar19[-1];
            puVar19[-1] = uVar56;
            *puVar19 = puVar19[1];
            puVar19[1] = uVar25;
            puVar19[2] = puVar19[3];
            puVar19[3] = uVar26;
            puVar19[4] = puVar19[5];
            puVar19[5] = uVar27;
            puVar19[6] = puVar19[7];
            puVar19[7] = uVar28;
            puVar19[8] = puVar19[9];
            puVar19[9] = uVar29;
            puVar19[10] = puVar19[0xb];
            puVar19[0xb] = uVar30;
            puVar19[0xc] = puVar19[0xd];
            puVar19[0xd] = uVar31;
            puVar19[0xe] = puVar19[0xf];
            puVar19[0xf] = uVar32;
            puVar19[0x10] = puVar19[0x11];
            puVar19[0x11] = uVar33;
            puVar19[0x12] = puVar19[0x13];
            puVar19[0x13] = uVar34;
            puVar19[0x14] = puVar19[0x15];
            puVar19[0x15] = uVar35;
            puVar19[0x16] = puVar19[0x17];
            puVar19[0x17] = uVar36;
            puVar19[0x18] = puVar19[0x19];
            puVar19[0x19] = uVar37;
            puVar19[0x1a] = puVar19[0x1b];
            puVar19[0x1b] = uVar38;
            puVar19[0x1c] = puVar19[0x1d];
            puVar19[0x1d] = uVar39;
            puVar19[0x1e] = puVar19[0x1f];
            puVar19[0x1f] = uVar40;
            puVar19 = puVar19 + 0x40;
          } while (lVar17 != 0);
          puVar18 = puVar18 + lVar1;
          if (uVar14 == 0) goto LAB_01091c58;
        }
      }
      do {
        uVar25 = *puVar18;
        uVar20 = uVar20 - 2;
        *puVar18 = puVar18[1];
        puVar18[1] = uVar25;
                    /* catch() { ... } // from try @ 01091a70 with catch @ 01091c1c */
        puVar18 = puVar18 + 2;
      } while (1 < uVar20);
    }
  }
LAB_01091c58:
                    /* catch() { ... } // from try @ 01091a18 with catch @ 01091c60 */
  *(undefined4 *)(param_1 + 0x90) = 0x62697473;
  sVar5 = *psVar24;
                    /* catch(type#1 @ 017356f8) { ... } // from try @ 01091a98 with catch @ 01091c70
                        */
  *(int *)(param_1 + 0xc0) = (int)sVar5;
  sVar6 = psVar24[3];
  *(int *)(param_1 + 0xc4) = (int)sVar6;
                    /* catch(type#1 @ 017356f8) { ... } // from try @ 01091aa4 with catch @ 01091c88
                        */
  sVar7 = *(short *)(lVar23 + uVar4 * 0x18 + 4);
  *(ulong *)(param_1 + 0x40) =
       -((ulong)(long)sVar5 >> 0x1f & 1) & 0xffffffc000000000 | ((long)sVar5 & 0xffffffffU) << 6;
  *(ulong *)(param_1 + 0x48) =
       -((ulong)(long)sVar6 >> 0x1f & 1) & 0xffffffc000000000 | ((long)sVar6 & 0xffffffffU) << 6;
  *(long *)(param_1 + 0x50) = (long)sVar7 << 6;
  *(long *)(param_1 + 0x30) = (long)(((int)psVar24[1] - (int)sVar5) * 0x40);
  *(ulong *)(param_1 + 0x38) = (ulong)(uint)(*(int *)(param_1 + 0x98) << 6);
  ft_synthesize_vertical_metrics
            (param_1 + 0x30,(*(long *)(lVar22 + 0x188) + *(long *)(lVar22 + 0x180)) * 0x40);
  return 0;
}


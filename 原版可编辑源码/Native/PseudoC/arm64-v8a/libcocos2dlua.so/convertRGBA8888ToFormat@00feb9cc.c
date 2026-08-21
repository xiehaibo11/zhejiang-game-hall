
/* cocos2d::Texture2D::convertRGBA8888ToFormat(unsigned char const*, long,
   cocos2d::Texture2D::PixelFormat, unsigned char**, long*) */

undefined8
cocos2d::Texture2D::convertRGBA8888ToFormat
          (byte *param_1,ulong param_2,undefined4 param_3,undefined8 *param_4,size_t *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint3 uVar9;
  size_t __size;
  byte *pbVar10;
  byte *pbVar27;
  byte *pbVar29;
  undefined8 uVar57;
  ushort *puVar58;
  long lVar59;
  long lVar60;
  ushort *puVar61;
  ulong uVar62;
  ulong uVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
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
  byte bVar96;
  byte bVar97;
  byte bVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  ulong uVar99;
  ulong uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  ulong uVar104;
  ulong uVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  ushort uVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
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
  byte *pbVar28;
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
  byte *pbVar46;
  byte *pbVar47;
  byte *pbVar48;
  byte *pbVar49;
  byte *pbVar50;
  byte *pbVar51;
  byte *pbVar52;
  byte *pbVar53;
  byte *pbVar54;
  byte *pbVar55;
  byte *pbVar56;
  
  switch(param_3) {
  case 3:
    uVar99 = param_2 + 3;
    if (-1 < (long)param_2) {
      uVar99 = param_2;
    }
    __size = ((long)uVar99 >> 2) * 3;
    *param_5 = __size;
    pbVar56 = malloc(__size);
    *param_4 = pbVar56;
    if (0 < (long)(param_2 - 3)) {
      uVar62 = param_2 - 4 >> 2;
      uVar99 = uVar62 + 1;
      pbVar30 = pbVar56;
      if (uVar99 < 0x11) {
        lVar59 = 0;
      }
      else {
                    /* try { // try from 00febde0 to 010ebde7 has its CatchHandler @ 00febe88 */
                    /* try { // try from 00febde8 to 010ebea3 has its CatchHandler @ 00febdb4 */
        if ((pbVar56 < param_1 + (param_2 - 4 | 3)) && (param_1 < pbVar56 + uVar62 * 3 + 3)) {
          lVar59 = 0;
        }
        else {
          uVar63 = 0x10;
          if ((uVar99 & 0xf) != 0) {
            uVar63 = uVar99 & 0xf;
          }
          lVar59 = (uVar99 - uVar63) * 4;
                    /* try { // try from 00fec20c to 010ec213 has its CatchHandler @ 00fec274 */
          pbVar30 = pbVar56 + (uVar99 - uVar63) * 3;
          lVar60 = (uVar62 - uVar63) + 1;
                    /* try { // try from 00fec214 to 010ec28f has its CatchHandler @ 00fec1d4 */
          pbVar34 = param_1;
          do {
            bVar73 = *pbVar34;
            bVar121 = pbVar34[1];
            bVar72 = pbVar34[2];
            bVar93 = pbVar34[4];
            bVar122 = pbVar34[5];
            bVar74 = pbVar34[6];
            bVar96 = pbVar34[8];
            bVar123 = pbVar34[9];
            bVar75 = pbVar34[10];
            bVar97 = pbVar34[0xc];
            bVar124 = pbVar34[0xd];
            bVar76 = pbVar34[0xe];
            bVar98 = pbVar34[0x10];
            bVar89 = pbVar34[0x11];
            bVar77 = pbVar34[0x12];
            bVar110 = pbVar34[0x14];
            bVar90 = pbVar34[0x15];
            bVar78 = pbVar34[0x16];
            bVar111 = pbVar34[0x18];
            bVar91 = pbVar34[0x19];
            bVar79 = pbVar34[0x1a];
            bVar112 = pbVar34[0x1c];
            bVar92 = pbVar34[0x1d];
            bVar80 = pbVar34[0x1e];
            bVar113 = pbVar34[0x20];
            bVar64 = pbVar34[0x21];
            bVar81 = pbVar34[0x22];
            bVar114 = pbVar34[0x24];
            bVar65 = pbVar34[0x25];
            bVar82 = pbVar34[0x26];
            bVar115 = pbVar34[0x28];
            bVar66 = pbVar34[0x29];
            bVar83 = pbVar34[0x2a];
            bVar116 = pbVar34[0x2c];
            bVar67 = pbVar34[0x2d];
            bVar84 = pbVar34[0x2e];
            bVar117 = pbVar34[0x30];
            bVar68 = pbVar34[0x31];
            bVar85 = pbVar34[0x32];
            bVar118 = pbVar34[0x34];
            bVar69 = pbVar34[0x35];
            bVar86 = pbVar34[0x36];
            bVar119 = pbVar34[0x38];
            bVar70 = pbVar34[0x39];
            bVar87 = pbVar34[0x3a];
            bVar120 = pbVar34[0x3c];
            bVar71 = pbVar34[0x3d];
            bVar88 = pbVar34[0x3e];
            pbVar34 = pbVar34 + 0x40;
            lVar60 = lVar60 + -0x10;
            *pbVar56 = bVar73;
            pbVar56[1] = bVar121;
            pbVar56[2] = bVar72;
            pbVar56[3] = bVar93;
            pbVar56[4] = bVar122;
            pbVar56[5] = bVar74;
            pbVar56[6] = bVar96;
            pbVar56[7] = bVar123;
            pbVar56[8] = bVar75;
            pbVar56[9] = bVar97;
            pbVar56[10] = bVar124;
            pbVar56[0xb] = bVar76;
            pbVar56[0xc] = bVar98;
            pbVar56[0xd] = bVar89;
            pbVar56[0xe] = bVar77;
            pbVar56[0xf] = bVar110;
            pbVar56[0x10] = bVar90;
            pbVar56[0x11] = bVar78;
            pbVar56[0x12] = bVar111;
            pbVar56[0x13] = bVar91;
            pbVar56[0x14] = bVar79;
            pbVar56[0x15] = bVar112;
            pbVar56[0x16] = bVar92;
            pbVar56[0x17] = bVar80;
            pbVar56[0x18] = bVar113;
            pbVar56[0x19] = bVar64;
            pbVar56[0x1a] = bVar81;
            pbVar56[0x1b] = bVar114;
            pbVar56[0x1c] = bVar65;
            pbVar56[0x1d] = bVar82;
            pbVar56[0x1e] = bVar115;
            pbVar56[0x1f] = bVar66;
            pbVar56[0x20] = bVar83;
            pbVar56[0x21] = bVar116;
            pbVar56[0x22] = bVar67;
            pbVar56[0x23] = bVar84;
            pbVar56[0x24] = bVar117;
            pbVar56[0x25] = bVar68;
            pbVar56[0x26] = bVar85;
            pbVar56[0x27] = bVar118;
            pbVar56[0x28] = bVar69;
            pbVar56[0x29] = bVar86;
            pbVar56[0x2a] = bVar119;
            pbVar56[0x2b] = bVar70;
            pbVar56[0x2c] = bVar87;
            pbVar56[0x2d] = bVar120;
            pbVar56[0x2e] = bVar71;
            pbVar56[0x2f] = bVar88;
            pbVar56 = pbVar56 + 0x30;
          } while (lVar60 != 0);
        }
      }
      do {
        pbVar56 = param_1 + lVar59;
        lVar59 = lVar59 + 4;
        *pbVar30 = *pbVar56;
        pbVar30[1] = pbVar56[1];
        pbVar30[2] = pbVar56[2];
        pbVar30 = pbVar30 + 3;
      } while (lVar59 < (long)(param_2 - 3));
    }
    uVar57 = 3;
    break;
  case 4:
    uVar99 = param_2;
    if ((long)param_2 < 0) {
      uVar99 = param_2 + 1;
    }
    *param_5 = (long)uVar99 >> 1;
    puVar58 = malloc((long)uVar99 >> 1);
    *param_4 = puVar58;
    if (0 < (long)(param_2 - 3)) {
      uVar62 = param_2 - 4;
      uVar99 = (uVar62 >> 2) + 1;
      if ((uVar99 < 9) ||
         ((puVar58 < param_1 + (uVar62 | 3) &&
          (param_1 < (byte *)((long)puVar58 + (uVar62 >> 1 & 0x7ffffffffffffffe) + 2))))) {
        lVar60 = 0;
        puVar61 = puVar58;
      }
      else {
        uVar63 = 8;
        if ((uVar99 & 7) != 0) {
          uVar63 = uVar99 & 7;
        }
        puVar61 = puVar58 + (uVar99 - uVar63);
        lVar60 = (uVar99 - uVar63) * 4;
        lVar59 = ((uVar62 >> 2) - uVar63) + 1;
        pbVar56 = param_1;
        do {
          bVar73 = *pbVar56;
          pbVar47 = pbVar56 + 1;
          bVar93 = pbVar56[2];
          pbVar48 = pbVar56 + 4;
          pbVar49 = pbVar56 + 5;
          bVar96 = pbVar56[6];
          pbVar42 = pbVar56 + 8;
          pbVar50 = pbVar56 + 9;
          bVar97 = pbVar56[10];
          pbVar51 = pbVar56 + 0xc;
          pbVar52 = pbVar56 + 0xd;
          bVar98 = pbVar56[0xe];
          pbVar53 = pbVar56 + 0x10;
          pbVar33 = pbVar56 + 0x11;
          pbVar34 = pbVar56 + 0x12;
          pbVar29 = pbVar56 + 0x14;
          pbVar46 = pbVar56 + 0x15;
          pbVar45 = pbVar56 + 0x16;
          pbVar44 = pbVar56 + 0x18;
          pbVar54 = pbVar56 + 0x19;
          pbVar31 = pbVar56 + 0x1a;
          pbVar55 = pbVar56 + 0x1c;
          pbVar30 = pbVar56 + 0x1d;
          pbVar43 = pbVar56 + 0x1e;
          pbVar56 = pbVar56 + 0x20;
          lVar59 = lVar59 + -8;
          uVar99 = CONCAT17(*pbVar55,CONCAT16(*pbVar44,CONCAT15(*pbVar29,CONCAT14(*pbVar53,CONCAT13(
                                                  *pbVar51,CONCAT12(*pbVar42,CONCAT11(*pbVar48,
                                                  bVar73))))))) & 0xf8f8f8f8f8f8f8f8;
          uVar62 = CONCAT17(*pbVar30,CONCAT16(*pbVar54,CONCAT15(*pbVar46,CONCAT14(*pbVar33,CONCAT13(
                                                  *pbVar52,CONCAT12(*pbVar50,CONCAT11(*pbVar49,*
                                                  pbVar47))))))) & 0xfcfcfcfcfcfcfcfc;
          sVar1 = (ushort)(byte)uVar62 << 3;
          sVar2 = (ushort)(byte)(uVar62 >> 8) << 3;
          sVar3 = (ushort)(byte)(uVar62 >> 0x10) << 3;
          sVar4 = (ushort)(byte)(uVar62 >> 0x18) << 3;
          sVar5 = (ushort)(byte)(uVar62 >> 0x20) << 3;
          sVar6 = (ushort)(byte)(uVar62 >> 0x28) << 3;
          sVar7 = (ushort)(byte)(uVar62 >> 0x30) << 3;
          sVar8 = (ushort)(byte)(uVar62 >> 0x38) << 3;
          *(ulong *)(puVar58 + 4) =
               CONCAT17((byte)((ushort)sVar8 >> 8) | (byte)(uVar99 >> 0x38),
                        CONCAT16((byte)sVar8 | *pbVar43 >> 3,
                                 CONCAT15((byte)((ushort)sVar7 >> 8) | (byte)(uVar99 >> 0x30),
                                          CONCAT14((byte)sVar7 | *pbVar31 >> 3,
                                                   CONCAT13((byte)((ushort)sVar6 >> 8) |
                                                            (byte)(uVar99 >> 0x28),
                                                            CONCAT12((byte)sVar6 | *pbVar45 >> 3,
                                                                     CONCAT11((byte)((ushort)sVar5
                                                                                    >> 8) |
                                                                              (byte)(uVar99 >> 0x20)
                                                                              ,(byte)sVar5 |
                                                                               *pbVar34 >> 3)))))));
          *(ulong *)puVar58 =
               CONCAT17((byte)((ushort)sVar4 >> 8) | (byte)(uVar99 >> 0x18),
                        CONCAT16((byte)sVar4 | bVar98 >> 3,
                                 CONCAT15((byte)((ushort)sVar3 >> 8) | (byte)(uVar99 >> 0x10),
                                          CONCAT14((byte)sVar3 | bVar97 >> 3,
                                                   CONCAT13((byte)((ushort)sVar2 >> 8) |
                                                            (byte)(uVar99 >> 8),
                                                            CONCAT12((byte)sVar2 | bVar96 >> 3,
                                                                     CONCAT11((byte)((ushort)sVar1
                                                                                    >> 8) |
                                                                              (byte)uVar99,
                                                                              (byte)sVar1 |
                                                                              bVar93 >> 3)))))));
          puVar58 = puVar58 + 8;
        } while (lVar59 != 0);
      }
      do {
        pbVar56 = param_1 + lVar60;
        lVar60 = lVar60 + 4;
                    /* catch() { ... } // from try @ 00febde0 with catch @ 00febe88 */
        *puVar61 = (*pbVar56 & 0xf8) << 8 | (ushort)(pbVar56[1] >> 2) << 5 |
                   (ushort)(pbVar56[2] >> 3);
        puVar61 = puVar61 + 1;
      } while (lVar60 < (long)(param_2 - 3));
    }
    uVar57 = 4;
    break;
  case 5:
    uVar99 = param_2 + 3;
    if (-1 < (long)param_2) {
      uVar99 = param_2;
    }
    *param_5 = (long)uVar99 >> 2;
    pbVar56 = malloc((long)uVar99 >> 2);
    *param_4 = pbVar56;
                    /* catch() { ... } // from try @ 00febb34 with catch @ 00febaf4 */
    if (0 < (long)(param_2 - 3)) {
      uVar62 = param_2 - 4 >> 2;
      uVar99 = uVar62 + 1;
                    /* try { // try from 00febb2c to 010ebb33 has its CatchHandler @ 00febbc8 */
      if ((uVar99 < 0x21) ||
         ((pbVar56 < param_1 + (param_2 & 0xfffffffffffffffc) &&
          (param_1 + 3 < pbVar56 + (param_2 - 4 >> 2) + 1)))) {
        lVar60 = 0;
                    /* try { // try from 00febb34 to 010ebbe3 has its CatchHandler @ 00febaf4 */
      }
      else {
        uVar63 = 0x20;
        if ((uVar99 & 0x1f) != 0) {
          uVar63 = uVar99 & 0x1f;
        }
        pbVar30 = param_1 + 0x43;
        pbVar34 = pbVar56 + 0x10;
        pbVar56 = pbVar56 + (uVar99 - uVar63);
        lVar60 = (uVar99 - uVar63) * 4;
                    /* catch() { ... } // from try @ 00febef4 with catch @ 00febec8 */
        lVar59 = (uVar62 - uVar63) + 1;
        do {
          bVar73 = *pbVar30;
          bVar93 = pbVar30[4];
          bVar96 = pbVar30[8];
          bVar97 = pbVar30[0xc];
          bVar98 = pbVar30[0x10];
          bVar110 = pbVar30[0x14];
          bVar111 = pbVar30[0x18];
          bVar112 = pbVar30[0x1c];
          bVar113 = pbVar30[0x20];
          bVar114 = pbVar30[0x24];
          bVar115 = pbVar30[0x28];
          bVar116 = pbVar30[0x2c];
          bVar117 = pbVar30[0x30];
          bVar118 = pbVar30[0x34];
          bVar119 = pbVar30[0x38];
          bVar120 = pbVar30[0x3c];
          bVar121 = pbVar30[-0x40];
          bVar122 = pbVar30[-0x3c];
          bVar123 = pbVar30[-0x38];
          bVar124 = pbVar30[-0x34];
          bVar89 = pbVar30[-0x30];
          bVar90 = pbVar30[-0x2c];
          bVar91 = pbVar30[-0x28];
          bVar92 = pbVar30[-0x24];
          pbVar53 = pbVar30 + -0x20;
          pbVar48 = pbVar30 + -0x1c;
          pbVar49 = pbVar30 + -0x18;
          pbVar29 = pbVar30 + -0x14;
          pbVar50 = pbVar30 + -0x10;
          pbVar51 = pbVar30 + -0xc;
          pbVar33 = pbVar30 + -8;
          pbVar52 = pbVar30 + -4;
          pbVar30 = pbVar30 + 0x80;
          lVar59 = lVar59 + -0x20;
          *(ulong *)(pbVar34 + -8) =
               CONCAT17(*pbVar52,CONCAT16(*pbVar33,CONCAT15(*pbVar51,CONCAT14(*pbVar50,CONCAT13(*
                                                  pbVar29,CONCAT12(*pbVar49,CONCAT11(*pbVar48,*
                                                  pbVar53)))))));
          *(ulong *)(pbVar34 + -0x10) =
               CONCAT17(bVar92,CONCAT16(bVar91,CONCAT15(bVar90,CONCAT14(bVar89,CONCAT13(bVar124,
                                                  CONCAT12(bVar123,CONCAT11(bVar122,bVar121)))))));
          *(ulong *)(pbVar34 + 8) =
               CONCAT17(bVar120,CONCAT16(bVar119,CONCAT15(bVar118,CONCAT14(bVar117,CONCAT13(bVar116,
                                                  CONCAT12(bVar115,CONCAT11(bVar114,bVar113)))))));
          *(ulong *)pbVar34 =
               CONCAT17(bVar112,CONCAT16(bVar111,CONCAT15(bVar110,CONCAT14(bVar98,CONCAT13(bVar97,
                                                  CONCAT12(bVar96,CONCAT11(bVar93,bVar73)))))));
          pbVar34 = pbVar34 + 0x20;
        } while (lVar59 != 0);
      }
      do {
        lVar59 = lVar60 + 3;
                    /* try { // try from 00febef4 to 010ebf5f has its CatchHandler @ 00febec8 */
        lVar60 = lVar60 + 4;
        *pbVar56 = param_1[lVar59];
        pbVar56 = pbVar56 + 1;
      } while (lVar60 < (long)(param_2 - 3));
    }
    uVar57 = 5;
    break;
  case 6:
    uVar99 = param_2 + 3;
    if (-1 < (long)param_2) {
      uVar99 = param_2;
    }
    *param_5 = (long)uVar99 >> 2;
    pbVar56 = malloc((long)uVar99 >> 2);
    *param_4 = pbVar56;
    if (0 < (long)(param_2 - 3)) {
      uVar62 = param_2 - 4;
      uVar99 = (uVar62 >> 2) + 1;
      if ((uVar99 < 0x11) ||
         ((pbVar56 < param_1 + (uVar62 | 3) && (param_1 < pbVar56 + (uVar62 >> 2) + 1)))) {
        lVar60 = 0;
        pbVar30 = pbVar56;
      }
      else {
        uVar63 = 0x10;
        if ((uVar99 & 0xf) != 0) {
          uVar63 = uVar99 & 0xf;
        }
                    /* catch() { ... } // from try @ 00febeec with catch @ 00febf44 */
        pbVar30 = pbVar56 + (uVar99 - uVar63);
        lVar60 = (uVar99 - uVar63) * 4;
        lVar59 = ((uVar62 >> 2) - uVar63) + 1;
        pbVar34 = param_1;
        do {
          bVar73 = *pbVar34;
          pbVar21 = pbVar34 + 1;
          pbVar20 = pbVar34 + 2;
          pbVar19 = pbVar34 + 4;
          pbVar18 = pbVar34 + 5;
          pbVar17 = pbVar34 + 6;
          pbVar16 = pbVar34 + 8;
          pbVar15 = pbVar34 + 9;
          pbVar26 = pbVar34 + 10;
          pbVar14 = pbVar34 + 0xc;
          pbVar13 = pbVar34 + 0xd;
          pbVar12 = pbVar34 + 0xe;
          pbVar11 = pbVar34 + 0x10;
          pbVar10 = pbVar34 + 0x11;
          pbVar27 = pbVar34 + 0x12;
          pbVar28 = pbVar34 + 0x14;
          pbVar32 = pbVar34 + 0x15;
          pbVar35 = pbVar34 + 0x16;
          pbVar36 = pbVar34 + 0x18;
          pbVar23 = pbVar34 + 0x19;
          pbVar33 = pbVar34 + 0x1a;
          pbVar22 = pbVar34 + 0x1c;
          pbVar53 = pbVar34 + 0x1d;
          pbVar24 = pbVar34 + 0x1e;
          pbVar25 = pbVar34 + 0x20;
          pbVar37 = pbVar34 + 0x21;
          pbVar38 = pbVar34 + 0x22;
          pbVar39 = pbVar34 + 0x24;
          pbVar40 = pbVar34 + 0x25;
          bVar93 = pbVar34[0x26];
          pbVar41 = pbVar34 + 0x28;
          pbVar42 = pbVar34 + 0x29;
          bVar96 = pbVar34[0x2a];
          pbVar43 = pbVar34 + 0x2c;
          pbVar55 = pbVar34 + 0x2d;
          bVar97 = pbVar34[0x2e];
          pbVar31 = pbVar34 + 0x30;
          pbVar54 = pbVar34 + 0x31;
          pbVar44 = pbVar34 + 0x32;
          pbVar45 = pbVar34 + 0x34;
          pbVar46 = pbVar34 + 0x35;
          pbVar47 = pbVar34 + 0x36;
          pbVar48 = pbVar34 + 0x38;
          pbVar49 = pbVar34 + 0x39;
          pbVar29 = pbVar34 + 0x3a;
          pbVar50 = pbVar34 + 0x3c;
          pbVar51 = pbVar34 + 0x3d;
          pbVar52 = pbVar34 + 0x3e;
          pbVar34 = pbVar34 + 0x40;
          lVar59 = lVar59 + -0x10;
          auVar138._0_8_ =
               CONCAT17(0,CONCAT16(*pbVar43,(uint6)CONCAT14(*pbVar41,(uint)CONCAT12(*pbVar39,(ushort
                                                  )*pbVar25))));
          auVar138[8] = *pbVar31;
          auVar138[9] = 0;
          auVar138[10] = *pbVar45;
          auVar138[0xb] = 0;
          auVar138[0xc] = *pbVar48;
          auVar138[0xd] = 0;
          auVar138[0xe] = *pbVar50;
          auVar138[0xf] = 0;
          auVar101._0_8_ =
               CONCAT17(0,CONCAT16(*pbVar14,(uint6)CONCAT14(*pbVar16,(uint)CONCAT12(*pbVar19,(ushort
                                                  )bVar73))));
          auVar101[8] = *pbVar11;
          auVar101[9] = 0;
          auVar101[10] = *pbVar28;
          auVar101[0xb] = 0;
          auVar101[0xc] = *pbVar36;
          auVar101[0xd] = 0;
          auVar101[0xe] = *pbVar22;
          auVar101[0xf] = 0;
          auVar106._0_4_ = CONCAT13(0,CONCAT12(*pbVar18,(ushort)*pbVar21));
          auVar106[4] = *pbVar15;
          auVar106[5] = 0;
          auVar106[6] = *pbVar13;
          auVar106[7] = 0;
          auVar106[8] = *pbVar10;
          auVar106[9] = 0;
          auVar106[10] = *pbVar32;
          auVar106[0xb] = 0;
          auVar106[0xc] = *pbVar23;
          auVar106[0xd] = 0;
          auVar106[0xe] = *pbVar53;
          auVar106[0xf] = 0;
          auVar125._0_4_ = CONCAT13(0,CONCAT12(*pbVar40,(ushort)*pbVar37));
          auVar125[4] = *pbVar42;
          auVar125[5] = 0;
          auVar125[6] = *pbVar55;
          auVar125[7] = 0;
          auVar125[8] = *pbVar54;
          auVar125[9] = 0;
          auVar125[10] = *pbVar46;
          auVar125[0xb] = 0;
          auVar125[0xc] = *pbVar49;
          auVar125[0xd] = 0;
          auVar125[0xe] = *pbVar51;
          auVar125[0xf] = 0;
          uVar128 = CONCAT11(0,*pbVar38);
                    /* catch() { ... } // from try @ 00febfb8 with catch @ 00febf78 */
          auVar108._0_4_ = CONCAT13(0,CONCAT12(*pbVar17,(ushort)*pbVar20));
          auVar108[4] = *pbVar26;
          auVar108[5] = 0;
          auVar108[6] = *pbVar12;
          auVar108[7] = 0;
          auVar108[8] = *pbVar27;
          auVar108[9] = 0;
          auVar108[10] = *pbVar35;
          auVar108[0xb] = 0;
          auVar108[0xc] = *pbVar33;
          auVar108[0xd] = 0;
          auVar108[0xe] = *pbVar24;
          auVar108[0xf] = 0;
          auVar95 = NEON_ext(auVar138,auVar138,8,1);
          auVar103 = NEON_ext(auVar101,auVar101,8,1);
          auVar134 = NEON_umull(auVar101._0_8_,0x12b012b012b012b,2);
          auVar132 = NEON_umull(auVar138._0_8_,0x12b012b012b012b,2);
          auVar133 = NEON_ext(auVar106,auVar106,8,1);
          auVar129 = NEON_ext(auVar125,auVar125,8,1);
          auVar103 = NEON_umull(auVar103._0_8_,0x12b012b012b012b,2);
          auVar95 = NEON_umull(auVar95._0_8_,0x12b012b012b012b,2);
          auVar136[2] = bVar93;
          auVar136._0_2_ = uVar128;
          auVar136[3] = 0;
          auVar136[4] = bVar96;
          auVar136[5] = 0;
          auVar136[6] = bVar97;
          auVar136[7] = 0;
          auVar136[8] = *pbVar44;
          auVar136[9] = 0;
          auVar136[10] = *pbVar47;
          auVar136[0xb] = 0;
          auVar136[0xc] = *pbVar29;
          auVar136[0xd] = 0;
          auVar136[0xe] = *pbVar52;
          auVar136[0xf] = 0;
          auVar137[2] = bVar93;
          auVar137._0_2_ = uVar128;
          auVar137[3] = 0;
          auVar137[4] = bVar96;
          auVar137[5] = 0;
          auVar137[6] = bVar97;
          auVar137[7] = 0;
          auVar137[8] = *pbVar44;
          auVar137[9] = 0;
          auVar137[10] = *pbVar47;
          auVar137[0xb] = 0;
          auVar137[0xc] = *pbVar29;
          auVar137[0xd] = 0;
          auVar137[0xe] = *pbVar52;
          auVar137[0xf] = 0;
          auVar131 = NEON_ext(auVar136,auVar137,8,1);
          auVar135 = NEON_ext(auVar108,auVar108,8,1);
                    /* try { // try from 00febfb0 to 010ebfb7 has its CatchHandler @ 00fec018 */
                    /* try { // try from 00febfb8 to 010ec033 has its CatchHandler @ 00febf78 */
          auVar102._0_8_ =
               CONCAT44(auVar134._4_4_ + (uint)*pbVar18 * 0x24b + (uint)*pbVar17 * 0x72 + 500,
                        auVar134._0_4_ + (auVar106._0_4_ & 0xffff) * 0x24b +
                        (auVar108._0_4_ & 0xffff) * 0x72 + 500);
          auVar102._8_4_ = auVar134._8_4_ + (uint)*pbVar15 * 0x24b + (uint)*pbVar26 * 0x72 + 500;
          auVar102._12_4_ = auVar134._12_4_ + (uint)*pbVar13 * 0x24b + (uint)*pbVar12 * 0x72 + 500;
          auVar94._0_8_ =
               CONCAT44(auVar132._4_4_ + (uint)*pbVar40 * 0x24b + (uint)bVar93 * 0x72 + 500,
                        auVar132._0_4_ + (auVar125._0_4_ & 0xffff) * 0x24b + (uint)uVar128 * 0x72 +
                        500);
          auVar94._8_4_ = auVar132._8_4_ + (uint)*pbVar42 * 0x24b + (uint)bVar96 * 0x72 + 500;
          auVar94._12_4_ = auVar132._12_4_ + (uint)*pbVar55 * 0x24b + (uint)bVar97 * 0x72 + 500;
          auVar107._0_8_ =
               CONCAT44(auVar95._4_4_ + (uint)auVar129._2_2_ * 0x24b + (uint)auVar131._2_2_ * 0x72 +
                        500,auVar95._0_4_ + (uint)auVar129._0_2_ * 0x24b +
                            (uint)auVar131._0_2_ * 0x72 + 500);
          auVar107._8_4_ =
               auVar95._8_4_ + (uint)auVar129._4_2_ * 0x24b + (uint)auVar131._4_2_ * 0x72 + 500;
          auVar107._12_4_ =
               auVar95._12_4_ + (uint)auVar129._6_2_ * 0x24b + (uint)auVar131._6_2_ * 0x72 + 500;
          auVar109._0_8_ =
               CONCAT44(auVar103._4_4_ + (uint)auVar133._2_2_ * 0x24b + (uint)auVar135._2_2_ * 0x72
                        + 500,auVar103._0_4_ + (uint)auVar133._0_2_ * 0x24b +
                              (uint)auVar135._0_2_ * 0x72 + 500);
          auVar109._8_4_ =
               auVar103._8_4_ + (uint)auVar133._4_2_ * 0x24b + (uint)auVar135._4_2_ * 0x72 + 500;
          auVar109._12_4_ =
               auVar103._12_4_ + (uint)auVar133._6_2_ * 0x24b + (uint)auVar135._6_2_ * 0x72 + 500;
          auVar134 = NEON_umull(auVar102._0_8_,0x10624dd310624dd3,4);
          auVar132 = NEON_umull(auVar94._0_8_,0x10624dd310624dd3,4);
          auVar103 = NEON_umull(auVar109._0_8_,0x10624dd310624dd3,4);
          auVar95 = NEON_umull(auVar107._0_8_,0x10624dd310624dd3,4);
                    /* catch() { ... } // from try @ 00febfb0 with catch @ 00fec018 */
          pbVar56[8] = (byte)(auVar132._4_4_ >> 6);
          pbVar56[9] = (byte)(auVar132._12_4_ >> 6);
          pbVar56[10] = (byte)((auVar94._8_8_ & 0xffffffff) / 1000);
          pbVar56[0xb] = (byte)(auVar94._8_8_ / 0x3e800000000);
          pbVar56[0xc] = (byte)(auVar95._4_4_ >> 6);
          pbVar56[0xd] = (byte)(auVar95._12_4_ >> 6);
          pbVar56[0xe] = (byte)((auVar107._8_8_ & 0xffffffff) / 1000);
          pbVar56[0xf] = (byte)(auVar107._8_8_ / 0x3e800000000);
          *pbVar56 = (byte)(auVar134._4_4_ >> 6);
          pbVar56[1] = (byte)(auVar134._12_4_ >> 6);
          pbVar56[2] = (byte)((auVar102._8_8_ & 0xffffffff) / 1000);
          pbVar56[3] = (byte)(auVar102._8_8_ / 0x3e800000000);
          pbVar56[4] = (byte)(auVar103._4_4_ >> 6);
          pbVar56[5] = (byte)(auVar103._12_4_ >> 6);
          pbVar56[6] = (byte)((auVar109._8_8_ & 0xffffffff) / 1000);
          pbVar56[7] = (byte)(auVar109._8_8_ / 0x3e800000000);
          pbVar56 = pbVar56 + 0x10;
        } while (lVar59 != 0);
      }
      do {
        pbVar56 = param_1 + lVar60;
        lVar60 = lVar60 + 4;
        *pbVar30 = (byte)(((uint)pbVar56[1] * 0x24b + (uint)*pbVar56 * 299 + (uint)pbVar56[2] * 0x72
                          + 500) / 1000);
        pbVar30 = pbVar30 + 1;
      } while (lVar60 < (long)(param_2 - 3));
    }
    uVar57 = 6;
    break;
  case 7:
    uVar99 = param_2;
    if ((long)param_2 < 0) {
      uVar99 = param_2 + 1;
    }
    *param_5 = (long)uVar99 >> 1;
    pbVar56 = malloc((long)uVar99 >> 1);
    *param_4 = pbVar56;
    if (0 < (long)(param_2 - 3)) {
                    /* catch() { ... } // from try @ 00febb2c with catch @ 00febbc8 */
      uVar99 = (param_2 - 4 >> 2) + 1;
      if ((uVar99 < 0x10) ||
         ((pbVar56 < param_1 + (param_2 & 0xfffffffffffffffc) &&
          (param_1 < pbVar56 + (param_2 - 4 >> 1 & 0x7ffffffffffffffe) + 2)))) {
        lVar60 = 0;
        pbVar30 = pbVar56;
      }
      else {
        uVar63 = uVar99 & 0x7ffffffffffffff0;
        pbVar30 = pbVar56 + uVar63 * 2;
        lVar60 = uVar63 << 2;
        uVar62 = uVar63;
        pbVar34 = param_1;
        do {
          bVar73 = *pbVar34;
          pbVar27 = pbVar34 + 1;
          pbVar10 = pbVar34 + 2;
          bVar98 = pbVar34[3];
          pbVar11 = pbVar34 + 4;
          pbVar12 = pbVar34 + 5;
          pbVar13 = pbVar34 + 6;
          bVar110 = pbVar34[7];
          pbVar14 = pbVar34 + 8;
          pbVar33 = pbVar34 + 9;
          pbVar15 = pbVar34 + 10;
          bVar111 = pbVar34[0xb];
          pbVar16 = pbVar34 + 0xc;
          pbVar17 = pbVar34 + 0xd;
          pbVar18 = pbVar34 + 0xe;
          bVar112 = pbVar34[0xf];
          pbVar19 = pbVar34 + 0x10;
          pbVar20 = pbVar34 + 0x11;
          pbVar21 = pbVar34 + 0x12;
          bVar113 = pbVar34[0x13];
          pbVar22 = pbVar34 + 0x14;
          pbVar23 = pbVar34 + 0x15;
          pbVar24 = pbVar34 + 0x16;
          bVar114 = pbVar34[0x17];
          pbVar53 = pbVar34 + 0x18;
          pbVar29 = pbVar34 + 0x19;
          pbVar50 = pbVar34 + 0x1a;
          bVar115 = pbVar34[0x1b];
          pbVar51 = pbVar34 + 0x1c;
          pbVar52 = pbVar34 + 0x1d;
          pbVar25 = pbVar34 + 0x1e;
          bVar116 = pbVar34[0x1f];
          pbVar26 = pbVar34 + 0x20;
          pbVar28 = pbVar34 + 0x21;
          pbVar32 = pbVar34 + 0x22;
          bVar117 = pbVar34[0x23];
          pbVar35 = pbVar34 + 0x24;
          pbVar36 = pbVar34 + 0x25;
          bVar93 = pbVar34[0x26];
          bVar118 = pbVar34[0x27];
          pbVar37 = pbVar34 + 0x28;
          pbVar38 = pbVar34 + 0x29;
          bVar96 = pbVar34[0x2a];
          bVar119 = pbVar34[0x2b];
          pbVar39 = pbVar34 + 0x2c;
          pbVar40 = pbVar34 + 0x2d;
          bVar97 = pbVar34[0x2e];
          bVar120 = pbVar34[0x2f];
          pbVar41 = pbVar34 + 0x30;
          pbVar42 = pbVar34 + 0x31;
          pbVar43 = pbVar34 + 0x32;
          bVar121 = pbVar34[0x33];
          pbVar55 = pbVar34 + 0x34;
          pbVar31 = pbVar34 + 0x35;
          pbVar54 = pbVar34 + 0x36;
          bVar122 = pbVar34[0x37];
          pbVar44 = pbVar34 + 0x38;
          pbVar45 = pbVar34 + 0x39;
          pbVar46 = pbVar34 + 0x3a;
          bVar123 = pbVar34[0x3b];
          pbVar47 = pbVar34 + 0x3c;
          pbVar48 = pbVar34 + 0x3d;
          pbVar49 = pbVar34 + 0x3e;
          bVar124 = pbVar34[0x3f];
          pbVar34 = pbVar34 + 0x40;
          uVar62 = uVar62 - 0x10;
          auVar133._0_8_ =
               CONCAT17(0,CONCAT16(*pbVar16,(uint6)CONCAT14(*pbVar14,(uint)CONCAT12(*pbVar11,(ushort
                                                  )bVar73))));
          auVar133[8] = *pbVar19;
          auVar133[9] = 0;
          auVar133[10] = *pbVar22;
          auVar133[0xb] = 0;
          auVar133[0xc] = *pbVar53;
          auVar133[0xd] = 0;
          auVar133[0xe] = *pbVar51;
          auVar133[0xf] = 0;
          auVar95._0_8_ =
               CONCAT17(0,CONCAT16(*pbVar39,(uint6)CONCAT14(*pbVar37,(uint)CONCAT12(*pbVar35,(ushort
                                                  )*pbVar26))));
          auVar95[8] = *pbVar41;
          auVar95[9] = 0;
          auVar95[10] = *pbVar55;
          auVar95[0xb] = 0;
          auVar95[0xc] = *pbVar44;
          auVar95[0xd] = 0;
          auVar95[0xe] = *pbVar47;
          auVar95[0xf] = 0;
                    /* try { // try from 00fec0c8 to 010ec0d3 has its CatchHandler @ 00fec17c */
          auVar131._0_4_ = CONCAT13(0,CONCAT12(*pbVar12,(ushort)*pbVar27));
          auVar131[4] = *pbVar33;
          auVar131[5] = 0;
          auVar131[6] = *pbVar17;
          auVar131[7] = 0;
          auVar131[8] = *pbVar20;
          auVar131[9] = 0;
          auVar131[10] = *pbVar23;
          auVar131[0xb] = 0;
          auVar131[0xc] = *pbVar29;
          auVar131[0xd] = 0;
          auVar131[0xe] = *pbVar52;
          auVar131[0xf] = 0;
          auVar134 = NEON_ext(auVar133,auVar133,8,1);
          auVar103 = NEON_umull(auVar133._0_8_,0x12b012b012b012b,2);
                    /* try { // try from 00fec0d4 to 010ec1d3 has its CatchHandler @ 00fec034 */
          auVar126._0_4_ = CONCAT13(0,CONCAT12(*pbVar36,(ushort)*pbVar28));
          auVar126[4] = *pbVar38;
          auVar126[5] = 0;
          auVar126[6] = *pbVar40;
          auVar126[7] = 0;
          auVar126[8] = *pbVar42;
          auVar126[9] = 0;
          auVar126[10] = *pbVar31;
          auVar126[0xb] = 0;
          auVar126[0xc] = *pbVar45;
          auVar126[0xd] = 0;
          auVar126[0xe] = *pbVar48;
          auVar126[0xf] = 0;
          auVar130._0_4_ = CONCAT13(0,CONCAT12(*pbVar13,(ushort)*pbVar10));
          auVar130[4] = *pbVar15;
          auVar130[5] = 0;
          auVar130[6] = *pbVar18;
          auVar130[7] = 0;
          auVar130[8] = *pbVar21;
          auVar130[9] = 0;
          auVar130[10] = *pbVar24;
          auVar130[0xb] = 0;
          auVar130[0xc] = *pbVar50;
          auVar130[0xd] = 0;
          auVar130[0xe] = *pbVar25;
          auVar130[0xf] = 0;
          auVar132 = NEON_ext(auVar95,auVar95,8,1);
          auVar95 = NEON_umull(auVar95._0_8_,0x12b012b012b012b,2);
          auVar136 = NEON_ext(auVar131,auVar131,8,1);
          auVar135 = NEON_umull(auVar134._0_8_,0x12b012b012b012b,2);
          uVar128 = CONCAT11(0,*pbVar32);
          auVar137 = NEON_ext(auVar126,auVar126,8,1);
          auVar138 = NEON_ext(auVar130,auVar130,8,1);
          auVar133 = NEON_umull(auVar132._0_8_,0x12b012b012b012b,2);
          auVar132[2] = bVar93;
          auVar132._0_2_ = uVar128;
          auVar132[3] = 0;
          auVar132[4] = bVar96;
          auVar132[5] = 0;
          auVar132[6] = bVar97;
          auVar132[7] = 0;
          auVar132[8] = *pbVar43;
          auVar132[9] = 0;
          auVar132[10] = *pbVar54;
          auVar132[0xb] = 0;
          auVar132[0xc] = *pbVar46;
          auVar132[0xd] = 0;
          auVar132[0xe] = *pbVar49;
          auVar132[0xf] = 0;
          auVar134[2] = bVar93;
          auVar134._0_2_ = uVar128;
          auVar134[3] = 0;
          auVar134[4] = bVar96;
          auVar134[5] = 0;
          auVar134[6] = bVar97;
          auVar134[7] = 0;
          auVar134[8] = *pbVar43;
          auVar134[9] = 0;
          auVar134[10] = *pbVar54;
          auVar134[0xb] = 0;
          auVar134[0xc] = *pbVar46;
          auVar134[0xd] = 0;
          auVar134[0xe] = *pbVar49;
          auVar134[0xf] = 0;
          auVar132 = NEON_ext(auVar132,auVar134,8,1);
          auVar129._0_8_ =
               CONCAT44(auVar103._4_4_ + (uint)*pbVar12 * 0x24b + (uint)*pbVar13 * 0x72 + 500,
                        auVar103._0_4_ + (auVar131._0_4_ & 0xffff) * 0x24b +
                        (auVar130._0_4_ & 0xffff) * 0x72 + 500);
          auVar129._8_4_ = auVar103._8_4_ + (uint)*pbVar33 * 0x24b + (uint)*pbVar15 * 0x72 + 500;
          auVar129._12_4_ = auVar103._12_4_ + (uint)*pbVar17 * 0x24b + (uint)*pbVar18 * 0x72 + 500;
          auVar103._0_8_ =
               CONCAT44(auVar95._4_4_ + (uint)*pbVar36 * 0x24b + (uint)bVar93 * 0x72 + 500,
                        auVar95._0_4_ + (auVar126._0_4_ & 0xffff) * 0x24b + (uint)uVar128 * 0x72 +
                        500);
          auVar103._8_4_ = auVar95._8_4_ + (uint)*pbVar38 * 0x24b + (uint)bVar96 * 0x72 + 500;
          auVar103._12_4_ = auVar95._12_4_ + (uint)*pbVar40 * 0x24b + (uint)bVar97 * 0x72 + 500;
          auVar127._0_8_ =
               CONCAT44(auVar135._4_4_ + (uint)auVar136._2_2_ * 0x24b + (uint)auVar138._2_2_ * 0x72
                        + 500,auVar135._0_4_ + (uint)auVar136._0_2_ * 0x24b +
                              (uint)auVar138._0_2_ * 0x72 + 500);
          auVar127._8_4_ =
               auVar135._8_4_ + (uint)auVar136._4_2_ * 0x24b + (uint)auVar138._4_2_ * 0x72 + 500;
          auVar127._12_4_ =
               auVar135._12_4_ + (uint)auVar136._6_2_ * 0x24b + (uint)auVar138._6_2_ * 0x72 + 500;
          auVar134 = NEON_umull(auVar129._0_8_,0x10624dd310624dd3,4);
          auVar135._0_8_ =
               CONCAT44(auVar133._4_4_ + (uint)auVar137._2_2_ * 0x24b + (uint)auVar132._2_2_ * 0x72
                        + 500,auVar133._0_4_ + (uint)auVar137._0_2_ * 0x24b +
                              (uint)auVar132._0_2_ * 0x72 + 500);
          auVar135._8_4_ =
               auVar133._8_4_ + (uint)auVar137._4_2_ * 0x24b + (uint)auVar132._4_2_ * 0x72 + 500;
          auVar135._12_4_ =
               auVar133._12_4_ + (uint)auVar137._6_2_ * 0x24b + (uint)auVar132._6_2_ * 0x72 + 500;
          auVar132 = NEON_umull(auVar103._0_8_,0x10624dd310624dd3,4);
          auVar133 = NEON_umull(auVar127._0_8_,0x10624dd310624dd3,4);
          auVar95 = NEON_umull(auVar135._0_8_,0x10624dd310624dd3,4);
          *pbVar56 = (byte)(auVar134._4_4_ >> 6);
          pbVar56[1] = bVar98;
          pbVar56[2] = (byte)(auVar134._12_4_ >> 6);
          pbVar56[3] = bVar110;
          pbVar56[4] = (byte)((auVar129._8_8_ & 0xffffffff) / 1000);
          pbVar56[5] = bVar111;
          pbVar56[6] = (byte)((uint)((auVar129._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
          pbVar56[7] = bVar112;
          pbVar56[8] = (byte)(auVar133._4_4_ >> 6);
          pbVar56[9] = bVar113;
          pbVar56[10] = (byte)(auVar133._12_4_ >> 6);
          pbVar56[0xb] = bVar114;
          pbVar56[0xc] = (byte)((auVar127._8_8_ & 0xffffffff) / 1000);
          pbVar56[0xd] = bVar115;
          pbVar56[0xe] = (byte)(auVar127._8_8_ / 0x3e800000000);
          pbVar56[0xf] = bVar116;
          pbVar56[0x10] = (byte)(auVar132._4_4_ >> 6);
          pbVar56[0x11] = bVar117;
          pbVar56[0x12] = (byte)(auVar132._12_4_ >> 6);
          pbVar56[0x13] = bVar118;
          pbVar56[0x14] = (byte)((auVar103._8_8_ & 0xffffffff) / 1000);
          pbVar56[0x15] = bVar119;
          pbVar56[0x16] = (byte)(auVar103._8_8_ / 0x3e800000000);
          pbVar56[0x17] = bVar120;
          pbVar56[0x18] = (byte)(auVar95._4_4_ >> 6);
          pbVar56[0x19] = bVar121;
          pbVar56[0x1a] = (byte)(auVar95._12_4_ >> 6);
          pbVar56[0x1b] = bVar122;
          pbVar56[0x1c] = (byte)((auVar135._8_8_ & 0xffffffff) / 1000);
          pbVar56[0x1d] = bVar123;
          pbVar56[0x1e] = (byte)((uint)((auVar135._8_8_ >> 0x20) * 0x10624dd3 >> 0x10) >> 0x16);
          pbVar56[0x1f] = bVar124;
          pbVar56 = pbVar56 + 0x20;
                    /* catch() { ... } // from try @ 00fec0c8 with catch @ 00fec17c */
        } while (uVar62 != 0);
        if (uVar99 == uVar63) goto LAB_00febc5c;
      }
      do {
        pbVar56 = param_1 + lVar60;
        lVar60 = lVar60 + 4;
        *pbVar30 = (byte)(((uint)pbVar56[1] * 0x24b + (uint)*pbVar56 * 299 + (uint)pbVar56[2] * 0x72
                          + 500) / 1000);
        pbVar30[1] = pbVar56[3];
        pbVar30 = pbVar30 + 2;
      } while (lVar60 < (long)(param_2 - 3));
    }
LAB_00febc5c:
    uVar57 = 7;
    break;
  case 8:
    uVar99 = param_2;
    if ((long)param_2 < 0) {
      uVar99 = param_2 + 1;
    }
    *param_5 = (long)uVar99 >> 1;
    puVar58 = malloc((long)uVar99 >> 1);
    *param_4 = puVar58;
    if (0 < (long)(param_2 - 3)) {
      uVar99 = (param_2 - 4 >> 2) + 1;
      if ((uVar99 < 8) ||
         ((puVar58 < param_1 + (param_2 & 0xfffffffffffffffc) &&
          (param_1 < (byte *)((long)puVar58 + (param_2 - 4 >> 1 & 0x7ffffffffffffffe) + 2))))) {
        lVar60 = 0;
        puVar61 = puVar58;
      }
      else {
        uVar63 = uVar99 & 0x7ffffffffffffff8;
        puVar61 = puVar58 + uVar63;
        lVar60 = uVar63 << 2;
        uVar62 = uVar63;
        pbVar56 = param_1;
        do {
          bVar73 = *pbVar56;
          pbVar33 = pbVar56 + 1;
          pbVar27 = pbVar56 + 2;
          pbVar30 = pbVar56 + 3;
          pbVar34 = pbVar56 + 4;
          pbVar28 = pbVar56 + 5;
          pbVar32 = pbVar56 + 6;
          pbVar35 = pbVar56 + 7;
          pbVar36 = pbVar56 + 8;
          pbVar37 = pbVar56 + 9;
          pbVar38 = pbVar56 + 10;
          bVar93 = pbVar56[0xb];
          pbVar39 = pbVar56 + 0xc;
          pbVar40 = pbVar56 + 0xd;
          pbVar41 = pbVar56 + 0xe;
          bVar96 = pbVar56[0xf];
          pbVar42 = pbVar56 + 0x10;
          pbVar43 = pbVar56 + 0x11;
          pbVar55 = pbVar56 + 0x12;
          pbVar31 = pbVar56 + 0x13;
          pbVar54 = pbVar56 + 0x14;
          pbVar44 = pbVar56 + 0x15;
          pbVar45 = pbVar56 + 0x16;
          pbVar46 = pbVar56 + 0x17;
          pbVar47 = pbVar56 + 0x18;
          pbVar48 = pbVar56 + 0x19;
          pbVar49 = pbVar56 + 0x1a;
          pbVar29 = pbVar56 + 0x1b;
          pbVar50 = pbVar56 + 0x1c;
          pbVar51 = pbVar56 + 0x1d;
          pbVar52 = pbVar56 + 0x1e;
          pbVar53 = pbVar56 + 0x1f;
          pbVar56 = pbVar56 + 0x20;
          uVar62 = uVar62 - 8;
          uVar105 = CONCAT17(*pbVar50,CONCAT16(*pbVar47,CONCAT15(*pbVar54,CONCAT14(*pbVar42,CONCAT13
                                                  (*pbVar39,CONCAT12(*pbVar36,CONCAT11(*pbVar34,
                                                  bVar73))))))) & 0xf0f0f0f0f0f0f0f0;
          uVar100 = CONCAT17(*pbVar51,CONCAT16(*pbVar48,CONCAT15(*pbVar44,CONCAT14(*pbVar43,CONCAT13
                                                  (*pbVar40,CONCAT12(*pbVar37,CONCAT11(*pbVar28,*
                                                  pbVar33))))))) & 0xf0f0f0f0f0f0f0f0;
          uVar104 = CONCAT17(*pbVar52,CONCAT16(*pbVar49,CONCAT15(*pbVar45,CONCAT14(*pbVar55,CONCAT13
                                                  (*pbVar41,CONCAT12(*pbVar38,CONCAT11(*pbVar32,*
                                                  pbVar27))))))) & 0xf0f0f0f0f0f0f0f0;
          uVar9 = CONCAT12(*pbVar35 >> 4,CONCAT11(*pbVar35 >> 4,*pbVar30 >> 4)) & 0xff00ff;
                    /* catch() { ... } // from try @ 00fec214 with catch @ 00fec1d4 */
          *(ulong *)(puVar58 + 4) =
               CONCAT17((byte)((ushort)((ushort)(byte)(uVar100 >> 0x38) << 4) >> 8) |
                        (byte)(uVar105 >> 0x38),
                        CONCAT16((byte)(uVar104 >> 0x38) | *pbVar53 >> 4,
                                 CONCAT15((byte)((ushort)((ushort)(byte)(uVar100 >> 0x30) << 4) >> 8
                                                ) | (byte)(uVar105 >> 0x30),
                                          CONCAT14((byte)(uVar104 >> 0x30) | *pbVar29 >> 4,
                                                   CONCAT13((byte)((ushort)((ushort)(byte)(uVar100 
                                                  >> 0x28) << 4) >> 8) | (byte)(uVar105 >> 0x28),
                                                  CONCAT12((byte)(uVar104 >> 0x28) | *pbVar46 >> 4,
                                                           CONCAT11((byte)((ushort)((ushort)(byte)(
                                                  uVar100 >> 0x20) << 4) >> 8) |
                                                  (byte)(uVar105 >> 0x20),
                                                  (byte)(uVar104 >> 0x20) | *pbVar31 >> 4)))))));
          *(ulong *)puVar58 =
               CONCAT17((byte)((ushort)((ushort)(byte)(uVar100 >> 0x18) << 4) >> 8) |
                        (byte)(uVar105 >> 0x18),
                        CONCAT16((byte)(uVar104 >> 0x18) | bVar96 >> 4,
                                 CONCAT15((byte)((ushort)((ushort)(byte)(uVar100 >> 0x10) << 4) >> 8
                                                ) | (byte)(uVar105 >> 0x10),
                                          CONCAT14((byte)(uVar104 >> 0x10) | bVar93 >> 4,
                                                   CONCAT13((byte)((ushort)((ushort)(byte)(uVar100 
                                                  >> 8) << 4) >> 8) | (byte)(uVar105 >> 8),
                                                  CONCAT12((byte)(uVar104 >> 8) |
                                                           (byte)(uVar9 >> 0x10),
                                                           CONCAT11((byte)((ushort)((ushort)(byte)
                                                  uVar100 << 4) >> 8) | (byte)uVar105,
                                                  (byte)uVar104 | (byte)uVar9)))))));
          puVar58 = puVar58 + 8;
        } while (uVar62 != 0);
        if (uVar99 == uVar63) goto LAB_00febd10;
      }
      do {
        pbVar56 = param_1 + lVar60;
                    /* try { // try from 00febce0 to 010ebce3 has its CatchHandler @ 00febd44 */
        lVar60 = lVar60 + 4;
        *puVar61 = (*pbVar56 & 0xf0 | (ushort)(pbVar56[1] >> 4)) << 8 | pbVar56[2] & 0xf0 |
                   (ushort)(pbVar56[3] >> 4);
        puVar61 = puVar61 + 1;
      } while (lVar60 < (long)(param_2 - 3));
    }
LAB_00febd10:
    uVar57 = 8;
    break;
  case 9:
    uVar99 = param_2;
    if ((long)param_2 < 0) {
      uVar99 = param_2 + 1;
    }
    *param_5 = (long)uVar99 >> 1;
    puVar58 = malloc((long)uVar99 >> 1);
    *param_4 = puVar58;
    if (0 < (long)(param_2 - 2)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00febce0 with catch @ 00febd44
                        */
      uVar99 = (param_2 - 3 >> 2) + 1;
      if ((uVar99 < 8) ||
         ((puVar58 < param_1 + (param_2 + 1 & 0xfffffffffffffffc) &&
          (param_1 < (byte *)((long)puVar58 + (param_2 - 3 >> 1 & 0x7ffffffffffffffe) + 2))))) {
        lVar60 = 0;
        puVar61 = puVar58;
      }
      else {
        uVar63 = uVar99 & 0x7ffffffffffffff8;
                    /* catch() { ... } // from try @ 00fec20c with catch @ 00fec274 */
        puVar61 = puVar58 + uVar63;
        lVar60 = uVar63 << 2;
        uVar62 = uVar63;
        pbVar56 = param_1;
        do {
          bVar73 = *pbVar56;
          pbVar29 = pbVar56 + 1;
          pbVar30 = pbVar56 + 2;
          bVar93 = pbVar56[3];
          pbVar31 = pbVar56 + 4;
          pbVar32 = pbVar56 + 5;
          pbVar33 = pbVar56 + 6;
          bVar96 = pbVar56[7];
          pbVar34 = pbVar56 + 8;
          pbVar35 = pbVar56 + 9;
          pbVar36 = pbVar56 + 10;
          bVar97 = pbVar56[0xb];
          pbVar37 = pbVar56 + 0xc;
          pbVar38 = pbVar56 + 0xd;
          pbVar39 = pbVar56 + 0xe;
          bVar98 = pbVar56[0xf];
          pbVar40 = pbVar56 + 0x10;
          pbVar41 = pbVar56 + 0x11;
          pbVar42 = pbVar56 + 0x12;
          pbVar43 = pbVar56 + 0x13;
          pbVar44 = pbVar56 + 0x14;
          pbVar45 = pbVar56 + 0x15;
          pbVar46 = pbVar56 + 0x16;
          pbVar47 = pbVar56 + 0x17;
          pbVar48 = pbVar56 + 0x18;
          pbVar49 = pbVar56 + 0x19;
          pbVar50 = pbVar56 + 0x1a;
          pbVar51 = pbVar56 + 0x1b;
          pbVar52 = pbVar56 + 0x1c;
          pbVar53 = pbVar56 + 0x1d;
          pbVar54 = pbVar56 + 0x1e;
          pbVar55 = pbVar56 + 0x1f;
          pbVar56 = pbVar56 + 0x20;
          uVar62 = uVar62 - 8;
          uVar100 = CONCAT17(*pbVar52,CONCAT16(*pbVar48,CONCAT15(*pbVar44,CONCAT14(*pbVar40,CONCAT13
                                                  (*pbVar37,CONCAT12(*pbVar34,CONCAT11(*pbVar31,
                                                  bVar73))))))) & 0xf8f8f8f8f8f8f8f8;
          uVar105 = CONCAT17(*pbVar53,CONCAT16(*pbVar49,CONCAT15(*pbVar45,CONCAT14(*pbVar41,CONCAT13
                                                  (*pbVar38,CONCAT12(*pbVar35,CONCAT11(*pbVar32,*
                                                  pbVar29))))))) & 0xf8f8f8f8f8f8f8f8;
          sVar1 = (ushort)(byte)uVar105 << 3;
          sVar2 = (ushort)(byte)(uVar105 >> 8) << 3;
          sVar3 = (ushort)(byte)(uVar105 >> 0x10) << 3;
          sVar4 = (ushort)(byte)(uVar105 >> 0x18) << 3;
          sVar5 = (ushort)(byte)(uVar105 >> 0x20) << 3;
          sVar6 = (ushort)(byte)(uVar105 >> 0x28) << 3;
          sVar7 = (ushort)(byte)(uVar105 >> 0x30) << 3;
          sVar8 = (ushort)(byte)(uVar105 >> 0x38) << 3;
          uVar105 = CONCAT17(*pbVar54 >> 2,
                             CONCAT16(*pbVar50 >> 2,
                                      CONCAT15(*pbVar46 >> 2,
                                               CONCAT14(*pbVar42 >> 2,
                                                        CONCAT13(*pbVar39 >> 2,
                                                                 CONCAT12(*pbVar36 >> 2,
                                                                          CONCAT11(*pbVar33 >> 2,
                                                                                   *pbVar30 >> 2))))
                                              ))) & 0x3e3e3e3e3e3e3e3e;
          *(ulong *)(puVar58 + 4) =
               CONCAT17((byte)((ushort)sVar8 >> 8) | (byte)(uVar100 >> 0x38),
                        CONCAT16((byte)sVar8 | (byte)(uVar105 >> 0x38) | *pbVar55 >> 7,
                                 CONCAT15((byte)((ushort)sVar7 >> 8) | (byte)(uVar100 >> 0x30),
                                          CONCAT14((byte)sVar7 | (byte)(uVar105 >> 0x30) |
                                                   *pbVar51 >> 7,
                                                   CONCAT13((byte)((ushort)sVar6 >> 8) |
                                                            (byte)(uVar100 >> 0x28),
                                                            CONCAT12((byte)sVar6 |
                                                                     (byte)(uVar105 >> 0x28) |
                                                                     *pbVar47 >> 7,
                                                                     CONCAT11((byte)((ushort)sVar5
                                                                                    >> 8) |
                                                                              (byte)(uVar100 >> 0x20
                                                                                    ),(byte)sVar5 |
                                                                                      (byte)(uVar105
                                                                                            >> 0x20)
                                                                                      | *pbVar43 >>
                                                                                        7)))))));
          *(ulong *)puVar58 =
               CONCAT17((byte)((ushort)sVar4 >> 8) | (byte)(uVar100 >> 0x18),
                        CONCAT16((byte)sVar4 | (byte)(uVar105 >> 0x18) | bVar98 >> 7,
                                 CONCAT15((byte)((ushort)sVar3 >> 8) | (byte)(uVar100 >> 0x10),
                                          CONCAT14((byte)sVar3 | (byte)(uVar105 >> 0x10) |
                                                   bVar97 >> 7,
                                                   CONCAT13((byte)((ushort)sVar2 >> 8) |
                                                            (byte)(uVar100 >> 8),
                                                            CONCAT12((byte)sVar2 |
                                                                     (byte)(uVar105 >> 8) |
                                                                     bVar96 >> 7,
                                                                     CONCAT11((byte)((ushort)sVar1
                                                                                    >> 8) |
                                                                              (byte)uVar100,
                                                                              (byte)sVar1 |
                                                                              (byte)uVar105 |
                                                                              bVar93 >> 7)))))));
          puVar58 = puVar58 + 8;
        } while (uVar62 != 0);
        if (uVar99 == uVar63) goto LAB_00febdcc;
      }
      do {
        pbVar56 = param_1 + lVar60;
                    /* catch() { ... } // from try @ 00febde8 with catch @ 00febdb4 */
        lVar60 = lVar60 + 4;
        *puVar61 = (*pbVar56 & 0xf8) << 8 | (ushort)(pbVar56[1] >> 3) << 6 | pbVar56[2] >> 2 & 0x3e
                   | (ushort)(pbVar56[3] >> 7);
        puVar61 = puVar61 + 1;
      } while (lVar60 < (long)(param_2 - 2));
    }
LAB_00febdcc:
    uVar57 = 9;
    break;
  default:
    uVar57 = 2;
    *param_4 = param_1;
    *param_5 = param_2;
  }
  return uVar57;
}


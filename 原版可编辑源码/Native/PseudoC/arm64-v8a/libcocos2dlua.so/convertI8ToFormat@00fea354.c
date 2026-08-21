
/* cocos2d::Texture2D::convertI8ToFormat(unsigned char const*, long,
   cocos2d::Texture2D::PixelFormat, unsigned char**, long*) */

undefined8
cocos2d::Texture2D::convertI8ToFormat
          (ulong *param_1,ulong param_2,undefined4 param_3,undefined8 *param_4,size_t *param_5)

{
  uint3 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ushort uVar25;
  ushort uVar27;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  uint6 uVar26;
  uint6 uVar28;
  
  switch(param_3) {
  case 2:
    break;
  case 3:
    *param_5 = param_2 * 3;
    puVar3 = malloc(param_2 * 3);
    *param_4 = puVar3;
    if (0 < (long)param_2) {
      if ((param_2 < 0x20) ||
         ((puVar3 < (undefined1 *)((long)param_1 + param_2) && (param_1 < puVar3 + param_2 * 3)))) {
        uVar10 = 0;
        puVar6 = puVar3;
      }
      else {
        uVar10 = param_2 & 0xffffffffffffffe0;
        puVar6 = puVar3 + uVar10 * 3;
        puVar5 = param_1 + 2;
        uVar12 = uVar10;
        do {
          uVar22 = puVar5[-1];
          uVar23 = puVar5[-2];
          uVar30 = puVar5[1];
          uVar29 = *puVar5;
          uVar12 = uVar12 - 0x20;
          puVar5 = puVar5 + 4;
          uVar20 = (undefined1)uVar23;
          *puVar3 = uVar20;
          puVar3[1] = uVar20;
          puVar3[2] = uVar20;
          uVar20 = (undefined1)(uVar23 >> 8);
          puVar3[3] = uVar20;
          puVar3[4] = uVar20;
          puVar3[5] = uVar20;
          uVar20 = (undefined1)(uVar23 >> 0x10);
          puVar3[6] = uVar20;
          puVar3[7] = uVar20;
          puVar3[8] = uVar20;
          uVar20 = (undefined1)(uVar23 >> 0x18);
          puVar3[9] = uVar20;
          puVar3[10] = uVar20;
          puVar3[0xb] = uVar20;
          uVar20 = (undefined1)(uVar23 >> 0x20);
          puVar3[0xc] = uVar20;
          puVar3[0xd] = uVar20;
          puVar3[0xe] = uVar20;
          uVar20 = (undefined1)(uVar23 >> 0x28);
          puVar3[0xf] = uVar20;
          puVar3[0x10] = uVar20;
          puVar3[0x11] = uVar20;
          uVar20 = (undefined1)(uVar23 >> 0x30);
          puVar3[0x12] = uVar20;
          puVar3[0x13] = uVar20;
          puVar3[0x14] = uVar20;
          uVar20 = (undefined1)(uVar23 >> 0x38);
          puVar3[0x15] = uVar20;
          puVar3[0x16] = uVar20;
          puVar3[0x17] = uVar20;
          uVar20 = (undefined1)uVar22;
          puVar3[0x18] = uVar20;
          puVar3[0x19] = uVar20;
          puVar3[0x1a] = uVar20;
          uVar20 = (undefined1)(uVar22 >> 8);
          puVar3[0x1b] = uVar20;
          puVar3[0x1c] = uVar20;
          puVar3[0x1d] = uVar20;
          uVar20 = (undefined1)(uVar22 >> 0x10);
          puVar3[0x1e] = uVar20;
          puVar3[0x1f] = uVar20;
          puVar3[0x20] = uVar20;
          uVar20 = (undefined1)(uVar22 >> 0x18);
          puVar3[0x21] = uVar20;
          puVar3[0x22] = uVar20;
          puVar3[0x23] = uVar20;
          uVar20 = (undefined1)(uVar22 >> 0x20);
          puVar3[0x24] = uVar20;
          puVar3[0x25] = uVar20;
          puVar3[0x26] = uVar20;
          uVar20 = (undefined1)(uVar22 >> 0x28);
          puVar3[0x27] = uVar20;
          puVar3[0x28] = uVar20;
          puVar3[0x29] = uVar20;
          uVar20 = (undefined1)(uVar22 >> 0x30);
          puVar3[0x2a] = uVar20;
          puVar3[0x2b] = uVar20;
          puVar3[0x2c] = uVar20;
          uVar20 = (undefined1)(uVar22 >> 0x38);
          puVar3[0x2d] = uVar20;
          puVar3[0x2e] = uVar20;
          puVar3[0x2f] = uVar20;
          uVar20 = (undefined1)uVar29;
          puVar3[0x30] = uVar20;
          puVar3[0x31] = uVar20;
          puVar3[0x32] = uVar20;
          uVar20 = (undefined1)(uVar29 >> 8);
          puVar3[0x33] = uVar20;
          puVar3[0x34] = uVar20;
          puVar3[0x35] = uVar20;
          uVar20 = (undefined1)(uVar29 >> 0x10);
          puVar3[0x36] = uVar20;
          puVar3[0x37] = uVar20;
          puVar3[0x38] = uVar20;
          uVar20 = (undefined1)(uVar29 >> 0x18);
          puVar3[0x39] = uVar20;
          puVar3[0x3a] = uVar20;
          puVar3[0x3b] = uVar20;
          uVar20 = (undefined1)(uVar29 >> 0x20);
          puVar3[0x3c] = uVar20;
          puVar3[0x3d] = uVar20;
          puVar3[0x3e] = uVar20;
          uVar20 = (undefined1)(uVar29 >> 0x28);
          puVar3[0x3f] = uVar20;
          puVar3[0x40] = uVar20;
          puVar3[0x41] = uVar20;
          uVar20 = (undefined1)(uVar29 >> 0x30);
          puVar3[0x42] = uVar20;
          puVar3[0x43] = uVar20;
          puVar3[0x44] = uVar20;
          uVar20 = (undefined1)(uVar29 >> 0x38);
          puVar3[0x45] = uVar20;
          puVar3[0x46] = uVar20;
          puVar3[0x47] = uVar20;
          uVar20 = (undefined1)uVar30;
          puVar3[0x48] = uVar20;
          puVar3[0x49] = uVar20;
          puVar3[0x4a] = uVar20;
          uVar20 = (undefined1)(uVar30 >> 8);
          puVar3[0x4b] = uVar20;
          puVar3[0x4c] = uVar20;
          puVar3[0x4d] = uVar20;
          uVar20 = (undefined1)(uVar30 >> 0x10);
          puVar3[0x4e] = uVar20;
          puVar3[0x4f] = uVar20;
          puVar3[0x50] = uVar20;
          uVar20 = (undefined1)(uVar30 >> 0x18);
          puVar3[0x51] = uVar20;
          puVar3[0x52] = uVar20;
          puVar3[0x53] = uVar20;
          uVar20 = (undefined1)(uVar30 >> 0x20);
          puVar3[0x54] = uVar20;
          puVar3[0x55] = uVar20;
          puVar3[0x56] = uVar20;
          uVar20 = (undefined1)(uVar30 >> 0x28);
          puVar3[0x57] = uVar20;
          puVar3[0x58] = uVar20;
          puVar3[0x59] = uVar20;
          uVar20 = (undefined1)(uVar30 >> 0x30);
          puVar3[0x5a] = uVar20;
          puVar3[0x5b] = uVar20;
          puVar3[0x5c] = uVar20;
          uVar20 = (undefined1)(uVar30 >> 0x38);
          puVar3[0x5d] = uVar20;
          puVar3[0x5e] = uVar20;
          puVar3[0x5f] = uVar20;
          puVar3 = puVar3 + 0x60;
        } while (uVar12 != 0);
        if (uVar10 == param_2) {
          return 3;
        }
      }
      lVar11 = param_2 - uVar10;
      puVar3 = (undefined1 *)((long)param_1 + uVar10);
      do {
        lVar11 = lVar11 + -1;
        *puVar6 = *puVar3;
        puVar6[1] = *puVar3;
        puVar6[2] = *puVar3;
        puVar6 = puVar6 + 3;
        puVar3 = puVar3 + 1;
      } while (lVar11 != 0);
    }
    return 3;
  case 4:
    *param_5 = param_2 << 1;
    puVar4 = malloc(param_2 << 1);
    *param_4 = puVar4;
    if (0 < (long)param_2) {
      if ((param_2 < 8) ||
         ((puVar4 < (ushort *)((long)param_1 + param_2) && (param_1 < puVar4 + param_2)))) {
        uVar10 = 0;
        puVar7 = puVar4;
      }
      else {
        uVar10 = param_2 & 0xfffffffffffffff8;
        puVar7 = puVar4 + uVar10;
        uVar12 = uVar10;
        puVar5 = param_1;
        do {
          uVar23 = *puVar5;
          uVar12 = uVar12 - 8;
          uVar1 = CONCAT12((char)(uVar23 >> 8),(short)uVar23) & 0xff00ff;
          bVar14 = (byte)(uVar23 >> 0x10);
          bVar15 = (byte)(uVar23 >> 0x18);
          bVar16 = (byte)(uVar23 >> 0x20);
          bVar17 = (byte)(uVar23 >> 0x28);
          bVar18 = (byte)(uVar23 >> 0x30);
          bVar19 = (byte)(uVar23 >> 0x38);
          bVar2 = (byte)(uVar1 >> 0x10);
          iVar21 = (uVar1 & 0xffff) << 3;
          uVar25 = (bVar16 & 0xfc) << 3;
          uVar26 = CONCAT15((char)(((uint)bVar17 << 3) >> 8),
                            CONCAT14((char)((uint)bVar17 << 3),(uint)uVar25)) & 0x7e0ffffffff;
          uVar27 = (bVar18 & 0xfc) << 3;
          uVar28 = CONCAT15((char)(((uint)bVar19 << 3) >> 8),
                            CONCAT14((char)((uint)bVar19 << 3),(uint)uVar27)) & 0x7e0ffffffff;
          *(ulong *)(puVar4 + 4) =
               CONCAT26(CONCAT11((byte)(uVar28 >> 0x28) | bVar19 & 0xf8,
                                 (byte)(uVar28 >> 0x20) | bVar19 >> 3),
                        CONCAT24(CONCAT11((byte)(uVar28 >> 8) | bVar18 & 0xf8,
                                          (byte)uVar27 | bVar18 >> 3),
                                 CONCAT22(CONCAT11((byte)(uVar26 >> 0x28) | bVar17 & 0xf8,
                                                   (byte)(uVar26 >> 0x20) | bVar17 >> 3),
                                          CONCAT11((byte)(uVar26 >> 8) | bVar16 & 0xf8,
                                                   (byte)uVar25 | bVar16 >> 3))));
          *(ulong *)puVar4 =
               CONCAT26(CONCAT11((byte)(((uint)bVar15 << 3) >> 8) | bVar15 & 0xf8,
                                 (byte)((uint)bVar15 << 3) & 0xe0 | bVar15 >> 3),
                        CONCAT24(CONCAT11((byte)(((uint)bVar14 << 3) >> 8) | bVar14 & 0xf8,
                                          (byte)((uint)bVar14 << 3) & 0xe0 | bVar14 >> 3),
                                 CONCAT22(CONCAT11((byte)(((uint)bVar2 << 3) >> 8) | bVar2 & 0xf8,
                                                   (byte)((uint)bVar2 << 3) & 0xe0 | bVar2 >> 3),
                                          CONCAT11((byte)((uint)iVar21 >> 8) | (byte)uVar1 & 0xf8,
                                                   (byte)iVar21 & 0xe0 |
                                                   (byte)((uVar1 & 0xffff) >> 3)))));
          puVar4 = puVar4 + 8;
          puVar5 = puVar5 + 1;
        } while (uVar12 != 0);
        if (uVar10 == param_2) {
          return 4;
        }
      }
      lVar11 = param_2 - uVar10;
      pbVar8 = (byte *)((long)param_1 + uVar10);
      do {
        lVar11 = lVar11 + -1;
        bVar2 = *pbVar8 >> 3;
        *puVar7 = (ushort)bVar2 | (ushort)(*pbVar8 >> 2) << 5 | (ushort)bVar2 << 0xb;
        puVar7 = puVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (lVar11 != 0);
    }
    return 4;
  default:
    *param_4 = param_1;
    *param_5 = param_2;
    return 6;
  case 7:
    *param_5 = param_2 << 1;
    puVar4 = malloc(param_2 << 1);
    *param_4 = puVar4;
    if (0 < (long)param_2) {
      if ((param_2 < 0x10) ||
         ((puVar4 < (ushort *)((long)param_1 + param_2) && (param_1 < puVar4 + param_2)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = param_2 & 0xfffffffffffffff0;
        puVar5 = (ulong *)(puVar4 + 8);
                    /* catch() { ... } // from try @ 00fea7fc with catch @ 00fea794 */
        puVar4 = puVar4 + uVar10;
        puVar9 = param_1 + 1;
        uVar12 = uVar10;
        do {
          uVar23 = puVar9[-1];
          uVar22 = *puVar9;
          uVar12 = uVar12 - 0x10;
          puVar9 = puVar9 + 2;
          puVar5[-1] = (ulong)(CONCAT16((char)(uVar23 >> 0x38),
                                        (uint6)CONCAT14((char)(uVar23 >> 0x30),
                                                        (uint)CONCAT12((char)(uVar23 >> 0x28),
                                                                       (ushort)(byte)(uVar23 >> 0x20
                                                                                     )))) |
                              0xff00ff00ff00) | 0xff00000000000000;
          puVar5[-2] = (ulong)(CONCAT16((char)(uVar23 >> 0x18),
                                        (uint6)CONCAT14((char)(uVar23 >> 0x10),
                                                        (uint)(CONCAT12((char)(uVar23 >> 8),
                                                                        (short)uVar23) & 0xff00ff)))
                              | 0xff00ff00ff00) | 0xff00000000000000;
          puVar5[1] = (ulong)(CONCAT16((char)(uVar22 >> 0x38),
                                       (uint6)CONCAT14((char)(uVar22 >> 0x30),
                                                       (uint)CONCAT12((char)(uVar22 >> 0x28),
                                                                      (ushort)(byte)(uVar22 >> 0x20)
                                                                     ))) | 0xff00ff00ff00) |
                      0xff00000000000000;
          *puVar5 = (ulong)(CONCAT16((char)(uVar22 >> 0x18),
                                     (uint6)CONCAT14((char)(uVar22 >> 0x10),
                                                     (uint)(CONCAT12((char)(uVar22 >> 8),
                                                                     (short)uVar22) & 0xff00ff))) |
                           0xff00ff00ff00) | 0xff00000000000000;
          puVar5 = puVar5 + 4;
        } while (uVar12 != 0);
        if (uVar10 == param_2) {
          return 7;
        }
      }
      lVar11 = param_2 - uVar10;
      pbVar8 = (byte *)((long)param_1 + uVar10);
      do {
        lVar11 = lVar11 + -1;
        *puVar4 = *pbVar8 | 0xff00;
        puVar4 = puVar4 + 1;
        pbVar8 = pbVar8 + 1;
      } while (lVar11 != 0);
    }
    return 7;
  case 8:
    *param_5 = param_2 << 1;
    puVar5 = malloc(param_2 << 1);
    *param_4 = puVar5;
    if (0 < (long)param_2) {
      if ((param_2 < 8) ||
         ((puVar5 < (ulong *)((long)param_1 + param_2) &&
          (param_1 < (ulong *)((long)puVar5 + param_2 * 2))))) {
        uVar10 = 0;
        puVar9 = puVar5;
      }
      else {
        uVar10 = param_2 & 0xfffffffffffffff8;
        puVar9 = (ulong *)((long)puVar5 + uVar10 * 2);
        uVar12 = uVar10;
        puVar13 = param_1;
        do {
          uVar12 = uVar12 - 8;
          uVar23 = *puVar13 & 0xf0f0f0f0f0f0f0f0;
          uVar1 = CONCAT12((char)(uVar23 >> 8),(short)*puVar13) & 0xff00f0;
          bVar14 = (byte)(uVar23 >> 0x10);
          bVar15 = (byte)(uVar23 >> 0x18);
          bVar16 = (byte)(uVar23 >> 0x20);
          bVar17 = (byte)(uVar23 >> 0x28);
          bVar18 = (byte)(uVar23 >> 0x30);
          bVar19 = (byte)(uVar23 >> 0x38);
                    /* catch() { ... } // from try @ 00fea7f8 with catch @ 00fea870 */
          bVar2 = (byte)(uVar1 >> 0x10);
                    /* catch() { ... } // from try @ 00fea7d0 with catch @ 00fea880 */
          puVar5[1] = CONCAT26(CONCAT11((byte)(((uint)bVar19 << 4) >> 8) | bVar19,bVar19),
                               CONCAT24(CONCAT11((byte)(((uint)bVar18 << 4) >> 8) | bVar18,bVar18),
                                        CONCAT22(CONCAT11((byte)(((uint)bVar17 << 4) >> 8) | bVar17,
                                                          bVar17),
                                                 CONCAT11((byte)(((CONCAT12(bVar17,(ushort)bVar16) &
                                                                  0xffff) << 4) >> 8) | bVar16,
                                                          bVar16)))) | 0xf000f000f000f;
          *puVar5 = CONCAT26(CONCAT11((byte)(((uint)bVar15 << 4) >> 8) | bVar15,bVar15),
                             CONCAT24(CONCAT11((byte)(((uint)bVar14 << 4) >> 8) | bVar14,bVar14),
                                      CONCAT22(CONCAT11((byte)(((uint)bVar2 << 4) >> 8) | bVar2,
                                                        bVar2),
                                               CONCAT11((byte)(((uVar1 & 0xffff) << 4) >> 8) |
                                                        (byte)uVar1,(byte)uVar1)))) |
                    0xf000f000f000f;
          puVar5 = puVar5 + 2;
          puVar13 = puVar13 + 1;
        } while (uVar12 != 0);
        if (uVar10 == param_2) {
          return 8;
        }
      }
      lVar11 = param_2 - uVar10;
      pbVar8 = (byte *)((long)param_1 + uVar10);
      do {
        lVar11 = lVar11 + -1;
        bVar2 = *pbVar8 >> 4;
        *(ushort *)puVar9 = *pbVar8 & 0xf0 | (ushort)bVar2 << 8 | (ushort)bVar2 << 0xc | 0xf;
        puVar9 = (ulong *)((long)puVar9 + 2);
        pbVar8 = pbVar8 + 1;
      } while (lVar11 != 0);
    }
    return 8;
  case 9:
    *param_5 = param_2 << 1;
    puVar5 = malloc(param_2 << 1);
    *param_4 = puVar5;
    if (0 < (long)param_2) {
      if ((param_2 < 8) ||
         ((puVar5 < (ulong *)((long)param_1 + param_2) &&
          (param_1 < (ulong *)((long)puVar5 + param_2 * 2))))) {
        uVar10 = 0;
        puVar9 = puVar5;
      }
      else {
        uVar10 = param_2 & 0xfffffffffffffff8;
        puVar9 = (ulong *)((long)puVar5 + uVar10 * 2);
        uVar12 = uVar10;
        puVar13 = param_1;
        do {
          uVar12 = uVar12 - 8;
          uVar23 = *puVar13 & 0xf8f8f8f8f8f8f8f8;
          uVar1 = CONCAT12((char)(uVar23 >> 8),(short)*puVar13) & 0xff00f8;
          bVar14 = (byte)(uVar23 >> 0x10);
          bVar15 = (byte)(uVar23 >> 0x18);
          bVar16 = (byte)(uVar23 >> 0x20);
          bVar17 = (byte)(uVar23 >> 0x28);
          bVar18 = (byte)(uVar23 >> 0x30);
          uVar24 = (uint)CONCAT12(bVar17,(ushort)bVar16);
          bVar19 = (byte)(uVar23 >> 0x38);
                    /* try { // try from 00fea7f8 to 010ea7fb has its CatchHandler @ 00fea870 */
          bVar2 = (byte)(uVar1 >> 0x10);
                    /* try { // try from 00fea7fc to 010ea89b has its CatchHandler @ 00fea794 */
          iVar31 = (uVar24 & 0xffff) << 3;
          iVar21 = (uVar1 & 0xffff) << 3;
          puVar5[1] = CONCAT26(CONCAT11(bVar19 | (byte)(((uint)bVar19 << 3) >> 8),
                                        (byte)((uint)bVar19 << 3) | bVar19 >> 2),
                               CONCAT24(CONCAT11(bVar18 | (byte)(((uint)bVar18 << 3) >> 8),
                                                 (byte)((uint)bVar18 << 3) | bVar18 >> 2),
                                        CONCAT22(CONCAT11(bVar17 | (byte)(((uint)bVar17 << 3) >> 8),
                                                          (byte)((uint)bVar17 << 3) | bVar17 >> 2),
                                                 CONCAT11(bVar16 | (byte)((uint)iVar31 >> 8),
                                                          (byte)iVar31 |
                                                          (byte)((uVar24 & 0xffff) >> 2))))) |
                      0x1000100010001;
          *puVar5 = CONCAT26(CONCAT11(bVar15 | (byte)(((uint)bVar15 << 3) >> 8),
                                      (byte)((uint)bVar15 << 3) | bVar15 >> 2),
                             CONCAT24(CONCAT11(bVar14 | (byte)(((uint)bVar14 << 3) >> 8),
                                               (byte)((uint)bVar14 << 3) | bVar14 >> 2),
                                      CONCAT22(CONCAT11(bVar2 | (byte)(((uint)bVar2 << 3) >> 8),
                                                        (byte)((uint)bVar2 << 3) | bVar2 >> 2),
                                               CONCAT11((byte)uVar1 | (byte)((uint)iVar21 >> 8),
                                                        (byte)iVar21 | (byte)((uVar1 & 0xffff) >> 2)
                                                       )))) | 0x1000100010001;
          puVar5 = puVar5 + 2;
          puVar13 = puVar13 + 1;
        } while (uVar12 != 0);
        if (uVar10 == param_2) {
          return 9;
        }
      }
      lVar11 = param_2 - uVar10;
      pbVar8 = (byte *)((long)param_1 + uVar10);
      do {
        lVar11 = lVar11 + -1;
        uVar24 = *pbVar8 & 0xf8;
        *(ushort *)puVar9 =
             (ushort)(uVar24 << 3) | (ushort)(*pbVar8 >> 3) << 0xb | (ushort)(uVar24 >> 2) | 1;
        puVar9 = (ulong *)((long)puVar9 + 2);
        pbVar8 = pbVar8 + 1;
      } while (lVar11 != 0);
    }
    return 9;
  }
  *param_5 = param_2 << 2;
  puVar3 = malloc(param_2 << 2);
  *param_4 = puVar3;
  if (0 < (long)param_2) {
    if ((param_2 < 0x20) ||
       ((puVar3 < (undefined1 *)((long)param_1 + param_2) && (param_1 < puVar3 + param_2 * 4)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = param_2 & 0xffffffffffffffe0;
      puVar6 = puVar3 + 0x40;
      puVar5 = param_1 + 2;
      puVar3 = puVar3 + uVar10 * 4;
      uVar12 = uVar10;
      do {
        uVar22 = puVar5[-1];
        uVar23 = puVar5[-2];
        uVar30 = puVar5[1];
        uVar29 = *puVar5;
        uVar12 = uVar12 - 0x20;
        puVar5 = puVar5 + 4;
        uVar20 = (undefined1)uVar23;
        puVar6[-0x40] = uVar20;
        puVar6[-0x3f] = uVar20;
        puVar6[-0x3e] = uVar20;
        puVar6[-0x3d] = 0xff;
        uVar20 = (undefined1)(uVar23 >> 8);
        puVar6[-0x3c] = uVar20;
        puVar6[-0x3b] = uVar20;
        puVar6[-0x3a] = uVar20;
        puVar6[-0x39] = 0xff;
        uVar20 = (undefined1)(uVar23 >> 0x10);
        puVar6[-0x38] = uVar20;
        puVar6[-0x37] = uVar20;
        puVar6[-0x36] = uVar20;
        puVar6[-0x35] = 0xff;
        uVar20 = (undefined1)(uVar23 >> 0x18);
        puVar6[-0x34] = uVar20;
        puVar6[-0x33] = uVar20;
        puVar6[-0x32] = uVar20;
        puVar6[-0x31] = 0xff;
        uVar20 = (undefined1)(uVar23 >> 0x20);
        puVar6[-0x30] = uVar20;
        puVar6[-0x2f] = uVar20;
        puVar6[-0x2e] = uVar20;
        puVar6[-0x2d] = 0xff;
        uVar20 = (undefined1)(uVar23 >> 0x28);
        puVar6[-0x2c] = uVar20;
        puVar6[-0x2b] = uVar20;
        puVar6[-0x2a] = uVar20;
        puVar6[-0x29] = 0xff;
        uVar20 = (undefined1)(uVar23 >> 0x30);
        puVar6[-0x28] = uVar20;
        puVar6[-0x27] = uVar20;
        puVar6[-0x26] = uVar20;
        puVar6[-0x25] = 0xff;
        uVar20 = (undefined1)(uVar23 >> 0x38);
        puVar6[-0x24] = uVar20;
        puVar6[-0x23] = uVar20;
        puVar6[-0x22] = uVar20;
        puVar6[-0x21] = 0xff;
        uVar20 = (undefined1)uVar22;
        puVar6[-0x20] = uVar20;
        puVar6[-0x1f] = uVar20;
        puVar6[-0x1e] = uVar20;
        puVar6[-0x1d] = 0xff;
        uVar20 = (undefined1)(uVar22 >> 8);
        puVar6[-0x1c] = uVar20;
        puVar6[-0x1b] = uVar20;
        puVar6[-0x1a] = uVar20;
        puVar6[-0x19] = 0xff;
        uVar20 = (undefined1)(uVar22 >> 0x10);
        puVar6[-0x18] = uVar20;
        puVar6[-0x17] = uVar20;
        puVar6[-0x16] = uVar20;
        puVar6[-0x15] = 0xff;
        uVar20 = (undefined1)(uVar22 >> 0x18);
        puVar6[-0x14] = uVar20;
        puVar6[-0x13] = uVar20;
        puVar6[-0x12] = uVar20;
        puVar6[-0x11] = 0xff;
        uVar20 = (undefined1)(uVar22 >> 0x20);
        puVar6[-0x10] = uVar20;
        puVar6[-0xf] = uVar20;
        puVar6[-0xe] = uVar20;
        puVar6[-0xd] = 0xff;
        uVar20 = (undefined1)(uVar22 >> 0x28);
        puVar6[-0xc] = uVar20;
        puVar6[-0xb] = uVar20;
        puVar6[-10] = uVar20;
        puVar6[-9] = 0xff;
        uVar20 = (undefined1)(uVar22 >> 0x30);
        puVar6[-8] = uVar20;
        puVar6[-7] = uVar20;
        puVar6[-6] = uVar20;
        puVar6[-5] = 0xff;
        uVar20 = (undefined1)(uVar22 >> 0x38);
        puVar6[-4] = uVar20;
        puVar6[-3] = uVar20;
        puVar6[-2] = uVar20;
        puVar6[-1] = 0xff;
        uVar20 = (undefined1)uVar29;
        *puVar6 = uVar20;
        puVar6[1] = uVar20;
        puVar6[2] = uVar20;
        puVar6[3] = 0xff;
        uVar20 = (undefined1)(uVar29 >> 8);
        puVar6[4] = uVar20;
        puVar6[5] = uVar20;
        puVar6[6] = uVar20;
        puVar6[7] = 0xff;
        uVar20 = (undefined1)(uVar29 >> 0x10);
        puVar6[8] = uVar20;
        puVar6[9] = uVar20;
        puVar6[10] = uVar20;
        puVar6[0xb] = 0xff;
        uVar20 = (undefined1)(uVar29 >> 0x18);
        puVar6[0xc] = uVar20;
        puVar6[0xd] = uVar20;
        puVar6[0xe] = uVar20;
        puVar6[0xf] = 0xff;
        uVar20 = (undefined1)(uVar29 >> 0x20);
        puVar6[0x10] = uVar20;
        puVar6[0x11] = uVar20;
        puVar6[0x12] = uVar20;
        puVar6[0x13] = 0xff;
        uVar20 = (undefined1)(uVar29 >> 0x28);
        puVar6[0x14] = uVar20;
        puVar6[0x15] = uVar20;
        puVar6[0x16] = uVar20;
        puVar6[0x17] = 0xff;
        uVar20 = (undefined1)(uVar29 >> 0x30);
        puVar6[0x18] = uVar20;
        puVar6[0x19] = uVar20;
        puVar6[0x1a] = uVar20;
        puVar6[0x1b] = 0xff;
        uVar20 = (undefined1)(uVar29 >> 0x38);
        puVar6[0x1c] = uVar20;
        puVar6[0x1d] = uVar20;
        puVar6[0x1e] = uVar20;
        puVar6[0x1f] = 0xff;
        uVar20 = (undefined1)uVar30;
        puVar6[0x20] = uVar20;
        puVar6[0x21] = uVar20;
        puVar6[0x22] = uVar20;
        puVar6[0x23] = 0xff;
        uVar20 = (undefined1)(uVar30 >> 8);
        puVar6[0x24] = uVar20;
        puVar6[0x25] = uVar20;
        puVar6[0x26] = uVar20;
        puVar6[0x27] = 0xff;
        uVar20 = (undefined1)(uVar30 >> 0x10);
        puVar6[0x28] = uVar20;
        puVar6[0x29] = uVar20;
        puVar6[0x2a] = uVar20;
        puVar6[0x2b] = 0xff;
        uVar20 = (undefined1)(uVar30 >> 0x18);
        puVar6[0x2c] = uVar20;
        puVar6[0x2d] = uVar20;
        puVar6[0x2e] = uVar20;
        puVar6[0x2f] = 0xff;
        uVar20 = (undefined1)(uVar30 >> 0x20);
        puVar6[0x30] = uVar20;
        puVar6[0x31] = uVar20;
        puVar6[0x32] = uVar20;
        puVar6[0x33] = 0xff;
        uVar20 = (undefined1)(uVar30 >> 0x28);
        puVar6[0x34] = uVar20;
        puVar6[0x35] = uVar20;
        puVar6[0x36] = uVar20;
        puVar6[0x37] = 0xff;
        uVar20 = (undefined1)(uVar30 >> 0x30);
        puVar6[0x38] = uVar20;
        puVar6[0x39] = uVar20;
        puVar6[0x3a] = uVar20;
        puVar6[0x3b] = 0xff;
        uVar20 = (undefined1)(uVar30 >> 0x38);
        puVar6[0x3c] = uVar20;
        puVar6[0x3d] = uVar20;
        puVar6[0x3e] = uVar20;
        puVar6[0x3f] = 0xff;
        puVar6 = puVar6 + 0x80;
      } while (uVar12 != 0);
      if (uVar10 == param_2) {
        return 2;
      }
    }
    lVar11 = param_2 - uVar10;
    puVar6 = (undefined1 *)((long)param_1 + uVar10);
    do {
      lVar11 = lVar11 + -1;
      *puVar3 = *puVar6;
      puVar3[1] = *puVar6;
      uVar20 = *puVar6;
      puVar3[3] = 0xff;
      puVar3[2] = uVar20;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 1;
    } while (lVar11 != 0);
  }
  return 2;
}


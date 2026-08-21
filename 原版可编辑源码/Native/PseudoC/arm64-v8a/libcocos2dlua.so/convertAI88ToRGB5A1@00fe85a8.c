
/* cocos2d::Texture2D::convertAI88ToRGB5A1(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertAI88ToRGB5A1(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  uint uVar2;
  uchar *puVar3;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  uchar uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  ulong uVar32;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  byte *pbVar7;
  uchar *puVar8;
  byte *pbVar9;
  uchar *puVar10;
  byte *pbVar11;
  uchar *puVar12;
  byte *pbVar13;
  uchar *puVar14;
  
  if (0 < param_2 + -1) {
    uVar1 = (param_2 - 2U >> 1) + 1;
    if ((uVar1 < 8) ||
       ((param_3 < param_1 + (param_2 & 0xfffffffffffffffeU) &&
        (param_1 < param_3 + (param_2 & 0xfffffffffffffffeU))))) {
      lVar15 = 0;
      puVar16 = (ushort *)param_3;
    }
    else {
      uVar17 = uVar1 & 0xfffffffffffffff8;
      lVar15 = uVar17 * 2;
      puVar16 = (ushort *)(param_3 + lVar15);
      uVar18 = uVar17;
      puVar14 = param_1;
      do {
        uVar27 = *puVar14;
        bVar28 = puVar14[1];
        puVar3 = puVar14 + 2;
        bVar29 = puVar14[3];
        puVar4 = puVar14 + 4;
        bVar30 = puVar14[5];
        puVar5 = puVar14 + 6;
        bVar31 = puVar14[7];
        puVar6 = puVar14 + 8;
        pbVar7 = puVar14 + 9;
        puVar8 = puVar14 + 10;
        pbVar9 = puVar14 + 0xb;
        puVar10 = puVar14 + 0xc;
        pbVar11 = puVar14 + 0xd;
        puVar12 = puVar14 + 0xe;
        pbVar13 = puVar14 + 0xf;
        puVar14 = puVar14 + 0x10;
        uVar18 = uVar18 - 8;
        uVar32 = CONCAT17(*puVar12,CONCAT16(*puVar10,CONCAT15(*puVar8,CONCAT14(*puVar6,CONCAT13(*
                                                  puVar5,CONCAT12(*puVar4,CONCAT11(*puVar3,uVar27)))
                                                  )))) & 0xf8f8f8f8f8f8f8f8;
        bVar19 = (byte)uVar32;
        bVar20 = (byte)(uVar32 >> 8);
        bVar21 = (byte)(uVar32 >> 0x10);
        bVar22 = (byte)(uVar32 >> 0x18);
        bVar23 = (byte)(uVar32 >> 0x20);
        bVar24 = (byte)(uVar32 >> 0x28);
        bVar25 = (byte)(uVar32 >> 0x30);
        bVar26 = (byte)(uVar32 >> 0x38);
                    /* catch() { ... } // from try @ 00fe86d4 with catch @ 00fe866c */
        *(ulong *)(param_3 + 8) =
             CONCAT26(CONCAT11(bVar26 | (byte)(((uint)bVar26 << 3) >> 8),
                               (byte)((uint)bVar26 << 3) | bVar26 >> 2 | *pbVar13 >> 7),
                      CONCAT24(CONCAT11(bVar25 | (byte)(((uint)bVar25 << 3) >> 8),
                                        (byte)((uint)bVar25 << 3) | bVar25 >> 2 | *pbVar11 >> 7),
                               CONCAT22(CONCAT11(bVar24 | (byte)(((uint)bVar24 << 3) >> 8),
                                                 (byte)((uint)bVar24 << 3) | bVar24 >> 2 |
                                                 *pbVar9 >> 7),
                                        CONCAT11(bVar23 | (byte)(((uint)bVar23 << 3) >> 8),
                                                 (byte)((uint)bVar23 << 3) | bVar23 >> 2 |
                                                 *pbVar7 >> 7))));
        *(ulong *)param_3 =
             CONCAT17(bVar22 | (byte)(((uint)bVar22 << 3) >> 8),
                      CONCAT16((byte)((uint)bVar22 << 3) | bVar22 >> 2 | bVar31 >> 7,
                               CONCAT15(bVar21 | (byte)(((uint)bVar21 << 3) >> 8),
                                        CONCAT14((byte)((uint)bVar21 << 3) | bVar21 >> 2 |
                                                 bVar30 >> 7,
                                                 CONCAT13(bVar20 | (byte)(((uint)bVar20 << 3) >> 8),
                                                          CONCAT12((byte)((uint)bVar20 << 3) |
                                                                   bVar20 >> 2 | bVar29 >> 7,
                                                                   CONCAT11(bVar19 | (byte)(((uint)
                                                  bVar19 << 3) >> 8),
                                                  (byte)((uint)bVar19 << 3) | bVar19 >> 2 |
                                                  bVar28 >> 7)))))));
        param_3 = param_3 + 0x10;
      } while (uVar18 != 0);
                    /* try { // try from 00fe86a8 to 010e86af has its CatchHandler @ 00fe8754 */
      if (uVar1 == uVar17) {
        return;
      }
    }
    do {
      pbVar7 = param_1 + lVar15;
      bVar19 = *pbVar7;
      lVar15 = lVar15 + 2;
      uVar2 = bVar19 & 0xf8;
      *puVar16 = (ushort)(uVar2 << 3) | (ushort)(bVar19 >> 3) << 0xb | (ushort)(uVar2 >> 2) |
                 (ushort)(pbVar7[1] >> 7);
      puVar16 = puVar16 + 1;
    } while (lVar15 < param_2 + -1);
  }
  return;
}



/* cocos2d::Texture2D::convertAI88ToRGBA4444(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertAI88ToRGBA4444(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  uchar *puVar2;
  long lVar14;
  ushort *puVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uchar uVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  ulong uVar31;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  byte *pbVar6;
  uchar *puVar7;
  byte *pbVar8;
  uchar *puVar9;
  byte *pbVar10;
  uchar *puVar11;
  byte *pbVar12;
  uchar *puVar13;
  
                    /* try { // try from 00fe83d4 to 010e83db has its CatchHandler @ 00fe8440 */
                    /* try { // try from 00fe83dc to 010e845b has its CatchHandler @ 00fe83a4 */
  if (0 < param_2 + -1) {
    uVar1 = (param_2 - 2U >> 1) + 1;
    if ((uVar1 < 8) ||
       ((param_3 < param_1 + (param_2 & 0xfffffffffffffffeU) &&
        (param_1 < param_3 + (param_2 & 0xfffffffffffffffeU))))) {
      lVar14 = 0;
      puVar15 = (ushort *)param_3;
    }
    else {
      uVar16 = uVar1 & 0xfffffffffffffff8;
      lVar14 = uVar16 * 2;
      puVar15 = (ushort *)(param_3 + lVar14);
      uVar17 = uVar16;
      puVar13 = param_1;
      do {
        uVar26 = *puVar13;
        bVar27 = puVar13[1];
        puVar2 = puVar13 + 2;
        bVar28 = puVar13[3];
        puVar3 = puVar13 + 4;
        bVar29 = puVar13[5];
        puVar4 = puVar13 + 6;
        bVar30 = puVar13[7];
        puVar5 = puVar13 + 8;
        pbVar6 = puVar13 + 9;
        puVar7 = puVar13 + 10;
        pbVar8 = puVar13 + 0xb;
        puVar9 = puVar13 + 0xc;
        pbVar10 = puVar13 + 0xd;
        puVar11 = puVar13 + 0xe;
        pbVar12 = puVar13 + 0xf;
        puVar13 = puVar13 + 0x10;
        uVar17 = uVar17 - 8;
        uVar31 = CONCAT17(*puVar11,CONCAT16(*puVar9,CONCAT15(*puVar7,CONCAT14(*puVar5,CONCAT13(*
                                                  puVar4,CONCAT12(*puVar3,CONCAT11(*puVar2,uVar26)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
        bVar18 = (byte)uVar31;
        bVar19 = (byte)(uVar31 >> 8);
        bVar20 = (byte)(uVar31 >> 0x10);
        bVar21 = (byte)(uVar31 >> 0x18);
        bVar22 = (byte)(uVar31 >> 0x20);
        bVar23 = (byte)(uVar31 >> 0x28);
        bVar24 = (byte)(uVar31 >> 0x30);
        bVar25 = (byte)(uVar31 >> 0x38);
                    /* catch() { ... } // from try @ 00fe84b8 with catch @ 00fe8480 */
                    /* try { // try from 00fe84b0 to 010e84b7 has its CatchHandler @ 00fe8520 */
                    /* try { // try from 00fe84b8 to 010e853b has its CatchHandler @ 00fe8480 */
        *(ulong *)(param_3 + 8) =
             CONCAT26(CONCAT11((byte)(((uint)bVar25 << 4) >> 8) | bVar25,bVar25 | *pbVar12 >> 4),
                      CONCAT24(CONCAT11((byte)(((uint)bVar24 << 4) >> 8) | bVar24,
                                        bVar24 | *pbVar10 >> 4),
                               CONCAT22(CONCAT11((byte)(((uint)bVar23 << 4) >> 8) | bVar23,
                                                 bVar23 | *pbVar8 >> 4),
                                        CONCAT11((byte)(((CONCAT12(bVar23,(ushort)bVar22) & 0xffff)
                                                        << 4) >> 8) | bVar22,bVar22 | *pbVar6 >> 4))
                              ));
        *(ulong *)param_3 =
             CONCAT17((byte)(((uint)bVar21 << 4) >> 8) | bVar21,
                      CONCAT16(bVar21 | bVar30 >> 4,
                               CONCAT15((byte)(((uint)bVar20 << 4) >> 8) | bVar20,
                                        CONCAT14(bVar20 | bVar29 >> 4,
                                                 CONCAT13((byte)(((uint)bVar19 << 4) >> 8) | bVar19,
                                                          CONCAT12(bVar19 | bVar28 >> 4,
                                                                   CONCAT11((byte)(((uint)bVar18 <<
                                                                                   4) >> 8) | bVar18
                                                                            ,bVar18 | bVar27 >> 4)))
                                                ))));
        param_3 = param_3 + 0x10;
      } while (uVar17 != 0);
      if (uVar1 == uVar16) {
        return;
      }
    }
    do {
      pbVar6 = param_1 + lVar14;
      bVar18 = *pbVar6;
      lVar14 = lVar14 + 2;
      bVar19 = bVar18 >> 4;
                    /* catch() { ... } // from try @ 00fe83d4 with catch @ 00fe8440 */
      *puVar15 = bVar18 & 0xf0 | (ushort)bVar19 << 8 | (ushort)bVar19 << 0xc |
                 (ushort)(pbVar6[1] >> 4);
      puVar15 = puVar15 + 1;
    } while (lVar14 < param_2 + -1);
  }
  return;
}


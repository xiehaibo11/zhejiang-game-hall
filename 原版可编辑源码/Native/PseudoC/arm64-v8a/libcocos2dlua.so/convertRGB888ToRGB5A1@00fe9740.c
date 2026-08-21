
/* cocos2d::Texture2D::convertRGB888ToRGB5A1(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGB888ToRGB5A1(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  uint3 uVar2;
  uchar *puVar3;
  long lVar23;
  ulong uVar24;
  ushort *puVar25;
  ulong uVar26;
  uchar uVar27;
  undefined2 uVar28;
  byte bVar31;
  byte bVar33;
  short sVar32;
  byte bVar34;
  byte bVar36;
  short sVar35;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  ulong uVar43;
  ulong uVar44;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  byte *pbVar12;
  uchar *puVar13;
  uchar *puVar14;
  byte *pbVar15;
  uchar *puVar16;
  uchar *puVar17;
  byte *pbVar18;
  uchar *puVar19;
  uchar *puVar20;
  byte *pbVar21;
  uchar *puVar22;
  undefined4 uVar29;
  undefined6 uVar30;
  
  if (0 < param_2 + -2) {
    uVar24 = (param_2 - 3U) / 3;
                    /* try { // try from 00fe9760 to 010e9767 has its CatchHandler @ 00fe97fc */
    uVar1 = uVar24 + 1;
                    /* try { // try from 00fe9788 to 010e978b has its CatchHandler @ 00fe97ec */
                    /* try { // try from 00fe978c to 010e9817 has its CatchHandler @ 00fe9730 */
    if ((uVar1 < 8) ||
       ((param_3 < param_1 + uVar24 * 3 + 3 && (param_1 < param_3 + uVar24 * 2 + 2)))) {
      lVar23 = 0;
      puVar25 = (ushort *)param_3;
    }
    else {
      uVar26 = uVar1 & 0x7ffffffffffffff8;
      puVar25 = (ushort *)(param_3 + uVar26 * 2);
      lVar23 = uVar26 * 3;
                    /* catch() { ... } // from try @ 00fe9788 with catch @ 00fe97ec */
      uVar24 = uVar26;
      puVar22 = param_1;
      do {
        uVar27 = *puVar22;
        puVar3 = puVar22 + 1;
        bVar31 = puVar22[2];
        puVar4 = puVar22 + 3;
        puVar5 = puVar22 + 4;
        bVar33 = puVar22[5];
        puVar6 = puVar22 + 6;
        puVar7 = puVar22 + 7;
        bVar34 = puVar22[8];
        puVar8 = puVar22 + 9;
        puVar9 = puVar22 + 10;
        bVar36 = puVar22[0xb];
        puVar10 = puVar22 + 0xc;
        puVar11 = puVar22 + 0xd;
        pbVar12 = puVar22 + 0xe;
        puVar13 = puVar22 + 0xf;
        puVar14 = puVar22 + 0x10;
        pbVar15 = puVar22 + 0x11;
        puVar16 = puVar22 + 0x12;
        puVar17 = puVar22 + 0x13;
        pbVar18 = puVar22 + 0x14;
        puVar19 = puVar22 + 0x15;
        puVar20 = puVar22 + 0x16;
        pbVar21 = puVar22 + 0x17;
        puVar22 = puVar22 + 0x18;
                    /* catch() { ... } // from try @ 00fe9760 with catch @ 00fe97fc */
        uVar24 = uVar24 - 8;
        uVar43 = CONCAT17(*puVar19,CONCAT16(*puVar16,CONCAT15(*puVar13,CONCAT14(*puVar10,CONCAT13(*
                                                  puVar8,CONCAT12(*puVar6,CONCAT11(*puVar4,uVar27)))
                                                  )))) & 0xf8f8f8f8f8f8f8f8;
        uVar44 = CONCAT17(*puVar20,CONCAT16(*puVar17,CONCAT15(*puVar14,CONCAT14(*puVar11,CONCAT13(*
                                                  puVar9,CONCAT12(*puVar7,CONCAT11(*puVar5,*puVar3))
                                                  ))))) & 0xf8f8f8f8f8f8f8f8;
        uVar2 = CONCAT12((char)(uVar44 >> 8),CONCAT11(*puVar5,*puVar3)) & 0xff00f8;
        sVar32 = (short)uVar2 << 3;
        sVar35 = (ushort)(byte)(uVar2 >> 0x10) << 3;
        sVar37 = (ushort)(byte)(uVar44 >> 0x10) << 3;
        sVar38 = (ushort)(byte)(uVar44 >> 0x18) << 3;
        sVar39 = (ushort)(byte)(uVar44 >> 0x20) << 3;
        sVar40 = (ushort)(byte)(uVar44 >> 0x28) << 3;
        sVar41 = (ushort)(byte)(uVar44 >> 0x30) << 3;
        sVar42 = (ushort)(byte)(uVar44 >> 0x38) << 3;
        uVar28 = CONCAT11((byte)(uVar43 >> 0x20) | (byte)((ushort)sVar39 >> 8),
                          (byte)sVar39 | *pbVar12 >> 2);
        uVar29 = CONCAT13((byte)(uVar43 >> 0x28) | (byte)((ushort)sVar40 >> 8),
                          CONCAT12((byte)sVar40 | *pbVar15 >> 2,uVar28));
        uVar30 = CONCAT15((byte)(uVar43 >> 0x30) | (byte)((ushort)sVar41 >> 8),
                          CONCAT14((byte)sVar41 | *pbVar18 >> 2,uVar29));
        *(ulong *)((long)param_3 + 8) =
             CONCAT26((short)(CONCAT17((byte)(uVar43 >> 0x38) | (byte)((ushort)sVar42 >> 8),
                                       CONCAT16((byte)sVar42 | *pbVar21 >> 2,uVar30)) >> 0x30),
                      CONCAT24((short)((uint6)uVar30 >> 0x20),
                               CONCAT22((short)((uint)uVar29 >> 0x10),uVar28))) | 0x1000100010001;
        *(ulong *)param_3 =
             CONCAT17((byte)(uVar43 >> 0x18) | (byte)((ushort)sVar38 >> 8),
                      CONCAT16((byte)sVar38 | bVar36 >> 2,
                               CONCAT15((byte)(uVar43 >> 0x10) | (byte)((ushort)sVar37 >> 8),
                                        CONCAT14((byte)sVar37 | bVar34 >> 2,
                                                 CONCAT13((byte)(uVar43 >> 8) |
                                                          (byte)((ushort)sVar35 >> 8),
                                                          CONCAT12((byte)sVar35 | bVar33 >> 2,
                                                                   CONCAT11((byte)uVar43 |
                                                                            (byte)((ushort)sVar32 >>
                                                                                  8),(byte)sVar32 |
                                                                                     bVar31 >> 2))))
                                       ))) | 0x1000100010001;
        param_3 = (uchar *)((long)param_3 + 0x10);
      } while (uVar24 != 0);
      if (uVar1 == uVar26) {
        return;
      }
    }
    do {
      pbVar12 = param_1 + lVar23;
      lVar23 = lVar23 + 3;
      *puVar25 = (pbVar12[1] & 0xf8) << 3 | (ushort)(*pbVar12 >> 3) << 0xb |
                 (ushort)(pbVar12[2] >> 2) | 1;
      puVar25 = puVar25 + 1;
    } while (lVar23 < param_2 + -2);
  }
  return;
}


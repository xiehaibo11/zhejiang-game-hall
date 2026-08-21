
/* cocos2d::Texture2D::convertRGB888ToRGB565(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGB888ToRGB565(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  uint3 uVar2;
  uchar *puVar3;
  long lVar23;
  ulong uVar24;
  ushort *puVar25;
  ulong uVar26;
  uchar uVar27;
  byte bVar28;
  byte bVar30;
  short sVar29;
  byte bVar31;
  byte bVar33;
  short sVar32;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  ulong uVar40;
  ulong uVar41;
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
  
  if (0 < param_2 + -2) {
    uVar24 = (param_2 - 3U) / 3;
    uVar1 = uVar24 + 1;
    if ((uVar1 < 8) ||
       ((param_3 < param_1 + uVar24 * 3 + 3 && (param_1 < param_3 + uVar24 * 2 + 2)))) {
      lVar23 = 0;
      puVar25 = (ushort *)param_3;
    }
    else {
      uVar26 = uVar1 & 0x7ffffffffffffff8;
      puVar25 = (ushort *)(param_3 + uVar26 * 2);
      lVar23 = uVar26 * 3;
      uVar24 = uVar26;
      puVar22 = param_1;
      do {
                    /* catch() { ... } // from try @ 00fe8b30 with catch @ 00fe8ac8 */
        uVar27 = *puVar22;
        puVar3 = puVar22 + 1;
        bVar28 = puVar22[2];
        puVar4 = puVar22 + 3;
        puVar5 = puVar22 + 4;
        bVar30 = puVar22[5];
        puVar6 = puVar22 + 6;
        puVar7 = puVar22 + 7;
        bVar31 = puVar22[8];
        puVar8 = puVar22 + 9;
        puVar9 = puVar22 + 10;
        bVar33 = puVar22[0xb];
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
        uVar24 = uVar24 - 8;
        uVar40 = CONCAT17(*puVar19,CONCAT16(*puVar16,CONCAT15(*puVar13,CONCAT14(*puVar10,CONCAT13(*
                                                  puVar8,CONCAT12(*puVar6,CONCAT11(*puVar4,uVar27)))
                                                  )))) & 0xf8f8f8f8f8f8f8f8;
        uVar41 = CONCAT17(*puVar20,CONCAT16(*puVar17,CONCAT15(*puVar14,CONCAT14(*puVar11,CONCAT13(*
                                                  puVar9,CONCAT12(*puVar7,CONCAT11(*puVar5,*puVar3))
                                                  ))))) & 0xfcfcfcfcfcfcfcfc;
        uVar2 = CONCAT12((char)(uVar41 >> 8),CONCAT11(*puVar5,*puVar3)) & 0xff00fc;
        sVar29 = (short)uVar2 << 3;
        sVar32 = (ushort)(byte)(uVar2 >> 0x10) << 3;
        sVar34 = (ushort)(byte)(uVar41 >> 0x10) << 3;
        sVar35 = (ushort)(byte)(uVar41 >> 0x18) << 3;
        sVar36 = (ushort)(byte)(uVar41 >> 0x20) << 3;
        sVar37 = (ushort)(byte)(uVar41 >> 0x28) << 3;
        sVar38 = (ushort)(byte)(uVar41 >> 0x30) << 3;
        sVar39 = (ushort)(byte)(uVar41 >> 0x38) << 3;
        *(ulong *)(param_3 + 8) =
             CONCAT17((byte)((ushort)sVar39 >> 8) | (byte)(uVar40 >> 0x38),
                      CONCAT16((byte)sVar39 | *pbVar21 >> 3,
                               CONCAT15((byte)((ushort)sVar38 >> 8) | (byte)(uVar40 >> 0x30),
                                        CONCAT14((byte)sVar38 | *pbVar18 >> 3,
                                                 CONCAT13((byte)((ushort)sVar37 >> 8) |
                                                          (byte)(uVar40 >> 0x28),
                                                          CONCAT12((byte)sVar37 | *pbVar15 >> 3,
                                                                   CONCAT11((byte)((ushort)sVar36 >>
                                                                                  8) |
                                                                            (byte)(uVar40 >> 0x20),
                                                                            (byte)sVar36 |
                                                                            *pbVar12 >> 3)))))));
        *(ulong *)param_3 =
             CONCAT17((byte)((ushort)sVar35 >> 8) | (byte)(uVar40 >> 0x18),
                      CONCAT16((byte)sVar35 | bVar33 >> 3,
                               CONCAT15((byte)((ushort)sVar34 >> 8) | (byte)(uVar40 >> 0x10),
                                        CONCAT14((byte)sVar34 | bVar31 >> 3,
                                                 CONCAT13((byte)((ushort)sVar32 >> 8) |
                                                          (byte)(uVar40 >> 8),
                                                          CONCAT12((byte)sVar32 | bVar30 >> 3,
                                                                   CONCAT11((byte)((ushort)sVar29 >>
                                                                                  8) | (byte)uVar40,
                                                                            (byte)sVar29 |
                                                                            bVar28 >> 3)))))));
        param_3 = param_3 + 0x10;
      } while (uVar24 != 0);
      if (uVar1 == uVar26) {
        return;
      }
    }
    do {
      pbVar12 = param_1 + lVar23;
      lVar23 = lVar23 + 3;
      *puVar25 = (*pbVar12 & 0xf8) << 8 | (ushort)(pbVar12[1] >> 2) << 5 | (ushort)(pbVar12[2] >> 3)
      ;
      puVar25 = puVar25 + 1;
    } while (lVar23 < param_2 + -2);
  }
  return;
}


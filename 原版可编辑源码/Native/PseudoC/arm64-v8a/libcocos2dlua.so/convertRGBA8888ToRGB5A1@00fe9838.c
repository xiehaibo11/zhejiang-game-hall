
/* cocos2d::Texture2D::convertRGBA8888ToRGB5A1(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGBA8888ToRGB5A1(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  uint3 uVar2;
  uchar *puVar3;
  long lVar31;
  ushort *puVar32;
  ulong uVar33;
  ulong uVar34;
  uchar uVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  ulong uVar48;
  ulong uVar49;
  byte *pbVar4;
  uchar *puVar5;
  uchar *puVar6;
  byte *pbVar7;
  uchar *puVar8;
  uchar *puVar9;
  byte *pbVar10;
  uchar *puVar11;
  uchar *puVar12;
  byte *pbVar13;
  uchar *puVar14;
  uchar *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uchar *puVar18;
  uchar *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  uchar *puVar22;
  uchar *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  uchar *puVar26;
  uchar *puVar27;
  byte *pbVar28;
  byte *pbVar29;
  uchar *puVar30;
  
  if (0 < param_2 + -2) {
    uVar1 = (param_2 - 3U >> 2) + 1;
    if ((uVar1 < 8) ||
       ((param_3 < param_1 + (param_2 + 1U & 0xfffffffffffffffc) &&
        (param_1 < param_3 + (param_2 - 3U >> 1 & 0x7ffffffffffffffe) + 2)))) {
      lVar31 = 0;
      puVar32 = (ushort *)param_3;
    }
    else {
      uVar33 = uVar1 & 0x7ffffffffffffff8;
      puVar32 = (ushort *)(param_3 + uVar33 * 2);
      lVar31 = uVar33 << 2;
      uVar34 = uVar33;
      puVar30 = param_1;
      do {
        uVar35 = *puVar30;
        puVar3 = puVar30 + 1;
        pbVar4 = puVar30 + 2;
        bVar44 = puVar30[3];
        puVar5 = puVar30 + 4;
        puVar6 = puVar30 + 5;
        pbVar7 = puVar30 + 6;
        bVar45 = puVar30[7];
        puVar8 = puVar30 + 8;
        puVar9 = puVar30 + 9;
        pbVar10 = puVar30 + 10;
        bVar46 = puVar30[0xb];
        puVar11 = puVar30 + 0xc;
        puVar12 = puVar30 + 0xd;
        pbVar13 = puVar30 + 0xe;
        bVar47 = puVar30[0xf];
        puVar14 = puVar30 + 0x10;
        puVar15 = puVar30 + 0x11;
        pbVar16 = puVar30 + 0x12;
        pbVar17 = puVar30 + 0x13;
        puVar18 = puVar30 + 0x14;
        puVar19 = puVar30 + 0x15;
        pbVar20 = puVar30 + 0x16;
        pbVar21 = puVar30 + 0x17;
        puVar22 = puVar30 + 0x18;
        puVar23 = puVar30 + 0x19;
        pbVar24 = puVar30 + 0x1a;
        pbVar25 = puVar30 + 0x1b;
        puVar26 = puVar30 + 0x1c;
        puVar27 = puVar30 + 0x1d;
        pbVar28 = puVar30 + 0x1e;
        pbVar29 = puVar30 + 0x1f;
        puVar30 = puVar30 + 0x20;
        uVar34 = uVar34 - 8;
        uVar48 = CONCAT17(*puVar26,CONCAT16(*puVar22,CONCAT15(*puVar18,CONCAT14(*puVar14,CONCAT13(*
                                                  puVar11,CONCAT12(*puVar8,CONCAT11(*puVar5,uVar35))
                                                  ))))) & 0xf8f8f8f8f8f8f8f8;
        uVar49 = CONCAT17(*puVar27,CONCAT16(*puVar23,CONCAT15(*puVar19,CONCAT14(*puVar15,CONCAT13(*
                                                  puVar12,CONCAT12(*puVar9,CONCAT11(*puVar6,*puVar3)
                                                                  )))))) & 0xf8f8f8f8f8f8f8f8;
        uVar2 = CONCAT12((char)(uVar49 >> 8),CONCAT11(*puVar6,*puVar3)) & 0xff00f8;
        sVar36 = (short)uVar2 << 3;
        sVar37 = (ushort)(byte)(uVar2 >> 0x10) << 3;
        sVar38 = (ushort)(byte)(uVar49 >> 0x10) << 3;
        sVar39 = (ushort)(byte)(uVar49 >> 0x18) << 3;
        sVar40 = (ushort)(byte)(uVar49 >> 0x20) << 3;
        sVar41 = (ushort)(byte)(uVar49 >> 0x28) << 3;
        sVar42 = (ushort)(byte)(uVar49 >> 0x30) << 3;
        sVar43 = (ushort)(byte)(uVar49 >> 0x38) << 3;
        uVar49 = CONCAT17(*pbVar28 >> 2,
                          CONCAT16(*pbVar24 >> 2,
                                   CONCAT15(*pbVar20 >> 2,
                                            CONCAT14(*pbVar16 >> 2,
                                                     CONCAT13(*pbVar13 >> 2,
                                                              CONCAT12(*pbVar10 >> 2,
                                                                       CONCAT11(*pbVar7 >> 2,
                                                                                *pbVar4 >> 2)))))))
                 & 0x3e3e3e3e3e3e3e3e;
        *(ulong *)(param_3 + 8) =
             CONCAT17((byte)((ushort)sVar43 >> 8) | (byte)(uVar48 >> 0x38),
                      CONCAT16((byte)sVar43 | (byte)(uVar49 >> 0x38) | *pbVar29 >> 7,
                               CONCAT15((byte)((ushort)sVar42 >> 8) | (byte)(uVar48 >> 0x30),
                                        CONCAT14((byte)sVar42 | (byte)(uVar49 >> 0x30) |
                                                 *pbVar25 >> 7,
                                                 CONCAT13((byte)((ushort)sVar41 >> 8) |
                                                          (byte)(uVar48 >> 0x28),
                                                          CONCAT12((byte)sVar41 |
                                                                   (byte)(uVar49 >> 0x28) |
                                                                   *pbVar21 >> 7,
                                                                   CONCAT11((byte)((ushort)sVar40 >>
                                                                                  8) |
                                                                            (byte)(uVar48 >> 0x20),
                                                                            (byte)sVar40 |
                                                                            (byte)(uVar49 >> 0x20) |
                                                                            *pbVar17 >> 7)))))));
        *(ulong *)param_3 =
             CONCAT17((byte)((ushort)sVar39 >> 8) | (byte)(uVar48 >> 0x18),
                      CONCAT16((byte)sVar39 | (byte)(uVar49 >> 0x18) | bVar47 >> 7,
                               CONCAT15((byte)((ushort)sVar38 >> 8) | (byte)(uVar48 >> 0x10),
                                        CONCAT14((byte)sVar38 | (byte)(uVar49 >> 0x10) | bVar46 >> 7
                                                 ,CONCAT13((byte)((ushort)sVar37 >> 8) |
                                                           (byte)(uVar48 >> 8),
                                                           CONCAT12((byte)sVar37 |
                                                                    (byte)(uVar49 >> 8) |
                                                                    bVar45 >> 7,
                                                                    CONCAT11((byte)((ushort)sVar36
                                                                                   >> 8) |
                                                                             (byte)uVar48,
                                                                             (byte)sVar36 |
                                                                             (byte)uVar49 |
                                                                             bVar44 >> 7)))))));
        param_3 = param_3 + 0x10;
      } while (uVar34 != 0);
      if (uVar1 == uVar33) {
        return;
      }
    }
    do {
      pbVar4 = param_1 + lVar31;
      lVar31 = lVar31 + 4;
      *puVar32 = (*pbVar4 & 0xf8) << 8 | (ushort)(pbVar4[1] >> 3) << 6 | pbVar4[2] >> 2 & 0x3e |
                 (ushort)(pbVar4[3] >> 7);
      puVar32 = puVar32 + 1;
    } while (lVar31 < param_2 + -2);
  }
  return;
}


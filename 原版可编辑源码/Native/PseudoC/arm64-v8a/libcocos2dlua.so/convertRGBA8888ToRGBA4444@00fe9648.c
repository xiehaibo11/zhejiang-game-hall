
/* cocos2d::Texture2D::convertRGBA8888ToRGBA4444(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGBA8888ToRGBA4444(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  uint3 uVar2;
  uchar *puVar3;
  long lVar31;
  ushort *puVar32;
  ulong uVar33;
  ulong uVar34;
  uchar uVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  uchar *puVar13;
  uchar *puVar14;
  uchar *puVar15;
  uchar *puVar16;
  byte *pbVar17;
  uchar *puVar18;
  uchar *puVar19;
  uchar *puVar20;
  byte *pbVar21;
  uchar *puVar22;
  uchar *puVar23;
  uchar *puVar24;
  byte *pbVar25;
  uchar *puVar26;
  uchar *puVar27;
  uchar *puVar28;
  byte *pbVar29;
  uchar *puVar30;
  
  if (0 < param_2 + -3) {
    uVar1 = (param_2 - 4U >> 2) + 1;
    if ((uVar1 < 8) ||
       ((param_3 < param_1 + (param_2 & 0xfffffffffffffffc) &&
        (param_1 < param_3 + (param_2 - 4U >> 1 & 0x7ffffffffffffffe) + 2)))) {
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
        puVar4 = puVar30 + 2;
        bVar36 = puVar30[3];
        puVar5 = puVar30 + 4;
        puVar6 = puVar30 + 5;
        puVar7 = puVar30 + 6;
        bVar37 = puVar30[7];
        puVar8 = puVar30 + 8;
        puVar9 = puVar30 + 9;
        puVar10 = puVar30 + 10;
        bVar38 = puVar30[0xb];
        puVar11 = puVar30 + 0xc;
        puVar12 = puVar30 + 0xd;
        puVar13 = puVar30 + 0xe;
        bVar39 = puVar30[0xf];
        puVar14 = puVar30 + 0x10;
        puVar15 = puVar30 + 0x11;
        puVar16 = puVar30 + 0x12;
        pbVar17 = puVar30 + 0x13;
        puVar18 = puVar30 + 0x14;
        puVar19 = puVar30 + 0x15;
        puVar20 = puVar30 + 0x16;
        pbVar21 = puVar30 + 0x17;
        puVar22 = puVar30 + 0x18;
        puVar23 = puVar30 + 0x19;
        puVar24 = puVar30 + 0x1a;
        pbVar25 = puVar30 + 0x1b;
        puVar26 = puVar30 + 0x1c;
        puVar27 = puVar30 + 0x1d;
        puVar28 = puVar30 + 0x1e;
        pbVar29 = puVar30 + 0x1f;
        puVar30 = puVar30 + 0x20;
        uVar34 = uVar34 - 8;
        uVar40 = CONCAT17(*puVar26,CONCAT16(*puVar22,CONCAT15(*puVar18,CONCAT14(*puVar14,CONCAT13(*
                                                  puVar11,CONCAT12(*puVar8,CONCAT11(*puVar5,uVar35))
                                                  ))))) & 0xf0f0f0f0f0f0f0f0;
        uVar41 = CONCAT17(*puVar27,CONCAT16(*puVar23,CONCAT15(*puVar19,CONCAT14(*puVar15,CONCAT13(*
                                                  puVar12,CONCAT12(*puVar9,CONCAT11(*puVar6,*puVar3)
                                                                  )))))) & 0xf0f0f0f0f0f0f0f0;
        uVar42 = CONCAT17(*puVar28,CONCAT16(*puVar24,CONCAT15(*puVar20,CONCAT14(*puVar16,CONCAT13(*
                                                  puVar13,CONCAT12(*puVar10,CONCAT11(*puVar7,*puVar4
                                                                                    ))))))) &
                 0xf0f0f0f0f0f0f0f0;
        uVar2 = CONCAT12((char)(uVar41 >> 8),CONCAT11(*puVar6,*puVar3)) & 0xff00f0;
        *(ulong *)(param_3 + 8) =
             CONCAT17((byte)((ushort)((ushort)(byte)(uVar41 >> 0x38) << 4) >> 8) |
                      (byte)(uVar40 >> 0x38),
                      CONCAT16((byte)(uVar42 >> 0x38) | *pbVar29 >> 4,
                               CONCAT15((byte)((ushort)((ushort)(byte)(uVar41 >> 0x30) << 4) >> 8) |
                                        (byte)(uVar40 >> 0x30),
                                        CONCAT14((byte)(uVar42 >> 0x30) | *pbVar25 >> 4,
                                                 CONCAT13((byte)((ushort)((ushort)(byte)(uVar41 >>
                                                                                        0x28) << 4)
                                                                >> 8) | (byte)(uVar40 >> 0x28),
                                                          CONCAT12((byte)(uVar42 >> 0x28) |
                                                                   *pbVar21 >> 4,
                                                                   CONCAT11((byte)((ushort)((ushort)
                                                  (byte)(uVar41 >> 0x20) << 4) >> 8) |
                                                  (byte)(uVar40 >> 0x20),
                                                  (byte)(uVar42 >> 0x20) | *pbVar17 >> 4)))))));
        *(ulong *)param_3 =
             CONCAT17((byte)((ushort)((ushort)(byte)(uVar41 >> 0x18) << 4) >> 8) |
                      (byte)(uVar40 >> 0x18),
                      CONCAT16((byte)(uVar42 >> 0x18) | bVar39 >> 4,
                               CONCAT15((byte)((ushort)((ushort)(byte)(uVar41 >> 0x10) << 4) >> 8) |
                                        (byte)(uVar40 >> 0x10),
                                        CONCAT14((byte)(uVar42 >> 0x10) | bVar38 >> 4,
                                                 CONCAT13((byte)((ushort)((ushort)(byte)(uVar2 >> 
                                                  0x10) << 4) >> 8) | (byte)(uVar40 >> 8),
                                                  CONCAT12((byte)(uVar42 >> 8) | bVar37 >> 4,
                                                           CONCAT11((byte)((ushort)((short)uVar2 <<
                                                                                   4) >> 8) |
                                                                    (byte)uVar40,
                                                                    (byte)uVar42 | bVar36 >> 4))))))
                     );
        param_3 = param_3 + 0x10;
                    /* catch() { ... } // from try @ 00fe978c with catch @ 00fe9730 */
      } while (uVar34 != 0);
      if (uVar1 == uVar33) {
        return;
      }
    }
    do {
      pbVar17 = param_1 + lVar31;
      lVar31 = lVar31 + 4;
      *puVar32 = (*pbVar17 & 0xf0 | (ushort)(pbVar17[1] >> 4)) << 8 | pbVar17[2] & 0xf0 |
                 (ushort)(pbVar17[3] >> 4);
      puVar32 = puVar32 + 1;
    } while (lVar31 < param_2 + -3);
  }
  return;
}


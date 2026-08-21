
/* cocos2d::Texture2D::convertRGB888ToRGBA4444(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGB888ToRGBA4444(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  uint3 uVar3;
  uchar *puVar4;
  long lVar24;
  ulong uVar25;
  ushort *puVar26;
  ulong uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  ulong uVar33;
  ulong uVar34;
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
  uchar *puVar17;
  uchar *puVar18;
  uchar *puVar19;
  uchar *puVar20;
  uchar *puVar21;
  uchar *puVar22;
  uchar *puVar23;
  
  if (0 < param_2 + -2) {
    uVar25 = (param_2 - 3U) / 3;
    uVar1 = uVar25 + 1;
    if ((uVar1 < 8) ||
       ((param_3 < param_1 + uVar25 * 3 + 3 && (param_1 < param_3 + uVar25 * 2 + 2)))) {
      lVar24 = 0;
      puVar26 = (ushort *)param_3;
    }
    else {
      uVar27 = uVar1 & 0x7ffffffffffffff8;
      puVar26 = (ushort *)(param_3 + uVar27 * 2);
      lVar24 = uVar27 * 3;
      uVar25 = uVar27;
      puVar23 = param_1;
      do {
        uVar28 = *puVar23;
        puVar4 = puVar23 + 1;
        uVar29 = puVar23[2];
        puVar5 = puVar23 + 3;
        puVar6 = puVar23 + 4;
        uVar30 = puVar23[5];
        puVar7 = puVar23 + 6;
        puVar8 = puVar23 + 7;
        uVar31 = puVar23[8];
        puVar9 = puVar23 + 9;
        puVar10 = puVar23 + 10;
        uVar32 = puVar23[0xb];
        puVar11 = puVar23 + 0xc;
        puVar12 = puVar23 + 0xd;
        puVar13 = puVar23 + 0xe;
        puVar14 = puVar23 + 0xf;
        puVar15 = puVar23 + 0x10;
        puVar16 = puVar23 + 0x11;
        puVar17 = puVar23 + 0x12;
        puVar18 = puVar23 + 0x13;
        puVar19 = puVar23 + 0x14;
        puVar20 = puVar23 + 0x15;
        puVar21 = puVar23 + 0x16;
        puVar22 = puVar23 + 0x17;
        puVar23 = puVar23 + 0x18;
        uVar25 = uVar25 - 8;
        uVar33 = CONCAT17(*puVar20,CONCAT16(*puVar17,CONCAT15(*puVar14,CONCAT14(*puVar11,CONCAT13(*
                                                  puVar9,CONCAT12(*puVar7,CONCAT11(*puVar5,uVar28)))
                                                  )))) & 0xf0f0f0f0f0f0f0f0;
        uVar34 = CONCAT17(*puVar21,CONCAT16(*puVar18,CONCAT15(*puVar15,CONCAT14(*puVar12,CONCAT13(*
                                                  puVar10,CONCAT12(*puVar8,CONCAT11(*puVar6,*puVar4)
                                                                  )))))) & 0xf0f0f0f0f0f0f0f0;
        uVar3 = CONCAT12((char)(uVar34 >> 8),CONCAT11(*puVar6,*puVar4)) & 0xff00f0;
        *(ulong *)((long)param_3 + 8) =
             CONCAT17((byte)(uVar33 >> 0x38) |
                      (byte)((ushort)((ushort)(byte)(uVar34 >> 0x38) << 4) >> 8),
                      CONCAT16(*puVar22,CONCAT15((byte)(uVar33 >> 0x30) |
                                                 (byte)((ushort)((ushort)(byte)(uVar34 >> 0x30) << 4
                                                                ) >> 8),
                                                 CONCAT14(*puVar19,CONCAT13((byte)(uVar33 >> 0x28) |
                                                                            (byte)((ushort)((ushort)
                                                  (byte)(uVar34 >> 0x28) << 4) >> 8),
                                                  CONCAT12(*puVar16,CONCAT11((byte)(uVar33 >> 0x20)
                                                                             | (byte)((ushort)((
                                                  ushort)(byte)(uVar34 >> 0x20) << 4) >> 8),*puVar13
                                                  ))))))) | 0xf000f000f000f;
        *(ulong *)param_3 =
             CONCAT17((byte)(uVar33 >> 0x18) |
                      (byte)((ushort)((ushort)(byte)(uVar34 >> 0x18) << 4) >> 8),
                      CONCAT16(uVar32,CONCAT15((byte)(uVar33 >> 0x10) |
                                               (byte)((ushort)((ushort)(byte)(uVar34 >> 0x10) << 4)
                                                     >> 8),
                                               CONCAT14(uVar31,CONCAT13((byte)(uVar33 >> 8) |
                                                                        (byte)((ushort)((ushort)(
                                                  byte)(uVar3 >> 0x10) << 4) >> 8),
                                                  CONCAT12(uVar30,CONCAT11((byte)uVar33 |
                                                                           (byte)((ushort)((short)
                                                  uVar3 << 4) >> 8),uVar29))))))) | 0xf000f000f000f;
        param_3 = (uchar *)((long)param_3 + 0x10);
      } while (uVar25 != 0);
      if (uVar1 == uVar27) {
        return;
      }
    }
    do {
      pbVar2 = param_1 + lVar24;
      lVar24 = lVar24 + 3;
                    /* catch() { ... } // from try @ 00fe94c8 with catch @ 00fe95e0 */
      *puVar26 = (ushort)(*pbVar2 >> 4) << 0xc | CONCAT11(pbVar2[1] >> 4,pbVar2[2]) | 0xf;
      puVar26 = puVar26 + 1;
    } while (lVar24 < param_2 + -2);
  }
  return;
}



/* cocos2d::Texture2D::convertI8ToRGB565(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertI8ToRGB565(uchar *param_1,long param_2,uchar *param_3)

{
  uint3 uVar1;
  byte bVar2;
  ushort *puVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  uchar *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  undefined8 uVar17;
  ushort uVar18;
  int iVar20;
  uint6 uVar16;
  uint6 uVar19;
  
  if (0 < param_2) {
    if (((ulong)param_2 < 8) || ((param_3 < param_1 + param_2 && (param_1 < param_3 + param_2 * 2)))
       ) {
      uVar4 = 0;
      puVar3 = (ushort *)param_3;
    }
    else {
      uVar4 = param_2 & 0xfffffffffffffff8;
      puVar3 = (ushort *)(param_3 + uVar4 * 2);
      uVar7 = uVar4;
      puVar8 = param_1;
      do {
        uVar17 = *(undefined8 *)puVar8;
        uVar7 = uVar7 - 8;
        uVar1 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
        bVar9 = (byte)((ulong)uVar17 >> 0x10);
        bVar10 = (byte)((ulong)uVar17 >> 0x18);
        bVar11 = (byte)((ulong)uVar17 >> 0x20);
        bVar12 = (byte)((ulong)uVar17 >> 0x28);
        bVar13 = (byte)((ulong)uVar17 >> 0x30);
        bVar14 = (byte)((ulong)uVar17 >> 0x38);
        bVar2 = (byte)(uVar1 >> 0x10);
        iVar20 = (uVar1 & 0xffff) << 3;
        uVar15 = (bVar11 & 0xfc) << 3;
        uVar16 = CONCAT15((char)(((uint)bVar12 << 3) >> 8),
                          CONCAT14((char)((uint)bVar12 << 3),(uint)uVar15)) & 0x7e0ffffffff;
        uVar18 = (bVar13 & 0xfc) << 3;
        uVar19 = CONCAT15((char)(((uint)bVar14 << 3) >> 8),
                          CONCAT14((char)((uint)bVar14 << 3),(uint)uVar18)) & 0x7e0ffffffff;
        *(ulong *)(param_3 + 8) =
             CONCAT26(CONCAT11((byte)(uVar19 >> 0x28) | bVar14 & 0xf8,
                               (byte)(uVar19 >> 0x20) | bVar14 >> 3),
                      CONCAT24(CONCAT11((byte)(uVar19 >> 8) | bVar13 & 0xf8,
                                        (byte)uVar18 | bVar13 >> 3),
                               CONCAT22(CONCAT11((byte)(uVar16 >> 0x28) | bVar12 & 0xf8,
                                                 (byte)(uVar16 >> 0x20) | bVar12 >> 3),
                                        CONCAT11((byte)(uVar16 >> 8) | bVar11 & 0xf8,
                                                 (byte)uVar15 | bVar11 >> 3))));
        *(ulong *)param_3 =
             CONCAT17((byte)(((uint)bVar10 << 3) >> 8) | bVar10 & 0xf8,
                      CONCAT16((byte)((uint)bVar10 << 3) & 0xe0 | bVar10 >> 3,
                               CONCAT15((byte)(((uint)bVar9 << 3) >> 8) | bVar9 & 0xf8,
                                        CONCAT14((byte)((uint)bVar9 << 3) & 0xe0 | bVar9 >> 3,
                                                 CONCAT13((byte)(((uint)bVar2 << 3) >> 8) |
                                                          bVar2 & 0xf8,
                                                          CONCAT12((byte)((uint)bVar2 << 3) & 0xe0 |
                                                                   bVar2 >> 3,
                                                                   CONCAT11((byte)((uint)iVar20 >> 8
                                                                                  ) | (byte)uVar1 &
                                                                                      0xf8,
                                                                            (byte)iVar20 & 0xe0 |
                                                                            (byte)((ushort)uVar1 >>
                                                                                  3))))))));
        param_3 = param_3 + 0x10;
        puVar8 = puVar8 + 8;
      } while (uVar7 != 0);
      if (uVar4 == param_2) {
        return;
      }
    }
    lVar5 = param_2 - uVar4;
    pbVar6 = param_1 + uVar4;
    do {
      lVar5 = lVar5 + -1;
      bVar2 = *pbVar6 >> 3;
                    /* catch() { ... } // from try @ 00fe8108 with catch @ 00fe8174 */
      *puVar3 = (ushort)bVar2 | (ushort)(*pbVar6 >> 2) << 5 | (ushort)bVar2 << 0xb;
      puVar3 = puVar3 + 1;
      pbVar6 = pbVar6 + 1;
    } while (lVar5 != 0);
  }
  return;
}


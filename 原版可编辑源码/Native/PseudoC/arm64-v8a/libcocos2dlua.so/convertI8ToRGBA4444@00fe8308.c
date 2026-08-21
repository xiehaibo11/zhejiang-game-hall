
/* cocos2d::Texture2D::convertI8ToRGBA4444(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertI8ToRGBA4444(uchar *param_1,long param_2,uchar *param_3)

{
  uint3 uVar1;
  byte bVar2;
  ushort *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  
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
      puVar8 = (ulong *)param_1;
      do {
        uVar7 = uVar7 - 8;
        uVar15 = *puVar8 & 0xf0f0f0f0f0f0f0f0;
        uVar1 = CONCAT12((char)(uVar15 >> 8),(short)*puVar8) & 0xff00f0;
        bVar9 = (byte)(uVar15 >> 0x10);
        bVar10 = (byte)(uVar15 >> 0x18);
        bVar11 = (byte)(uVar15 >> 0x20);
        bVar12 = (byte)(uVar15 >> 0x28);
        bVar13 = (byte)(uVar15 >> 0x30);
        bVar14 = (byte)(uVar15 >> 0x38);
        bVar2 = (byte)(uVar1 >> 0x10);
                    /* catch() { ... } // from try @ 00fe83dc with catch @ 00fe83a4 */
        *(ulong *)((long)param_3 + 8) =
             CONCAT26(CONCAT11((byte)(((uint)bVar14 << 4) >> 8) | bVar14,bVar14),
                      CONCAT24(CONCAT11((byte)(((uint)bVar13 << 4) >> 8) | bVar13,bVar13),
                               CONCAT22(CONCAT11((byte)(((uint)bVar12 << 4) >> 8) | bVar12,bVar12),
                                        CONCAT11((byte)(((uint)bVar11 << 4) >> 8) | bVar11,bVar11)))
                     ) | 0xf000f000f000f;
        *(ulong *)param_3 =
             CONCAT26(CONCAT11((byte)(((uint)bVar10 << 4) >> 8) | bVar10,bVar10),
                      CONCAT24(CONCAT11((byte)(((uint)bVar9 << 4) >> 8) | bVar9,bVar9),
                               CONCAT22(CONCAT11((byte)(((uint)bVar2 << 4) >> 8) | bVar2,bVar2),
                                        CONCAT11((byte)(((uVar1 & 0xffff) << 4) >> 8) | (byte)uVar1,
                                                 (byte)uVar1)))) | 0xf000f000f000f;
        param_3 = (uchar *)((long)param_3 + 0x10);
        puVar8 = puVar8 + 1;
      } while (uVar7 != 0);
      if (uVar4 == param_2) {
        return;
      }
    }
    lVar6 = param_2 - uVar4;
    pbVar5 = param_1 + uVar4;
    do {
                    /* catch() { ... } // from try @ 00fe82d4 with catch @ 00fe8344 */
      lVar6 = lVar6 + -1;
      bVar2 = *pbVar5 >> 4;
      *puVar3 = *pbVar5 & 0xf0 | (ushort)bVar2 << 8 | (ushort)bVar2 << 0xc | 0xf;
      puVar3 = puVar3 + 1;
      pbVar5 = pbVar5 + 1;
    } while (lVar6 != 0);
  }
  return;
}


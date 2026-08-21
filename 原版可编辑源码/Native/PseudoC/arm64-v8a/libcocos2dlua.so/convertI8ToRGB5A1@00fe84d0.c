
/* cocos2d::Texture2D::convertI8ToRGB5A1(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertI8ToRGB5A1(uchar *param_1,long param_2,uchar *param_3)

{
  uint uVar1;
  uint3 uVar2;
  byte bVar3;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  ulong uVar17;
  
  if (0 < param_2) {
    if (((ulong)param_2 < 8) || ((param_3 < param_1 + param_2 && (param_1 < param_3 + param_2 * 2)))
       ) {
      uVar5 = 0;
      puVar4 = (ushort *)param_3;
    }
    else {
      uVar5 = param_2 & 0xfffffffffffffff8;
      puVar4 = (ushort *)(param_3 + uVar5 * 2);
      uVar8 = uVar5;
      puVar9 = (ulong *)param_1;
      do {
        uVar8 = uVar8 - 8;
        uVar17 = *puVar9 & 0xf8f8f8f8f8f8f8f8;
        uVar2 = CONCAT12((char)(uVar17 >> 8),(short)*puVar9) & 0xff00f8;
        bVar10 = (byte)(uVar17 >> 0x10);
        bVar11 = (byte)(uVar17 >> 0x18);
        bVar12 = (byte)(uVar17 >> 0x20);
        bVar13 = (byte)(uVar17 >> 0x28);
        bVar14 = (byte)(uVar17 >> 0x30);
        bVar15 = (byte)(uVar17 >> 0x38);
        bVar3 = (byte)(uVar2 >> 0x10);
        iVar16 = (uVar2 & 0xffff) << 3;
        *(ulong *)((long)param_3 + 8) =
             CONCAT26(CONCAT11(bVar15 | (byte)(((uint)bVar15 << 3) >> 8),
                               (byte)((uint)bVar15 << 3) | bVar15 >> 2),
                      CONCAT24(CONCAT11(bVar14 | (byte)(((uint)bVar14 << 3) >> 8),
                                        (byte)((uint)bVar14 << 3) | bVar14 >> 2),
                               CONCAT22(CONCAT11(bVar13 | (byte)(((uint)bVar13 << 3) >> 8),
                                                 (byte)((uint)bVar13 << 3) | bVar13 >> 2),
                                        CONCAT11(bVar12 | (byte)(((uint)bVar12 << 3) >> 8),
                                                 (byte)((uint)bVar12 << 3) | bVar12 >> 2)))) |
             0x1000100010001;
        *(ulong *)param_3 =
             CONCAT26(CONCAT11(bVar11 | (byte)(((uint)bVar11 << 3) >> 8),
                               (byte)((uint)bVar11 << 3) | bVar11 >> 2),
                      CONCAT24(CONCAT11(bVar10 | (byte)(((uint)bVar10 << 3) >> 8),
                                        (byte)((uint)bVar10 << 3) | bVar10 >> 2),
                               CONCAT22(CONCAT11(bVar3 | (byte)(((uint)bVar3 << 3) >> 8),
                                                 (byte)((uint)bVar3 << 3) | bVar3 >> 2),
                                        CONCAT11((byte)uVar2 | (byte)((uint)iVar16 >> 8),
                                                 (byte)iVar16 | (byte)((ushort)uVar2 >> 2))))) |
             0x1000100010001;
        param_3 = (uchar *)((long)param_3 + 0x10);
        puVar9 = puVar9 + 1;
      } while (uVar8 != 0);
      if (uVar5 == param_2) {
        return;
      }
    }
    lVar6 = param_2 - uVar5;
    pbVar7 = param_1 + uVar5;
    do {
      lVar6 = lVar6 + -1;
      uVar1 = *pbVar7 & 0xf8;
                    /* catch() { ... } // from try @ 00fe84b0 with catch @ 00fe8520 */
      *puVar4 = (ushort)(uVar1 << 3) | (ushort)(*pbVar7 >> 3) << 0xb | (ushort)(uVar1 >> 2) | 1;
      puVar4 = puVar4 + 1;
      pbVar7 = pbVar7 + 1;
    } while (lVar6 != 0);
  }
  return;
}



/* cocos2d::Texture2D::convertAI88ToRGB565(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertAI88ToRGB565(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  
  if (0 < param_2 + -1) {
    uVar1 = (param_2 - 2U >> 1) + 1;
    if ((uVar1 < 9) ||
       ((param_3 < param_1 + (param_2 - 2U | 1) &&
        (param_1 < param_3 + (param_2 & 0xfffffffffffffffe))))) {
      lVar5 = 0;
      puVar6 = (ushort *)param_3;
    }
    else {
      uVar2 = 8;
      if ((uVar1 & 7) != 0) {
        uVar2 = uVar1 & 7;
      }
      lVar7 = uVar1 - uVar2;
      lVar5 = lVar7 * 2;
      puVar6 = (ushort *)(param_3 + lVar5);
      pbVar4 = param_1;
      do {
        bVar8 = *pbVar4;
        bVar9 = pbVar4[2];
        bVar10 = pbVar4[4];
        bVar11 = pbVar4[6];
        bVar12 = pbVar4[8];
        bVar13 = pbVar4[10];
        bVar14 = pbVar4[0xc];
        bVar15 = pbVar4[0xe];
        pbVar4 = pbVar4 + 0x10;
        lVar7 = lVar7 + -8;
        iVar16 = (CONCAT12(bVar10,CONCAT11(bVar9,bVar8)) & 0xff) << 3;
                    /* catch() { ... } // from try @ 00fe82dc with catch @ 00fe829c */
        iVar3 = (CONCAT12(bVar13,(ushort)bVar12) & 0xffff) << 3;
                    /* try { // try from 00fe82d4 to 010e82db has its CatchHandler @ 00fe8344 */
        *(ulong *)(param_3 + 8) =
             CONCAT26(CONCAT11((byte)(((uint)bVar15 << 3) >> 8) | bVar15 & 0xf8,
                               (byte)((uint)bVar15 << 3) & 0xe0 | bVar15 >> 3),
                      CONCAT24(CONCAT11((byte)(((uint)bVar14 << 3) >> 8) | bVar14 & 0xf8,
                                        (byte)((uint)bVar14 << 3) & 0xe0 | bVar14 >> 3),
                               CONCAT22(CONCAT11((byte)(((uint)bVar13 << 3) >> 8) | bVar13 & 0xf8,
                                                 (byte)((uint)bVar13 << 3) & 0xe0 | bVar13 >> 3),
                                        CONCAT11((byte)((uint)iVar3 >> 8) | bVar12 & 0xf8,
                                                 (byte)iVar3 & 0xe0 | bVar12 >> 3))));
        *(ulong *)param_3 =
             CONCAT17((byte)(((uint)bVar11 << 3) >> 8) | bVar11 & 0xf8,
                      CONCAT16((byte)((uint)bVar11 << 3) & 0xe0 | bVar11 >> 3,
                               CONCAT15((byte)(((uint)bVar10 << 3) >> 8) | bVar10 & 0xf8,
                                        CONCAT14((byte)((uint)bVar10 << 3) & 0xe0 | bVar10 >> 3,
                                                 CONCAT13((byte)(((uint)bVar9 << 3) >> 8) |
                                                          bVar9 & 0xf8,
                                                          CONCAT12((byte)((uint)bVar9 << 3) & 0xe0 |
                                                                   bVar9 >> 3,
                                                                   CONCAT11((byte)((uint)iVar16 >> 8
                                                                                  ) | bVar8 & 0xf8,
                                                                            (byte)iVar16 & 0xe0 |
                                                                            bVar8 >> 3)))))));
        param_3 = param_3 + 0x10;
      } while (lVar7 != 0);
    }
    do {
                    /* try { // try from 00fe82dc to 010e835f has its CatchHandler @ 00fe829c */
      pbVar4 = param_1 + lVar5;
      lVar5 = lVar5 + 2;
      bVar8 = *pbVar4 >> 3;
      *puVar6 = (ushort)bVar8 | (ushort)(*pbVar4 >> 2) << 5 | (ushort)bVar8 << 0xb;
      puVar6 = puVar6 + 1;
    } while (lVar5 < param_2 + -1);
  }
  return;
}


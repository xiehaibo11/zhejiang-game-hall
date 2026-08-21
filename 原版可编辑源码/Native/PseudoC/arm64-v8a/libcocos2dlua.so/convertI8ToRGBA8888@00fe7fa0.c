
/* cocos2d::Texture2D::convertI8ToRGBA8888(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertI8ToRGBA8888(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  uchar *puVar2;
  long lVar3;
  uchar *puVar4;
  ulong uVar5;
  uchar uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (0 < param_2) {
    if (((ulong)param_2 < 0x20) ||
       ((param_3 < param_1 + param_2 && (param_1 < param_3 + param_2 * 4)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2 & 0xffffffffffffffe0;
      puVar2 = param_3 + 0x40;
      puVar4 = param_1 + 0x10;
                    /* try { // try from 00fe8010 to 010e8017 has its CatchHandler @ 00fe807c */
      param_3 = param_3 + uVar1 * 4;
                    /* try { // try from 00fe8018 to 010e8097 has its CatchHandler @ 00fe7fe0 */
      uVar5 = uVar1;
      do {
        uVar8 = *(undefined8 *)(puVar4 + -8);
        uVar7 = *(undefined8 *)(puVar4 + -0x10);
        uVar10 = *(undefined8 *)(puVar4 + 8);
        uVar9 = *(undefined8 *)puVar4;
        uVar5 = uVar5 - 0x20;
        puVar4 = puVar4 + 0x20;
        uVar6 = (uchar)uVar7;
        puVar2[-0x40] = uVar6;
        puVar2[-0x3f] = uVar6;
        puVar2[-0x3e] = uVar6;
        puVar2[-0x3d] = 0xff;
        uVar6 = (uchar)((ulong)uVar7 >> 8);
        puVar2[-0x3c] = uVar6;
        puVar2[-0x3b] = uVar6;
        puVar2[-0x3a] = uVar6;
        puVar2[-0x39] = 0xff;
        uVar6 = (uchar)((ulong)uVar7 >> 0x10);
        puVar2[-0x38] = uVar6;
        puVar2[-0x37] = uVar6;
        puVar2[-0x36] = uVar6;
        puVar2[-0x35] = 0xff;
        uVar6 = (uchar)((ulong)uVar7 >> 0x18);
        puVar2[-0x34] = uVar6;
        puVar2[-0x33] = uVar6;
        puVar2[-0x32] = uVar6;
        puVar2[-0x31] = 0xff;
        uVar6 = (uchar)((ulong)uVar7 >> 0x20);
        puVar2[-0x30] = uVar6;
        puVar2[-0x2f] = uVar6;
        puVar2[-0x2e] = uVar6;
        puVar2[-0x2d] = 0xff;
        uVar6 = (uchar)((ulong)uVar7 >> 0x28);
        puVar2[-0x2c] = uVar6;
        puVar2[-0x2b] = uVar6;
        puVar2[-0x2a] = uVar6;
        puVar2[-0x29] = 0xff;
        uVar6 = (uchar)((ulong)uVar7 >> 0x30);
        puVar2[-0x28] = uVar6;
        puVar2[-0x27] = uVar6;
        puVar2[-0x26] = uVar6;
        puVar2[-0x25] = 0xff;
        uVar6 = (uchar)((ulong)uVar7 >> 0x38);
        puVar2[-0x24] = uVar6;
        puVar2[-0x23] = uVar6;
        puVar2[-0x22] = uVar6;
        puVar2[-0x21] = 0xff;
        uVar6 = (uchar)uVar8;
        puVar2[-0x20] = uVar6;
        puVar2[-0x1f] = uVar6;
        puVar2[-0x1e] = uVar6;
        puVar2[-0x1d] = 0xff;
        uVar6 = (uchar)((ulong)uVar8 >> 8);
        puVar2[-0x1c] = uVar6;
        puVar2[-0x1b] = uVar6;
        puVar2[-0x1a] = uVar6;
        puVar2[-0x19] = 0xff;
        uVar6 = (uchar)((ulong)uVar8 >> 0x10);
        puVar2[-0x18] = uVar6;
        puVar2[-0x17] = uVar6;
        puVar2[-0x16] = uVar6;
        puVar2[-0x15] = 0xff;
        uVar6 = (uchar)((ulong)uVar8 >> 0x18);
        puVar2[-0x14] = uVar6;
        puVar2[-0x13] = uVar6;
        puVar2[-0x12] = uVar6;
        puVar2[-0x11] = 0xff;
        uVar6 = (uchar)((ulong)uVar8 >> 0x20);
        puVar2[-0x10] = uVar6;
        puVar2[-0xf] = uVar6;
        puVar2[-0xe] = uVar6;
        puVar2[-0xd] = 0xff;
        uVar6 = (uchar)((ulong)uVar8 >> 0x28);
        puVar2[-0xc] = uVar6;
        puVar2[-0xb] = uVar6;
        puVar2[-10] = uVar6;
        puVar2[-9] = 0xff;
        uVar6 = (uchar)((ulong)uVar8 >> 0x30);
        puVar2[-8] = uVar6;
        puVar2[-7] = uVar6;
        puVar2[-6] = uVar6;
        puVar2[-5] = 0xff;
        uVar6 = (uchar)((ulong)uVar8 >> 0x38);
        puVar2[-4] = uVar6;
        puVar2[-3] = uVar6;
        puVar2[-2] = uVar6;
        puVar2[-1] = 0xff;
        uVar6 = (uchar)uVar9;
        *puVar2 = uVar6;
        puVar2[1] = uVar6;
        puVar2[2] = uVar6;
        puVar2[3] = 0xff;
        uVar6 = (uchar)((ulong)uVar9 >> 8);
        puVar2[4] = uVar6;
        puVar2[5] = uVar6;
        puVar2[6] = uVar6;
        puVar2[7] = 0xff;
        uVar6 = (uchar)((ulong)uVar9 >> 0x10);
        puVar2[8] = uVar6;
        puVar2[9] = uVar6;
        puVar2[10] = uVar6;
        puVar2[0xb] = 0xff;
        uVar6 = (uchar)((ulong)uVar9 >> 0x18);
        puVar2[0xc] = uVar6;
        puVar2[0xd] = uVar6;
        puVar2[0xe] = uVar6;
        puVar2[0xf] = 0xff;
        uVar6 = (uchar)((ulong)uVar9 >> 0x20);
        puVar2[0x10] = uVar6;
        puVar2[0x11] = uVar6;
        puVar2[0x12] = uVar6;
        puVar2[0x13] = 0xff;
        uVar6 = (uchar)((ulong)uVar9 >> 0x28);
        puVar2[0x14] = uVar6;
        puVar2[0x15] = uVar6;
        puVar2[0x16] = uVar6;
        puVar2[0x17] = 0xff;
        uVar6 = (uchar)((ulong)uVar9 >> 0x30);
        puVar2[0x18] = uVar6;
        puVar2[0x19] = uVar6;
        puVar2[0x1a] = uVar6;
        puVar2[0x1b] = 0xff;
        uVar6 = (uchar)((ulong)uVar9 >> 0x38);
        puVar2[0x1c] = uVar6;
        puVar2[0x1d] = uVar6;
        puVar2[0x1e] = uVar6;
        puVar2[0x1f] = 0xff;
        uVar6 = (uchar)uVar10;
        puVar2[0x20] = uVar6;
        puVar2[0x21] = uVar6;
        puVar2[0x22] = uVar6;
        puVar2[0x23] = 0xff;
        uVar6 = (uchar)((ulong)uVar10 >> 8);
        puVar2[0x24] = uVar6;
        puVar2[0x25] = uVar6;
        puVar2[0x26] = uVar6;
        puVar2[0x27] = 0xff;
        uVar6 = (uchar)((ulong)uVar10 >> 0x10);
        puVar2[0x28] = uVar6;
        puVar2[0x29] = uVar6;
        puVar2[0x2a] = uVar6;
        puVar2[0x2b] = 0xff;
        uVar6 = (uchar)((ulong)uVar10 >> 0x18);
        puVar2[0x2c] = uVar6;
        puVar2[0x2d] = uVar6;
        puVar2[0x2e] = uVar6;
        puVar2[0x2f] = 0xff;
        uVar6 = (uchar)((ulong)uVar10 >> 0x20);
        puVar2[0x30] = uVar6;
        puVar2[0x31] = uVar6;
        puVar2[0x32] = uVar6;
        puVar2[0x33] = 0xff;
        uVar6 = (uchar)((ulong)uVar10 >> 0x28);
        puVar2[0x34] = uVar6;
        puVar2[0x35] = uVar6;
        puVar2[0x36] = uVar6;
        puVar2[0x37] = 0xff;
        uVar6 = (uchar)((ulong)uVar10 >> 0x30);
        puVar2[0x38] = uVar6;
        puVar2[0x39] = uVar6;
        puVar2[0x3a] = uVar6;
        puVar2[0x3b] = 0xff;
        uVar6 = (uchar)((ulong)uVar10 >> 0x38);
        puVar2[0x3c] = uVar6;
        puVar2[0x3d] = uVar6;
        puVar2[0x3e] = uVar6;
        puVar2[0x3f] = 0xff;
        puVar2 = puVar2 + 0x80;
      } while (uVar5 != 0);
      if (uVar1 == param_2) {
        return;
      }
    }
    lVar3 = param_2 - uVar1;
    puVar2 = param_1 + uVar1;
    do {
      lVar3 = lVar3 + -1;
                    /* catch() { ... } // from try @ 00fe8018 with catch @ 00fe7fe0 */
      *param_3 = *puVar2;
      param_3[1] = *puVar2;
      uVar6 = *puVar2;
      param_3[3] = 0xff;
      param_3[2] = uVar6;
      param_3 = param_3 + 4;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  return;
}


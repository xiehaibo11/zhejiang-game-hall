
/* cocos2d::Texture2D::convertI8ToRGB888(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertI8ToRGB888(uchar *param_1,long param_2,uchar *param_3)

{
  uchar *puVar1;
  ulong uVar2;
  uchar *puVar3;
  long lVar4;
  ulong uVar5;
  uchar uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (0 < param_2) {
    if (((ulong)param_2 < 0x20) ||
       ((param_3 < param_1 + param_2 && (param_1 < param_3 + param_2 * 3)))) {
      uVar2 = 0;
      puVar1 = param_3;
    }
    else {
      uVar2 = param_2 & 0xffffffffffffffe0;
      puVar1 = param_3 + uVar2 * 3;
      puVar3 = param_1 + 0x10;
      uVar5 = uVar2;
      do {
        uVar8 = *(undefined8 *)(puVar3 + -8);
        uVar7 = *(undefined8 *)(puVar3 + -0x10);
        uVar10 = *(undefined8 *)(puVar3 + 8);
        uVar9 = *(undefined8 *)puVar3;
        uVar5 = uVar5 - 0x20;
        puVar3 = puVar3 + 0x20;
        uVar6 = (uchar)uVar7;
        *param_3 = uVar6;
        param_3[1] = uVar6;
        param_3[2] = uVar6;
        uVar6 = (uchar)((ulong)uVar7 >> 8);
        param_3[3] = uVar6;
        param_3[4] = uVar6;
        param_3[5] = uVar6;
        uVar6 = (uchar)((ulong)uVar7 >> 0x10);
        param_3[6] = uVar6;
        param_3[7] = uVar6;
        param_3[8] = uVar6;
        uVar6 = (uchar)((ulong)uVar7 >> 0x18);
        param_3[9] = uVar6;
        param_3[10] = uVar6;
        param_3[0xb] = uVar6;
        uVar6 = (uchar)((ulong)uVar7 >> 0x20);
        param_3[0xc] = uVar6;
        param_3[0xd] = uVar6;
        param_3[0xe] = uVar6;
        uVar6 = (uchar)((ulong)uVar7 >> 0x28);
        param_3[0xf] = uVar6;
        param_3[0x10] = uVar6;
        param_3[0x11] = uVar6;
        uVar6 = (uchar)((ulong)uVar7 >> 0x30);
        param_3[0x12] = uVar6;
        param_3[0x13] = uVar6;
        param_3[0x14] = uVar6;
        uVar6 = (uchar)((ulong)uVar7 >> 0x38);
        param_3[0x15] = uVar6;
        param_3[0x16] = uVar6;
        param_3[0x17] = uVar6;
        uVar6 = (uchar)uVar8;
        param_3[0x18] = uVar6;
        param_3[0x19] = uVar6;
        param_3[0x1a] = uVar6;
        uVar6 = (uchar)((ulong)uVar8 >> 8);
        param_3[0x1b] = uVar6;
        param_3[0x1c] = uVar6;
        param_3[0x1d] = uVar6;
        uVar6 = (uchar)((ulong)uVar8 >> 0x10);
        param_3[0x1e] = uVar6;
        param_3[0x1f] = uVar6;
        param_3[0x20] = uVar6;
        uVar6 = (uchar)((ulong)uVar8 >> 0x18);
        param_3[0x21] = uVar6;
        param_3[0x22] = uVar6;
        param_3[0x23] = uVar6;
        uVar6 = (uchar)((ulong)uVar8 >> 0x20);
        param_3[0x24] = uVar6;
        param_3[0x25] = uVar6;
        param_3[0x26] = uVar6;
        uVar6 = (uchar)((ulong)uVar8 >> 0x28);
        param_3[0x27] = uVar6;
        param_3[0x28] = uVar6;
        param_3[0x29] = uVar6;
        uVar6 = (uchar)((ulong)uVar8 >> 0x30);
        param_3[0x2a] = uVar6;
        param_3[0x2b] = uVar6;
        param_3[0x2c] = uVar6;
        uVar6 = (uchar)((ulong)uVar8 >> 0x38);
        param_3[0x2d] = uVar6;
        param_3[0x2e] = uVar6;
        param_3[0x2f] = uVar6;
        uVar6 = (uchar)uVar9;
        param_3[0x30] = uVar6;
        param_3[0x31] = uVar6;
        param_3[0x32] = uVar6;
        uVar6 = (uchar)((ulong)uVar9 >> 8);
        param_3[0x33] = uVar6;
        param_3[0x34] = uVar6;
        param_3[0x35] = uVar6;
        uVar6 = (uchar)((ulong)uVar9 >> 0x10);
        param_3[0x36] = uVar6;
        param_3[0x37] = uVar6;
        param_3[0x38] = uVar6;
        uVar6 = (uchar)((ulong)uVar9 >> 0x18);
        param_3[0x39] = uVar6;
        param_3[0x3a] = uVar6;
        param_3[0x3b] = uVar6;
        uVar6 = (uchar)((ulong)uVar9 >> 0x20);
        param_3[0x3c] = uVar6;
        param_3[0x3d] = uVar6;
        param_3[0x3e] = uVar6;
        uVar6 = (uchar)((ulong)uVar9 >> 0x28);
        param_3[0x3f] = uVar6;
        param_3[0x40] = uVar6;
        param_3[0x41] = uVar6;
        uVar6 = (uchar)((ulong)uVar9 >> 0x30);
        param_3[0x42] = uVar6;
        param_3[0x43] = uVar6;
        param_3[0x44] = uVar6;
        uVar6 = (uchar)((ulong)uVar9 >> 0x38);
        param_3[0x45] = uVar6;
        param_3[0x46] = uVar6;
        param_3[0x47] = uVar6;
        uVar6 = (uchar)uVar10;
        param_3[0x48] = uVar6;
        param_3[0x49] = uVar6;
        param_3[0x4a] = uVar6;
        uVar6 = (uchar)((ulong)uVar10 >> 8);
        param_3[0x4b] = uVar6;
        param_3[0x4c] = uVar6;
        param_3[0x4d] = uVar6;
        uVar6 = (uchar)((ulong)uVar10 >> 0x10);
        param_3[0x4e] = uVar6;
        param_3[0x4f] = uVar6;
        param_3[0x50] = uVar6;
        uVar6 = (uchar)((ulong)uVar10 >> 0x18);
        param_3[0x51] = uVar6;
        param_3[0x52] = uVar6;
        param_3[0x53] = uVar6;
        uVar6 = (uchar)((ulong)uVar10 >> 0x20);
        param_3[0x54] = uVar6;
        param_3[0x55] = uVar6;
        param_3[0x56] = uVar6;
        uVar6 = (uchar)((ulong)uVar10 >> 0x28);
        param_3[0x57] = uVar6;
        param_3[0x58] = uVar6;
        param_3[0x59] = uVar6;
        uVar6 = (uchar)((ulong)uVar10 >> 0x30);
        param_3[0x5a] = uVar6;
        param_3[0x5b] = uVar6;
        param_3[0x5c] = uVar6;
        uVar6 = (uchar)((ulong)uVar10 >> 0x38);
        param_3[0x5d] = uVar6;
        param_3[0x5e] = uVar6;
        param_3[0x5f] = uVar6;
        param_3 = param_3 + 0x60;
      } while (uVar5 != 0);
      if (uVar2 == param_2) {
        return;
      }
    }
    lVar4 = param_2 - uVar2;
    puVar3 = param_1 + uVar2;
    do {
      lVar4 = lVar4 + -1;
      *puVar1 = *puVar3;
      puVar1[1] = *puVar3;
      puVar1[2] = *puVar3;
      puVar1 = puVar1 + 3;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}


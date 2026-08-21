
/* cocos2d::Texture2D::convertAI88ToRGB888(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertAI88ToRGB888(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  uchar *puVar2;
  uchar *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  
  if (0 < param_2 + -1) {
    uVar5 = param_2 - 2U >> 1;
    uVar1 = uVar5 + 1;
    if ((uVar1 < 0x11) ||
       ((param_3 < param_1 + (param_2 - 2U | 1) && (param_1 < param_3 + uVar5 * 3 + 3)))) {
      lVar4 = 0;
      puVar3 = param_3;
    }
    else {
      uVar5 = 0x10;
      if ((uVar1 & 0xf) != 0) {
        uVar5 = uVar1 & 0xf;
      }
      lVar6 = uVar1 - uVar5;
      lVar4 = lVar6 * 2;
      puVar3 = param_3 + lVar6 * 3;
      puVar2 = param_1;
      do {
        uVar7 = *puVar2;
        uVar8 = puVar2[2];
        uVar9 = puVar2[4];
        uVar10 = puVar2[6];
        uVar11 = puVar2[8];
        uVar12 = puVar2[10];
        uVar13 = puVar2[0xc];
        uVar14 = puVar2[0xe];
        uVar15 = puVar2[0x10];
        uVar16 = puVar2[0x12];
        uVar17 = puVar2[0x14];
        uVar18 = puVar2[0x16];
        uVar19 = puVar2[0x18];
        uVar20 = puVar2[0x1a];
        uVar21 = puVar2[0x1c];
        uVar22 = puVar2[0x1e];
        puVar2 = puVar2 + 0x20;
        lVar6 = lVar6 + -0x10;
        *param_3 = uVar7;
        param_3[1] = uVar7;
        param_3[2] = uVar7;
        param_3[3] = uVar8;
        param_3[4] = uVar8;
        param_3[5] = uVar8;
        param_3[6] = uVar9;
        param_3[7] = uVar9;
        param_3[8] = uVar9;
        param_3[9] = uVar10;
        param_3[10] = uVar10;
        param_3[0xb] = uVar10;
        param_3[0xc] = uVar11;
        param_3[0xd] = uVar11;
        param_3[0xe] = uVar11;
        param_3[0xf] = uVar12;
        param_3[0x10] = uVar12;
        param_3[0x11] = uVar12;
        param_3[0x12] = uVar13;
        param_3[0x13] = uVar13;
        param_3[0x14] = uVar13;
        param_3[0x15] = uVar14;
        param_3[0x16] = uVar14;
        param_3[0x17] = uVar14;
        param_3[0x18] = uVar15;
        param_3[0x19] = uVar15;
        param_3[0x1a] = uVar15;
        param_3[0x1b] = uVar16;
        param_3[0x1c] = uVar16;
        param_3[0x1d] = uVar16;
        param_3[0x1e] = uVar17;
        param_3[0x1f] = uVar17;
        param_3[0x20] = uVar17;
        param_3[0x21] = uVar18;
        param_3[0x22] = uVar18;
        param_3[0x23] = uVar18;
        param_3[0x24] = uVar19;
        param_3[0x25] = uVar19;
        param_3[0x26] = uVar19;
        param_3[0x27] = uVar20;
        param_3[0x28] = uVar20;
        param_3[0x29] = uVar20;
        param_3[0x2a] = uVar21;
        param_3[0x2b] = uVar21;
        param_3[0x2c] = uVar21;
        param_3[0x2d] = uVar22;
        param_3[0x2e] = uVar22;
        param_3[0x2f] = uVar22;
        param_3 = param_3 + 0x30;
      } while (lVar6 != 0);
    }
    do {
      *puVar3 = param_1[lVar4];
      puVar3[1] = param_1[lVar4];
      puVar2 = param_1 + lVar4;
      lVar4 = lVar4 + 2;
      puVar3[2] = *puVar2;
      puVar3 = puVar3 + 3;
    } while (lVar4 < param_2 + -1);
  }
  return;
}



/* cocos2d::Texture2D::convertAI88ToRGBA8888(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertAI88ToRGBA8888(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uchar *puVar3;
  uchar *puVar4;
  long lVar5;
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
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  uchar uVar33;
  uchar uVar34;
  uchar uVar35;
  uchar uVar36;
  uchar uVar37;
  uchar uVar38;
  
  if (0 < param_2 + -1) {
    uVar1 = (param_2 - 2U >> 1) + 1;
                    /* catch() { ... } // from try @ 00fe8010 with catch @ 00fe807c */
    if ((uVar1 < 0x11) ||
       ((param_3 < param_1 + (param_2 & 0xfffffffffffffffe) &&
        (param_1 < param_3 + (param_2 * 2 - 4U & 0xfffffffffffffffc) + 4)))) {
      lVar5 = 0;
      puVar4 = param_3;
    }
    else {
      uVar2 = 0x10;
      if ((uVar1 & 0xf) != 0) {
        uVar2 = uVar1 & 0xf;
      }
      lVar6 = uVar1 - uVar2;
      puVar4 = param_3 + lVar6 * 4;
      lVar5 = lVar6 * 2;
      puVar3 = param_1;
      do {
        uVar7 = *puVar3;
        uVar23 = puVar3[1];
        uVar8 = puVar3[2];
        uVar24 = puVar3[3];
        uVar9 = puVar3[4];
        uVar25 = puVar3[5];
        uVar10 = puVar3[6];
        uVar26 = puVar3[7];
        uVar11 = puVar3[8];
        uVar27 = puVar3[9];
        uVar12 = puVar3[10];
        uVar28 = puVar3[0xb];
        uVar13 = puVar3[0xc];
        uVar29 = puVar3[0xd];
        uVar14 = puVar3[0xe];
        uVar30 = puVar3[0xf];
        uVar15 = puVar3[0x10];
        uVar31 = puVar3[0x11];
        uVar16 = puVar3[0x12];
        uVar32 = puVar3[0x13];
        uVar17 = puVar3[0x14];
        uVar33 = puVar3[0x15];
        uVar18 = puVar3[0x16];
        uVar34 = puVar3[0x17];
        uVar19 = puVar3[0x18];
        uVar35 = puVar3[0x19];
        uVar20 = puVar3[0x1a];
        uVar36 = puVar3[0x1b];
        uVar21 = puVar3[0x1c];
        uVar37 = puVar3[0x1d];
        uVar22 = puVar3[0x1e];
        uVar38 = puVar3[0x1f];
        puVar3 = puVar3 + 0x20;
        lVar6 = lVar6 + -0x10;
                    /* catch() { ... } // from try @ 00fe8110 with catch @ 00fe80d8 */
        *param_3 = uVar7;
        param_3[1] = uVar7;
        param_3[2] = uVar7;
        param_3[3] = uVar23;
        param_3[4] = uVar8;
        param_3[5] = uVar8;
        param_3[6] = uVar8;
        param_3[7] = uVar24;
        param_3[8] = uVar9;
        param_3[9] = uVar9;
        param_3[10] = uVar9;
        param_3[0xb] = uVar25;
        param_3[0xc] = uVar10;
        param_3[0xd] = uVar10;
        param_3[0xe] = uVar10;
        param_3[0xf] = uVar26;
        param_3[0x10] = uVar11;
        param_3[0x11] = uVar11;
        param_3[0x12] = uVar11;
        param_3[0x13] = uVar27;
        param_3[0x14] = uVar12;
        param_3[0x15] = uVar12;
        param_3[0x16] = uVar12;
        param_3[0x17] = uVar28;
        param_3[0x18] = uVar13;
        param_3[0x19] = uVar13;
        param_3[0x1a] = uVar13;
        param_3[0x1b] = uVar29;
        param_3[0x1c] = uVar14;
        param_3[0x1d] = uVar14;
        param_3[0x1e] = uVar14;
        param_3[0x1f] = uVar30;
        param_3[0x20] = uVar15;
        param_3[0x21] = uVar15;
        param_3[0x22] = uVar15;
        param_3[0x23] = uVar31;
        param_3[0x24] = uVar16;
        param_3[0x25] = uVar16;
        param_3[0x26] = uVar16;
        param_3[0x27] = uVar32;
        param_3[0x28] = uVar17;
        param_3[0x29] = uVar17;
        param_3[0x2a] = uVar17;
        param_3[0x2b] = uVar33;
        param_3[0x2c] = uVar18;
        param_3[0x2d] = uVar18;
        param_3[0x2e] = uVar18;
        param_3[0x2f] = uVar34;
        param_3[0x30] = uVar19;
        param_3[0x31] = uVar19;
        param_3[0x32] = uVar19;
        param_3[0x33] = uVar35;
        param_3[0x34] = uVar20;
        param_3[0x35] = uVar20;
        param_3[0x36] = uVar20;
        param_3[0x37] = uVar36;
        param_3[0x38] = uVar21;
        param_3[0x39] = uVar21;
        param_3[0x3a] = uVar21;
        param_3[0x3b] = uVar37;
        param_3[0x3c] = uVar22;
        param_3[0x3d] = uVar22;
        param_3[0x3e] = uVar22;
        param_3[0x3f] = uVar38;
        param_3 = param_3 + 0x40;
      } while (lVar6 != 0);
    }
    do {
      puVar3 = param_1 + lVar5;
      lVar5 = lVar5 + 2;
      *puVar4 = *puVar3;
      puVar4[1] = *puVar3;
                    /* try { // try from 00fe8108 to 010e810f has its CatchHandler @ 00fe8174 */
      puVar4[2] = *puVar3;
                    /* try { // try from 00fe8110 to 010e818f has its CatchHandler @ 00fe80d8 */
      puVar4[3] = puVar3[1];
      puVar4 = puVar4 + 4;
    } while (lVar5 < param_2 + -1);
  }
  return;
}


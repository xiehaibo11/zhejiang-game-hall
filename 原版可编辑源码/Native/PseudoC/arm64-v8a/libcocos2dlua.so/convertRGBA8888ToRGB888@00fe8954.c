
/* cocos2d::Texture2D::convertRGBA8888ToRGB888(unsigned char const*, long, unsigned char*) */

void cocos2d::Texture2D::convertRGBA8888ToRGB888(uchar *param_1,long param_2,uchar *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uchar *puVar3;
  uchar *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  uchar uVar39;
  uchar uVar40;
  uchar uVar41;
  uchar uVar42;
  uchar uVar43;
  uchar uVar44;
  uchar uVar45;
  uchar uVar46;
  uchar uVar47;
  uchar uVar48;
  uchar uVar49;
  uchar uVar50;
  uchar uVar51;
  uchar uVar52;
  uchar uVar53;
  uchar uVar54;
  uchar uVar55;
  
  if (0 < param_2 + -3) {
    uVar5 = param_2 - 4U >> 2;
    uVar1 = uVar5 + 1;
    if ((uVar1 < 0x11) ||
       ((param_3 < param_1 + (param_2 - 4U | 3) && (param_1 < param_3 + uVar5 * 3 + 3)))) {
      lVar6 = 0;
      puVar4 = param_3;
    }
    else {
      uVar2 = 0x10;
      if ((uVar1 & 0xf) != 0) {
        uVar2 = uVar1 & 0xf;
      }
      lVar6 = (uVar1 - uVar2) * 4;
      puVar4 = param_3 + (uVar1 - uVar2) * 3;
      lVar7 = (uVar5 - uVar2) + 1;
      puVar3 = param_1;
      do {
        uVar8 = *puVar3;
        uVar24 = puVar3[1];
        uVar40 = puVar3[2];
        uVar9 = puVar3[4];
        uVar25 = puVar3[5];
        uVar41 = puVar3[6];
        uVar10 = puVar3[8];
        uVar26 = puVar3[9];
        uVar42 = puVar3[10];
        uVar11 = puVar3[0xc];
        uVar27 = puVar3[0xd];
        uVar43 = puVar3[0xe];
        uVar12 = puVar3[0x10];
        uVar28 = puVar3[0x11];
        uVar44 = puVar3[0x12];
        uVar13 = puVar3[0x14];
        uVar29 = puVar3[0x15];
        uVar45 = puVar3[0x16];
        uVar14 = puVar3[0x18];
        uVar30 = puVar3[0x19];
        uVar46 = puVar3[0x1a];
        uVar15 = puVar3[0x1c];
        uVar31 = puVar3[0x1d];
        uVar47 = puVar3[0x1e];
        uVar16 = puVar3[0x20];
        uVar32 = puVar3[0x21];
        uVar48 = puVar3[0x22];
        uVar17 = puVar3[0x24];
        uVar33 = puVar3[0x25];
        uVar49 = puVar3[0x26];
        uVar18 = puVar3[0x28];
        uVar34 = puVar3[0x29];
        uVar50 = puVar3[0x2a];
        uVar19 = puVar3[0x2c];
        uVar35 = puVar3[0x2d];
        uVar51 = puVar3[0x2e];
        uVar20 = puVar3[0x30];
        uVar36 = puVar3[0x31];
        uVar52 = puVar3[0x32];
        uVar21 = puVar3[0x34];
        uVar37 = puVar3[0x35];
        uVar53 = puVar3[0x36];
        uVar22 = puVar3[0x38];
        uVar38 = puVar3[0x39];
        uVar54 = puVar3[0x3a];
        uVar23 = puVar3[0x3c];
        uVar39 = puVar3[0x3d];
        uVar55 = puVar3[0x3e];
        puVar3 = puVar3 + 0x40;
        lVar7 = lVar7 + -0x10;
        *param_3 = uVar8;
        param_3[1] = uVar24;
        param_3[2] = uVar40;
        param_3[3] = uVar9;
        param_3[4] = uVar25;
        param_3[5] = uVar41;
        param_3[6] = uVar10;
        param_3[7] = uVar26;
        param_3[8] = uVar42;
        param_3[9] = uVar11;
        param_3[10] = uVar27;
        param_3[0xb] = uVar43;
        param_3[0xc] = uVar12;
        param_3[0xd] = uVar28;
        param_3[0xe] = uVar44;
        param_3[0xf] = uVar13;
        param_3[0x10] = uVar29;
        param_3[0x11] = uVar45;
        param_3[0x12] = uVar14;
        param_3[0x13] = uVar30;
        param_3[0x14] = uVar46;
        param_3[0x15] = uVar15;
        param_3[0x16] = uVar31;
        param_3[0x17] = uVar47;
        param_3[0x18] = uVar16;
        param_3[0x19] = uVar32;
        param_3[0x1a] = uVar48;
        param_3[0x1b] = uVar17;
        param_3[0x1c] = uVar33;
        param_3[0x1d] = uVar49;
        param_3[0x1e] = uVar18;
        param_3[0x1f] = uVar34;
        param_3[0x20] = uVar50;
        param_3[0x21] = uVar19;
        param_3[0x22] = uVar35;
        param_3[0x23] = uVar51;
        param_3[0x24] = uVar20;
        param_3[0x25] = uVar36;
        param_3[0x26] = uVar52;
        param_3[0x27] = uVar21;
        param_3[0x28] = uVar37;
        param_3[0x29] = uVar53;
        param_3[0x2a] = uVar22;
        param_3[0x2b] = uVar38;
        param_3[0x2c] = uVar54;
        param_3[0x2d] = uVar23;
        param_3[0x2e] = uVar39;
        param_3[0x2f] = uVar55;
        param_3 = param_3 + 0x30;
      } while (lVar7 != 0);
    }
    do {
      puVar3 = param_1 + lVar6;
      lVar6 = lVar6 + 4;
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4 = puVar4 + 3;
    } while (lVar6 < param_2 + -3);
  }
  return;
}



undefined8 Camellia_Ekeygen(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  uint uVar48;
  long lVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar9;
  
  uVar50 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar50 = uVar50 >> 0x10 | uVar50 << 0x10;
  *param_3 = uVar50;
  uVar43 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
  param_3[1] = uVar43;
  uVar48 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  uVar41 = uVar48 >> 0x10 | uVar48 << 0x10;
  param_3[2] = uVar41;
  uVar48 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  uVar48 = uVar48 >> 0x10 | uVar48 << 0x10;
  param_3[3] = uVar48;
  if (param_1 != 0x80) {
    uVar32 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    uVar32 = uVar32 >> 0x10 | uVar32 << 0x10;
    param_3[8] = uVar32;
    uVar39 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    uVar39 = uVar39 >> 0x10 | uVar39 << 0x10;
    param_3[9] = uVar39;
    if (param_1 == 0xc0) {
      uVar44 = ~uVar32;
      param_3[10] = uVar44;
      uVar42 = ~uVar39;
    }
    else {
      uVar44 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
      uVar44 = uVar44 >> 0x10 | uVar44 << 0x10;
      param_3[10] = uVar44;
      uVar42 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
      uVar42 = uVar42 >> 0x10 | uVar42 << 0x10;
    }
    uVar50 = uVar50 ^ uVar32;
    uVar43 = uVar43 ^ uVar39;
    uVar41 = uVar41 ^ uVar44;
    uVar48 = uVar48 ^ uVar42;
    param_3[0xb] = uVar42;
  }
  uVar32 = uVar50 ^ 0xa09e667f;
  uVar39 = uVar43 ^ 0x3bcc908b;
  uVar32 = *(uint *)(&DAT_018d7278 + (ulong)(uVar32 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6a78 + (ulong)(uVar32 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6e78 + (ulong)(uVar32 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6678 + (ulong)(uVar32 >> 0x18) * 4);
  uVar39 = *(uint *)(&DAT_018d6a78 + (ulong)(uVar39 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6678 + (ulong)(uVar39 & 0xff) * 4) ^ uVar32 ^
           *(uint *)(&DAT_018d7278 + (ulong)(uVar39 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6e78 + (ulong)(uVar39 >> 0x18) * 4);
  uVar41 = uVar39 ^ uVar41;
  uVar39 = uVar48 ^ (uVar32 >> 8 | uVar32 << 0x18) ^ uVar39;
  uVar48 = uVar41 ^ 0xb67ae858;
  uVar32 = uVar39 ^ 0x4caa73b2;
  uVar48 = *(uint *)(&DAT_018d7278 + (ulong)(uVar48 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6a78 + (ulong)(uVar48 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6e78 + (ulong)(uVar48 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6678 + (ulong)(uVar48 >> 0x18) * 4);
  uVar32 = *(uint *)(&DAT_018d6a78 + (ulong)(uVar32 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6678 + (ulong)(uVar32 & 0xff) * 4) ^ uVar48 ^
           *(uint *)(&DAT_018d7278 + (ulong)(uVar32 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6e78 + (ulong)(uVar32 >> 0x18) * 4);
  uVar44 = *param_3 ^ uVar50 ^ uVar32;
  uVar50 = uVar43 ^ (uVar48 >> 8 | uVar48 << 0x18) ^ uVar32 ^ param_3[1];
  uVar43 = uVar44 ^ 0xc6ef372f;
  uVar48 = uVar50 ^ 0xe94f82be;
  uVar43 = *(uint *)(&DAT_018d7278 + (ulong)(uVar43 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6a78 + (ulong)(uVar43 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6e78 + (ulong)(uVar43 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6678 + (ulong)(uVar43 >> 0x18) * 4);
  uVar32 = *(uint *)(&DAT_018d6a78 + (ulong)(uVar48 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6678 + (ulong)(uVar48 & 0xff) * 4) ^ uVar43 ^
           *(uint *)(&DAT_018d7278 + (ulong)(uVar48 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6e78 + (ulong)(uVar48 >> 0x18) * 4);
  uVar48 = param_3[2] ^ uVar41 ^ uVar32;
  uVar32 = param_3[3] ^ uVar39 ^ (uVar43 >> 8 | uVar43 << 0x18) ^ uVar32;
  uVar43 = uVar48 ^ 0x54ff53a5;
  uVar41 = uVar32 ^ 0xf1d36f1c;
  uVar43 = *(uint *)(&DAT_018d7278 + (ulong)(uVar43 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6a78 + (ulong)(uVar43 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6e78 + (ulong)(uVar43 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6678 + (ulong)(uVar43 >> 0x18) * 4);
  uVar41 = *(uint *)(&DAT_018d6a78 + (ulong)(uVar41 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6678 + (ulong)(uVar41 & 0xff) * 4) ^ uVar43 ^
           *(uint *)(&DAT_018d7278 + (ulong)(uVar41 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_018d6e78 + (ulong)(uVar41 >> 0x18) * 4);
  uVar44 = uVar41 ^ uVar44;
  uVar41 = uVar50 ^ (uVar43 >> 8 | uVar43 << 0x18) ^ uVar41;
  if (param_1 == 0x80) {
    param_3[6] = uVar48;
    param_3[7] = uVar32;
    uVar40 = (uint)(CONCAT44(uVar48,uVar32) >> 0x11);
    uVar11 = (uint)(CONCAT44(uVar32,uVar44) >> 0x11);
    uVar32 = uVar32 >> 2;
    uVar12 = (uint)(CONCAT44(uVar44,uVar41) >> 0x11);
    uVar42 = (uint)(CONCAT44(uVar41,uVar48) >> 0x11);
    uVar27 = uVar44 >> 2;
    param_3[0xc] = uVar12;
    param_3[0xd] = uVar42;
    param_3[0xe] = uVar40;
    param_3[0xf] = uVar11;
    uVar50 = uVar48 >> 2 & 0x7fff | uVar42 << 0xf;
    uVar39 = uVar32 & 0x7fff | uVar40 << 0xf;
    uVar43 = uVar41 >> 2 & 0x7fff | uVar12 << 0xf;
    uVar1 = uVar27 & 0x7fff | uVar11 << 0xf;
    uVar42 = uVar42 >> 2 & 0x7fff | uVar43 << 0xf;
    uVar40 = uVar40 >> 2 & 0x7fff | uVar50 << 0xf;
    param_3[4] = uVar44;
    param_3[5] = uVar41;
    uVar10 = *param_3;
    uVar15 = param_3[1];
    uVar51 = param_3[2];
    uVar16 = param_3[3];
    param_3[0x10] = uVar43;
    param_3[0x11] = uVar50;
    param_3[0x18] = uVar42;
    param_3[0x19] = uVar40;
    uVar44 = uVar39 >> 2 & 0x7fff | uVar40 << 0xf;
    uVar40 = uVar1 >> 2 & 0x7fff | (uVar32 << 0xf | uVar11 >> 2 & 0x7fff) << 0xf;
    uVar43 = uVar43 >> 2 & 0x7fff | (uVar27 << 0xf | uVar12 >> 2 & 0x7fff) << 0xf;
    uVar50 = uVar50 >> 2 & 0x7fff | uVar42 << 0xf;
    param_3[0x1e] = uVar40;
    param_3[0x1f] = uVar43;
    uVar32 = uVar32 & 3 | uVar44 << 2;
    uVar27 = uVar27 & 3 | uVar40 << 2;
    uVar41 = uVar41 >> 2 & 3 | uVar43 << 2;
    param_3[0x28] = uVar32;
    param_3[0x29] = uVar27;
    param_3[0x1c] = uVar50;
    param_3[0x1d] = uVar44;
    uVar48 = uVar48 >> 2 & 3 | uVar50 << 2;
    uVar2 = CONCAT44(uVar10,uVar15) >> 0x11;
    param_3[0x2a] = uVar41;
    param_3[0x2b] = uVar48;
    uVar3 = CONCAT44(uVar15,uVar51) >> 0x11;
    uVar4 = CONCAT44(uVar51,uVar16) >> 0x11;
    uVar5 = CONCAT44(uVar16,uVar10) >> 0x11;
    param_3[8] = (uint)uVar2;
    param_3[9] = (uint)uVar3;
    param_3[10] = (uint)uVar4;
    param_3[0xb] = (uint)uVar5;
    uVar6 = ((ulong)(uVar10 >> 0x11) << 0x20 | uVar2 & 0xffffffff) >> 2;
    uVar10 = (uint)uVar6;
    uVar33 = (uVar2 & 0xffffffff) >> 2;
    uVar2 = ((ulong)(uVar15 >> 0x11) << 0x20 | uVar3 & 0xffffffff) >> 2;
    uVar15 = (uint)uVar2;
    uVar7 = ((ulong)(uVar51 >> 0x11) << 0x20 | uVar4 & 0xffffffff) >> 2;
    uVar8 = (ulong)(uVar16 >> 0x11) << 0x20 | uVar5 & 0xffffffff;
    uVar9 = uVar8 >> 2;
    uVar5 = (uVar5 & 0xffffffff) >> 2;
    uVar42 = (uint)uVar7;
    param_3[0x14] = uVar15;
    param_3[0x15] = uVar42;
    uVar51 = (uint)uVar9;
    param_3[0x16] = uVar51;
    param_3[0x17] = uVar10;
    param_3[0x30] = uVar40 >> 0xd & 0x1ffff | uVar32 << 0x11;
    param_3[0x31] = uVar43 >> 0xd & 0x1ffff | uVar27 << 0x11;
    param_3[0x32] = uVar50 >> 0xd & 0x1ffff | uVar41 << 0x11;
    param_3[0x33] = uVar44 >> 0xd & 0x1ffff | uVar48 << 0x11;
    param_3[0x20] = uVar42;
    param_3[0x21] = uVar51;
    param_3[0x22] = uVar10;
    param_3[0x23] = uVar15;
    uVar50 = (uint)((((uVar3 & 0xffffffff) >> 2) << 0x20 | uVar7 & 0xffffffff) >> 0xf);
    uVar43 = (uint)((((uVar4 & 0xffffffff) >> 2) << 0x20 | uVar9 & 0xffffffff) >> 0xf);
    uVar3 = (uVar5 << 0x20 | uVar6 & 0xffffffff) >> 0xf;
    uVar48 = (uint)((uVar33 << 0x20 | uVar2 & 0xffffffff) >> 0xf);
    uVar38 = 3;
    lVar45 = 0x2f;
    lVar47 = 0x2e;
    lVar49 = 0x2d;
    param_3[0x12] = uVar39;
    param_3[0x13] = uVar1;
    param_3[0x1a] = (uint)((uVar5 << 0x20 | uVar6 & 0xffffffff) >> 0x11);
    param_3[0x1b] = (uint)((uVar33 << 0x20 | uVar2 & 0xffffffff) >> 0x11);
    uVar42 = uVar42 & 0x3fff8000;
    param_3[0x24] = uVar43;
    param_3[0x25] = (uint)uVar3;
    param_3[0x26] = uVar48;
    param_3[0x27] = uVar50;
    uVar43 = uVar43 >> 0xf;
    uVar39 = (uint)(((uVar8 >> 0x11 & 0x1ffff) << 0x20 | uVar3 & 0xffffffff) >> 0xf);
    uVar40 = (uint)(CONCAT44(uVar10 >> 0xf,uVar48) >> 0xf);
    uVar50 = (uint)(CONCAT44(uVar15 >> 0xf,uVar50) >> 0xf);
    lVar46 = 0x2c;
  }
  else {
    uVar16 = param_3[10];
    uVar17 = param_3[0xb];
    uVar11 = param_3[8];
    uVar18 = param_3[9];
    uVar12 = param_3[10];
    uVar19 = param_3[0xb];
    param_3[0xc] = uVar44;
    param_3[0xd] = uVar41;
    uVar28 = uVar17 >> 2;
    uVar34 = (uint)(CONCAT44(uVar16,uVar17) >> 0x11);
    param_3[0xe] = uVar48;
    param_3[0xf] = uVar32;
    param_3[10] = uVar34;
    uVar34 = uVar34 << 0xf;
    uVar50 = uVar28 & 0x7fff | uVar34;
    uVar2 = CONCAT44(uVar48,uVar32) >> 0x11;
    uVar3 = CONCAT44(uVar32,uVar44) >> 0x11;
    uVar13 = param_3[8];
    uVar20 = param_3[9];
    uVar10 = *param_3;
    uVar27 = param_3[1];
    param_3[0xe] = (uint)uVar2;
    param_3[0xf] = (uint)uVar3;
    uVar4 = ((ulong)(uVar48 >> 0x11) << 0x20 | uVar2 & 0xffffffff) >> 2;
    uVar39 = (uint)uVar4;
    uVar5 = ((ulong)(uVar32 >> 0x11) << 0x20 | uVar3 & 0xffffffff) >> 2;
    uVar43 = (uint)uVar5;
    uVar14 = param_3[2];
    uVar21 = param_3[3];
    param_3[0x30] = uVar39;
    param_3[0x31] = uVar43;
    param_3[0x1e] = uVar43;
    uVar6 = CONCAT44(uVar44,uVar41) >> 0x11;
    uVar7 = CONCAT44(uVar41,uVar48) >> 0x11;
    uVar9 = ((ulong)(uVar44 >> 0x11) << 0x20 | uVar6 & 0xffffffff) >> 2;
    uVar43 = (uint)uVar6;
    param_3[0xc] = uVar43;
    param_3[0xd] = (uint)uVar7;
    uVar6 = ((ulong)(uVar41 >> 0x11) << 0x20 | uVar7 & 0xffffffff) >> 2;
    uVar35 = (uint)(CONCAT44(uVar20,uVar16) >> 0x11);
    uVar29 = uVar16 >> 2;
    param_3[0x3a] = (uint)(((ulong)(uVar43 >> 2) << 0x20 | uVar6 & 0xffffffff) >> 0xf);
    param_3[0x3b] = (uint)((((uVar7 & 0xffffffff) >> 2) << 0x20 | uVar4 & 0xffffffff) >> 0xf);
    uVar43 = (uint)uVar9;
    param_3[0x1f] = uVar43;
    param_3[0x32] = uVar43;
    uVar15 = (uint)(CONCAT44(uVar21,uVar10) >> 0x13);
    uVar43 = (uint)uVar6;
    param_3[0x33] = uVar43;
    param_3[0x1c] = uVar43;
    param_3[0x1d] = uVar39;
    uVar22 = (uint)(CONCAT44(uVar10,uVar27) >> 0x13);
    param_3[9] = uVar35;
    uVar35 = uVar35 << 0xf;
    uVar43 = uVar29 & 0x7fff | uVar35;
    param_3[0x38] = (uint)((((uVar2 & 0xffffffff) >> 2) << 0x20 | uVar5 & 0xffffffff) >> 0xf);
    param_3[0x39] = (uint)((((uVar3 & 0xffffffff) >> 2) << 0x20 | uVar9 & 0xffffffff) >> 0xf);
    uVar1 = (uint)(CONCAT44(uVar27,uVar14) >> 0x13);
    uVar42 = (uint)(CONCAT44(uVar14,uVar21) >> 0x13);
    param_3[0x1a] = uVar15;
    param_3[0x1b] = uVar22;
    uVar39 = uVar15 & 0x1ffff | (uVar21 >> 4) << 0x11;
    param_3[0x20] = uVar14 >> 4 & 0x7fff | uVar1 << 0xf;
    param_3[0x21] = uVar21 >> 4 & 0x7fff | uVar42 << 0xf;
    param_3[0x18] = uVar1;
    param_3[0x19] = uVar42;
    uVar42 = uVar42 & 0x1ffff | (uVar14 >> 4) << 0x11;
    uVar1 = uVar1 & 0x1ffff | (uVar27 >> 4) << 0x11;
    uVar40 = uVar22 & 0x1ffff | (uVar10 >> 4) << 0x11;
    uVar36 = (uint)(CONCAT44(uVar13,uVar20) >> 0x11);
    uVar51 = uVar11 ^ uVar44 ^ 0x10e527fa;
    param_3[0x2c] = uVar42;
    param_3[0x2d] = uVar39;
    uVar30 = uVar20 >> 2;
    param_3[8] = uVar36;
    param_3[0x22] = uVar10 >> 4 & 0x7fff | uVar15 << 0xf;
    param_3[0x23] = uVar27 >> 4 & 0x7fff | uVar22 << 0xf;
    param_3[0x2e] = uVar40;
    param_3[0x2f] = uVar1;
    uVar15 = uVar18 ^ uVar41 ^ 0xde682d1d;
    uVar40 = uVar27 >> 0x11 & 3 | uVar40 << 2;
    uVar22 = *(uint *)(&DAT_018d6a78 + (ulong)(uVar51 & 0xff) * 4);
    uVar36 = uVar36 << 0xf;
    uVar27 = uVar30 & 0x7fff | uVar36;
    uVar23 = *(uint *)(&DAT_018d7278 + (ulong)(uVar51 >> 8 & 0xff) * 4);
    param_3[0x24] = (uint)(CONCAT44(uVar30,uVar43) >> 2);
    param_3[0x25] = (uint)(CONCAT44(uVar29,uVar50) >> 2);
    uVar24 = *(uint *)(&DAT_018d6678 + (ulong)(uVar15 & 0xff) * 4);
    uVar25 = *(uint *)(&DAT_018d6a78 + (ulong)(uVar15 >> 8 & 0xff) * 4);
    uVar39 = uVar10 >> 0x11 & 3 | uVar39 << 2;
    uVar37 = (uint)(CONCAT44(uVar17,uVar13) >> 0x11);
    uVar31 = uVar13 >> 2;
    param_3[0xb] = uVar37;
    uVar37 = uVar37 << 0xf;
    uVar10 = uVar31 & 0x7fff | uVar37;
    uVar26 = *(uint *)(&DAT_018d6e78 + (ulong)(uVar51 >> 0x10 & 0xff) * 4);
    param_3[0x10] = uVar27;
    param_3[0x11] = uVar43;
    param_3[0x12] = uVar50;
    param_3[0x13] = uVar10;
    uVar50 = *(uint *)(&DAT_018d6678 + (ulong)(uVar51 >> 0x18) * 4);
    param_3[0x36] = uVar30 & 0x7ffc | uVar36 | uVar20 >> 2 & 3;
    param_3[0x37] = uVar29 & 0x7ffc | uVar35 | uVar16 >> 2 & 3;
    param_3[0x26] = (uint)(CONCAT44(uVar28,uVar10) >> 2);
    param_3[0x27] = (uint)(CONCAT44(uVar31,uVar27) >> 2);
    param_3[0x34] = uVar28 & 0x7ffc | uVar34 | uVar17 >> 2 & 3;
    param_3[0x35] = uVar31 & 0x7ffc | uVar37 | uVar13 >> 2 & 3;
    uVar50 = uVar23 ^ uVar22 ^ uVar26 ^ uVar50;
    uVar27 = uVar25 ^ uVar24 ^ uVar50 ^
             *(uint *)(&DAT_018d7278 + (ulong)(uVar15 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_018d6e78 + (ulong)(uVar15 >> 0x18) * 4);
    uVar43 = uVar12 ^ uVar48 ^ uVar27;
    uVar27 = uVar19 ^ uVar32 ^ (uVar50 >> 8 | uVar50 << 0x18) ^ uVar27;
    uVar50 = uVar43 ^ 0xb05688c2;
    uVar48 = uVar27 ^ 0xb3e6c1fd;
    uVar50 = *(uint *)(&DAT_018d7278 + (ulong)(uVar50 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_018d6a78 + (ulong)(uVar50 & 0xff) * 4) ^
             *(uint *)(&DAT_018d6e78 + (ulong)(uVar50 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_018d6678 + (ulong)(uVar50 >> 0x18) * 4);
    uVar32 = *(uint *)(&DAT_018d6a78 + (ulong)(uVar48 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_018d6678 + (ulong)(uVar48 & 0xff) * 4) ^ uVar50 ^
             *(uint *)(&DAT_018d7278 + (ulong)(uVar48 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_018d6e78 + (ulong)(uVar48 >> 0x18) * 4);
    uVar48 = uVar32 ^ uVar11 ^ uVar44;
    uVar32 = uVar18 ^ uVar41 ^ (uVar50 >> 8 | uVar50 << 0x18) ^ uVar32;
    param_3[6] = uVar43;
    param_3[7] = uVar27;
    uVar2 = CONCAT44(uVar43,uVar27) >> 2;
    uVar3 = CONCAT44(uVar48,uVar32) >> 2;
    uVar4 = CONCAT44(uVar27,uVar48) >> 2;
    param_3[0x16] = (uint)uVar2;
    param_3[0x17] = (uint)uVar4;
    uVar5 = ((ulong)(uVar27 >> 2) << 0x20 | uVar4 & 0xffffffff) >> 2;
    uVar6 = ((ulong)(uVar48 >> 2) << 0x20 | uVar3 & 0xffffffff) >> 2;
    param_3[4] = uVar48;
    param_3[5] = uVar32;
    uVar7 = CONCAT44(uVar32,uVar43) >> 2;
    uVar9 = ((ulong)(uVar43 >> 2) << 0x20 | uVar2 & 0xffffffff) >> 2;
    uVar41 = (uint)uVar3;
    param_3[0x14] = uVar41;
    param_3[0x15] = (uint)uVar7;
    uVar48 = (uint)(((ulong)(uVar32 >> 2) << 0x20 | uVar7 & 0xffffffff) >> 2);
    uVar50 = uVar14 >> 0x11 & 3 | uVar1 << 2;
    uVar38 = 4;
    lVar45 = 0x3f;
    lVar47 = 0x3e;
    param_3[0x2a] = (uint)uVar5;
    param_3[0x2b] = (uint)uVar6;
    lVar49 = 0x3d;
    uVar43 = uVar21 >> 0x11 & 3;
    param_3[0x28] = uVar48;
    param_3[0x29] = (uint)uVar9;
    param_3[0x43] = (uint)((((uVar7 & 0xffffffff) >> 2) << 0x20 | uVar9 & 0xffffffff) >> 0xd);
    lVar46 = 0x3c;
    param_3[0x40] = (uint)((((uVar2 & 0xffffffff) >> 2) << 0x20 | uVar5 & 0xffffffff) >> 0xd);
    param_3[0x41] = (uint)((((uVar4 & 0xffffffff) >> 2) << 0x20 | uVar6 & 0xffffffff) >> 0xd);
    param_3[0x42] = (uint)(CONCAT44(uVar41 >> 2,uVar48) >> 0xd);
  }
  param_3[lVar46] = uVar39;
  param_3[lVar49] = uVar40;
  param_3[lVar47] = uVar50;
  param_3[lVar45] = uVar42 << 2 | uVar43;
  return uVar38;
}



void mbedtls_aes_encrypt(int *param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  puVar20 = *(uint **)(param_1 + 2);
  uVar25 = *param_2 ^ *puVar20;
  uVar22 = param_2[1] ^ puVar20[1];
  uVar23 = param_2[2] ^ puVar20[2];
  iVar21 = *param_1 >> 1;
  uVar24 = param_2[3] ^ puVar20[3];
  puVar20 = puVar20 + 0xb;
  while( true ) {
    uVar1 = (&DAT_0011e308)[uVar25 & 0xff] ^ puVar20[-7] ^ (&DAT_0011e708)[uVar22 >> 8 & 0xff] ^
            (&DAT_0011eb08)[uVar23 >> 0x10 & 0xff] ^ (&DAT_0011ef08)[uVar24 >> 0x18];
    uVar4 = puVar20[-3];
    uVar2 = (&DAT_0011e308)[uVar22 & 0xff] ^ puVar20[-6] ^ (&DAT_0011e708)[uVar23 >> 8 & 0xff] ^
            (&DAT_0011eb08)[uVar24 >> 0x10 & 0xff] ^ (&DAT_0011ef08)[uVar25 >> 0x18];
    uVar3 = (&DAT_0011e308)[uVar23 & 0xff] ^ puVar20[-5] ^ (&DAT_0011e708)[uVar24 >> 8 & 0xff] ^
            (&DAT_0011eb08)[uVar25 >> 0x10 & 0xff] ^ (&DAT_0011ef08)[uVar22 >> 0x18];
    uVar24 = (&DAT_0011e308)[uVar24 & 0xff] ^ puVar20[-4] ^ (&DAT_0011e708)[uVar25 >> 8 & 0xff] ^
             (&DAT_0011eb08)[uVar22 >> 0x10 & 0xff] ^ (&DAT_0011ef08)[uVar23 >> 0x18];
    if (iVar21 < 2) break;
    iVar21 = iVar21 + -1;
    uVar25 = (&DAT_0011e308)[uVar1 & 0xff] ^ uVar4 ^ (&DAT_0011e708)[uVar2 >> 8 & 0xff] ^
             (&DAT_0011eb08)[uVar3 >> 0x10 & 0xff] ^ (&DAT_0011ef08)[uVar24 >> 0x18];
    uVar22 = (&DAT_0011e308)[uVar2 & 0xff] ^ puVar20[-2] ^ (&DAT_0011e708)[uVar3 >> 8 & 0xff] ^
             (&DAT_0011eb08)[uVar24 >> 0x10 & 0xff] ^ (&DAT_0011ef08)[uVar1 >> 0x18];
    uVar23 = (&DAT_0011e308)[uVar3 & 0xff] ^ puVar20[-1] ^ (&DAT_0011e708)[uVar24 >> 8 & 0xff] ^
             (&DAT_0011eb08)[uVar1 >> 0x10 & 0xff] ^ (&DAT_0011ef08)[uVar2 >> 0x18];
    uVar24 = (&DAT_0011e308)[uVar24 & 0xff] ^ *puVar20 ^ (&DAT_0011e708)[uVar1 >> 8 & 0xff] ^
             (&DAT_0011eb08)[uVar2 >> 0x10 & 0xff] ^ (&DAT_0011ef08)[uVar3 >> 0x18];
    puVar20 = puVar20 + 8;
  }
  bVar5 = (&DAT_0011d208)[uVar2 >> 8 & 0xff];
  bVar6 = (&DAT_0011d208)[uVar3 >> 0x10 & 0xff];
  bVar7 = (&DAT_0011d208)[uVar24 >> 0x18];
  bVar8 = (&DAT_0011d208)[uVar2 & 0xff];
  bVar9 = (&DAT_0011d208)[uVar3 >> 8 & 0xff];
  bVar10 = (&DAT_0011d208)[uVar24 >> 0x10 & 0xff];
  bVar11 = (&DAT_0011d208)[uVar1 >> 0x18];
  bVar12 = (&DAT_0011d208)[uVar3 & 0xff];
  bVar13 = (&DAT_0011d208)[uVar24 >> 8 & 0xff];
  bVar14 = (&DAT_0011d208)[uVar1 >> 0x10 & 0xff];
  bVar15 = (&DAT_0011d208)[uVar2 >> 0x18];
  bVar16 = (&DAT_0011d208)[uVar24 & 0xff];
  bVar17 = (&DAT_0011d208)[uVar1 >> 8 & 0xff];
  bVar18 = (&DAT_0011d208)[uVar2 >> 0x10 & 0xff];
  bVar19 = (&DAT_0011d208)[uVar3 >> 0x18];
  uVar25 = puVar20[-2];
  uVar22 = puVar20[-1];
  uVar23 = *puVar20;
  *param_3 = (byte)uVar4 ^ (&DAT_0011d208)[uVar1 & 0xff];
  param_3[4] = (byte)uVar25 ^ bVar8;
  param_3[8] = (byte)uVar22 ^ bVar12;
  param_3[0xc] = (byte)uVar23 ^ bVar16;
  param_3[1] = (byte)(uVar4 >> 8) ^ bVar5;
  param_3[2] = (byte)(uVar4 >> 0x10) ^ bVar6;
  param_3[3] = (byte)(uVar4 >> 0x18) ^ bVar7;
  param_3[5] = (byte)(uVar25 >> 8) ^ bVar9;
  param_3[6] = (byte)(uVar25 >> 0x10) ^ bVar10;
  param_3[7] = (byte)(uVar25 >> 0x18) ^ bVar11;
  param_3[9] = (byte)(uVar22 >> 8) ^ bVar13;
  param_3[10] = (byte)(uVar22 >> 0x10) ^ bVar14;
  param_3[0xb] = (byte)(uVar22 >> 0x18) ^ bVar15;
  param_3[0xd] = (byte)(uVar23 >> 8) ^ bVar17;
  param_3[0xe] = (byte)(uVar23 >> 0x10) ^ bVar18;
  param_3[0xf] = (byte)(uVar23 >> 0x18) ^ bVar19;
  return;
}


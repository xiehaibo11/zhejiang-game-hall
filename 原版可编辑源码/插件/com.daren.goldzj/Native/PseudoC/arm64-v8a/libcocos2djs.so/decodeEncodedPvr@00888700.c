
/* cocos2d::ZipUtils::decodeEncodedPvr(unsigned int*, long) */

void cocos2d::ZipUtils::decodeEncodedPvr(uint *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  
  if (s_bEncryptionKeyIsValid == '\0') {
    iVar5 = 6;
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 0x9e3779b9;
      lVar12 = 0;
      uVar3 = uVar6 >> 2 & 3;
      uVar9 = DAT_01d36cdc;
      uVar10 = s_uEncryptionKey;
      do {
        puVar1 = &s_uEncryptionKey + lVar12;
        uVar11 = (uint)lVar12;
        uVar2 = (&DAT_01d35ce4)[lVar12];
        lVar12 = lVar12 + 1;
        uVar9 = ((uVar2 << 2 ^ uVar9 >> 5) + (uVar2 >> 3 ^ uVar9 << 4) ^
                ((&s_uEncryptedPvrKeyParts)[uVar11 & 3 ^ uVar3] ^ uVar9) + (uVar2 ^ uVar6)) + uVar10
        ;
        *puVar1 = uVar9;
        uVar10 = uVar2;
      } while (lVar12 != 0x3ff);
      iVar5 = iVar5 + -1;
      DAT_01d36cdc = ((s_uEncryptionKey << 2 ^ uVar9 >> 5) + (s_uEncryptionKey >> 3 ^ uVar9 * 0x10)
                     ^ ((&s_uEncryptedPvrKeyParts)[uVar3 ^ 3] ^ uVar9) + (s_uEncryptionKey ^ uVar6))
                     + DAT_01d36cdc;
    } while (iVar5 != 0);
    s_bEncryptionKeyIsValid = '\x01';
  }
  if (param_2 < 1) {
    iVar5 = 0;
    uVar8 = 0;
    if (param_2 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    iVar4 = 0;
    do {
      uVar8 = uVar7 + 1;
      iVar5 = 0;
      if (iVar4 < 0x3ff) {
        iVar5 = iVar4 + 1;
      }
      param_1[uVar7] = param_1[uVar7] ^ (&s_uEncryptionKey)[iVar4];
    } while ((uVar8 < 0x200) && (uVar7 = uVar8, iVar4 = iVar5, (long)uVar8 < param_2));
    if (param_2 <= (long)uVar8) {
      return;
    }
  }
  do {
    uVar7 = uVar8 + 0x40;
    iVar4 = 0;
    if (iVar5 < 0x3ff) {
      iVar4 = iVar5 + 1;
    }
    param_1[uVar8] = param_1[uVar8] ^ (&s_uEncryptionKey)[iVar5];
    uVar8 = uVar7;
    iVar5 = iVar4;
  } while ((long)uVar7 < param_2);
  return;
}


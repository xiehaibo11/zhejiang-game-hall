
/* cocos2d::_base64Encode(unsigned char const*, unsigned int, char*) */

void cocos2d::_base64Encode(uchar *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = (ulong)param_2;
    do {
      bVar2 = *param_1;
      uVar5 = uVar5 + 1;
      uVar8 = uVar6 | bVar2;
      if (uVar5 == 3) {
        uVar5 = 0;
        param_3[uVar3] = alphabet[uVar6 >> 0x12 & 0x3f];
        param_3[uVar3 + 1] = alphabet[uVar6 >> 0xc & 0x3f];
        param_3[uVar3 + 2] = alphabet[uVar8 >> 6 & 0x3f];
        uVar1 = uVar3 + 3;
        uVar3 = uVar3 + 4;
        param_3[uVar1] = alphabet[(ulong)bVar2 & 0x3f];
        uVar1 = 0;
      }
      else {
        uVar1 = (int)uVar8 << 8;
      }
      uVar6 = (ulong)uVar1;
      uVar7 = uVar7 - 1;
      param_1 = param_1 + 1;
    } while (uVar7 != 0);
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        uVar6 = (ulong)(uVar1 << 8);
      }
      param_3[uVar3] = alphabet[uVar6 >> 0x12 & 0x3f];
      uVar1 = uVar3 + 2;
      cVar4 = '=';
      param_3[uVar3 + 1] = alphabet[uVar6 >> 0xc & 0x3f];
      if (1 < uVar5) {
        cVar4 = alphabet[uVar6 >> 6 & 0x3f];
      }
      uVar5 = uVar3 + 3;
      uVar3 = uVar3 + 4;
      param_3[uVar1] = cVar4;
      param_3[uVar5] = '=';
    }
  }
  param_3[uVar3] = '\0';
  return;
}


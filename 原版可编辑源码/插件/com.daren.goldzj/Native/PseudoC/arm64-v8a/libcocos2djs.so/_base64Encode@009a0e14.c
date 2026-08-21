
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
                    /* try { // try from 009a0e60 to 00aa0e77 has its CatchHandler @ 009a11ac */
        param_3[uVar3] = s__ABCDEFGHIJKLMNOPQRSTUVWXYZabcde_01d1b507[(uVar6 >> 0x12 & 0x3f) + 1];
        param_3[uVar3 + 1] = s__ABCDEFGHIJKLMNOPQRSTUVWXYZabcde_01d1b507[(uVar6 >> 0xc & 0x3f) + 1];
        param_3[uVar3 + 2] = s__ABCDEFGHIJKLMNOPQRSTUVWXYZabcde_01d1b507[(uVar8 >> 6 & 0x3f) + 1];
                    /* try { // try from 009a0e80 to 00aa0e8b has its CatchHandler @ 009a1190 */
        uVar1 = uVar3 + 3;
                    /* try { // try from 009a0e8c to 00aa0e97 has its CatchHandler @ 009a118c */
        uVar3 = uVar3 + 4;
        param_3[uVar1] = s__ABCDEFGHIJKLMNOPQRSTUVWXYZabcde_01d1b507[((ulong)bVar2 & 0x3f) + 1];
        uVar6 = 0;
      }
      else {
        uVar6 = (ulong)(uint)((int)uVar8 << 8);
      }
                    /* try { // try from 009a0e98 to 00aa0eaf has its CatchHandler @ 009a11bc */
      uVar7 = uVar7 - 1;
      param_1 = param_1 + 1;
    } while (uVar7 != 0);
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        uVar6 = (ulong)(uint)((int)uVar6 << 8);
      }
      param_3[uVar3] = s__ABCDEFGHIJKLMNOPQRSTUVWXYZabcde_01d1b507[(uVar6 >> 0x12 & 0x3f) + 1];
      uVar1 = uVar3 + 2;
      cVar4 = '=';
      param_3[uVar3 + 1] = s__ABCDEFGHIJKLMNOPQRSTUVWXYZabcde_01d1b507[(uVar6 >> 0xc & 0x3f) + 1];
                    /* try { // try from 009a0ee0 to 00aa0f2f has its CatchHandler @ 009a1188 */
      if (1 < uVar5) {
        cVar4 = s__ABCDEFGHIJKLMNOPQRSTUVWXYZabcde_01d1b507[(uVar6 >> 6 & 0x3f) + 1];
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



/* cocos2d::tgaLoadHeader(unsigned char*, unsigned long, cocos2d::sImageTGA*) */

undefined8 cocos2d::tgaLoadHeader(uchar *param_1,ulong param_2,sImageTGA *param_3)

{
  if (param_2 < 3) {
    return 0;
  }
  param_3[4] = *(sImageTGA *)(param_1 + 2);
  if (param_2 < 0x11) {
    return 0;
  }
  *(undefined2 *)(param_3 + 6) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_1 + 0xe);
  param_3[5] = *(sImageTGA *)(param_1 + 0x10);
  if (param_2 == 0x11) {
    return 0;
  }
  *(uint *)(param_3 + 0x18) = param_1[0x11] >> 5 & 1;
  return 1;
}


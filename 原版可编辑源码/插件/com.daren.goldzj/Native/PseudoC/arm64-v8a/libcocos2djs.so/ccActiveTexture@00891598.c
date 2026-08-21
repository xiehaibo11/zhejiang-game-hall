
/* cocos2d::ccActiveTexture(unsigned int) */

void cocos2d::ccActiveTexture(uint param_1)

{
  if (param_1 - 0x84c0 < 0x20) {
    DAT_01d36d24 = (undefined1)(param_1 - 0x84c0);
  }
  glActiveTexture();
  return;
}


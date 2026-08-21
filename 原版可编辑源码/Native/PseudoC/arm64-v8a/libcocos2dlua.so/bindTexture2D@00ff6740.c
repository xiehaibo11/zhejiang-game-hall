
/* cocos2d::GL::bindTexture2D(unsigned int) */

void cocos2d::GL::bindTexture2D(uint param_1)

{
  if (DAT_0177eb24 == param_1) {
    return;
  }
  DAT_0177eb24 = param_1;
  if (DAT_0177eb6c != 0x84c0) {
    DAT_0177eb6c = 0x84c0;
    glActiveTexture(0x84c0);
  }
  glBindTexture(0xde1,param_1);
  return;
}


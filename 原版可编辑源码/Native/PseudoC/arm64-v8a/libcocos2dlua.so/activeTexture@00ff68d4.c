
/* cocos2d::GL::activeTexture(unsigned int) */

void cocos2d::GL::activeTexture(uint param_1)

{
  if (DAT_0177eb6c == param_1) {
    return;
  }
  DAT_0177eb6c = param_1;
  glActiveTexture();
  return;
}


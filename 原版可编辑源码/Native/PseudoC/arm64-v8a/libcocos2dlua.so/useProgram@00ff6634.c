
/* cocos2d::GL::useProgram(unsigned int) */

void cocos2d::GL::useProgram(uint param_1)

{
  if (DAT_0177eb20 == param_1) {
    return;
  }
  DAT_0177eb20 = param_1;
  glUseProgram();
  return;
}


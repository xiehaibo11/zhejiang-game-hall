
/* cocos2d::GL::deleteProgram(unsigned int) */

void cocos2d::GL::deleteProgram(uint param_1)

{
  if (DAT_0177eb20 == param_1) {
    DAT_0177eb20 = 0xffffffff;
  }
  glDeleteProgram();
  return;
}


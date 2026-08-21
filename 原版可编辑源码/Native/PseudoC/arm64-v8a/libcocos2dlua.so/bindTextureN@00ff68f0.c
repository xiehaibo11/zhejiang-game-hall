
/* cocos2d::GL::bindTextureN(unsigned int, unsigned int, unsigned int) */

void cocos2d::GL::bindTextureN(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  
  if ((&DAT_0177eb24)[param_1] == param_2) {
    return;
  }
  bVar1 = DAT_0177eb6c != param_1 + 0x84c0;
  (&DAT_0177eb24)[param_1] = param_2;
  if (bVar1) {
    DAT_0177eb6c = param_1 + 0x84c0;
    glActiveTexture();
  }
  glBindTexture(param_3,param_2);
  return;
}


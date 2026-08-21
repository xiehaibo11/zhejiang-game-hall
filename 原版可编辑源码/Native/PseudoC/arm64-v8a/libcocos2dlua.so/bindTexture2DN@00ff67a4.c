
/* cocos2d::GL::bindTexture2DN(unsigned int, unsigned int) */

void cocos2d::GL::bindTexture2DN(uint param_1,uint param_2)

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
  glBindTexture(0xde1,param_2);
  return;
}


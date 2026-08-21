
/* cocos2d::GL::bindTexture2D(cocos2d::Texture2D*) */

void cocos2d::GL::bindTexture2D(Texture2D *param_1)

{
  int iVar1;
  
  iVar1 = Texture2D::getName(param_1);
  if (DAT_0177eb24 != iVar1) {
    DAT_0177eb24 = iVar1;
    if (DAT_0177eb6c != 0x84c0) {
      DAT_0177eb6c = 0x84c0;
      glActiveTexture(0x84c0);
    }
    glBindTexture(0xde1,iVar1);
  }
  iVar1 = Texture2D::getAlphaTextureName(param_1);
  if ((iVar1 != 0) && (DAT_0177eb28 != iVar1)) {
    DAT_0177eb28 = iVar1;
    if (DAT_0177eb6c != 0x84c1) {
      DAT_0177eb6c = 0x84c1;
      glActiveTexture(0x84c1);
    }
    glBindTexture(0xde1,iVar1);
    return;
  }
  return;
}



/* cocos2d::GL::enableVertexAttribs(unsigned int) */

void cocos2d::GL::enableVertexAttribs(uint param_1)

{
  uint uVar1;
  Configuration *this;
  ulong uVar2;
  uint uVar3;
  
  this = (Configuration *)Configuration::getInstance();
  uVar2 = Configuration::supportsShareableVAO(this);
  if ((DAT_01792aa0 != 0) && ((uVar2 & 1) != 0)) {
    DAT_01792aa0 = 0;
    (*glBindVertexArrayOESEXT)(0);
  }
  uVar3 = 0;
  do {
    uVar1 = 1 << (ulong)(uVar3 & 0x1f);
    if (((uVar1 & param_1) != 0) != ((DAT_01792a9c & uVar1) != 0)) {
      if ((uVar1 & param_1) == 0) {
        glDisableVertexAttribArray(uVar3);
      }
      else {
        glEnableVertexAttribArray();
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x10);
  DAT_01792a9c = param_1;
  return;
}


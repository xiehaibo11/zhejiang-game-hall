
/* cocos2d::TextureAtlas::listenRendererRecreated(cocos2d::EventCustom*) */

void cocos2d::TextureAtlas::listenRendererRecreated(EventCustom *param_1)

{
  Configuration *this;
  ulong uVar1;
  
  this = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this);
  if ((uVar1 & 1) == 0) {
    setupVBO((TextureAtlas *)param_1);
  }
  else {
    setupVBOandVAO((TextureAtlas *)param_1);
  }
  param_1[0x3c] = (EventCustom)0x1;
  return;
}


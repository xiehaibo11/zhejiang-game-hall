
/* cocos2d::ParticleSystemQuad::listenRendererRecreated(cocos2d::EventCustom*) */

void cocos2d::ParticleSystemQuad::listenRendererRecreated(EventCustom *param_1)

{
  Configuration *this;
  ulong uVar1;
  
  *(undefined8 *)(param_1 + 0x544) = 0;
  this = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x540) = 0;
    setupVBOandVAO((ParticleSystemQuad *)param_1);
    return;
  }
  setupVBO((ParticleSystemQuad *)param_1);
  return;
}



/* cocos2d::ParticleSystemQuad::setDisplayFrame(cocos2d::SpriteFrame*) */

void __thiscall
cocos2d::ParticleSystemQuad::setDisplayFrame(ParticleSystemQuad *this,SpriteFrame *param_1)

{
  int iVar1;
  int iVar2;
  Texture2D *this_00;
  
  this_00 = (Texture2D *)SpriteFrame::getTexture(param_1);
  if (*(long *)(this + 0x510) != 0) {
    iVar1 = Texture2D::getName(this_00);
    iVar2 = Texture2D::getName(*(Texture2D **)(this + 0x510));
    if (iVar1 == iVar2) goto LAB_00f3668c;
  }
  ParticleSystem::setTexture((ParticleSystem *)this,this_00);
LAB_00f3668c:
  initTexCoordsWithRect(this,param_1 + 0x5c);
  return;
}


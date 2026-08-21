
/* cocos2d::ParticleSystemQuad::setTextureWithRect(cocos2d::Texture2D*, cocos2d::Rect const&) */

void __thiscall
cocos2d::ParticleSystemQuad::setTextureWithRect
          (ParticleSystemQuad *this,Texture2D *param_1,Rect *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(this + 0x510) != 0) {
    iVar1 = Texture2D::getName(param_1);
    iVar2 = Texture2D::getName(*(Texture2D **)(this + 0x510));
    if (iVar1 == iVar2) goto LAB_00f36560;
  }
  ParticleSystem::setTexture((ParticleSystem *)this,param_1);
LAB_00f36560:
  initTexCoordsWithRect(this,param_2);
  return;
}


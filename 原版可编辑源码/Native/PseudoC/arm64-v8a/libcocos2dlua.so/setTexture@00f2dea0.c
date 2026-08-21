
/* cocos2d::ParticleBatchNode::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::ParticleBatchNode::setTexture(ParticleBatchNode *this,Texture2D *param_1)

{
  ulong uVar1;
  
  TextureAtlas::setTexture(*(TextureAtlas **)(this + 0x300),param_1);
  if ((((param_1 != (Texture2D *)0x0) &&
       (uVar1 = Texture2D::hasPremultipliedAlpha(param_1), (uVar1 & 1) == 0)) &&
      (*(int *)(this + 0x308) == 1)) && (*(int *)(this + 0x30c) == 0x303)) {
    *(undefined8 *)(this + 0x308) = 0x30300000302;
  }
  return;
}


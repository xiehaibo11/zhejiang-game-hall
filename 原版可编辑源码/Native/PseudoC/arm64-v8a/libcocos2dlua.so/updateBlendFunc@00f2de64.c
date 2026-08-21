
/* cocos2d::ParticleBatchNode::updateBlendFunc() */

void __thiscall cocos2d::ParticleBatchNode::updateBlendFunc(ParticleBatchNode *this)

{
  Texture2D *this_00;
  ulong uVar1;
  
  this_00 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x300));
  uVar1 = Texture2D::hasPremultipliedAlpha(this_00);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(this + 0x308) = 0x30300000302;
  }
  return;
}



/* non-virtual thunk to cocos2d::ParticleBatchNode::getTexture() const */

void __thiscall cocos2d::ParticleBatchNode::getTexture(ParticleBatchNode *this)

{
  TextureAtlas::getTexture(*(TextureAtlas **)(this + 8));
  return;
}


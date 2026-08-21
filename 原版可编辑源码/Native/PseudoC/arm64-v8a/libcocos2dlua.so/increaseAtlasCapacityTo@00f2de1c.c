
/* cocos2d::ParticleBatchNode::increaseAtlasCapacityTo(long) */

void __thiscall
cocos2d::ParticleBatchNode::increaseAtlasCapacityTo(ParticleBatchNode *this,long param_1)

{
  TextureAtlas::resizeCapacity(*(TextureAtlas **)(this + 0x300),param_1);
  return;
}



/* cocos2d::SpriteBatchNode::reserveCapacity(long) */

void __thiscall cocos2d::SpriteBatchNode::reserveCapacity(SpriteBatchNode *this,long param_1)

{
  long lVar1;
  
  lVar1 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
  if (lVar1 < param_1) {
    TextureAtlas::resizeCapacity(*(TextureAtlas **)(this + 0x300),param_1);
    return;
  }
  return;
}


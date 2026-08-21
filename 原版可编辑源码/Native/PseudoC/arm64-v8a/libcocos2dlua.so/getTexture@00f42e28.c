
/* non-virtual thunk to cocos2d::SpriteBatchNode::getTexture() const */

void __thiscall cocos2d::SpriteBatchNode::getTexture(SpriteBatchNode *this)

{
  TextureAtlas::getTexture(*(TextureAtlas **)(this + 8));
  return;
}


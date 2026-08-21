
/* cocos2d::Sprite::removeChild(cocos2d::Node*, bool) */

void __thiscall cocos2d::Sprite::removeChild(Sprite *this,Node *param_1,bool param_2)

{
  if (*(int *)(this + 0x42c) == 3) {
    SpriteBatchNode::removeSpriteFromAtlas(*(SpriteBatchNode **)(this + 0x310),(Sprite *)param_1);
  }
  Node::removeChild((Node *)this,param_1,param_2);
  return;
}


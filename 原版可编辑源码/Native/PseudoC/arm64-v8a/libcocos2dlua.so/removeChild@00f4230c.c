
/* cocos2d::SpriteBatchNode::removeChild(cocos2d::Node*, bool) */

void __thiscall
cocos2d::SpriteBatchNode::removeChild(SpriteBatchNode *this,Node *param_1,bool param_2)

{
  if (param_1 != (Node *)0x0) {
    removeSpriteFromAtlas(this,(Sprite *)param_1);
    Node::removeChild((Node *)this,param_1,param_2);
    return;
  }
  return;
}


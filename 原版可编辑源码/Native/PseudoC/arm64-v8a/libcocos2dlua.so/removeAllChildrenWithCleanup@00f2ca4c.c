
/* cocos2d::ParallaxNode::removeAllChildrenWithCleanup(bool) */

void __thiscall cocos2d::ParallaxNode::removeAllChildrenWithCleanup(ParallaxNode *this,bool param_1)

{
  ccArrayRemoveAllObjects(*(_ccArray **)(this + 0x300));
  Node::removeAllChildrenWithCleanup((Node *)this,param_1);
  return;
}



/* cocos2d::ParallaxNode::~ParallaxNode() */

void __thiscall cocos2d::ParallaxNode::~ParallaxNode(ParallaxNode *this)

{
  *(undefined ***)this = &PTR__ParallaxNode_01707ec0;
  if (*(long *)(this + 0x300) != 0) {
    ccArrayFree((_ccArray **)(this + 0x300));
    *(_ccArray **)(this + 0x300) = (_ccArray *)0x0;
  }
  Node::~Node((Node *)this);
  return;
}


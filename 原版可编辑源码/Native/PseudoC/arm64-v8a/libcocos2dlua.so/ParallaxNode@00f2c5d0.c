
/* cocos2d::ParallaxNode::ParallaxNode() */

void __thiscall cocos2d::ParallaxNode::ParallaxNode(ParallaxNode *this)

{
  undefined8 uVar1;
  
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined ***)this = &PTR__ParallaxNode_01707ec0;
  uVar1 = ccArrayNew(5);
  *(undefined8 *)(this + 0x300) = uVar1;
  *(undefined8 *)(this + 0x2f8) = 0xc2c80000c2c80000;
  return;
}


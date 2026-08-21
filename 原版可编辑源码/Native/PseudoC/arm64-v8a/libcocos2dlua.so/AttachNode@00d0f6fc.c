
/* cocos2d::AttachNode::AttachNode() */

void __thiscall cocos2d::AttachNode::AttachNode(AttachNode *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined ***)this = &PTR__AttachNode_016d2128;
  Mat4::Mat4((Mat4 *)(this + 0x300));
  return;
}


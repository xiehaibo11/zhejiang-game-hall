
/* cocos2d::AttachNode::~AttachNode() */

void __thiscall cocos2d::AttachNode::~AttachNode(AttachNode *this)

{
  *(undefined ***)this = &PTR__AttachNode_016d2128;
  Mat4::~Mat4((Mat4 *)(this + 0x300));
  Node::~Node((Node *)this);
  return;
}


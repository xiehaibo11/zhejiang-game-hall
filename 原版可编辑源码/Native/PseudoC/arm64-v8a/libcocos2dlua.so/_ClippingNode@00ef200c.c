
/* cocos2d::ClippingNode::~ClippingNode() */

void __thiscall cocos2d::ClippingNode::~ClippingNode(ClippingNode *this)

{
  *(undefined ***)this = &PTR__ClippingNode_016fb2d0;
  if (*(Node **)(this + 0x2f8) != (Node *)0x0) {
    Node::stopAllActions(*(Node **)(this + 0x2f8));
    Ref::release(*(Ref **)(this + 0x2f8));
  }
  if (*(void **)(this + 0x308) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x308));
  }
  *(undefined8 *)(this + 0x308) = 0;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x3d0));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x380));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x330));
  GroupCommand::~GroupCommand((GroupCommand *)(this + 0x310));
  Node::~Node((Node *)this);
  return;
}


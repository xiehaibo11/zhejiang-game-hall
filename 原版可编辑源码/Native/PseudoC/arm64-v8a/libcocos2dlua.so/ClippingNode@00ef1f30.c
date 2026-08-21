
/* cocos2d::ClippingNode::ClippingNode() */

void __thiscall cocos2d::ClippingNode::ClippingNode(ClippingNode *this)

{
  StencilStateManager *this_00;
  
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__ClippingNode_016fb2d0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  this_00 = operator_new(0x34);
  StencilStateManager::StencilStateManager(this_00);
  *(StencilStateManager **)(this + 0x308) = this_00;
  GroupCommand::GroupCommand((GroupCommand *)(this + 0x310));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x330));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x380));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x3d0));
  return;
}


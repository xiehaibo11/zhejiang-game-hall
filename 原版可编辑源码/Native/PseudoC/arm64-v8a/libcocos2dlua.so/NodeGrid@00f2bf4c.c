
/* cocos2d::NodeGrid::NodeGrid() */

void __thiscall cocos2d::NodeGrid::NodeGrid(NodeGrid *this)

{
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__NodeGrid_017078b8;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  GroupCommand::GroupCommand((GroupCommand *)(this + 0x308));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x330));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x380));
  Rect::Rect((Rect *)(this + 0x3d0),(Rect *)Rect::ZERO);
  return;
}


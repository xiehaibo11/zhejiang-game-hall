
/* cocos2d::AtlasNode::AtlasNode() */

void __thiscall cocos2d::AtlasNode::AtlasNode(AtlasNode *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined ***)this = &PTR__AtlasNode_016fa528;
  *(undefined ***)(this + 0x2f8) = &PTR__AtlasNode_016faa90;
  Color3B::Color3B((Color3B *)(this + 0x310));
  *(undefined8 *)(this + 0x318) = 0;
  this[800] = (AtlasNode)0x0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  this[0x33c] = (AtlasNode)0x0;
  QuadCommand::QuadCommand((QuadCommand *)(this + 0x340));
  return;
}



/* GLNode::~GLNode() */

void __thiscall GLNode::~GLNode(GLNode *this)

{
  *(undefined ***)this = &PTR__GLNode_0169ad10;
  cocos2d::CustomCommand::~CustomCommand((CustomCommand *)(this + 0x300));
  cocos2d::Node::~Node((Node *)this);
  operator_delete(this);
  return;
}


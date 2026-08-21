
/* cocos2d::ProtectedNode::~ProtectedNode() */

void __thiscall cocos2d::ProtectedNode::~ProtectedNode(ProtectedNode *this)

{
  ~ProtectedNode(this);
  operator_delete(this);
  return;
}


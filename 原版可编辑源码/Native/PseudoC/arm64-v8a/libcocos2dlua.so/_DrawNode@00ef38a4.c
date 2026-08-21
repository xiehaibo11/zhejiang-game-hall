
/* cocos2d::DrawNode::~DrawNode() */

void __thiscall cocos2d::DrawNode::~DrawNode(DrawNode *this)

{
  ~DrawNode(this);
  operator_delete(this);
  return;
}


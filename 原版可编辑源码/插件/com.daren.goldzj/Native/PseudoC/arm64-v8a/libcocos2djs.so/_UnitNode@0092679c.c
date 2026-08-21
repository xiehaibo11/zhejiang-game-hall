
/* cocos2d::renderer::UnitNode::~UnitNode() */

void __thiscall cocos2d::renderer::UnitNode::~UnitNode(UnitNode *this)

{
  ~UnitNode(this);
  operator_delete(this);
  return;
}


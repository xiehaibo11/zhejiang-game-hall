
/* cocos2d::PUObjectAbstractNode::~PUObjectAbstractNode() */

void __thiscall cocos2d::PUObjectAbstractNode::~PUObjectAbstractNode(PUObjectAbstractNode *this)

{
  ~PUObjectAbstractNode(this);
  operator_delete(this);
  return;
}


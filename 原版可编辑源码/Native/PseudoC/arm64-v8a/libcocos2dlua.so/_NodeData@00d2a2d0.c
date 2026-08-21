
/* cocos2d::NodeData::~NodeData() */

void __thiscall cocos2d::NodeData::~NodeData(NodeData *this)

{
  ~NodeData(this);
  operator_delete(this);
  return;
}


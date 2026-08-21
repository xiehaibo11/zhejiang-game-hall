
/* cocos2d::NodeDatas::~NodeDatas() */

void __thiscall cocos2d::NodeDatas::~NodeDatas(NodeDatas *this)

{
  ~NodeDatas(this);
  operator_delete(this);
  return;
}


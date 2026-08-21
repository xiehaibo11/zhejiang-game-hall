
/* cocostudio::NodeReader::~NodeReader() */

void __thiscall cocostudio::NodeReader::~NodeReader(NodeReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}


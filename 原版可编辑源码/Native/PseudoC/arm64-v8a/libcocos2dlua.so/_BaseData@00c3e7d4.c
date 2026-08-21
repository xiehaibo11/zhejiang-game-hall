
/* cocostudio::BaseData::~BaseData() */

void __thiscall cocostudio::BaseData::~BaseData(BaseData *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}


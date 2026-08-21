
/* cocostudio::ProcessBase::~ProcessBase() */

void __thiscall cocostudio::ProcessBase::~ProcessBase(ProcessBase *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}


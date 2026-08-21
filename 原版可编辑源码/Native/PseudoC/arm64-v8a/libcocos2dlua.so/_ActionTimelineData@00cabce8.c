
/* cocostudio::timeline::ActionTimelineData::~ActionTimelineData() */

void __thiscall
cocostudio::timeline::ActionTimelineData::~ActionTimelineData(ActionTimelineData *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}


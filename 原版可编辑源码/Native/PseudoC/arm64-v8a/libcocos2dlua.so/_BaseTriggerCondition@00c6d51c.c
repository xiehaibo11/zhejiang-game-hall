
/* cocostudio::BaseTriggerCondition::~BaseTriggerCondition() */

void __thiscall cocostudio::BaseTriggerCondition::~BaseTriggerCondition(BaseTriggerCondition *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}


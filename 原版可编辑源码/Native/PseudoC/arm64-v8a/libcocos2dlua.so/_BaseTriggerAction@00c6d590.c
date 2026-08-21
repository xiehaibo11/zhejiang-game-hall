
/* cocostudio::BaseTriggerAction::~BaseTriggerAction() */

void __thiscall cocostudio::BaseTriggerAction::~BaseTriggerAction(BaseTriggerAction *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}


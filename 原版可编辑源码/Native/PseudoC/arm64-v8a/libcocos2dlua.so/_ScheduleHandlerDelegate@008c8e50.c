
/* cocos2d::ScheduleHandlerDelegate::~ScheduleHandlerDelegate() */

void __thiscall
cocos2d::ScheduleHandlerDelegate::~ScheduleHandlerDelegate(ScheduleHandlerDelegate *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}


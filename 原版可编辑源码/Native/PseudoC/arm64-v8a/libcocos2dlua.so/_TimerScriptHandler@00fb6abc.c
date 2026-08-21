
/* cocos2d::TimerScriptHandler::~TimerScriptHandler() */

void __thiscall cocos2d::TimerScriptHandler::~TimerScriptHandler(TimerScriptHandler *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}



/* cocos2d::PUDoStopSystemEventHandler::~PUDoStopSystemEventHandler() */

void __thiscall
cocos2d::PUDoStopSystemEventHandler::~PUDoStopSystemEventHandler(PUDoStopSystemEventHandler *this)

{
  PUEventHandler::~PUEventHandler((PUEventHandler *)this);
  operator_delete(this);
  return;
}


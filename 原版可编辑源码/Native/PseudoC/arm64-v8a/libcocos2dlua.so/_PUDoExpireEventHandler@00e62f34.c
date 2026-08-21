
/* cocos2d::PUDoExpireEventHandler::~PUDoExpireEventHandler() */

void __thiscall
cocos2d::PUDoExpireEventHandler::~PUDoExpireEventHandler(PUDoExpireEventHandler *this)

{
  PUEventHandler::~PUEventHandler((PUEventHandler *)this);
  operator_delete(this);
  return;
}


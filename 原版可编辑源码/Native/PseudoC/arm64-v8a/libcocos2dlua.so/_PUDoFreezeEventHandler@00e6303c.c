
/* cocos2d::PUDoFreezeEventHandler::~PUDoFreezeEventHandler() */

void __thiscall
cocos2d::PUDoFreezeEventHandler::~PUDoFreezeEventHandler(PUDoFreezeEventHandler *this)

{
  PUEventHandler::~PUEventHandler((PUEventHandler *)this);
  operator_delete(this);
  return;
}


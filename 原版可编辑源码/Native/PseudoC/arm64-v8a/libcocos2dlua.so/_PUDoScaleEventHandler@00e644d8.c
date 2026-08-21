
/* cocos2d::PUDoScaleEventHandler::~PUDoScaleEventHandler() */

void __thiscall cocos2d::PUDoScaleEventHandler::~PUDoScaleEventHandler(PUDoScaleEventHandler *this)

{
  PUEventHandler::~PUEventHandler((PUEventHandler *)this);
  operator_delete(this);
  return;
}


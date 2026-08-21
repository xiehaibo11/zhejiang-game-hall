
/* cocos2d::PUDoEnableComponentEventHandler::~PUDoEnableComponentEventHandler() */

void __thiscall
cocos2d::PUDoEnableComponentEventHandler::~PUDoEnableComponentEventHandler
          (PUDoEnableComponentEventHandler *this)

{
  *(undefined ***)this = &PTR__PUDoEnableComponentEventHandler_016f3250;
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  PUEventHandler::~PUEventHandler((PUEventHandler *)this);
  operator_delete(this);
  return;
}

